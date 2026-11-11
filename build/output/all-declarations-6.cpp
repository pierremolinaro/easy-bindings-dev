#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::GGS_autoLayoutClassParameterList_2E_element (void) :
mProperty_mParameterName (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::GGS_autoLayoutClassParameterList_2E_element (const GGS_autoLayoutClassParameterList_2E_element & inSource) :
mProperty_mParameterName (inSource.mProperty_mParameterName),
mProperty_mParameterType (inSource.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element & GGS_autoLayoutClassParameterList_2E_element::operator = (const GGS_autoLayoutClassParameterList_2E_element & inSource) {
  mProperty_mParameterName = inSource.mProperty_mParameterName ;
  mProperty_mParameterType = inSource.mProperty_mParameterType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element GGS_autoLayoutClassParameterList_2E_element::init_21__21_ (const GGS_lstring & in_mParameterName,
                                                                                                       const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element::GGS_autoLayoutClassParameterList_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_autoLayoutClassParameterType & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterList_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutClassParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutClassParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ("autoLayoutClassParameterList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element::GGS_astAutoLayoutViewFunctionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFomalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element::GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFomalParameterList (inSource.mProperty_mFomalParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element & GGS_astAutoLayoutViewFunctionMap_2E_element::operator = (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFomalParameterList = inSource.mProperty_mFomalParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element GGS_astAutoLayoutViewFunctionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                       const GGS_autoLayoutClassParameterList & in_mFomalParameterList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFomalParameterList = in_mFomalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element::GGS_astAutoLayoutViewFunctionMap_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_autoLayoutClassParameterList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFomalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFomalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFomalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFomalParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ("astAutoLayoutViewFunctionMap.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (const GGS_astAutoLayoutViewFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::description (String & ioString,
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
//     @astAutoLayoutViewFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ("astAutoLayoutViewFunctionMap.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element::GGS_autolayoutViewClassMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSuperClassName (),
mProperty_mHandlesRunAction (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandleEnabledBinding (),
mProperty_mHandleHiddenBinding (),
mProperty_mHandleGraphicControllerBinding (),
mProperty_mUserDefined (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element::GGS_autolayoutViewClassMap_2E_element (const GGS_autolayoutViewClassMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSuperClassName (inSource.mProperty_mSuperClassName),
mProperty_mHandlesRunAction (inSource.mProperty_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (inSource.mProperty_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (inSource.mProperty_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (inSource.mProperty_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (inSource.mProperty_mHandleGraphicControllerBinding),
mProperty_mUserDefined (inSource.mProperty_mUserDefined),
mProperty_mParameterList (inSource.mProperty_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (inSource.mProperty_mAutoLayoutViewFunctionMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element & GGS_autolayoutViewClassMap_2E_element::operator = (const GGS_autolayoutViewClassMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSuperClassName = inSource.mProperty_mSuperClassName ;
  mProperty_mHandlesRunAction = inSource.mProperty_mHandlesRunAction ;
  mProperty_mHandlesTableValueBinding = inSource.mProperty_mHandlesTableValueBinding ;
  mProperty_mHandleEnabledBinding = inSource.mProperty_mHandleEnabledBinding ;
  mProperty_mHandleHiddenBinding = inSource.mProperty_mHandleHiddenBinding ;
  mProperty_mHandleGraphicControllerBinding = inSource.mProperty_mHandleGraphicControllerBinding ;
  mProperty_mUserDefined = inSource.mProperty_mUserDefined ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = inSource.mProperty_mAutoLayoutViewFunctionMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element GGS_autolayoutViewClassMap_2E_element::init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                           const GGS_lstring & in_mSuperClassName,
                                                                                                                           const GGS_bool & in_mHandlesRunAction,
                                                                                                                           const GGS_bool & in_mHandlesTableValueBinding,
                                                                                                                           const GGS_bool & in_mHandleEnabledBinding,
                                                                                                                           const GGS_bool & in_mHandleHiddenBinding,
                                                                                                                           const GGS_bool & in_mHandleGraphicControllerBinding,
                                                                                                                           const GGS_bool & in_mUserDefined,
                                                                                                                           const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                                                                                           const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSuperClassName = in_mSuperClassName ;
  result.mProperty_mHandlesRunAction = in_mHandlesRunAction ;
  result.mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  result.mProperty_mHandleEnabledBinding = in_mHandleEnabledBinding ;
  result.mProperty_mHandleHiddenBinding = in_mHandleHiddenBinding ;
  result.mProperty_mHandleGraphicControllerBinding = in_mHandleGraphicControllerBinding ;
  result.mProperty_mUserDefined = in_mUserDefined ;
  result.mProperty_mParameterList = in_mParameterList ;
  result.mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element::GGS_autolayoutViewClassMap_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_lstring & inOperand1,
                                                                              const GGS_bool & inOperand2,
                                                                              const GGS_bool & inOperand3,
                                                                              const GGS_bool & inOperand4,
                                                                              const GGS_bool & inOperand5,
                                                                              const GGS_bool & inOperand6,
                                                                              const GGS_bool & inOperand7,
                                                                              const GGS_autoLayoutClassParameterList & inOperand8,
                                                                              const GGS_astAutoLayoutViewFunctionMap & inOperand9) :
mProperty_lkey (inOperand0),
mProperty_mSuperClassName (inOperand1),
mProperty_mHandlesRunAction (inOperand2),
mProperty_mHandlesTableValueBinding (inOperand3),
mProperty_mHandleEnabledBinding (inOperand4),
mProperty_mHandleHiddenBinding (inOperand5),
mProperty_mHandleGraphicControllerBinding (inOperand6),
mProperty_mUserDefined (inOperand7),
mProperty_mParameterList (inOperand8),
mProperty_mAutoLayoutViewFunctionMap (inOperand9) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutViewClassMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () && mProperty_mParameterList.isValid () && mProperty_mAutoLayoutViewFunctionMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSuperClassName.drop () ;
  mProperty_mHandlesRunAction.drop () ;
  mProperty_mHandlesTableValueBinding.drop () ;
  mProperty_mHandleEnabledBinding.drop () ;
  mProperty_mHandleHiddenBinding.drop () ;
  mProperty_mHandleGraphicControllerBinding.drop () ;
  mProperty_mUserDefined.drop () ;
  mProperty_mParameterList.drop () ;
  mProperty_mAutoLayoutViewFunctionMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutViewClassMap.element:") ;
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
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autolayoutViewClassMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ("autolayoutViewClassMap.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutViewClassMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autolayoutViewClassMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_::GGS_autolayoutViewClassMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_::GGS_autolayoutViewClassMap_2E_element_3F_ (const GGS_autolayoutViewClassMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_ GGS_autolayoutViewClassMap_2E_element_3F_::init_nil (void) {
  GGS_autolayoutViewClassMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutViewClassMap_2E_element_3F_::isValid (void) const {
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

bool GGS_autolayoutViewClassMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autolayoutViewClassMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap_2E_element_3F_::description (String & ioString,
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
//     @autolayoutViewClassMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ("autolayoutViewClassMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutViewClassMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element::GGS_autoLayoutViewClassBindingSpecificationList_2E_element (void) :
mProperty_mOutletClassName (),
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element::GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) :
mProperty_mOutletClassName (inSource.mProperty_mOutletClassName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mOutletClassBindingSpecificationModelList (inSource.mProperty_mOutletClassBindingSpecificationModelList),
mProperty_mBindingOptionList (inSource.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element & GGS_autoLayoutViewClassBindingSpecificationList_2E_element::operator = (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inSource) {
  mProperty_mOutletClassName = inSource.mProperty_mOutletClassName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mOutletClassBindingSpecificationModelList = inSource.mProperty_mOutletClassBindingSpecificationModelList ;
  mProperty_mBindingOptionList = inSource.mProperty_mBindingOptionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element GGS_autoLayoutViewClassBindingSpecificationList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mOutletClassName,
                                                                                                                                             const GGS_lstring & in_mBindingName,
                                                                                                                                             const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                             const GGS_controllerBindingOptionList & in_mBindingOptionList,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletClassName = in_mOutletClassName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mOutletClassBindingSpecificationModelList = in_mOutletClassBindingSpecificationModelList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element::GGS_autoLayoutViewClassBindingSpecificationList_2E_element (const GGS_lstring & inOperand0,
                                                                                                                        const GGS_lstring & inOperand1,
                                                                                                                        const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                        const GGS_controllerBindingOptionList & inOperand3) :
mProperty_mOutletClassName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mOutletClassBindingSpecificationModelList (inOperand2),
mProperty_mBindingOptionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewClassBindingSpecificationList_2E_element::isValid (void) const {
  return mProperty_mOutletClassName.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList_2E_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mOutletClassBindingSpecificationModelList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList_2E_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewClassBindingSpecificationList.element:") ;
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
//     @autoLayoutViewClassBindingSpecificationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2E_element ("autoLayoutViewClassBindingSpecificationList.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassBindingSpecificationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element::GGS_autoLayoutBindingSpecificationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOutletSuperClassName (),
mProperty_mBindingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element::GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOutletSuperClassName (inSource.mProperty_mOutletSuperClassName),
mProperty_mBindingMap (inSource.mProperty_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element & GGS_autoLayoutBindingSpecificationMap_2E_element::operator = (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOutletSuperClassName = inSource.mProperty_mOutletSuperClassName ;
  mProperty_mBindingMap = inSource.mProperty_mBindingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element GGS_autoLayoutBindingSpecificationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                     const GGS_lstring & in_mOutletSuperClassName,
                                                                                                                     const GGS_autoLayoutViewBindingSpecificationMap & in_mBindingMap,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletSuperClassName = in_mOutletSuperClassName ;
  result.mProperty_mBindingMap = in_mBindingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element::GGS_autoLayoutBindingSpecificationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_lstring & inOperand1,
                                                                                                    const GGS_autoLayoutViewBindingSpecificationMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletSuperClassName (inOperand1),
mProperty_mBindingMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutBindingSpecificationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletSuperClassName.drop () ;
  mProperty_mBindingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutBindingSpecificationMap.element:") ;
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
//     @autoLayoutBindingSpecificationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ("autoLayoutBindingSpecificationMap.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutBindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutBindingSpecificationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutBindingSpecificationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::init_nil (void) {
  GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::isValid (void) const {
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

bool GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutBindingSpecificationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::description (String & ioString,
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
//     @autoLayoutBindingSpecificationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ("autoLayoutBindingSpecificationMap.element?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element::GGS_autoLayoutViewBindingSpecificationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOutletBindingSpecificationModelList (),
mProperty_mControllerBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element::GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOutletBindingSpecificationModelList (inSource.mProperty_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (inSource.mProperty_mControllerBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element & GGS_autoLayoutViewBindingSpecificationMap_2E_element::operator = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOutletBindingSpecificationModelList = inSource.mProperty_mOutletBindingSpecificationModelList ;
  mProperty_mControllerBindingOptionList = inSource.mProperty_mControllerBindingOptionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element GGS_autoLayoutViewBindingSpecificationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                             const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                                             const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletBindingSpecificationModelList = in_mOutletBindingSpecificationModelList ;
  result.mProperty_mControllerBindingOptionList = in_mControllerBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element::GGS_autoLayoutViewBindingSpecificationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                                            const GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                                            const GGS_controllerBindingOptionDecoratedList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletBindingSpecificationModelList (inOperand1),
mProperty_mControllerBindingOptionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewBindingSpecificationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletBindingSpecificationModelList.drop () ;
  mProperty_mControllerBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewBindingSpecificationMap.element:") ;
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
//     @autoLayoutViewBindingSpecificationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element ("autoLayoutViewBindingSpecificationMap.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewBindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element ;
}

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

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (const GGS_outletBindingSpecificationModelList_2E_element & inSource) :
mProperty_mModelType (inSource.mProperty_mModelType),
mProperty_mModelShouldBeWritableProperty (inSource.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element & GGS_outletBindingSpecificationModelList_2E_element::operator = (const GGS_outletBindingSpecificationModelList_2E_element & inSource) {
  mProperty_mModelType = inSource.mProperty_mModelType ;
  mProperty_mModelShouldBeWritableProperty = inSource.mProperty_mModelShouldBeWritableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element GGS_outletBindingSpecificationModelList_2E_element::init_21__21_ (const GGS_typeKind & in_mModelType,
                                                                                                                     const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (const GGS_typeKind & inOperand0,
                                                                                                        const GGS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationModelList_2E_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingSpecificationModelList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mModelType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationModelList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ("outletBindingSpecificationModelList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationModelList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ;
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

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (const GGS_multipleBindingDescriptor_2E_binding & inSource) :
mProperty_expression (inSource.mProperty_expression) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding & GGS_multipleBindingDescriptor_2E_binding::operator = (const GGS_multipleBindingDescriptor_2E_binding & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding GGS_multipleBindingDescriptor_2E_binding::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_expression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor_2E_binding::objectCompare (const GGS_multipleBindingDescriptor_2E_binding & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingDescriptor_2E_binding::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @multipleBindingDescriptor.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @multipleBindingDescriptor.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ("multipleBindingDescriptor.binding",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ;
}

//--------------------------------------------------------------------------------------------------
//Optional @multipleBindingDescriptor_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_::GGS_multipleBindingDescriptor_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_::GGS_multipleBindingDescriptor_2E_binding_3F_ (const GGS_multipleBindingDescriptor_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_ GGS_multipleBindingDescriptor_2E_binding_3F_::init_nil (void) {
  GGS_multipleBindingDescriptor_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingDescriptor_2E_binding_3F_::isValid (void) const {
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

bool GGS_multipleBindingDescriptor_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_multipleBindingDescriptor_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor_2E_binding_3F_::objectCompare (const GGS_multipleBindingDescriptor_2E_binding_3F_ & inOperand) const {
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

void GGS_multipleBindingDescriptor_2E_binding_3F_::description (String & ioString,
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
//     @multipleBindingDescriptor.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ("multipleBindingDescriptor.binding?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (const GGS_multipleBindingGenerationList_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectExpression (inSource.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element & GGS_multipleBindingGenerationList_2E_element::operator = (const GGS_multipleBindingGenerationList_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectExpression = inSource.mProperty_mBoundObjectExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element GGS_multipleBindingGenerationList_2E_element::init_21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                             const GGS_string & in_mBindingName,
                                                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @multipleBindingGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @multipleBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ("multipleBindingGenerationList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap (),
mProperty_mPropertyGenerationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (const GGS_selectionControllerForGeneration_2E_element & inSource) :
mProperty_mOwnerName (inSource.mProperty_mOwnerName),
mProperty_mSelectionControllerName (inSource.mProperty_mSelectionControllerName),
mProperty_mBoundControllerName (inSource.mProperty_mBoundControllerName),
mProperty_mBoundControllerPropertyName (inSource.mProperty_mBoundControllerPropertyName),
mProperty_mBaseTypeName (inSource.mProperty_mBaseTypeName),
mProperty_mSelectionTypeName (inSource.mProperty_mSelectionTypeName),
mProperty_mSelectionObservablePropertyMap (inSource.mProperty_mSelectionObservablePropertyMap),
mProperty_mPropertyGenerationList (inSource.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element & GGS_selectionControllerForGeneration_2E_element::operator = (const GGS_selectionControllerForGeneration_2E_element & inSource) {
  mProperty_mOwnerName = inSource.mProperty_mOwnerName ;
  mProperty_mSelectionControllerName = inSource.mProperty_mSelectionControllerName ;
  mProperty_mBoundControllerName = inSource.mProperty_mBoundControllerName ;
  mProperty_mBoundControllerPropertyName = inSource.mProperty_mBoundControllerPropertyName ;
  mProperty_mBaseTypeName = inSource.mProperty_mBaseTypeName ;
  mProperty_mSelectionTypeName = inSource.mProperty_mSelectionTypeName ;
  mProperty_mSelectionObservablePropertyMap = inSource.mProperty_mSelectionObservablePropertyMap ;
  mProperty_mPropertyGenerationList = inSource.mProperty_mPropertyGenerationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element GGS_selectionControllerForGeneration_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                                                                                                       const GGS_string & in_mSelectionControllerName,
                                                                                                                                       const GGS_string & in_mBoundControllerName,
                                                                                                                                       const GGS_string & in_mBoundControllerPropertyName,
                                                                                                                                       const GGS_string & in_mBaseTypeName,
                                                                                                                                       const GGS_string & in_mSelectionTypeName,
                                                                                                                                       const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                                                       const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOwnerName = in_mOwnerName ;
  result.mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  result.mProperty_mBoundControllerName = in_mBoundControllerName ;
  result.mProperty_mBoundControllerPropertyName = in_mBoundControllerPropertyName ;
  result.mProperty_mBaseTypeName = in_mBaseTypeName ;
  result.mProperty_mSelectionTypeName = in_mSelectionTypeName ;
  result.mProperty_mSelectionObservablePropertyMap = in_mSelectionObservablePropertyMap ;
  result.mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                  const GGS_string & inOperand1,
                                                                                                  const GGS_string & inOperand2,
                                                                                                  const GGS_string & inOperand3,
                                                                                                  const GGS_string & inOperand4,
                                                                                                  const GGS_string & inOperand5,
                                                                                                  const GGS_propertyMap & inOperand6,
                                                                                                  const GGS_propertyGenerationList & inOperand7) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6),
mProperty_mPropertyGenerationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_selectionControllerForGeneration_2E_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selectionControllerForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @selectionControllerForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ("selectionControllerForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ;
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

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (void) :
mProperty_hidden () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (const GGS_optionalHiddenBinding_2E_binding & inSource) :
mProperty_hidden (inSource.mProperty_hidden) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding & GGS_optionalHiddenBinding_2E_binding::operator = (const GGS_optionalHiddenBinding_2E_binding & inSource) {
  mProperty_hidden = inSource.mProperty_hidden ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding GGS_optionalHiddenBinding_2E_binding::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_hidden,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_hidden = in_hidden ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0) :
mProperty_hidden (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalHiddenBinding_2E_binding::isValid (void) const {
  return mProperty_hidden.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::drop (void) {
  mProperty_hidden.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalHiddenBinding.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_hidden.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalHiddenBinding.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ("optionalHiddenBinding.binding",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ;
}

//--------------------------------------------------------------------------------------------------
//Optional @optionalHiddenBinding_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_::GGS_optionalHiddenBinding_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_::GGS_optionalHiddenBinding_2E_binding_3F_ (const GGS_optionalHiddenBinding_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_ GGS_optionalHiddenBinding_2E_binding_3F_::init_nil (void) {
  GGS_optionalHiddenBinding_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalHiddenBinding_2E_binding_3F_::isValid (void) const {
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

bool GGS_optionalHiddenBinding_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_optionalHiddenBinding_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding_3F_::description (String & ioString,
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
//     @optionalHiddenBinding.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ("optionalHiddenBinding.binding?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ;
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

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string & GGS_astAutoLayoutViewInstructionParameterValue_2E_string::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string GGS_astAutoLayoutViewInstructionParameterValue_2E_string::init_21_ (const GGS_string & in_value,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_string & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.string:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.string generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ("astAutoLayoutViewInstructionParameterValue.string",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_string_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_string () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.string? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ("astAutoLayoutViewInstructionParameterValue.string?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (void) :
mProperty_title (),
mProperty_run (),
mProperty_enabled () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) :
mProperty_title (inSource.mProperty_title),
mProperty_run (inSource.mProperty_run),
mProperty_enabled (inSource.mProperty_enabled) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) {
  mProperty_title = inSource.mProperty_title ;
  mProperty_run = inSource.mProperty_run ;
  mProperty_enabled = inSource.mProperty_enabled ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::init_21__21__21_ (const GGS_string & in_title,
                                                                                                                                         const GGS_runActionDescriptor & in_run,
                                                                                                                                         const GGS_multipleBindingDescriptor & in_enabled,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_title = in_title ;
  result.mProperty_run = in_run ;
  result.mProperty_enabled = in_enabled ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_string & inOperand0,
                                                                                                                        const GGS_runActionDescriptor & inOperand1,
                                                                                                                        const GGS_multipleBindingDescriptor & inOperand2) :
mProperty_title (inOperand0),
mProperty_run (inOperand1),
mProperty_enabled (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::isValid (void) const {
  return mProperty_title.isValid () && mProperty_run.isValid () && mProperty_enabled.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::drop (void) {
  mProperty_title.drop () ;
  mProperty_run.drop () ;
  mProperty_enabled.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.menuItem:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_title.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_run.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enabled.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.menuItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ("astAutoLayoutViewInstructionParameterValue.menuItem",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.menuItem? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ("astAutoLayoutViewInstructionParameterValue.menuItem?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ;
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

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (void) :
mProperty_instruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) :
mProperty_instruction (inSource.mProperty_instruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) {
  mProperty_instruction = inSource.mProperty_instruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::init_21_ (const GGS_astAbstractViewInstructionDeclaration & in_instruction,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instruction = in_instruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_instruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::isValid (void) const {
  return mProperty_instruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::drop (void) {
  mProperty_instruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.viewFunc:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.viewFunc generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ("astAutoLayoutViewInstructionParameterValue.viewFunc",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.viewFunc? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ("astAutoLayoutViewInstructionParameterValue.viewFunc?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ;
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

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (const GGS_astViewInstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element & GGS_astViewInstructionList_2E_element::operator = (const GGS_astViewInstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astViewInstructionList_2E_element GGS_astViewInstructionList_2E_element::init_21_ (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (const GGS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astViewInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astViewInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astViewInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ("astViewInstructionList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astViewInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ;
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

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element & GGS_implicitViewFunctionGenerationList_2E_element::operator = (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element GGS_implicitViewFunctionGenerationList_2E_element::init_21_ (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitViewFunctionGenerationList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitViewFunctionGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @implicitViewFunctionGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ("implicitViewFunctionGenerationList.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitViewFunctionGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (const GGS_viewGenerationList_2E_element & inSource) :
mProperty_mViewName (inSource.mProperty_mViewName),
mProperty_mView (inSource.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element & GGS_viewGenerationList_2E_element::operator = (const GGS_viewGenerationList_2E_element & inSource) {
  mProperty_mViewName = inSource.mProperty_mViewName ;
  mProperty_mView = inSource.mProperty_mView ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_viewGenerationList_2E_element GGS_viewGenerationList_2E_element::init_21__21_ (const GGS_string & in_mViewName,
                                                                                   const GGS_abstractViewGeneration & in_mView,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_viewGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (const GGS_string & inOperand0,
                                                                      const GGS_abstractViewGeneration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_viewGenerationList_2E_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @viewGenerationList.element:") ;
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
//     @viewGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_viewGenerationList_2E_element ("viewGenerationList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_viewGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectList (inSource.mProperty_mBoundObjectList),
mProperty_mBindingOptionsString (inSource.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element & GGS_autoLayoutRegularBindingsGenerationList_2E_element::operator = (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectList = inSource.mProperty_mBoundObjectList ;
  mProperty_mBindingOptionsString = inSource.mProperty_mBindingOptionsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element GGS_autoLayoutRegularBindingsGenerationList_2E_element::init_21__21__21_ (const GGS_string & in_mBindingName,
                                                                                                                                 const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                                 const GGS_string & in_mBindingOptionsString,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_boundObjectList & inOperand1,
                                                                                                                const GGS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutRegularBindingsGenerationList_2E_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutRegularBindingsGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutRegularBindingsGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ("autoLayoutRegularBindingsGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutRegularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectExpression (inSource.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element & GGS_autoLayoutMultipleBindingGenerationList_2E_element::operator = (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectExpression = inSource.mProperty_mBoundObjectExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element GGS_autoLayoutMultipleBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mBindingName,
                                                                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutMultipleBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutMultipleBindingGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutMultipleBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ("autoLayoutMultipleBindingGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutMultipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (void) :
mProperty_targetName (),
mProperty_actionName (),
mProperty_targetTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) :
mProperty_targetName (inSource.mProperty_targetName),
mProperty_actionName (inSource.mProperty_actionName),
mProperty_targetTypeName (inSource.mProperty_targetTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run & GGS_autolayoutRunBindingForGeneration_2E_run::operator = (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) {
  mProperty_targetName = inSource.mProperty_targetName ;
  mProperty_actionName = inSource.mProperty_actionName ;
  mProperty_targetTypeName = inSource.mProperty_targetTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run GGS_autolayoutRunBindingForGeneration_2E_run::init_21__21__21_ (const GGS_string & in_targetName,
                                                                                                             const GGS_string & in_actionName,
                                                                                                             const GGS_string & in_targetTypeName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration_2E_run result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetName = in_targetName ;
  result.mProperty_actionName = in_actionName ;
  result.mProperty_targetTypeName = in_targetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_string & inOperand2) :
mProperty_targetName (inOperand0),
mProperty_actionName (inOperand1),
mProperty_targetTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutRunBindingForGeneration_2E_run::isValid (void) const {
  return mProperty_targetName.isValid () && mProperty_actionName.isValid () && mProperty_targetTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::drop (void) {
  mProperty_targetName.drop () ;
  mProperty_actionName.drop () ;
  mProperty_targetTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutRunBindingForGeneration.run:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_actionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autolayoutRunBindingForGeneration.run generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ("autolayoutRunBindingForGeneration.run",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration_2E_run::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autolayoutRunBindingForGeneration_2E_run_3F_
//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_::GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_::GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_ GGS_autolayoutRunBindingForGeneration_2E_run_3F_::init_nil (void) {
  GGS_autolayoutRunBindingForGeneration_2E_run_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutRunBindingForGeneration_2E_run_3F_::isValid (void) const {
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

bool GGS_autolayoutRunBindingForGeneration_2E_run_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autolayoutRunBindingForGeneration_2E_run () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run_3F_::description (String & ioString,
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
//     @autolayoutRunBindingForGeneration.run? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ("autolayoutRunBindingForGeneration.run?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration_2E_run_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (void) :
mProperty_arrayControllerControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) :
mProperty_arrayControllerControllerName (inSource.mProperty_arrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::operator = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) {
  mProperty_arrayControllerControllerName = inSource.mProperty_arrayControllerControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::init_21_ (const GGS_string & in_arrayControllerControllerName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arrayControllerControllerName = in_arrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_string & inOperand0) :
mProperty_arrayControllerControllerName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::isValid (void) const {
  return mProperty_arrayControllerControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::drop (void) {
  mProperty_arrayControllerControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewGraphicControllerBindingGeneration.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_arrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewGraphicControllerBindingGeneration.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ("autoLayoutViewGraphicControllerBindingGeneration.binding",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::init_nil (void) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::isValid (void) const {
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

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::description (String & ioString,
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
//     @autoLayoutViewGraphicControllerBindingGeneration.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ("autoLayoutViewGraphicControllerBindingGeneration.binding?",
                                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (void) :
mProperty_binding () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) :
mProperty_binding (inSource.mProperty_binding) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled & GGS_autolayoutEnabledBindingForGeneration_2E_enabled::operator = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) {
  mProperty_binding = inSource.mProperty_binding ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled GGS_autolayoutEnabledBindingForGeneration_2E_enabled::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_binding,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_binding = in_binding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0) :
mProperty_binding (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled::isValid (void) const {
  return mProperty_binding.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::drop (void) {
  mProperty_binding.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutEnabledBindingForGeneration.enabled:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_binding.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autolayoutEnabledBindingForGeneration.enabled generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ("autolayoutEnabledBindingForGeneration.enabled",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autolayoutEnabledBindingForGeneration_2E_enabled_3F_
//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::init_nil (void) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::isValid (void) const {
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

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autolayoutEnabledBindingForGeneration_2E_enabled () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::description (String & ioString,
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
//     @autolayoutEnabledBindingForGeneration.enabled? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ("autolayoutEnabledBindingForGeneration.enabled?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (void) :
mProperty_mParameterName (),
mProperty_mParameterValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) :
mProperty_mParameterName (inSource.mProperty_mParameterName),
mProperty_mParameterValue (inSource.mProperty_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) {
  mProperty_mParameterName = inSource.mProperty_mParameterName ;
  mProperty_mParameterValue = inSource.mProperty_mParameterValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::init_21__21_ (const GGS_string & in_mParameterName,
                                                                                                                                               const GGS_string & in_mParameterValue,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterValue = in_mParameterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_string & inOperand0,
                                                                                                                                  const GGS_string & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ("autoLayoutViewInstructionGenerationParameterList.element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) :
mProperty_mFunctionName (inSource.mProperty_mFunctionName),
mProperty_mParameters (inSource.mProperty_mParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) {
  mProperty_mFunctionName = inSource.mProperty_mFunctionName ;
  mProperty_mParameters = inSource.mProperty_mParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::init_21__21_ (const GGS_string & in_mFunctionName,
                                                                                                                                             const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_string & inOperand0,
                                                                                                                                const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationFuncCallList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameters.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationFuncCallList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ("autoLayoutViewInstructionGenerationFuncCallList.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element & GGS_autoLayoutViewInstructionGenerationList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::init_21_ (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ("autoLayoutViewInstructionGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ;
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

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (const GGS_outletBindingModelList_2E_element & inSource) :
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mErrorLocation (inSource.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element & GGS_outletBindingModelList_2E_element::operator = (const GGS_outletBindingModelList_2E_element & inSource) {
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mErrorLocation = inSource.mProperty_mErrorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingModelList_2E_element GGS_outletBindingModelList_2E_element::init_21__21_ (const GGS_propertyKind & in_mKind,
                                                                                           const GGS_location & in_mErrorLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (const GGS_propertyKind & inOperand0,
                                                                              const GGS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingModelList_2E_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingModelList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletBindingModelList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ("outletBindingModelList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingModelList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (const GGS_tableViewBindingGenerationList_2E_element & inSource) :
mProperty_mTableValueBindingOutletName (inSource.mProperty_mTableValueBindingOutletName),
mProperty_mTableValueBindingControllerName (inSource.mProperty_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element & GGS_tableViewBindingGenerationList_2E_element::operator = (const GGS_tableViewBindingGenerationList_2E_element & inSource) {
  mProperty_mTableValueBindingOutletName = inSource.mProperty_mTableValueBindingOutletName ;
  mProperty_mTableValueBindingControllerName = inSource.mProperty_mTableValueBindingControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element GGS_tableViewBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mTableValueBindingOutletName,
                                                                                                           const GGS_string & in_mTableValueBindingControllerName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTableValueBindingOutletName = in_mTableValueBindingOutletName ;
  result.mProperty_mTableValueBindingControllerName = in_mTableValueBindingControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                              const GGS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_tableViewBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tableViewBindingGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tableViewBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ("tableViewBindingGenerationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableViewBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) :
mProperty_mEBViewOutletName (inSource.mProperty_mEBViewOutletName),
mProperty_mArrayControllerControllerName (inSource.mProperty_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element & GGS_ebViewGraphicControllerBindingGenerationList_2E_element::operator = (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) {
  mProperty_mEBViewOutletName = inSource.mProperty_mEBViewOutletName ;
  mProperty_mArrayControllerControllerName = inSource.mProperty_mArrayControllerControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element GGS_ebViewGraphicControllerBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mEBViewOutletName,
                                                                                                                                       const GGS_string & in_mArrayControllerControllerName,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEBViewOutletName = in_mEBViewOutletName ;
  result.mProperty_mArrayControllerControllerName = in_mArrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                          const GGS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ebViewGraphicControllerBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ebViewGraphicControllerBindingGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEBViewOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mArrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ebViewGraphicControllerBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ("ebViewGraphicControllerBindingGenerationList.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ebViewGraphicControllerBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (const GGS_boundObjectList_2E_element & inSource) :
mProperty_mBoundObjectString (inSource.mProperty_mBoundObjectString),
mProperty_mKind (inSource.mProperty_mKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element & GGS_boundObjectList_2E_element::operator = (const GGS_boundObjectList_2E_element & inSource) {
  mProperty_mBoundObjectString = inSource.mProperty_mBoundObjectString ;
  mProperty_mKind = inSource.mProperty_mKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_boundObjectList_2E_element GGS_boundObjectList_2E_element::init_21__21_ (const GGS_string & in_mBoundObjectString,
                                                                             const GGS_propertyKind & in_mKind,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_boundObjectList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBoundObjectString = in_mBoundObjectString ;
  result.mProperty_mKind = in_mKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (const GGS_string & inOperand0,
                                                                const GGS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_boundObjectList_2E_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @boundObjectList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBoundObjectString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @boundObjectList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList_2E_element ("boundObjectList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boundObjectList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (const GGS_regularBindingsGenerationList_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectList (inSource.mProperty_mBoundObjectList),
mProperty_mBindingOptionsString (inSource.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element & GGS_regularBindingsGenerationList_2E_element::operator = (const GGS_regularBindingsGenerationList_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectList = inSource.mProperty_mBoundObjectList ;
  mProperty_mBindingOptionsString = inSource.mProperty_mBindingOptionsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element GGS_regularBindingsGenerationList_2E_element::init_21__21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                                 const GGS_string & in_mBindingName,
                                                                                                                 const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                 const GGS_string & in_mBindingOptionsString,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_boundObjectList & inOperand2,
                                                                                            const GGS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_regularBindingsGenerationList_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @regularBindingsGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @regularBindingsGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ("regularBindingsGenerationList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (const GGS_actionBindingListForGeneration_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mActionName (inSource.mProperty_mActionName),
mProperty_mTargetTypeName (inSource.mProperty_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element & GGS_actionBindingListForGeneration_2E_element::operator = (const GGS_actionBindingListForGeneration_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mActionName = inSource.mProperty_mActionName ;
  mProperty_mTargetTypeName = inSource.mProperty_mTargetTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element GGS_actionBindingListForGeneration_2E_element::init_21__21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                                   const GGS_string & in_mTargetName,
                                                                                                                   const GGS_string & in_mActionName,
                                                                                                                   const GGS_string & in_mTargetTypeName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mActionName = in_mActionName ;
  result.mProperty_mTargetTypeName = in_mTargetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                              const GGS_string & inOperand1,
                                                                                              const GGS_string & inOperand2,
                                                                                              const GGS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionBindingListForGeneration_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actionBindingListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actionBindingListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ("actionBindingListForGeneration.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionBindingListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ;
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

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString (),
mProperty_mDefaultValueAsString (),
mProperty_mProtocolName () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_transientDependencyListForGeneration_2E_element & inSource) :
mProperty_mDependency (inSource.mProperty_mDependency),
mProperty_mFunctionArgumentName (inSource.mProperty_mFunctionArgumentName),
mProperty_mFunctionArgumentTypeString (inSource.mProperty_mFunctionArgumentTypeString),
mProperty_mDefaultValueAsString (inSource.mProperty_mDefaultValueAsString),
mProperty_mProtocolName (inSource.mProperty_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element & GGS_transientDependencyListForGeneration_2E_element::operator = (const GGS_transientDependencyListForGeneration_2E_element & inSource) {
  mProperty_mDependency = inSource.mProperty_mDependency ;
  mProperty_mFunctionArgumentName = inSource.mProperty_mFunctionArgumentName ;
  mProperty_mFunctionArgumentTypeString = inSource.mProperty_mFunctionArgumentTypeString ;
  mProperty_mDefaultValueAsString = inSource.mProperty_mDefaultValueAsString ;
  mProperty_mProtocolName = inSource.mProperty_mProtocolName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::init_21__21__21__21__21_ (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                                   const GGS_string & in_mFunctionArgumentName,
                                                                                                                                   const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                                   const GGS_string & in_mDefaultValueAsString,
                                                                                                                                   const GGS_string & in_mProtocolName,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDependency = in_mDependency ;
  result.mProperty_mFunctionArgumentName = in_mFunctionArgumentName ;
  result.mProperty_mFunctionArgumentTypeString = in_mFunctionArgumentTypeString ;
  result.mProperty_mDefaultValueAsString = in_mDefaultValueAsString ;
  result.mProperty_mProtocolName = in_mProtocolName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_observablePropertyAST & inOperand0,
                                                                                                          const GGS_string & inOperand1,
                                                                                                          const GGS_string & inOperand2,
                                                                                                          const GGS_string & inOperand3,
                                                                                                          const GGS_string & inOperand4) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2),
mProperty_mDefaultValueAsString (inOperand3),
mProperty_mProtocolName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientDependencyListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () && mProperty_mDefaultValueAsString.isValid () && mProperty_mProtocolName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
  mProperty_mDefaultValueAsString.drop () ;
  mProperty_mProtocolName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientDependencyListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDependency.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValueAsString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProtocolName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ("transientDependencyListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDependencyListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (const GGS_transientExternTypeList_2E_element & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mIsClass (inSource.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element & GGS_transientExternTypeList_2E_element::operator = (const GGS_transientExternTypeList_2E_element & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mIsClass = inSource.mProperty_mIsClass ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientExternTypeList_2E_element GGS_transientExternTypeList_2E_element::init_21__21_ (const GGS_string & in_mTypeName,
                                                                                             const GGS_bool & in_mIsClass,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientExternTypeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mIsClass = in_mIsClass ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (const GGS_string & inOperand0,
                                                                                const GGS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientExternTypeList_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientExternTypeList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientExternTypeList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList_2E_element ("transientExternTypeList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientExternTypeList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (void) :
mProperty_mFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (const GGS_fileGenerationList_2E_element & inSource) :
mProperty_mFileGeneration (inSource.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element & GGS_fileGenerationList_2E_element::operator = (const GGS_fileGenerationList_2E_element & inSource) {
  mProperty_mFileGeneration = inSource.mProperty_mFileGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fileGenerationList_2E_element GGS_fileGenerationList_2E_element::init_21_ (const GGS_abstractFileGeneration & in_mFileGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fileGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileGeneration = in_mFileGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (const GGS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fileGenerationList_2E_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fileGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fileGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList_2E_element ("fileGenerationList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fileGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2E_element ;
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
                                                                                                       const GGS__5B__32_lstring_5D_ & in_mAssociationList,
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
                                                                                      const GGS__5B__32_lstring_5D_ & inOperand2) :
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

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (void) :
mProperty_mIndex (),
mProperty_mAssociatedString () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (const GGS_enumFunAssociationSortedList_2E_element & inSource) :
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mAssociatedString (inSource.mProperty_mAssociatedString) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element & GGS_enumFunAssociationSortedList_2E_element::operator = (const GGS_enumFunAssociationSortedList_2E_element & inSource) {
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mAssociatedString = inSource.mProperty_mAssociatedString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::init_21__21_ (const GGS_uint & in_mIndex,
                                                                                                       const GGS_string & in_mAssociatedString,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedString = in_mAssociatedString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (const GGS_uint & inOperand0,
                                                                                          const GGS_string & inOperand1) :
mProperty_mIndex (inOperand0),
mProperty_mAssociatedString (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFunAssociationSortedList_2E_element::objectCompare (const GGS_enumFunAssociationSortedList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociatedString.objectCompare (inOperand.mProperty_mAssociatedString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFunAssociationSortedList_2E_element::isValid (void) const {
  return mProperty_mIndex.isValid () && mProperty_mAssociatedString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::drop (void) {
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFunAssociationSortedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumFunAssociationSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ("enumFunAssociationSortedList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFunAssociationSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ;
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

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) :
mProperty_mEntityName (inSource.mProperty_mEntityName),
mProperty_mObsoleteEntityNames (inSource.mProperty_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element & GGS_entityListForGeneratingEBManagedObjectContext_2E_element::operator = (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) {
  mProperty_mEntityName = inSource.mProperty_mEntityName ;
  mProperty_mObsoleteEntityNames = inSource.mProperty_mObsoleteEntityNames ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element GGS_entityListForGeneratingEBManagedObjectContext_2E_element::init_21__21_ (const GGS_string & in_mEntityName,
                                                                                                                                         const GGS__5B_lstring_5D_ & in_mObsoleteEntityNames,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntityName = in_mEntityName ;
  result.mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_string & inOperand0,
                                                                                                                            const GGS__5B_lstring_5D_ & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_entityListForGeneratingEBManagedObjectContext_2E_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @entityListForGeneratingEBManagedObjectContext.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @entityListForGeneratingEBManagedObjectContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ("entityListForGeneratingEBManagedObjectContext.element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityListForGeneratingEBManagedObjectContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ;
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

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (void) :
mProperty_kind () {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (const GGS_classKind_2E_atomic & inSource) :
mProperty_kind (inSource.mProperty_kind) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic & GGS_classKind_2E_atomic::operator = (const GGS_classKind_2E_atomic & inSource) {
  mProperty_kind = inSource.mProperty_kind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classKind_2E_atomic GGS_classKind_2E_atomic::init_21_ (const GGS_typeKind & in_kind,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_atomic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_kind = in_kind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (const GGS_typeKind & inOperand0) :
mProperty_kind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_atomic::isValid (void) const {
  return mProperty_kind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::drop (void) {
  mProperty_kind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classKind.atomic:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_kind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.atomic generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic ("classKind.atomic",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_atomic::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_atomic ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classKind_2E_atomic_3F_
//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_::GGS_classKind_2E_atomic_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_::GGS_classKind_2E_atomic_3F_ (const GGS_classKind_2E_atomic & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_ GGS_classKind_2E_atomic_3F_::init_nil (void) {
  GGS_classKind_2E_atomic_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_atomic_3F_::isValid (void) const {
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

bool GGS_classKind_2E_atomic_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classKind_2E_atomic () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic_3F_::description (String & ioString,
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
//     @classKind.atomic? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ("classKind.atomic?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_atomic_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ;
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

GGS_classKind_2E_entity::GGS_classKind_2E_entity (void) :
mProperty_superEntityName (),
mProperty_isGraphic (),
mProperty_isAbstract (),
mProperty_handlingOpposite () {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity::GGS_classKind_2E_entity (const GGS_classKind_2E_entity & inSource) :
mProperty_superEntityName (inSource.mProperty_superEntityName),
mProperty_isGraphic (inSource.mProperty_isGraphic),
mProperty_isAbstract (inSource.mProperty_isAbstract),
mProperty_handlingOpposite (inSource.mProperty_handlingOpposite) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity & GGS_classKind_2E_entity::operator = (const GGS_classKind_2E_entity & inSource) {
  mProperty_superEntityName = inSource.mProperty_superEntityName ;
  mProperty_isGraphic = inSource.mProperty_isGraphic ;
  mProperty_isAbstract = inSource.mProperty_isAbstract ;
  mProperty_handlingOpposite = inSource.mProperty_handlingOpposite ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classKind_2E_entity GGS_classKind_2E_entity::init_21__21__21__21_ (const GGS_string & in_superEntityName,
                                                                       const GGS_bool & in_isGraphic,
                                                                       const GGS_bool & in_isAbstract,
                                                                       const GGS_bool & in_handlingOpposite,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_entity result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_isGraphic = in_isGraphic ;
  result.mProperty_isAbstract = in_isAbstract ;
  result.mProperty_handlingOpposite = in_handlingOpposite ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity::GGS_classKind_2E_entity (const GGS_string & inOperand0,
                                                  const GGS_bool & inOperand1,
                                                  const GGS_bool & inOperand2,
                                                  const GGS_bool & inOperand3) :
mProperty_superEntityName (inOperand0),
mProperty_isGraphic (inOperand1),
mProperty_isAbstract (inOperand2),
mProperty_handlingOpposite (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_entity::isValid (void) const {
  return mProperty_superEntityName.isValid () && mProperty_isGraphic.isValid () && mProperty_isAbstract.isValid () && mProperty_handlingOpposite.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::drop (void) {
  mProperty_superEntityName.drop () ;
  mProperty_isGraphic.drop () ;
  mProperty_isAbstract.drop () ;
  mProperty_handlingOpposite.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classKind.entity:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_superEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isGraphic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isAbstract.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_handlingOpposite.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.entity generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity ("classKind.entity",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_entity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_entity ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classKind_2E_entity_3F_
//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_::GGS_classKind_2E_entity_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_::GGS_classKind_2E_entity_3F_ (const GGS_classKind_2E_entity & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_ GGS_classKind_2E_entity_3F_::init_nil (void) {
  GGS_classKind_2E_entity_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_entity_3F_::isValid (void) const {
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

bool GGS_classKind_2E_entity_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classKind_2E_entity () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity_3F_::description (String & ioString,
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
//     @classKind.entity? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ("classKind.entity?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_entity_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ;
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

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (void) :
mProperty_isAbstract () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (const GGS_propertyAccessibility_2E_transient & inSource) :
mProperty_isAbstract (inSource.mProperty_isAbstract) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient & GGS_propertyAccessibility_2E_transient::operator = (const GGS_propertyAccessibility_2E_transient & inSource) {
  mProperty_isAbstract = inSource.mProperty_isAbstract ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient GGS_propertyAccessibility_2E_transient::init_21_ (const GGS_bool & in_isAbstract,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility_2E_transient result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isAbstract = in_isAbstract ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (const GGS_bool & inOperand0) :
mProperty_isAbstract (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyAccessibility_2E_transient::isValid (void) const {
  return mProperty_isAbstract.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::drop (void) {
  mProperty_isAbstract.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyAccessibility.transient:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isAbstract.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyAccessibility.transient generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ("propertyAccessibility.transient",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessibility_2E_transient::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyAccessibility_2E_transient_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_::GGS_propertyAccessibility_2E_transient_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_::GGS_propertyAccessibility_2E_transient_3F_ (const GGS_propertyAccessibility_2E_transient & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_ GGS_propertyAccessibility_2E_transient_3F_::init_nil (void) {
  GGS_propertyAccessibility_2E_transient_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyAccessibility_2E_transient_3F_::isValid (void) const {
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

bool GGS_propertyAccessibility_2E_transient_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyAccessibility_2E_transient () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient_3F_::description (String & ioString,
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
//     @propertyAccessibility.transient? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ("propertyAccessibility.transient?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessibility_2E_transient_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (void) :
mProperty_enumTypeName (),
mProperty_constantMap (),
mProperty_funcMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (const GGS_typeKind_2E_enumType & inSource) :
mProperty_enumTypeName (inSource.mProperty_enumTypeName),
mProperty_constantMap (inSource.mProperty_constantMap),
mProperty_funcMap (inSource.mProperty_funcMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType & GGS_typeKind_2E_enumType::operator = (const GGS_typeKind_2E_enumType & inSource) {
  mProperty_enumTypeName = inSource.mProperty_enumTypeName ;
  mProperty_constantMap = inSource.mProperty_constantMap ;
  mProperty_funcMap = inSource.mProperty_funcMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_enumType GGS_typeKind_2E_enumType::init_21__21__21_ (const GGS_string & in_enumTypeName,
                                                                     const GGS_enumConstantMap & in_constantMap,
                                                                     const GGS_enumFuncMap & in_funcMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumTypeName = in_enumTypeName ;
  result.mProperty_constantMap = in_constantMap ;
  result.mProperty_funcMap = in_funcMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (const GGS_string & inOperand0,
                                                    const GGS_enumConstantMap & inOperand1,
                                                    const GGS_enumFuncMap & inOperand2) :
mProperty_enumTypeName (inOperand0),
mProperty_constantMap (inOperand1),
mProperty_funcMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumType::objectCompare (const GGS_typeKind_2E_enumType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_enumTypeName.objectCompare (inOperand.mProperty_enumTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_constantMap.objectCompare (inOperand.mProperty_constantMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_funcMap.objectCompare (inOperand.mProperty_funcMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumType::isValid (void) const {
  return mProperty_enumTypeName.isValid () && mProperty_constantMap.isValid () && mProperty_funcMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::drop (void) {
  mProperty_enumTypeName.drop () ;
  mProperty_constantMap.drop () ;
  mProperty_funcMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.enumType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_enumTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_constantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_funcMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.enumType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ("typeKind.enumType",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumType ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_enumType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_::GGS_typeKind_2E_enumType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_::GGS_typeKind_2E_enumType_3F_ (const GGS_typeKind_2E_enumType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind_2E_enumType_3F_::init_nil (void) {
  GGS_typeKind_2E_enumType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_enumType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_enumType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumType_3F_::objectCompare (const GGS_typeKind_2E_enumType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_enumType_3F_::description (String & ioString,
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
//     @typeKind.enumType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ("typeKind.enumType?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (void) :
mProperty_entityName (),
mProperty_graphic () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (const GGS_typeKind_2E_entityType & inSource) :
mProperty_entityName (inSource.mProperty_entityName),
mProperty_graphic (inSource.mProperty_graphic) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType & GGS_typeKind_2E_entityType::operator = (const GGS_typeKind_2E_entityType & inSource) {
  mProperty_entityName = inSource.mProperty_entityName ;
  mProperty_graphic = inSource.mProperty_graphic ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_entityType GGS_typeKind_2E_entityType::init_21__21_ (const GGS_string & in_entityName,
                                                                     const GGS_bool & in_graphic,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_entityType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_entityName = in_entityName ;
  result.mProperty_graphic = in_graphic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (const GGS_string & inOperand0,
                                                        const GGS_bool & inOperand1) :
mProperty_entityName (inOperand0),
mProperty_graphic (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_entityType::objectCompare (const GGS_typeKind_2E_entityType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_entityName.objectCompare (inOperand.mProperty_entityName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_graphic.objectCompare (inOperand.mProperty_graphic) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_entityType::isValid (void) const {
  return mProperty_entityName.isValid () && mProperty_graphic.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::drop (void) {
  mProperty_entityName.drop () ;
  mProperty_graphic.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.entityType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_entityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_graphic.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.entityType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType ("typeKind.entityType",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_entityType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_entityType ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_entityType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_::GGS_typeKind_2E_entityType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_::GGS_typeKind_2E_entityType_3F_ (const GGS_typeKind_2E_entityType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind_2E_entityType_3F_::init_nil (void) {
  GGS_typeKind_2E_entityType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_entityType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_entityType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_entityType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_entityType_3F_::objectCompare (const GGS_typeKind_2E_entityType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_entityType_3F_::description (String & ioString,
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
//     @typeKind.entityType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ("typeKind.entityType?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_entityType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (void) :
mProperty_className () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (const GGS_typeKind_2E_classType & inSource) :
mProperty_className (inSource.mProperty_className) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType & GGS_typeKind_2E_classType::operator = (const GGS_typeKind_2E_classType & inSource) {
  mProperty_className = inSource.mProperty_className ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_classType GGS_typeKind_2E_classType::init_21_ (const GGS_string & in_className,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_className = in_className ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (const GGS_string & inOperand0) :
mProperty_className (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_classType::objectCompare (const GGS_typeKind_2E_classType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_className.objectCompare (inOperand.mProperty_className) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_classType::isValid (void) const {
  return mProperty_className.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::drop (void) {
  mProperty_className.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.classType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_className.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.classType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType ("typeKind.classType",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_classType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_classType ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_classType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_::GGS_typeKind_2E_classType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_::GGS_typeKind_2E_classType_3F_ (const GGS_typeKind_2E_classType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind_2E_classType_3F_::init_nil (void) {
  GGS_typeKind_2E_classType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_classType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_classType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_classType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_classType_3F_::objectCompare (const GGS_typeKind_2E_classType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_classType_3F_::description (String & ioString,
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
//     @typeKind.classType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ("typeKind.classType?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_classType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (void) :
mProperty_externTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (const GGS_typeKind_2E_transientPropertyExternType & inSource) :
mProperty_externTypeName (inSource.mProperty_externTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType & GGS_typeKind_2E_transientPropertyExternType::operator = (const GGS_typeKind_2E_transientPropertyExternType & inSource) {
  mProperty_externTypeName = inSource.mProperty_externTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType GGS_typeKind_2E_transientPropertyExternType::init_21_ (const GGS_string & in_externTypeName,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_transientPropertyExternType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_externTypeName = in_externTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (const GGS_string & inOperand0) :
mProperty_externTypeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_transientPropertyExternType::objectCompare (const GGS_typeKind_2E_transientPropertyExternType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_externTypeName.objectCompare (inOperand.mProperty_externTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_transientPropertyExternType::isValid (void) const {
  return mProperty_externTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::drop (void) {
  mProperty_externTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.transientPropertyExternType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_externTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.transientPropertyExternType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ("typeKind.transientPropertyExternType",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_transientPropertyExternType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_transientPropertyExternType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_::GGS_typeKind_2E_transientPropertyExternType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_::GGS_typeKind_2E_transientPropertyExternType_3F_ (const GGS_typeKind_2E_transientPropertyExternType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind_2E_transientPropertyExternType_3F_::init_nil (void) {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_transientPropertyExternType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_transientPropertyExternType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_transientPropertyExternType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_transientPropertyExternType_3F_::objectCompare (const GGS_typeKind_2E_transientPropertyExternType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_transientPropertyExternType_3F_::description (String & ioString,
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
//     @typeKind.transientPropertyExternType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ("typeKind.transientPropertyExternType?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_transientPropertyExternType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (void) :
mProperty_type (),
mProperty_accessibility () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (const GGS_propertyKind_2E_property & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_accessibility (inSource.mProperty_accessibility) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property & GGS_propertyKind_2E_property::operator = (const GGS_propertyKind_2E_property & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_accessibility = inSource.mProperty_accessibility ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_property GGS_propertyKind_2E_property::init_21__21_ (const GGS_typeKind & in_type,
                                                                         const GGS_propertyAccessibility & in_accessibility,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_accessibility = in_accessibility ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (const GGS_typeKind & inOperand0,
                                                            const GGS_propertyAccessibility & inOperand1) :
mProperty_type (inOperand0),
mProperty_accessibility (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_property::isValid (void) const {
  return mProperty_type.isValid () && mProperty_accessibility.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::drop (void) {
  mProperty_type.drop () ;
  mProperty_accessibility.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessibility.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.property generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property ("propertyKind.property",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_property ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKind_2E_property_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_::GGS_propertyKind_2E_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_::GGS_propertyKind_2E_property_3F_ (const GGS_propertyKind_2E_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_ GGS_propertyKind_2E_property_3F_::init_nil (void) {
  GGS_propertyKind_2E_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_property_3F_::isValid (void) const {
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

bool GGS_propertyKind_2E_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_property () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property_3F_::description (String & ioString,
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
//     @propertyKind.property? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ("propertyKind.property?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ;
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

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (void) :
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (const GGS_propertyKind_2E_selectionController & inSource) :
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController & GGS_propertyKind_2E_selectionController::operator = (const GGS_propertyKind_2E_selectionController & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_selectionController GGS_propertyKind_2E_selectionController::init_21_ (const GGS_string & in_typeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_selectionController result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (const GGS_string & inOperand0) :
mProperty_typeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_selectionController::isValid (void) const {
  return mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::drop (void) {
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.selectionController:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.selectionController generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ("propertyKind.selectionController",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_selectionController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKind_2E_selectionController_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_::GGS_propertyKind_2E_selectionController_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_::GGS_propertyKind_2E_selectionController_3F_ (const GGS_propertyKind_2E_selectionController & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_ GGS_propertyKind_2E_selectionController_3F_::init_nil (void) {
  GGS_propertyKind_2E_selectionController_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_selectionController_3F_::isValid (void) const {
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

bool GGS_propertyKind_2E_selectionController_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_selectionController () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController_3F_::description (String & ioString,
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
//     @propertyKind.selectionController? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ("propertyKind.selectionController?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_selectionController_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ;
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
//  Extension Getter '@typeKind typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_typeKind & inObject,
                                     Compiler * /* inCompiler */
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_canariLengthType:
    {
      result_result = GGS_string ("CanariLength") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
    {
      result_result = GGS_string ("CanariLengthUnit") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_canariAngleType:
    {
      result_result = GGS_string ("CanariAngle") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
    {
      result_result = GGS_string ("Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_integerType:
    {
      result_result = GGS_string ("Int") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
    {
      result_result = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_doubleType:
    {
      result_result = GGS_string ("Double") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_stringType:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dateType:
    {
      result_result = GGS_string ("Date") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_result = GGS_string ("Data") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
    {
      result_result = GGS_string ("NSFont") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_result = GGS_string ("NSColor") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathType:
    {
      result_result = GGS_string ("NSBezierPath") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_result = GGS_string ("BezierPathArray") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_923_typeName_0 ;
      GGS_enumConstantMap extractedValue_934__1 ;
      GGS_enumFuncMap extractedValue_934__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_923_typeName_0, extractedValue_934__1, extractedValue_934__2) ;
      result_result = extractedValue_923_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_980_typeName_0 ;
      GGS_bool extractedValue_990__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_980_typeName_0, extractedValue_990__1) ;
      result_result = extractedValue_980_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_1035_typeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_1035_typeName_0) ;
      result_result = extractedValue_1035_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_1105_typeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_1105_typeName_0) ;
      result_result = extractedValue_1105_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind typeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_propertyKind & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_2749_type_0 ;
      GGS_propertyAccessibility extractedValue_2755__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2749_type_0, extractedValue_2755__1) ;
      result_result = extensionGetter_typeName (extractedValue_2749_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas4", 96)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2802_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2813__1 ;
      GGS_bool extractedValue_2813__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2813__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2802_typeName_0, extractedValue_2813__1, extractedValue_2813__2, extractedValue_2813__3) ;
      result_result = extractedValue_2802_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_2854_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2865__1 ;
      GGS_bool extractedValue_2865__2 ;
      GGS_toOneOppositeRelationship extractedValue_2865__3 ;
      GGS_bool extractedValue_2865__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_2854_typeName_0, extractedValue_2865__1, extractedValue_2865__2, extractedValue_2865__3, extractedValue_2865__4) ;
      result_result = extractedValue_2854_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_2916_typeName_0 ;
      GGS_bool extractedValue_2926__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_2916_typeName_0, extractedValue_2926__1) ;
      result_result = extractedValue_2916_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_2981_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_2981_typeName_0) ;
      result_result = extractedValue_2981_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
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

ComparisonResult GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::operator = (const GGS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (const GGS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutTableViewControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::bang_autoLayoutTableViewControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
      result = GGS_autoLayoutTableViewControllerDeclarationAST ((cPtr_autoLayoutTableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ("autoLayoutTableViewControllerDeclarationAST.weak",
                                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingAST::GGS_arrayControllerBindingAST (void) :
mProperty_mControllerName (),
mProperty_mHiddenSelectionViewBindingDescriptor () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingAST::GGS_arrayControllerBindingAST (const GGS_arrayControllerBindingAST & inSource) :
mProperty_mControllerName (inSource.mProperty_mControllerName),
mProperty_mHiddenSelectionViewBindingDescriptor (inSource.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingAST & GGS_arrayControllerBindingAST::operator = (const GGS_arrayControllerBindingAST & inSource) {
  mProperty_mControllerName = inSource.mProperty_mControllerName ;
  mProperty_mHiddenSelectionViewBindingDescriptor = inSource.mProperty_mHiddenSelectionViewBindingDescriptor ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_arrayControllerBindingAST GGS_arrayControllerBindingAST::init_21__21_ (const GGS_lstring & in_mControllerName,
                                                                           const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mControllerName = in_mControllerName ;
  result.mProperty_mHiddenSelectionViewBindingDescriptor = in_mHiddenSelectionViewBindingDescriptor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingAST::GGS_arrayControllerBindingAST (const GGS_lstring & inOperand0,
                                                              const GGS_multipleBindingDescriptor & inOperand1) :
mProperty_mControllerName (inOperand0),
mProperty_mHiddenSelectionViewBindingDescriptor (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_arrayControllerBindingAST::isValid (void) const {
  return mProperty_mControllerName.isValid () && mProperty_mHiddenSelectionViewBindingDescriptor.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingAST::drop (void) {
  mProperty_mControllerName.drop () ;
  mProperty_mHiddenSelectionViewBindingDescriptor.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @arrayControllerBindingAST:") ;
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
//     @arrayControllerBindingAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingAST ("arrayControllerBindingAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingAST ;
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

ComparisonResult GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::operator = (const GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (const GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutTableViewControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::bang_autoLayoutTableViewControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
      result = GGS_autoLayoutTableViewControllerPropertyGeneration ((cPtr_autoLayoutTableViewControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ("autoLayoutTableViewControllerPropertyGeneration.weak",
                                                                                                            & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerGeneration::objectCompare (const GGS_autoLayoutTableViewControllerGeneration & inOperand) const {
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

GGS_autoLayoutTableViewControllerGeneration::GGS_autoLayoutTableViewControllerGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                              const GGS_lstring & in_mControllerName,
                                              const GGS_string & in_mModelString,
                                              const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                              const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                              const GGS_string & in_mModelTypeName,
                                              const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                              const GGS_string & in_mElementTypeName,
                                              const GGS_bool & in_mElementTypeIsGraphic,
                                              const GGS__5B__32_string_5D_ & in_mAttributeListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration, inCompiler) ;
  const GGS_autoLayoutTableViewControllerGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::
autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                                                      const GGS_lstring & in_mControllerName,
                                                                                      const GGS_string & in_mModelString,
                                                                                      const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                      const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                      const GGS_string & in_mModelTypeName,
                                                                                      const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                      const GGS_string & in_mElementTypeName,
                                                                                      const GGS_bool & in_mElementTypeIsGraphic,
                                                                                      const GGS__5B__32_string_5D_ & in_mAttributeListForGeneration,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mTableViewControllerBoundColumnListForGeneration = in_mTableViewControllerBoundColumnListForGeneration ;
  mProperty_mTableViewControllerSortedColumnListForGeneration = in_mTableViewControllerSortedColumnListForGeneration ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mTableViewControllerModelKind = in_mTableViewControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
  mProperty_mAttributeListForGeneration = in_mAttributeListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration::GGS_autoLayoutTableViewControllerGeneration (const cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerGeneration::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerBoundColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerBoundColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerSortedColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerSortedColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mModelTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind GGS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerModelKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerModelKind () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerModelKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__32_string_5D_ GGS_autoLayoutTableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__32_string_5D_ () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mAttributeListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelString (),
mProperty_mTableViewControllerBoundColumnListForGeneration (),
mProperty_mTableViewControllerSortedColumnListForGeneration (),
mProperty_mModelTypeName (),
mProperty_mTableViewControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic (),
mProperty_mAttributeListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (const GGS_string & in_mOwnerName,
                                                                                            const GGS_lstring & in_mControllerName,
                                                                                            const GGS_string & in_mModelString,
                                                                                            const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                            const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                            const GGS_string & in_mModelTypeName,
                                                                                            const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                            const GGS_string & in_mElementTypeName,
                                                                                            const GGS_bool & in_mElementTypeIsGraphic,
                                                                                            const GGS__5B__32_string_5D_ & in_mAttributeListForGeneration,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelString (),
mProperty_mTableViewControllerBoundColumnListForGeneration (),
mProperty_mTableViewControllerSortedColumnListForGeneration (),
mProperty_mModelTypeName (),
mProperty_mTableViewControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic (),
mProperty_mAttributeListForGeneration () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mTableViewControllerBoundColumnListForGeneration = in_mTableViewControllerBoundColumnListForGeneration ;
  mProperty_mTableViewControllerSortedColumnListForGeneration = in_mTableViewControllerSortedColumnListForGeneration ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mTableViewControllerModelKind = in_mTableViewControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
  mProperty_mAttributeListForGeneration = in_mAttributeListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutTableViewControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

void cPtr_autoLayoutTableViewControllerGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerModelKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutTableViewControllerGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mTableViewControllerBoundColumnListForGeneration.printNonNullClassInstanceProperties ("mTableViewControllerBoundColumnListForGeneration") ;
    mProperty_mTableViewControllerSortedColumnListForGeneration.printNonNullClassInstanceProperties ("mTableViewControllerSortedColumnListForGeneration") ;
    mProperty_mModelTypeName.printNonNullClassInstanceProperties ("mModelTypeName") ;
    mProperty_mTableViewControllerModelKind.printNonNullClassInstanceProperties ("mTableViewControllerModelKind") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mElementTypeIsGraphic.printNonNullClassInstanceProperties ("mElementTypeIsGraphic") ;
    mProperty_mAttributeListForGeneration.printNonNullClassInstanceProperties ("mAttributeListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ("autoLayoutTableViewControllerGeneration",
                                                                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerGeneration_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_autoLayoutTableViewControllerGeneration_2E_weak::GGS_autoLayoutTableViewControllerGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration_2E_weak & GGS_autoLayoutTableViewControllerGeneration_2E_weak::operator = (const GGS_autoLayoutTableViewControllerGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration_2E_weak::GGS_autoLayoutTableViewControllerGeneration_2E_weak (const GGS_autoLayoutTableViewControllerGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration_2E_weak GGS_autoLayoutTableViewControllerGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutTableViewControllerGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutTableViewControllerGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration_2E_weak::bang_autoLayoutTableViewControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerGeneration) ;
      result = GGS_autoLayoutTableViewControllerGeneration ((cPtr_autoLayoutTableViewControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ("autoLayoutTableViewControllerGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentDeclarationAST::objectCompare (const GGS_autoLayoutDocumentDeclarationAST & inOperand) const {
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

GGS_autoLayoutDocumentDeclarationAST::GGS_autoLayoutDocumentDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                          const GGS_lstring & in_mRootEntityName,
                                          const GGS_lstring & in_mMainViewName,
                                          const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                          const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                                          const GGS__5B_arrayControllerBindingAST_5D_ & in_mArrayControllerBindingListAST,
                                          const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                          const GGS_string & in_mCustomSuperClassName,
                                          const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mMainViewName, in_mOutletDeclarationList, in_mActionDeclarationList, in_mArrayControllerBindingListAST, in_mViewDeclarationList, in_mCustomSuperClassName, in_mOutletLinkerList, inCompiler) ;
  const GGS_autoLayoutDocumentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::
autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                           const GGS_lstring & in_mRootEntityName,
                                                                           const GGS_lstring & in_mMainViewName,
                                                                           const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                                           const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                                                                           const GGS__5B_arrayControllerBindingAST_5D_ & in_mArrayControllerBindingListAST,
                                                                           const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                                           const GGS_string & in_mCustomSuperClassName,
                                                                           const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mOutletDeclarationList = in_mOutletDeclarationList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mArrayControllerBindingListAST = in_mArrayControllerBindingListAST ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerList = in_mOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST::GGS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_arrayControllerBindingAST_5D_ GGS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_arrayControllerBindingAST_5D_ () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mOutletDeclarationList (),
mProperty_mActionDeclarationList (),
mProperty_mArrayControllerBindingListAST (),
mProperty_mViewDeclarationList (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GGS_lstring & in_mClassName,
                                                                              const GGS_lstring & in_mRootEntityName,
                                                                              const GGS_lstring & in_mMainViewName,
                                                                              const GGS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GGS__5B_lstring_5D_ & in_mActionDeclarationList,
                                                                              const GGS__5B_arrayControllerBindingAST_5D_ & in_mArrayControllerBindingListAST,
                                                                              const GGS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GGS_string & in_mCustomSuperClassName,
                                                                              const GGS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mOutletDeclarationList (),
mProperty_mActionDeclarationList (),
mProperty_mArrayControllerBindingListAST (),
mProperty_mViewDeclarationList (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerList () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mOutletDeclarationList = in_mOutletDeclarationList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mArrayControllerBindingListAST = in_mArrayControllerBindingListAST ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerList = in_mOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDocumentDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletLinkerList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutDocumentDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mOutletDeclarationList.printNonNullClassInstanceProperties ("mOutletDeclarationList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mArrayControllerBindingListAST.printNonNullClassInstanceProperties ("mArrayControllerBindingListAST") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerList.printNonNullClassInstanceProperties ("mOutletLinkerList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentFileGeneration::objectCompare (const GGS_autoLayoutDocumentFileGeneration & inOperand) const {
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

GGS_autoLayoutDocumentFileGeneration::GGS_autoLayoutDocumentFileGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mDocumentName,
                                                                      const GGS_string & in_mRootEntityName,
                                                                      const GGS_string & in_mMainViewName,
                                                                      const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                      const GGS_decoratedOutletMap & in_mOutletMap,
                                                                      const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                      const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                                      const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                      const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                      const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                      const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                      const GGS_viewGenerationList & in_mViewDeclarationList,
                                                                      const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                      const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                      const GGS_string & in_mCustomSuperClassName,
                                                                      const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentFileGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mDocumentName, in_mRootEntityName, in_mMainViewName, in_mDocumentPropertyGenearionList, in_mOutletMap, in_mAutoLayoutOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewDeclarationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mCustomSuperClassName, in_mOutletLinkerGenerationList, inCompiler) ;
  const GGS_autoLayoutDocumentFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::
autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mDocumentName,
                                                                                                       const GGS_string & in_mRootEntityName,
                                                                                                       const GGS_string & in_mMainViewName,
                                                                                                       const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                                                       const GGS_decoratedOutletMap & in_mOutletMap,
                                                                                                       const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                                       const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                                                                       const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                       const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                                                       const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                                       const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                                       const GGS_viewGenerationList & in_mViewDeclarationList,
                                                                                                       const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                                       const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                                       const GGS_string & in_mCustomSuperClassName,
                                                                                                       const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_mDocumentName = in_mDocumentName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mDocumentPropertyGenearionList = in_mDocumentPropertyGenearionList ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
  mProperty_mTargetActionList = in_mTargetActionList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_multipleBindingGenerationList = in_multipleBindingGenerationList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerGenerationList = in_mOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration::GGS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mDocumentPropertyGenearionList (),
mProperty_mOutletMap (),
mProperty_mAutoLayoutOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewDeclarationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerGenerationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GGS_string & in_mDocumentName,
                                                                              const GGS_string & in_mRootEntityName,
                                                                              const GGS_string & in_mMainViewName,
                                                                              const GGS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                              const GGS_decoratedOutletMap & in_mOutletMap,
                                                                              const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                              const GGS_actionBindingListForGeneration & in_mTargetActionList,
                                                                              const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                              const GGS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                              const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                              const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                              const GGS_viewGenerationList & in_mViewDeclarationList,
                                                                              const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                              const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                              const GGS_string & in_mCustomSuperClassName,
                                                                              const GGS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mMainViewName (),
mProperty_mDocumentPropertyGenearionList (),
mProperty_mOutletMap (),
mProperty_mAutoLayoutOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewDeclarationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mCustomSuperClassName (),
mProperty_mOutletLinkerGenerationList () {
  mProperty_mDocumentName = in_mDocumentName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mMainViewName = in_mMainViewName ;
  mProperty_mDocumentPropertyGenearionList = in_mDocumentPropertyGenearionList ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
  mProperty_mTargetActionList = in_mTargetActionList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_multipleBindingGenerationList = in_multipleBindingGenerationList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewDeclarationList = in_mViewDeclarationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mCustomSuperClassName = in_mCustomSuperClassName ;
  mProperty_mOutletLinkerGenerationList = in_mOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDocumentFileGeneration:") ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletLinkerGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutDocumentFileGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mDocumentName.printNonNullClassInstanceProperties ("mDocumentName") ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mDocumentPropertyGenearionList.printNonNullClassInstanceProperties ("mDocumentPropertyGenearionList") ;
    mProperty_mOutletMap.printNonNullClassInstanceProperties ("mOutletMap") ;
    mProperty_mAutoLayoutOutletMap.printNonNullClassInstanceProperties ("mAutoLayoutOutletMap") ;
    mProperty_mTargetActionList.printNonNullClassInstanceProperties ("mTargetActionList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_multipleBindingGenerationList.printNonNullClassInstanceProperties ("multipleBindingGenerationList") ;
    mProperty_mTableViewBindingGenerationList.printNonNullClassInstanceProperties ("mTableViewBindingGenerationList") ;
    mProperty_mEBViewBindingGenerationList.printNonNullClassInstanceProperties ("mEBViewBindingGenerationList") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mImplicitViewFunctionGenerationList.printNonNullClassInstanceProperties ("mImplicitViewFunctionGenerationList") ;
    mProperty_mConfiguratorMap.printNonNullClassInstanceProperties ("mConfiguratorMap") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerGenerationList.printNonNullClassInstanceProperties ("mOutletLinkerGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentFileGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList (),
mProperty_mViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (const GGS_prefDeclaration & inSource) :
mProperty_mOutletDeclarationList (inSource.mProperty_mOutletDeclarationList),
mProperty_mSimpleStoredAttributeList (inSource.mProperty_mSimpleStoredAttributeList),
mProperty_mActionDeclarationList (inSource.mProperty_mActionDeclarationList),
mProperty_mExternSwiftFunctionList (inSource.mProperty_mExternSwiftFunctionList),
mProperty_mSignatureList (inSource.mProperty_mSignatureList),
mProperty_mMainXibDescriptorList (inSource.mProperty_mMainXibDescriptorList),
mProperty_mViewDeclarationList (inSource.mProperty_mViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration & GGS_prefDeclaration::operator = (const GGS_prefDeclaration & inSource) {
  mProperty_mOutletDeclarationList = inSource.mProperty_mOutletDeclarationList ;
  mProperty_mSimpleStoredAttributeList = inSource.mProperty_mSimpleStoredAttributeList ;
  mProperty_mActionDeclarationList = inSource.mProperty_mActionDeclarationList ;
  mProperty_mExternSwiftFunctionList = inSource.mProperty_mExternSwiftFunctionList ;
  mProperty_mSignatureList = inSource.mProperty_mSignatureList ;
  mProperty_mMainXibDescriptorList = inSource.mProperty_mMainXibDescriptorList ;
  mProperty_mViewDeclarationList = inSource.mProperty_mViewDeclarationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prefDeclaration GGS_prefDeclaration::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::setInitializedProperties (Compiler * inCompiler) {
GGS_outletDeclarationList temp_0 = GGS_outletDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 6)) ;
  mProperty_mOutletDeclarationList = temp_0 ;
GGS_simpleStoredPropertyList temp_1 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 7)) ;
  mProperty_mSimpleStoredAttributeList = temp_1 ;
GGS__5B_lstring_5D_ temp_2 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 8)) ;
  mProperty_mActionDeclarationList = temp_2 ;
GGS_externSwiftFunctionList temp_3 = GGS_externSwiftFunctionList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 9)) ;
  mProperty_mExternSwiftFunctionList = temp_3 ;
GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 10)) ;
  mProperty_mSignatureList = temp_4 ;
GGS_mainXibDescriptorList temp_5 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 11)) ;
  mProperty_mMainXibDescriptorList = temp_5 ;
GGS_astViewDeclarationList temp_6 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 12)) ;
  mProperty_mViewDeclarationList = temp_6 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (const GGS_outletDeclarationList & inOperand0,
                                          const GGS_simpleStoredPropertyList & inOperand1,
                                          const GGS__5B_lstring_5D_ & inOperand2,
                                          const GGS_externSwiftFunctionList & inOperand3,
                                          const GGS_stringset & inOperand4,
                                          const GGS_mainXibDescriptorList & inOperand5,
                                          const GGS_astViewDeclarationList & inOperand6) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5),
mProperty_mViewDeclarationList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mViewDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mViewDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prefDeclaration::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prefDeclaration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @prefDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//--------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsDeclarationAST::objectCompare (const GGS_prefsDeclarationAST & inOperand) const {
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

GGS_prefsDeclarationAST::GGS_prefsDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_prefDeclaration & in_mDeclaration,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_prefsDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_prefsDeclarationAST (inCompiler COMMA_THERE)) ;
  object->prefsDeclarationAST_init_21__21_ (in_mClassName, in_mDeclaration, inCompiler) ;
  const GGS_prefsDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::
prefsDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                  const GGS_prefDeclaration & in_mDeclaration,
                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST::GGS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration GGS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GGS_lstring & in_mClassName,
                                                    const GGS_prefDeclaration & in_mDeclaration,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mDeclaration () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@prefsDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_prefsDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDeclaration.printNonNullClassInstanceProperties ("mDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @prefsDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (void) :
mProperty_mSequenceNumber (),
mProperty_mMainGroupReference (),
mProperty_mMainGroupChildrenRefs (),
mProperty_mProjectObjectReference (),
mProperty_mGroupList (),
mProperty_mToolTargetList (),
mProperty_mAppTargetList (),
mProperty_mCppFileList (),
mProperty_m_5F_M_5F_FileList (),
mProperty_m_5F_MM_5F_FileList (),
mProperty_m_5F_SwiftFileList (),
mProperty_mFrameworkFileList (),
mProperty_mHeaderFileList (),
mProperty_mBuildFileList (),
mProperty_mDefaultConfigurationRef (),
mProperty_mDefaultConfigurationSettingList (),
mProperty_mProjectBuildConfigurationRef (),
mProperty_mInfoPlistFileList (),
mProperty_mXIB_5F_fileList (),
mProperty_mTIFF_5F_fileList (),
mProperty_mICNS_5F_fileList () {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_XcodeProjectDescriptor & inSource) :
mProperty_mSequenceNumber (inSource.mProperty_mSequenceNumber),
mProperty_mMainGroupReference (inSource.mProperty_mMainGroupReference),
mProperty_mMainGroupChildrenRefs (inSource.mProperty_mMainGroupChildrenRefs),
mProperty_mProjectObjectReference (inSource.mProperty_mProjectObjectReference),
mProperty_mGroupList (inSource.mProperty_mGroupList),
mProperty_mToolTargetList (inSource.mProperty_mToolTargetList),
mProperty_mAppTargetList (inSource.mProperty_mAppTargetList),
mProperty_mCppFileList (inSource.mProperty_mCppFileList),
mProperty_m_5F_M_5F_FileList (inSource.mProperty_m_5F_M_5F_FileList),
mProperty_m_5F_MM_5F_FileList (inSource.mProperty_m_5F_MM_5F_FileList),
mProperty_m_5F_SwiftFileList (inSource.mProperty_m_5F_SwiftFileList),
mProperty_mFrameworkFileList (inSource.mProperty_mFrameworkFileList),
mProperty_mHeaderFileList (inSource.mProperty_mHeaderFileList),
mProperty_mBuildFileList (inSource.mProperty_mBuildFileList),
mProperty_mDefaultConfigurationRef (inSource.mProperty_mDefaultConfigurationRef),
mProperty_mDefaultConfigurationSettingList (inSource.mProperty_mDefaultConfigurationSettingList),
mProperty_mProjectBuildConfigurationRef (inSource.mProperty_mProjectBuildConfigurationRef),
mProperty_mInfoPlistFileList (inSource.mProperty_mInfoPlistFileList),
mProperty_mXIB_5F_fileList (inSource.mProperty_mXIB_5F_fileList),
mProperty_mTIFF_5F_fileList (inSource.mProperty_mTIFF_5F_fileList),
mProperty_mICNS_5F_fileList (inSource.mProperty_mICNS_5F_fileList) {
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor & GGS_XcodeProjectDescriptor::operator = (const GGS_XcodeProjectDescriptor & inSource) {
  mProperty_mSequenceNumber = inSource.mProperty_mSequenceNumber ;
  mProperty_mMainGroupReference = inSource.mProperty_mMainGroupReference ;
  mProperty_mMainGroupChildrenRefs = inSource.mProperty_mMainGroupChildrenRefs ;
  mProperty_mProjectObjectReference = inSource.mProperty_mProjectObjectReference ;
  mProperty_mGroupList = inSource.mProperty_mGroupList ;
  mProperty_mToolTargetList = inSource.mProperty_mToolTargetList ;
  mProperty_mAppTargetList = inSource.mProperty_mAppTargetList ;
  mProperty_mCppFileList = inSource.mProperty_mCppFileList ;
  mProperty_m_5F_M_5F_FileList = inSource.mProperty_m_5F_M_5F_FileList ;
  mProperty_m_5F_MM_5F_FileList = inSource.mProperty_m_5F_MM_5F_FileList ;
  mProperty_m_5F_SwiftFileList = inSource.mProperty_m_5F_SwiftFileList ;
  mProperty_mFrameworkFileList = inSource.mProperty_mFrameworkFileList ;
  mProperty_mHeaderFileList = inSource.mProperty_mHeaderFileList ;
  mProperty_mBuildFileList = inSource.mProperty_mBuildFileList ;
  mProperty_mDefaultConfigurationRef = inSource.mProperty_mDefaultConfigurationRef ;
  mProperty_mDefaultConfigurationSettingList = inSource.mProperty_mDefaultConfigurationSettingList ;
  mProperty_mProjectBuildConfigurationRef = inSource.mProperty_mProjectBuildConfigurationRef ;
  mProperty_mInfoPlistFileList = inSource.mProperty_mInfoPlistFileList ;
  mProperty_mXIB_5F_fileList = inSource.mProperty_mXIB_5F_fileList ;
  mProperty_mTIFF_5F_fileList = inSource.mProperty_mTIFF_5F_fileList ;
  mProperty_mICNS_5F_fileList = inSource.mProperty_mICNS_5F_fileList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mSequenceNumber = GGS_uint (uint32_t (0U)) ;
  mProperty_mMainGroupReference = GGS_string::makeEmptyString () ;
GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 364)) ;
  mProperty_mMainGroupChildrenRefs = temp_0 ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
GGS_XCodeGroupList temp_1 = GGS_XCodeGroupList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 366)) ;
  mProperty_mGroupList = temp_1 ;
GGS_XCodeToolTargetList temp_2 = GGS_XCodeToolTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 367)) ;
  mProperty_mToolTargetList = temp_2 ;
GGS_XCodeAppTargetList temp_3 = GGS_XCodeAppTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 368)) ;
  mProperty_mAppTargetList = temp_3 ;
GGS__5B__32_string_5D_ temp_4 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 369)) ;
  mProperty_mCppFileList = temp_4 ;
GGS__5B__32_string_5D_ temp_5 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 370)) ;
  mProperty_m_5F_M_5F_FileList = temp_5 ;
GGS__5B__32_string_5D_ temp_6 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 371)) ;
  mProperty_m_5F_MM_5F_FileList = temp_6 ;
GGS__5B__32_string_5D_ temp_7 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 372)) ;
  mProperty_m_5F_SwiftFileList = temp_7 ;
GGS__5B__32_string_5D_ temp_8 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 373)) ;
  mProperty_mFrameworkFileList = temp_8 ;
GGS__5B__32_string_5D_ temp_9 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 374)) ;
  mProperty_mHeaderFileList = temp_9 ;
GGS_BuildFileList temp_10 = GGS_BuildFileList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 375)) ;
  mProperty_mBuildFileList = temp_10 ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
GGS__5B_string_5D_ temp_11 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 378)) ;
  mProperty_mDefaultConfigurationSettingList = temp_11 ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
GGS__5B__32_string_5D_ temp_12 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 381)) ;
  mProperty_mInfoPlistFileList = temp_12 ;
GGS__5B__32_string_5D_ temp_13 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 382)) ;
  mProperty_mXIB_5F_fileList = temp_13 ;
GGS__5B__32_string_5D_ temp_14 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 383)) ;
  mProperty_mTIFF_5F_fileList = temp_14 ;
GGS__5B__32_string_5D_ temp_15 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 384)) ;
  mProperty_mICNS_5F_fileList = temp_15 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS__5B_string_5D_ & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS_XCodeGroupList & inOperand4,
                                                        const GGS_XCodeToolTargetList & inOperand5,
                                                        const GGS_XCodeAppTargetList & inOperand6,
                                                        const GGS__5B__32_string_5D_ & inOperand7,
                                                        const GGS__5B__32_string_5D_ & inOperand8,
                                                        const GGS__5B__32_string_5D_ & inOperand9,
                                                        const GGS__5B__32_string_5D_ & inOperand10,
                                                        const GGS__5B__32_string_5D_ & inOperand11,
                                                        const GGS__5B__32_string_5D_ & inOperand12,
                                                        const GGS_BuildFileList & inOperand13,
                                                        const GGS_string & inOperand14,
                                                        const GGS__5B_string_5D_ & inOperand15,
                                                        const GGS_string & inOperand16,
                                                        const GGS__5B__32_string_5D_ & inOperand17,
                                                        const GGS__5B__32_string_5D_ & inOperand18,
                                                        const GGS__5B__32_string_5D_ & inOperand19,
                                                        const GGS__5B__32_string_5D_ & inOperand20) :
mProperty_mSequenceNumber (inOperand0),
mProperty_mMainGroupReference (inOperand1),
mProperty_mMainGroupChildrenRefs (inOperand2),
mProperty_mProjectObjectReference (inOperand3),
mProperty_mGroupList (inOperand4),
mProperty_mToolTargetList (inOperand5),
mProperty_mAppTargetList (inOperand6),
mProperty_mCppFileList (inOperand7),
mProperty_m_5F_M_5F_FileList (inOperand8),
mProperty_m_5F_MM_5F_FileList (inOperand9),
mProperty_m_5F_SwiftFileList (inOperand10),
mProperty_mFrameworkFileList (inOperand11),
mProperty_mHeaderFileList (inOperand12),
mProperty_mBuildFileList (inOperand13),
mProperty_mDefaultConfigurationRef (inOperand14),
mProperty_mDefaultConfigurationSettingList (inOperand15),
mProperty_mProjectBuildConfigurationRef (inOperand16),
mProperty_mInfoPlistFileList (inOperand17),
mProperty_mXIB_5F_fileList (inOperand18),
mProperty_mTIFF_5F_fileList (inOperand19),
mProperty_mICNS_5F_fileList (inOperand20) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_m_5F_SwiftFileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::drop (void) {
  mProperty_mSequenceNumber.drop () ;
  mProperty_mMainGroupReference.drop () ;
  mProperty_mMainGroupChildrenRefs.drop () ;
  mProperty_mProjectObjectReference.drop () ;
  mProperty_mGroupList.drop () ;
  mProperty_mToolTargetList.drop () ;
  mProperty_mAppTargetList.drop () ;
  mProperty_mCppFileList.drop () ;
  mProperty_m_5F_M_5F_FileList.drop () ;
  mProperty_m_5F_MM_5F_FileList.drop () ;
  mProperty_m_5F_SwiftFileList.drop () ;
  mProperty_mFrameworkFileList.drop () ;
  mProperty_mHeaderFileList.drop () ;
  mProperty_mBuildFileList.drop () ;
  mProperty_mDefaultConfigurationRef.drop () ;
  mProperty_mDefaultConfigurationSettingList.drop () ;
  mProperty_mProjectBuildConfigurationRef.drop () ;
  mProperty_mInfoPlistFileList.drop () ;
  mProperty_mXIB_5F_fileList.drop () ;
  mProperty_mTIFF_5F_fileList.drop () ;
  mProperty_mICNS_5F_fileList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XcodeProjectDescriptor::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XcodeProjectDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XcodeProjectDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 15)) ;
  }
  ioObject.mProperty_mTIFF_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 16)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 24)) ;
  }
  ioObject.mProperty_mInfoPlistFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 25)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 33)) ;
  }
  ioObject.mProperty_mXIB_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 34)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 42)) ;
  }
  ioObject.mProperty_mFrameworkFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 43)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 51)) ;
  }
  ioObject.mProperty_m_5F_M_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 52)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 60)) ;
  }
  ioObject.mProperty_m_5F_SwiftFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 61)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 69)) ;
  }
  ioObject.mProperty_m_5F_MM_5F_FileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 70)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 78)) ;
  }
  ioObject.mProperty_mCppFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 79)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 87)) ;
  }
  ioObject.mProperty_mHeaderFileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 88)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileReference,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 97)) ;
  }
  {
  ioObject.mProperty_mBuildFileList.setter_append (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS__5B_string_5D_ constinArgument_inSourceList,
                                    const GGS__5B_string_5D_ constinArgument_inToolFrameworksFileRefList,
                                    const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 111)) ;
  }
  GGS_string var_buildPhaseRef_4431 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4431, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 113)) ;
  }
  GGS_string var_buildConfigurationListRef_4528 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4528, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 114)) ;
  }
  GGS_string var_buildConfigurationRef_4591 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4591, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 115)) ;
  }
  GGS_string var_frameworkBuildRef_4650 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4650, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 116)) ;
  }
  {
  ioObject.mProperty_mToolTargetList.setter_append (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4431, var_buildConfigurationListRef_4528, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4591, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4650, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS__5B_string_5D_ constinArgument_inSourceList,
                                   const GGS__5B_string_5D_ constinArgument_inFrameworksFileRefList,
                                   const GGS__5B_string_5D_ constinArgument_inResourceFileBuildRefs,
                                   const GGS__5B_string_5D_ constinArgument_inBuildConfigurationSettingList,
                                   const GGS__5B_string_5D_ constinArgument_inDependentTargetRefList,
                                   const GGS__5B__32_string_5D_ constinArgument_inProductCopyList,
                                   const GGS_string constinArgument_inInfoPList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 146)) ;
  }
  GGS_string var_buildPhaseRef_5769 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5769, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 147)) ;
  }
  GGS_string var_targetRef_5820 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5820, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5867 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5867, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 149)) ;
  }
  GGS_string var_buildConfigurationRef_5930 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5930, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 150)) ;
  }
  GGS_string var_frameworkBuildRef_5989 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_5989, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 151)) ;
  }
  GGS_string var_resourceBuildRef_6044 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6044, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 152)) ;
  }
  GGS__5B__32_string_5D_ temp_0 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 153)) ;
  GGS__5B__32_string_5D_ var_dependentTargets_6079 = temp_0 ;
  UpEnumerator__5B_string_5D_ enumerator_6108 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_6108.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_6182 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6182, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 155)) ;
    }
    var_dependentTargets_6079.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_dependencyBuildRef_6182, enumerator_6108.current_entry (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 156)) ;
    enumerator_6108.gotoNextObject () ;
  }
  GGS__5B_string_5D_ var_resourceFileBuildRefs_6276 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__5B__32_string_5D_ enumerator_6331 (constinArgument_inProductCopyList) ;
  while (enumerator_6331.hasCurrentObject ()) {
    GGS_string var_buildRef_6455 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6331.current_entry (HERE).readProperty_mValue_30_ (), enumerator_6331.current_entry (HERE).readProperty_mValue_31_ (), var_buildRef_6455, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 160)) ;
    }
    {
    var_resourceFileBuildRefs_6276.setter_append (var_buildRef_6455, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 161)) ;
    }
    enumerator_6331.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mAppTargetList.setter_append (var_targetRef_5820, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5769, var_buildConfigurationListRef_5867, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5930, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_5989, var_dependentTargets_6079, var_resourceBuildRef_6044, var_resourceFileBuildRefs_6276, constinArgument_inInfoPList, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 163)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS__5B_string_5D_ constinArgument_inChildrenRefs,
                               GGS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 190)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 193)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 196)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 198)) ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 199)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS__5B_string_5D_ & ioArgument_ioCppFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioMFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioMMFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioSwiftFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS__5B_string_5D_ & ioArgument_ioResourceFileBuildRefs,
                                        GGS_string & outArgument_outGroupRef,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 216)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 219)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 222)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 224)) ;
  }
  GGS__5B_string_5D_ temp_6 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 226)) ;
  GGS__5B_string_5D_ var_childrenRefs_8760 = temp_6 ;
  UpEnumerator_stringset enumerator_8785 (constinArgument_inFileNames) ;
  while (enumerator_8785.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 228)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_cppFileRef_8902 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_8785.current_key (HERE), var_cppFileRef_8902, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 229)) ;
        }
        {
        var_childrenRefs_8760.setter_append (var_cppFileRef_8902, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 230)) ;
        }
        GGS_string var_buildRef_9038 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_8902, enumerator_8785.current_key (HERE), var_buildRef_9038, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 231)) ;
        }
        {
        ioArgument_ioCppFileBuildRefs.setter_append (var_buildRef_9038, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 232)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 233)).objectCompare (GGS_string ("h"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_string var_headerFileRef_9193 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_8785.current_key (HERE), var_headerFileRef_9193, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 234)) ;
          }
          {
          var_childrenRefs_8760.setter_append (var_headerFileRef_9193, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 235)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 236)).objectCompare (GGS_string ("m"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GGS_string var_m_5F_FileRef_9347 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_8785.current_key (HERE), var_m_5F_FileRef_9347, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 237)) ;
            }
            GGS_string var_buildRef_9440 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9347, enumerator_8785.current_key (HERE), var_buildRef_9440, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 238)) ;
            }
            {
            var_childrenRefs_8760.setter_append (var_m_5F_FileRef_9347, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 239)) ;
            }
            {
            ioArgument_ioMFileBuildRefs.setter_append (var_buildRef_9440, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 240)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 241)).objectCompare (GGS_string ("swift"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              GGS_string var_swift_5F_FileRef_9636 ;
              {
              extensionSetter_addSwiftFile (ioObject, enumerator_8785.current_key (HERE), var_swift_5F_FileRef_9636, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 242)) ;
              }
              GGS_string var_buildRef_9737 ;
              {
              extensionSetter_addBuildFile (ioObject, var_swift_5F_FileRef_9636, enumerator_8785.current_key (HERE), var_buildRef_9737, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 243)) ;
              }
              {
              var_childrenRefs_8760.setter_append (var_swift_5F_FileRef_9636, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 244)) ;
              }
              {
              ioArgument_ioSwiftFileBuildRefs.setter_append (var_buildRef_9737, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 245)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 246)).objectCompare (GGS_string ("mm"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GGS_string var_m_5F_FileRef_9935 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_8785.current_key (HERE), var_m_5F_FileRef_9935, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 247)) ;
                }
                GGS_string var_buildRef_10028 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9935, enumerator_8785.current_key (HERE), var_buildRef_10028, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 248)) ;
                }
                {
                var_childrenRefs_8760.setter_append (var_m_5F_FileRef_9935, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 249)) ;
                }
                {
                ioArgument_ioMMFileBuildRefs.setter_append (var_buildRef_10028, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 250)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 251)).objectCompare (GGS_string ("framework"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GGS_string var_framework_5F_FileRef_10233 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_8785.current_key (HERE), var_framework_5F_FileRef_10233, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 252)) ;
                  }
                  GGS_string var_buildRef_10342 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10233, enumerator_8785.current_key (HERE), var_buildRef_10342, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 253)) ;
                  }
                  {
                  var_childrenRefs_8760.setter_append (var_framework_5F_FileRef_10233, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 254)) ;
                  }
                  {
                  ioArgument_ioFrameWorkFileBuildRefs.setter_append (var_buildRef_10342, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 255)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_12) {
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 256)).objectCompare (GGS_string ("plist"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GGS_string var_resource_5F_FileRef_10558 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_8785.current_key (HERE), var_resource_5F_FileRef_10558, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 257)) ;
                    }
                    {
                    var_childrenRefs_8760.setter_append (var_resource_5F_FileRef_10558, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 258)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 259)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      GGS_string var_resource_5F_FileRef_10722 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_8785.current_key (HERE), var_resource_5F_FileRef_10722, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 260)) ;
                      }
                      {
                      var_childrenRefs_8760.setter_append (var_resource_5F_FileRef_10722, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 261)) ;
                      }
                      GGS_string var_buildRef_10876 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10722, enumerator_8785.current_key (HERE), var_buildRef_10876, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 262)) ;
                      }
                      {
                      ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_10876, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 263)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_14) {
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 264)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        GGS_string var_resource_5F_FileRef_11038 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_8785.current_key (HERE), var_resource_5F_FileRef_11038, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 265)) ;
                        }
                        {
                        var_childrenRefs_8760.setter_append (var_resource_5F_FileRef_11038, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 266)) ;
                        }
                        GGS_string var_buildRef_11192 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11038, enumerator_8785.current_key (HERE), var_buildRef_11192, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 267)) ;
                        }
                        {
                        ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11192, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 268)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_15) {
                      GalgasBool test_16 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_16) {
                        test_16 = GGS_bool (ComparisonKind::equal, enumerator_8785.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 269)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_16) {
                          GGS_string var_resource_5F_FileRef_11354 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_8785.current_key (HERE), var_resource_5F_FileRef_11354, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 270)) ;
                          }
                          {
                          var_childrenRefs_8760.setter_append (var_resource_5F_FileRef_11354, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 271)) ;
                          }
                          GGS_string var_buildRef_11508 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11354, enumerator_8785.current_key (HERE), var_buildRef_11508, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 272)) ;
                          }
                          {
                          ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11508, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 273)) ;
                          }
                        }
                      }
                      if (GalgasBool::boolFalse == test_16) {
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)), GGS_string ("unhandled extension for file '").add_operation (enumerator_8785.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)), fixItArray17  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 275)) ;
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
    enumerator_8785.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_8760, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 278)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mMainGroupChildrenRefs.setter_append (constinArgument_inGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 285)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS__5B_string_5D_ constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 292)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GGS_XcodeProjectDescriptor & ioObject,
                                      GGS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 352)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 352)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 352)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 353)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 355)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 355)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 355)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 356)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GGS_XcodeProjectDescriptor inObject,
                                     const GGS_string constinArgument_inPath,
                                     const GGS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_XcodeProjectDescriptor temp_0 = inObject ;
  const GGS_XcodeProjectDescriptor temp_1 = inObject ;
  const GGS_XcodeProjectDescriptor temp_2 = inObject ;
  const GGS_XcodeProjectDescriptor temp_3 = inObject ;
  const GGS_XcodeProjectDescriptor temp_4 = inObject ;
  const GGS_XcodeProjectDescriptor temp_5 = inObject ;
  const GGS_XcodeProjectDescriptor temp_6 = inObject ;
  const GGS_XcodeProjectDescriptor temp_7 = inObject ;
  const GGS_XcodeProjectDescriptor temp_8 = inObject ;
  const GGS_XcodeProjectDescriptor temp_9 = inObject ;
  const GGS_XcodeProjectDescriptor temp_10 = inObject ;
  const GGS_XcodeProjectDescriptor temp_11 = inObject ;
  const GGS_XcodeProjectDescriptor temp_12 = inObject ;
  const GGS_XcodeProjectDescriptor temp_13 = inObject ;
  const GGS_XcodeProjectDescriptor temp_14 = inObject ;
  const GGS_XcodeProjectDescriptor temp_15 = inObject ;
  const GGS_XcodeProjectDescriptor temp_16 = inObject ;
  const GGS_XcodeProjectDescriptor temp_17 = inObject ;
  const GGS_XcodeProjectDescriptor temp_18 = inObject ;
  const GGS_XcodeProjectDescriptor temp_19 = inObject ;
  GGS_string var_contents_17168 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCppFileList (), temp_7.readProperty_m_5F_M_5F_FileList (), temp_8.readProperty_m_5F_MM_5F_FileList (), temp_9.readProperty_m_5F_SwiftFileList (), temp_10.readProperty_mFrameworkFileList (), temp_11.readProperty_mHeaderFileList (), temp_12.readProperty_mInfoPlistFileList (), temp_13.readProperty_mTIFF_5F_fileList (), temp_14.readProperty_mICNS_5F_fileList (), temp_15.readProperty_mXIB_5F_fileList (), temp_16.readProperty_mBuildFileList (), temp_17.readProperty_mDefaultConfigurationRef (), temp_18.readProperty_mDefaultConfigurationSettingList (), temp_19.readProperty_mProjectBuildConfigurationRef () COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 421))) ;
  GGS_string var_projectCoreFile_17812 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 443)) ;
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    GGS_bool test_21 = var_projectCoreFile_17812.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 444)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 444)) ;
    if (GalgasBool::boolTrue != test_21.boolEnum ()) {
      test_21 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 444)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.galgas4", 444)) ;
    }
    GGS_bool test_22 = test_21 ;
    if (GalgasBool::boolTrue != test_22.boolEnum ()) {
      test_22 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 444)).objectCompare (var_contents_17168)) ;
    }
    test_20 = test_22.boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      GGS_bool joker_18072 ; // Joker input parameter
      var_contents_17168.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18072, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 445)) ;
      var_contents_17168.method_makeDirectoryAndWriteToFile (var_projectCoreFile_17812, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 446)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap (),
mProperty_mAutolayoutViewClassMap (),
mProperty_mAutoLayoutBindingSpecificationMap (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_semanticContext & inSource) :
mProperty_mClassMap (inSource.mProperty_mClassMap),
mProperty_mOutletClassMap (inSource.mProperty_mOutletClassMap),
mProperty_mBindingSpecificationMap (inSource.mProperty_mBindingSpecificationMap),
mProperty_mAutolayoutViewClassMap (inSource.mProperty_mAutolayoutViewClassMap),
mProperty_mAutoLayoutBindingSpecificationMap (inSource.mProperty_mAutoLayoutBindingSpecificationMap),
mProperty_mAutoLayoutVStackFunctionMap (inSource.mProperty_mAutoLayoutVStackFunctionMap),
mProperty_mAutoLayoutHStackFunctionMap (inSource.mProperty_mAutoLayoutHStackFunctionMap),
mProperty_mEnumerationFunctionListAST (inSource.mProperty_mEnumerationFunctionListAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext & GGS_semanticContext::operator = (const GGS_semanticContext & inSource) {
  mProperty_mClassMap = inSource.mProperty_mClassMap ;
  mProperty_mOutletClassMap = inSource.mProperty_mOutletClassMap ;
  mProperty_mBindingSpecificationMap = inSource.mProperty_mBindingSpecificationMap ;
  mProperty_mAutolayoutViewClassMap = inSource.mProperty_mAutolayoutViewClassMap ;
  mProperty_mAutoLayoutBindingSpecificationMap = inSource.mProperty_mAutoLayoutBindingSpecificationMap ;
  mProperty_mAutoLayoutVStackFunctionMap = inSource.mProperty_mAutoLayoutVStackFunctionMap ;
  mProperty_mAutoLayoutHStackFunctionMap = inSource.mProperty_mAutoLayoutHStackFunctionMap ;
  mProperty_mEnumerationFunctionListAST = inSource.mProperty_mEnumerationFunctionListAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::init (Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mClassMap = GGS_classMap::init (inCompiler COMMA_HERE) ;
  mProperty_mOutletClassMap = GGS_outletClassMap::init (inCompiler COMMA_HERE) ;
  mProperty_mBindingSpecificationMap = GGS_bindingSpecificationMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAutolayoutViewClassMap = GGS_autolayoutViewClassMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAutoLayoutBindingSpecificationMap = GGS_autoLayoutBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAutoLayoutVStackFunctionMap = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAutoLayoutHStackFunctionMap = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mEnumerationFunctionListAST = GGS_enumerationFunctionListAST::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext::GGS_semanticContext (const GGS_classMap & inOperand0,
                                          const GGS_outletClassMap & inOperand1,
                                          const GGS_bindingSpecificationMap & inOperand2,
                                          const GGS_autolayoutViewClassMap & inOperand3,
                                          const GGS_autoLayoutBindingSpecificationMap & inOperand4,
                                          const GGS_astAutoLayoutViewFunctionMap & inOperand5,
                                          const GGS_astAutoLayoutViewFunctionMap & inOperand6,
                                          const GGS_enumerationFunctionListAST & inOperand7) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2),
mProperty_mAutolayoutViewClassMap (inOperand3),
mProperty_mAutoLayoutBindingSpecificationMap (inOperand4),
mProperty_mAutoLayoutVStackFunctionMap (inOperand5),
mProperty_mAutoLayoutHStackFunctionMap (inOperand6),
mProperty_mEnumerationFunctionListAST (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mAutolayoutViewClassMap.isValid () && mProperty_mAutoLayoutBindingSpecificationMap.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
  mProperty_mAutolayoutViewClassMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationMap.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticContext::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutolayoutViewClassMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutBindingSpecificationMap.description (ioString, inIndentation+1) ;
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
//     @semanticContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutViewClassDeclarationAST::objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const {
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

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                              const GGS_bool & in_mUserDefined,
                                              const GGS_lstring & in_mSuperClassName,
                                              const GGS_bool & in_mHasRunAction,
                                              const GGS_bool & in_mHasEnabled,
                                              const GGS_bool & in_mHandlesTableValueBinding,
                                              const GGS_bool & in_mHandlesGraphicControllerBinding,
                                              const GGS_bool & in_mHasHidden,
                                              const GGS_autoLayoutClassParameterList & in_mParameterList,
                                              const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutViewClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutViewClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap, inCompiler) ;
  const GGS_autoLayoutViewClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::
autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                                const GGS_bool & in_mUserDefined,
                                                                                const GGS_lstring & in_mSuperClassName,
                                                                                const GGS_bool & in_mHasRunAction,
                                                                                const GGS_bool & in_mHasEnabled,
                                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GGS_bool & in_mHasHidden,
                                                                                const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mUserDefined (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mSuperClassName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasRunAction (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasEnabled (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesTableValueBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesGraphicControllerBinding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mHasHidden (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutClassParameterList () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mParameterList (const GGS_autoLayoutClassParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassDeclarationAST::setProperty_mAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                const GGS_bool & in_mUserDefined,
                                                                                const GGS_lstring & in_mSuperClassName,
                                                                                const GGS_bool & in_mHasRunAction,
                                                                                const GGS_bool & in_mHasEnabled,
                                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GGS_bool & in_mHasHidden,
                                                                                const GGS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutViewClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutViewClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutViewClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mAutoLayoutViewFunctionMap.printNonNullClassInstanceProperties ("mAutoLayoutViewFunctionMap") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewClassDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

