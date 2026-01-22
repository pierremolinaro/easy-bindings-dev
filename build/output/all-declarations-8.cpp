#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

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

acPtr_class * cPtr_prefsDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsDeclarationAST result ;
  const GGS_prefsDeclarationAST * p = (const GGS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    const GGS_propertyKind_2E_property var_prop_4618 = temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.ggs", 119)).unwrappedValue () ;
    if (!temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.ggs", 119)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_prop_4618.readProperty_accessibility ().getter_isTransient (SOURCE_FILE ("semantic-analysis.ggs", 120)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_bool var_ab_4756 ;
          var_prop_4618.readProperty_accessibility ().method_extractTransient (var_ab_4756, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.ggs", 121)) ;
          result_result = var_ab_4756 ;
        }
      }
    }
  }
//---
  return result_result ;
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

acPtr_class * cPtr_boolAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

acPtr_class * cPtr_integerAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 6)) ;
  }
  {
  ioObject.mProperty_mICNS_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 7)) ;
  }
}


//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_easyBindings_grammar [138] = {
  "<start_symbol>",// Index 0
  "<binding_option_list>",// Index 1
  "<preferences_declaration>",// Index 2
  "<entity_declaration>",// Index 3
  "<graphviz_declaration>",// Index 4
  "<controller_declaration>",// Index 5
  "<transient_declaration>",// Index 6
  "<toMany_relationship>",// Index 7
  "<main_xib>",// Index 8
  "<main_xib_line>",// Index 9
  "<simple_stored_declaration>",// Index 10
  "<explicit_value>",// Index 11
  "<auto_layout_view_binding_specification>",// Index 12
  "<booleanMultipleBindingExpression>",// Index 13
  "<booleanMultipleBindingComparison>",// Index 14
  "<booleanMultipleBindingTerm>",// Index 15
  "<booleanMultipleBindingOperand>",// Index 16
  "<extern_swift_func>",// Index 17
  "<outlet_binding_specification>",// Index 18
  "<outlet_class_declaration>",// Index 19
  "<extern_swift_delegate>",// Index 20
  "<document_declaration>",// Index 21
  "<xcode_project>",// Index 22
  "<action_declaration>",// Index 23
  "<autolayout_class_declaration>",// Index 24
  "<autolayout_formal_parameter_list>",// Index 25
  "<outlet_declaration>",// Index 26
  "<outlet_binding>",// Index 27
  "<class_declaration>",// Index 28
  "<observable_property>",// Index 29
  "<toOne_relationship>",// Index 30
  "<stack_view_declaration>",// Index 31
  "<auto_layout_func_call_list>",// Index 32
  "<view_instruction_list>",// Index 33
  "<view_instruction>",// Index 34
  "<computed_view_instruction>",// Index 35
  "<view_actual_parameter_list>",// Index 36
  "<enum_declaration>",// Index 37
  "<enum_function_declaration>",// Index 38
  "<select_easyBindings_5F_syntax_0>",// Index 39
  "<select_easyBindings_5F_syntax_1>",// Index 40
  "<select_easyBindings_5F_syntax_2>",// Index 41
  "<select_easyBindings_5F_syntax_3>",// Index 42
  "<select_easyBindings_5F_syntax_4>",// Index 43
  "<select_easyBindings_5F_syntax_5>",// Index 44
  "<select_easyBindings_5F_syntax_6>",// Index 45
  "<select_easyBindings_5F_syntax_7>",// Index 46
  "<select_easyBindings_5F_syntax_8>",// Index 47
  "<select_easyBindings_5F_syntax_9>",// Index 48
  "<select_easyBindings_5F_syntax_10>",// Index 49
  "<select_easyBindings_5F_syntax_11>",// Index 50
  "<select_easyBindings_5F_syntax_12>",// Index 51
  "<select_easyBindings_5F_syntax_13>",// Index 52
  "<select_easyBindings_5F_syntax_14>",// Index 53
  "<select_easyBindings_5F_syntax_15>",// Index 54
  "<select_easyBindings_5F_syntax_16>",// Index 55
  "<select_easyBindings_5F_syntax_17>",// Index 56
  "<select_easyBindings_5F_syntax_18>",// Index 57
  "<select_easyBindings_5F_syntax_19>",// Index 58
  "<select_easyBindings_5F_syntax_20>",// Index 59
  "<select_easyBindings_5F_syntax_21>",// Index 60
  "<select_easyBindings_5F_syntax_22>",// Index 61
  "<select_easyBindings_5F_syntax_23>",// Index 62
  "<select_easyBindings_5F_syntax_24>",// Index 63
  "<select_easyBindings_5F_syntax_25>",// Index 64
  "<select_easyBindings_5F_syntax_26>",// Index 65
  "<select_easyBindings_5F_syntax_27>",// Index 66
  "<select_easyBindings_5F_syntax_28>",// Index 67
  "<select_easyBindings_5F_syntax_29>",// Index 68
  "<select_easyBindings_5F_syntax_30>",// Index 69
  "<select_easyBindings_5F_syntax_31>",// Index 70
  "<select_easyBindings_5F_syntax_32>",// Index 71
  "<select_easyBindings_5F_syntax_33>",// Index 72
  "<select_easyBindings_5F_syntax_34>",// Index 73
  "<select_easyBindings_5F_syntax_35>",// Index 74
  "<select_easyBindings_5F_syntax_36>",// Index 75
  "<select_easyBindings_5F_syntax_37>",// Index 76
  "<select_easyBindings_5F_syntax_38>",// Index 77
  "<select_easyBindings_5F_syntax_39>",// Index 78
  "<select_easyBindings_5F_syntax_40>",// Index 79
  "<select_easyBindings_5F_syntax_41>",// Index 80
  "<select_easyBindings_5F_syntax_42>",// Index 81
  "<select_easyBindings_5F_syntax_43>",// Index 82
  "<select_easyBindings_5F_syntax_44>",// Index 83
  "<select_easyBindings_5F_syntax_45>",// Index 84
  "<select_easyBindings_5F_syntax_46>",// Index 85
  "<select_easyBindings_5F_syntax_47>",// Index 86
  "<select_easyBindings_5F_syntax_48>",// Index 87
  "<select_easyBindings_5F_syntax_49>",// Index 88
  "<select_easyBindings_5F_syntax_50>",// Index 89
  "<select_easyBindings_5F_syntax_51>",// Index 90
  "<select_easyBindings_5F_syntax_52>",// Index 91
  "<select_easyBindings_5F_syntax_53>",// Index 92
  "<select_easyBindings_5F_syntax_54>",// Index 93
  "<select_easyBindings_5F_syntax_55>",// Index 94
  "<select_easyBindings_5F_syntax_56>",// Index 95
  "<select_easyBindings_5F_syntax_57>",// Index 96
  "<select_easyBindings_5F_syntax_58>",// Index 97
  "<select_easyBindings_5F_syntax_59>",// Index 98
  "<select_easyBindings_5F_syntax_60>",// Index 99
  "<select_easyBindings_5F_syntax_61>",// Index 100
  "<select_easyBindings_5F_syntax_62>",// Index 101
  "<select_easyBindings_5F_syntax_63>",// Index 102
  "<select_easyBindings_5F_syntax_64>",// Index 103
  "<select_easyBindings_5F_syntax_65>",// Index 104
  "<select_easyBindings_5F_syntax_66>",// Index 105
  "<select_easyBindings_5F_syntax_67>",// Index 106
  "<select_easyBindings_5F_syntax_68>",// Index 107
  "<select_easyBindings_5F_syntax_69>",// Index 108
  "<select_easyBindings_5F_syntax_70>",// Index 109
  "<select_easyBindings_5F_syntax_71>",// Index 110
  "<select_easyBindings_5F_syntax_72>",// Index 111
  "<select_easyBindings_5F_syntax_73>",// Index 112
  "<select_easyBindings_5F_syntax_74>",// Index 113
  "<select_easyBindings_5F_syntax_75>",// Index 114
  "<select_easyBindings_5F_syntax_76>",// Index 115
  "<select_easyBindings_5F_syntax_77>",// Index 116
  "<select_easyBindings_5F_syntax_78>",// Index 117
  "<select_easyBindings_5F_syntax_79>",// Index 118
  "<select_easyBindings_5F_syntax_80>",// Index 119
  "<select_easyBindings_5F_syntax_81>",// Index 120
  "<select_easyBindings_5F_syntax_82>",// Index 121
  "<select_easyBindings_5F_syntax_83>",// Index 122
  "<select_easyBindings_5F_syntax_84>",// Index 123
  "<select_easyBindings_5F_syntax_85>",// Index 124
  "<select_easyBindings_5F_syntax_86>",// Index 125
  "<select_easyBindings_5F_syntax_87>",// Index 126
  "<select_easyBindings_5F_syntax_88>",// Index 127
  "<select_easyBindings_5F_syntax_89>",// Index 128
  "<select_easyBindings_5F_syntax_90>",// Index 129
  "<select_easyBindings_5F_syntax_91>",// Index 130
  "<select_easyBindings_5F_syntax_92>",// Index 131
  "<select_easyBindings_5F_syntax_93>",// Index 132
  "<select_easyBindings_5F_syntax_94>",// Index 133
  "<select_easyBindings_5F_syntax_95>",// Index 134
  "<select_easyBindings_5F_syntax_96>",// Index 135
  "<select_easyBindings_5F_syntax_97>",// Index 136
  "<>"// Index 137
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_easyBindings_grammar [] = {
// State S0 (index = 0)
  Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S1 (index = 41)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (32)
, BOTTOM_UP_END
// State S2 (index = 44)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (33)
, BOTTOM_UP_END
// State S3 (index = 47)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (82)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (82)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S4 (index = 54)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (34)
, BOTTOM_UP_END
// State S5 (index = 57)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (35)
, BOTTOM_UP_END
// State S6 (index = 60)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END
// State S7 (index = 63)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (37)
, BOTTOM_UP_END
// State S8 (index = 66)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (38)
, BOTTOM_UP_END
// State S9 (index = 69)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (182)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (203)
, BOTTOM_UP_END
// State S10 (index = 74)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (39)
, BOTTOM_UP_END
// State S11 (index = 77)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (40)
, BOTTOM_UP_END
// State S12 (index = 80)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (41)
, BOTTOM_UP_END
// State S13 (index = 83)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END
// State S14 (index = 86)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (43)
, BOTTOM_UP_END
// State S15 (index = 89)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S16 (index = 92)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S17 (index = 133)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S18 (index = 174)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S19 (index = 215)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S20 (index = 256)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S21 (index = 297)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S22 (index = 338)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S23 (index = 379)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S24 (index = 420)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S25 (index = 461)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S26 (index = 502)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S27 (index = 543)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S28 (index = 584)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S29 (index = 587)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (56)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (83)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END
// State S30 (index = 594)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END
// State S31 (index = 597)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_SHIFT (59)
, BOTTOM_UP_END
// State S32 (index = 600)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (60)
, BOTTOM_UP_END
// State S33 (index = 603)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S34 (index = 634)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (85)
, BOTTOM_UP_END
// State S35 (index = 637)
, Lexique_easyBindings_5F_lexique::kToken_class, BOTTOM_UP_SHIFT (86)
, Lexique_easyBindings_5F_lexique::kToken_struct, BOTTOM_UP_SHIFT (87)
, BOTTOM_UP_END
// State S36 (index = 642)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (89)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (90)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (91)
, BOTTOM_UP_END
// State S37 (index = 649)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (331)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (93)
, BOTTOM_UP_END
// State S38 (index = 654)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (95)
, BOTTOM_UP_END
// State S39 (index = 657)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (96)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_REDUCE (192)
, BOTTOM_UP_END
// State S40 (index = 662)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (98)
, BOTTOM_UP_END
// State S41 (index = 665)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (99)
, BOTTOM_UP_END
// State S42 (index = 668)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (100)
, BOTTOM_UP_END
// State S43 (index = 671)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (101)
, BOTTOM_UP_END
// State S44 (index = 674)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S45 (index = 677)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S46 (index = 680)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S47 (index = 683)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (67)
, BOTTOM_UP_END
// State S48 (index = 686)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (65)
, BOTTOM_UP_END
// State S49 (index = 689)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END
// State S50 (index = 692)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S51 (index = 695)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END
// State S52 (index = 698)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END
// State S53 (index = 701)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S54 (index = 704)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S55 (index = 707)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END
// State S56 (index = 710)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (84)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (84)
, BOTTOM_UP_END
// State S57 (index = 715)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_SHIFT (102)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END
// State S58 (index = 720)
, Lexique_easyBindings_5F_lexique::kToken_class, BOTTOM_UP_SHIFT (104)
, BOTTOM_UP_END
// State S59 (index = 723)
, Lexique_easyBindings_5F_lexique::kToken_class, BOTTOM_UP_SHIFT (105)
, BOTTOM_UP_END
// State S60 (index = 726)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_SHIFT (1)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (81)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (5)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_SHIFT (6)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (7)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_SHIFT (8)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_SHIFT (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (183)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_SHIFT (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_SHIFT (11)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (12)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (13)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (14)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (204)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S61 (index = 767)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (107)
, BOTTOM_UP_END
// State S62 (index = 770)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (108)
, BOTTOM_UP_END
// State S63 (index = 773)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (109)
, BOTTOM_UP_END
// State S64 (index = 776)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (105)
, BOTTOM_UP_END
// State S65 (index = 779)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (108)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (110)
, Lexique_easyBindings_5F_lexique::kToken_proxy, BOTTOM_UP_REDUCE (137)
, BOTTOM_UP_END
// State S66 (index = 786)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
// State S67 (index = 789)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (134)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (113)
, Lexique_easyBindings_5F_lexique::kToken_proxy, BOTTOM_UP_REDUCE (136)
, BOTTOM_UP_END
// State S68 (index = 796)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (115)
, BOTTOM_UP_END
// State S69 (index = 799)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (116)
, BOTTOM_UP_END
// State S70 (index = 802)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (117)
, BOTTOM_UP_END
// State S71 (index = 805)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (118)
, BOTTOM_UP_END
// State S72 (index = 808)
, Lexique_easyBindings_5F_lexique::kToken_viewName, BOTTOM_UP_SHIFT (119)
, BOTTOM_UP_END
// State S73 (index = 811)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S74 (index = 814)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S75 (index = 845)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S76 (index = 876)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S77 (index = 907)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S78 (index = 938)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S79 (index = 969)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S80 (index = 1000)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S81 (index = 1031)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (72)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_SHIFT (69)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S82 (index = 1062)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (129)
, BOTTOM_UP_END
// State S83 (index = 1065)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (130)
, BOTTOM_UP_END
// State S84 (index = 1068)
, Lexique_easyBindings_5F_lexique::kToken_proxy, BOTTOM_UP_SHIFT (131)
, BOTTOM_UP_END
// State S85 (index = 1071)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (4)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S86 (index = 1112)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (240)
, BOTTOM_UP_END
// State S87 (index = 1115)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (241)
, BOTTOM_UP_END
// State S88 (index = 1118)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (132)
, BOTTOM_UP_END
// State S89 (index = 1121)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (116)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END
// State S90 (index = 1126)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (133)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END
// State S91 (index = 1131)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (137)
, BOTTOM_UP_END
// State S92 (index = 1134)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (138)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S93 (index = 1139)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (332)
, BOTTOM_UP_END
// State S94 (index = 1142)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (140)
, BOTTOM_UP_END
// State S95 (index = 1145)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (141)
, BOTTOM_UP_END
// State S96 (index = 1148)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (142)
, BOTTOM_UP_END
// State S97 (index = 1151)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (143)
, BOTTOM_UP_END
// State S98 (index = 1154)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (31)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
// State S99 (index = 1195)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (144)
, BOTTOM_UP_END
// State S100 (index = 1198)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (146)
, BOTTOM_UP_END
// State S101 (index = 1201)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (144)
, BOTTOM_UP_END
// State S102 (index = 1204)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END
// State S103 (index = 1207)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_SHIFT (148)
, BOTTOM_UP_END
// State S104 (index = 1210)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (149)
, BOTTOM_UP_END
// State S105 (index = 1213)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (150)
, BOTTOM_UP_END
// State S106 (index = 1216)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S107 (index = 1219)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (151)
, BOTTOM_UP_END
// State S108 (index = 1222)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (152)
, BOTTOM_UP_END
// State S109 (index = 1225)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (153)
, BOTTOM_UP_END
// State S110 (index = 1228)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (108)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (110)
, BOTTOM_UP_END
// State S111 (index = 1233)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (155)
, BOTTOM_UP_END
// State S112 (index = 1236)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (156)
, BOTTOM_UP_END
// State S113 (index = 1239)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (134)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END
// State S114 (index = 1244)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (158)
, BOTTOM_UP_END
// State S115 (index = 1247)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (159)
, BOTTOM_UP_END
// State S116 (index = 1250)
, Lexique_easyBindings_5F_lexique::kToken_calledBy, BOTTOM_UP_SHIFT (160)
, BOTTOM_UP_END
// State S117 (index = 1253)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (161)
, BOTTOM_UP_END
// State S118 (index = 1256)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END
// State S119 (index = 1259)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (163)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (164)
, BOTTOM_UP_END
// State S120 (index = 1264)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (165)
, BOTTOM_UP_END
// State S121 (index = 1267)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (80)
, BOTTOM_UP_END
// State S122 (index = 1270)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (77)
, BOTTOM_UP_END
// State S123 (index = 1273)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (79)
, BOTTOM_UP_END
// State S124 (index = 1276)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S125 (index = 1279)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (78)
, BOTTOM_UP_END
// State S126 (index = 1282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
// State S127 (index = 1285)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (76)
, BOTTOM_UP_END
// State S128 (index = 1288)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (73)
, BOTTOM_UP_END
// State S129 (index = 1291)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (2)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S130 (index = 1332)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (166)
, BOTTOM_UP_END
// State S131 (index = 1335)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (167)
, BOTTOM_UP_END
// State S132 (index = 1338)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (168)
, BOTTOM_UP_END
// State S133 (index = 1341)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (121)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S134 (index = 1346)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (169)
, BOTTOM_UP_END
// State S135 (index = 1349)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (170)
, BOTTOM_UP_END
// State S136 (index = 1352)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (171)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (118)
, BOTTOM_UP_END
// State S137 (index = 1357)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (115)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (115)
, BOTTOM_UP_END
// State S138 (index = 1362)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (89)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (90)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (91)
, BOTTOM_UP_END
// State S139 (index = 1369)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (174)
, BOTTOM_UP_END
// State S140 (index = 1372)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (175)
, BOTTOM_UP_END
// State S141 (index = 1375)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (176)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (177)
, BOTTOM_UP_END
// State S142 (index = 1380)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_REDUCE (193)
, BOTTOM_UP_END
// State S143 (index = 1383)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (179)
, BOTTOM_UP_END
// State S144 (index = 1386)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (180)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (218)
, BOTTOM_UP_END
// State S145 (index = 1391)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (182)
, BOTTOM_UP_END
// State S146 (index = 1394)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (183)
, BOTTOM_UP_END
// State S147 (index = 1397)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (184)
, BOTTOM_UP_END
// State S148 (index = 1400)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (185)
, BOTTOM_UP_END
// State S149 (index = 1403)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (184)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (184)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (184)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (184)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (184)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (184)
, BOTTOM_UP_END
// State S150 (index = 1418)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (144)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (205)
, BOTTOM_UP_END
// State S151 (index = 1435)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (190)
, BOTTOM_UP_END
// State S152 (index = 1438)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (191)
, BOTTOM_UP_END
// State S153 (index = 1441)
, Lexique_easyBindings_5F_lexique::kToken_dependsFrom, BOTTOM_UP_SHIFT (192)
, BOTTOM_UP_END
// State S154 (index = 1444)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S155 (index = 1447)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (193)
, BOTTOM_UP_END
// State S156 (index = 1450)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (194)
, BOTTOM_UP_END
// State S157 (index = 1453)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (135)
, BOTTOM_UP_END
// State S158 (index = 1456)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (195)
, BOTTOM_UP_END
// State S159 (index = 1459)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (196)
, BOTTOM_UP_END
// State S160 (index = 1462)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (197)
, BOTTOM_UP_END
// State S161 (index = 1465)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (198)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (199)
, BOTTOM_UP_END
// State S162 (index = 1470)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S163 (index = 1487)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (278)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (278)
, Lexique_easyBindings_5F_lexique::kToken_withVScroller, BOTTOM_UP_SHIFT (209)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (278)
, BOTTOM_UP_END
// State S164 (index = 1496)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S165 (index = 1515)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (32)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S166 (index = 1554)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (214)
, BOTTOM_UP_END
// State S167 (index = 1557)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (215)
, BOTTOM_UP_END
// State S168 (index = 1560)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (39)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (39)
, BOTTOM_UP_END
// State S169 (index = 1601)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (120)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END
// State S170 (index = 1606)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (117)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END
// State S171 (index = 1611)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (133)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END
// State S172 (index = 1616)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S173 (index = 1619)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (138)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S174 (index = 1624)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (10)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S175 (index = 1665)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (218)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (333)
, BOTTOM_UP_END
// State S176 (index = 1670)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (175)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (175)
, BOTTOM_UP_END
// State S177 (index = 1675)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (174)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (174)
, BOTTOM_UP_END
// State S178 (index = 1680)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (220)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (221)
, BOTTOM_UP_END
// State S179 (index = 1685)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (223)
, BOTTOM_UP_END
// State S180 (index = 1688)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (224)
, BOTTOM_UP_END
// State S181 (index = 1691)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (225)
, BOTTOM_UP_END
// State S182 (index = 1694)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (33)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S183 (index = 1735)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (226)
, BOTTOM_UP_END
// State S184 (index = 1738)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (34)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S185 (index = 1779)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (227)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (87)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (87)
, BOTTOM_UP_END
// State S186 (index = 1786)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (229)
, BOTTOM_UP_END
// State S187 (index = 1789)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S188 (index = 1802)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (206)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (206)
, BOTTOM_UP_END
// State S189 (index = 1817)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (236)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (207)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (207)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (207)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (207)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (207)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (207)
, BOTTOM_UP_END
// State S190 (index = 1832)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (238)
, BOTTOM_UP_END
// State S191 (index = 1835)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (239)
, BOTTOM_UP_END
// State S192 (index = 1838)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S193 (index = 1855)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (112)
, Lexique_easyBindings_5F_lexique::kToken_dependsFrom, BOTTOM_UP_SHIFT (250)
, Lexique_easyBindings_5F_lexique::kToken_inverse, BOTTOM_UP_SHIFT (251)
, BOTTOM_UP_END
// State S194 (index = 1862)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (253)
, BOTTOM_UP_END
// State S195 (index = 1865)
, Lexique_easyBindings_5F_lexique::kToken_default, BOTTOM_UP_SHIFT (254)
, BOTTOM_UP_END
// State S196 (index = 1868)
, Lexique_easyBindings_5F_lexique::kToken_default, BOTTOM_UP_SHIFT (255)
, BOTTOM_UP_END
// State S197 (index = 1871)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (256)
, BOTTOM_UP_END
// State S198 (index = 1874)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (169)
, BOTTOM_UP_END
// State S199 (index = 1877)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (168)
, BOTTOM_UP_END
// State S200 (index = 1880)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (257)
, BOTTOM_UP_END
// State S201 (index = 1883)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S202 (index = 1900)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S203 (index = 1923)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (267)
, BOTTOM_UP_END
// State S204 (index = 1926)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (233)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (268)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (269)
, BOTTOM_UP_END
// State S205 (index = 1933)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S206 (index = 1956)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (272)
, BOTTOM_UP_END
// State S207 (index = 1959)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (273)
, BOTTOM_UP_END
// State S208 (index = 1962)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (38)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S209 (index = 1967)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (279)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (279)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (279)
, BOTTOM_UP_END
// State S210 (index = 1974)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (280)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (280)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (274)
, BOTTOM_UP_END
// State S211 (index = 1981)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (276)
, BOTTOM_UP_END
// State S212 (index = 1984)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (278)
, BOTTOM_UP_END
// State S213 (index = 1987)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (44)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S214 (index = 2004)
, Lexique_easyBindings_5F_lexique::kToken_dependsFrom, BOTTOM_UP_SHIFT (279)
, BOTTOM_UP_END
// State S215 (index = 2007)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (280)
, BOTTOM_UP_END
// State S216 (index = 2010)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (171)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (118)
, BOTTOM_UP_END
// State S217 (index = 2015)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (114)
, BOTTOM_UP_END
// State S218 (index = 2018)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (282)
, BOTTOM_UP_END
// State S219 (index = 2021)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (283)
, BOTTOM_UP_END
// State S220 (index = 2024)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (176)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (176)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (176)
, BOTTOM_UP_END
// State S221 (index = 2031)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (177)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (177)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (177)
, BOTTOM_UP_END
// State S222 (index = 2038)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (172)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (284)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (172)
, BOTTOM_UP_END
// State S223 (index = 2045)
, Lexique_easyBindings_5F_lexique::kToken_viewName, BOTTOM_UP_SHIFT (286)
, BOTTOM_UP_END
// State S224 (index = 2048)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_SHIFT (287)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (288)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (289)
, Lexique_easyBindings_5F_lexique::kToken_menuItem, BOTTOM_UP_SHIFT (290)
, BOTTOM_UP_END
// State S225 (index = 2057)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (36)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (36)
, BOTTOM_UP_END
// State S226 (index = 2080)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (292)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (335)
, BOTTOM_UP_END
// State S227 (index = 2085)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (294)
, BOTTOM_UP_END
// State S228 (index = 2088)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (295)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END
// State S229 (index = 2093)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (185)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (185)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (185)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (185)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (185)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (185)
, BOTTOM_UP_END
// State S230 (index = 2106)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S231 (index = 2119)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S232 (index = 2132)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S233 (index = 2145)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S234 (index = 2158)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (186)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (230)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (231)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (232)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (233)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (234)
, BOTTOM_UP_END
// State S235 (index = 2171)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (302)
, BOTTOM_UP_END
// State S236 (index = 2174)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (303)
, BOTTOM_UP_END
// State S237 (index = 2177)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S238 (index = 2190)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (7)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S239 (index = 2229)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (310)
, BOTTOM_UP_END
// State S240 (index = 2232)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (311)
, BOTTOM_UP_END
// State S241 (index = 2235)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (312)
, BOTTOM_UP_END
// State S242 (index = 2238)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (313)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (255)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (255)
, BOTTOM_UP_END
// State S243 (index = 2283)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (315)
, BOTTOM_UP_END
// State S244 (index = 2286)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (246)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (246)
, BOTTOM_UP_END
// State S245 (index = 2329)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (247)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (247)
, BOTTOM_UP_END
// State S246 (index = 2372)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (248)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (248)
, BOTTOM_UP_END
// State S247 (index = 2415)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (316)
, BOTTOM_UP_END
// State S248 (index = 2418)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (102)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (317)
, BOTTOM_UP_END
// State S249 (index = 2423)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (40)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END
// State S250 (index = 2466)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (319)
, BOTTOM_UP_END
// State S251 (index = 2469)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (320)
, BOTTOM_UP_END
// State S252 (index = 2472)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (321)
, BOTTOM_UP_END
// State S253 (index = 2475)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S254 (index = 2492)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S255 (index = 2509)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S256 (index = 2526)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (25)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (25)
, BOTTOM_UP_END
// State S257 (index = 2557)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (334)
, BOTTOM_UP_END
// State S258 (index = 2560)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (335)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (236)
, BOTTOM_UP_END
// State S259 (index = 2581)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S260 (index = 2604)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (24)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S261 (index = 2645)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S262 (index = 2668)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S263 (index = 2685)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (340)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (156)
, BOTTOM_UP_END
// State S264 (index = 2710)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_SHIFT (342)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_SHIFT (343)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_SHIFT (344)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_SHIFT (345)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_SHIFT (346)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (347)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (158)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (158)
, BOTTOM_UP_END
// State S265 (index = 2747)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (349)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (350)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (165)
, BOTTOM_UP_END
// State S266 (index = 2788)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (21)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S267 (index = 2829)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S268 (index = 2846)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (353)
, BOTTOM_UP_END
// State S269 (index = 2849)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (354)
, BOTTOM_UP_END
// State S270 (index = 2852)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (355)
, BOTTOM_UP_END
// State S271 (index = 2855)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S272 (index = 2872)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (357)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (238)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (238)
, BOTTOM_UP_END
// State S273 (index = 2891)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (37)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S274 (index = 2924)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_SHIFT (359)
, BOTTOM_UP_END
// State S275 (index = 2927)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S276 (index = 2946)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (361)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (302)
, BOTTOM_UP_END
// State S277 (index = 2951)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S278 (index = 2970)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S279 (index = 2991)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S280 (index = 3008)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (378)
, BOTTOM_UP_END
// State S281 (index = 3011)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END
// State S282 (index = 3014)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (218)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (333)
, BOTTOM_UP_END
// State S283 (index = 3019)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (52)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S284 (index = 3060)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (176)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (177)
, BOTTOM_UP_END
// State S285 (index = 3065)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (178)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (381)
, BOTTOM_UP_END
// State S286 (index = 3070)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (383)
, BOTTOM_UP_END
// State S287 (index = 3073)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (224)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (224)
, BOTTOM_UP_END
// State S288 (index = 3078)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (225)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (225)
, BOTTOM_UP_END
// State S289 (index = 3083)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (222)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (222)
, BOTTOM_UP_END
// State S290 (index = 3088)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (223)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (223)
, BOTTOM_UP_END
// State S291 (index = 3093)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (384)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (220)
, BOTTOM_UP_END
// State S292 (index = 3098)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (386)
, BOTTOM_UP_END
// State S293 (index = 3101)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (387)
, BOTTOM_UP_END
// State S294 (index = 3104)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (388)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
// State S295 (index = 3109)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (390)
, BOTTOM_UP_END
// State S296 (index = 3112)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (391)
, BOTTOM_UP_END
// State S297 (index = 3115)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (190)
, BOTTOM_UP_END
// State S298 (index = 3118)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (187)
, BOTTOM_UP_END
// State S299 (index = 3121)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (188)
, BOTTOM_UP_END
// State S300 (index = 3124)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (189)
, BOTTOM_UP_END
// State S301 (index = 3127)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (191)
, BOTTOM_UP_END
// State S302 (index = 3130)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (28)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S303 (index = 3171)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (208)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (208)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (208)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (208)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (208)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (208)
, BOTTOM_UP_END
// State S304 (index = 3184)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S305 (index = 3197)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S306 (index = 3210)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S307 (index = 3223)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S308 (index = 3236)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (209)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (304)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (305)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (306)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (307)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (308)
, BOTTOM_UP_END
// State S309 (index = 3249)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (397)
, BOTTOM_UP_END
// State S310 (index = 3252)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (398)
, BOTTOM_UP_END
// State S311 (index = 3255)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (399)
, BOTTOM_UP_END
// State S312 (index = 3258)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (400)
, Lexique_easyBindings_5F_lexique::kToken_one, BOTTOM_UP_SHIFT (401)
, BOTTOM_UP_END
// State S313 (index = 3263)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (403)
, BOTTOM_UP_END
// State S314 (index = 3266)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (243)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (243)
, BOTTOM_UP_END
// State S315 (index = 3309)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (404)
, BOTTOM_UP_END
// State S316 (index = 3312)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (405)
, BOTTOM_UP_END
// State S317 (index = 3315)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S318 (index = 3332)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (407)
, BOTTOM_UP_END
// State S319 (index = 3335)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (408)
, BOTTOM_UP_END
// State S320 (index = 3338)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (409)
, BOTTOM_UP_END
// State S321 (index = 3341)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (9)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S322 (index = 3378)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (143)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (143)
, BOTTOM_UP_END
// State S323 (index = 3421)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (144)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (144)
, BOTTOM_UP_END
// State S324 (index = 3464)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (410)
, BOTTOM_UP_END
// State S325 (index = 3467)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (138)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (138)
, BOTTOM_UP_END
// State S326 (index = 3510)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (139)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (139)
, BOTTOM_UP_END
// State S327 (index = 3553)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (140)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (140)
, BOTTOM_UP_END
// State S328 (index = 3596)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (411)
, BOTTOM_UP_END
// State S329 (index = 3599)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (142)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (142)
, BOTTOM_UP_END
// State S330 (index = 3642)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (412)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (122)
, BOTTOM_UP_END
// State S331 (index = 3647)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (16)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S332 (index = 3690)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (414)
, BOTTOM_UP_END
// State S333 (index = 3693)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (415)
, BOTTOM_UP_END
// State S334 (index = 3696)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (170)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (416)
, BOTTOM_UP_END
// State S335 (index = 3701)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S336 (index = 3718)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (419)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (68)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END
// State S337 (index = 3737)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (422)
, BOTTOM_UP_END
// State S338 (index = 3740)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (22)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S339 (index = 3781)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (230)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (230)
, BOTTOM_UP_END
// State S340 (index = 3786)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S341 (index = 3809)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (18)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S342 (index = 3832)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S343 (index = 3855)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S344 (index = 3878)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S345 (index = 3901)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S346 (index = 3924)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S347 (index = 3947)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S348 (index = 3970)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (19)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S349 (index = 3995)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S350 (index = 4018)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S351 (index = 4041)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (20)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S352 (index = 4078)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (227)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (227)
, BOTTOM_UP_END
// State S353 (index = 4083)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (234)
, BOTTOM_UP_END
// State S354 (index = 4086)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (235)
, BOTTOM_UP_END
// State S355 (index = 4089)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S356 (index = 4106)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (229)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (229)
, BOTTOM_UP_END
// State S357 (index = 4111)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (433)
, BOTTOM_UP_END
// State S358 (index = 4114)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S359 (index = 4131)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (435)
, BOTTOM_UP_END
// State S360 (index = 4134)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (436)
, BOTTOM_UP_END
// State S361 (index = 4137)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (437)
, BOTTOM_UP_END
// State S362 (index = 4140)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (438)
, BOTTOM_UP_END
// State S363 (index = 4143)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (283)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (283)
, BOTTOM_UP_END
// State S364 (index = 4160)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (276)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (291)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (291)
, BOTTOM_UP_END
// State S365 (index = 4191)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (323)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (323)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (323)
, Lexique_easyBindings_5F_lexique::kToken_withVScroller, BOTTOM_UP_SHIFT (441)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (323)
, BOTTOM_UP_END
// State S366 (index = 4202)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S367 (index = 4221)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (444)
, BOTTOM_UP_END
// State S368 (index = 4224)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (445)
, BOTTOM_UP_END
// State S369 (index = 4227)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S370 (index = 4248)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S371 (index = 4269)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S372 (index = 4290)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (46)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S373 (index = 4315)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (449)
, BOTTOM_UP_END
// State S374 (index = 4318)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S375 (index = 4339)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (47)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S376 (index = 4364)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S377 (index = 4367)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (106)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (451)
, BOTTOM_UP_END
// State S378 (index = 4372)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (453)
, BOTTOM_UP_END
// State S379 (index = 4375)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (334)
, BOTTOM_UP_END
// State S380 (index = 4378)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (220)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (221)
, BOTTOM_UP_END
// State S381 (index = 4383)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (455)
, BOTTOM_UP_END
// State S382 (index = 4386)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (456)
, BOTTOM_UP_END
// State S383 (index = 4389)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S384 (index = 4418)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (466)
, BOTTOM_UP_END
// State S385 (index = 4421)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (219)
, BOTTOM_UP_END
// State S386 (index = 4424)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (467)
, BOTTOM_UP_END
// State S387 (index = 4427)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (53)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S388 (index = 4468)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (468)
, BOTTOM_UP_END
// State S389 (index = 4471)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (469)
, BOTTOM_UP_END
// State S390 (index = 4474)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END
// State S391 (index = 4477)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S392 (index = 4508)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (213)
, BOTTOM_UP_END
// State S393 (index = 4511)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (210)
, BOTTOM_UP_END
// State S394 (index = 4514)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (211)
, BOTTOM_UP_END
// State S395 (index = 4517)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (212)
, BOTTOM_UP_END
// State S396 (index = 4520)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (214)
, BOTTOM_UP_END
// State S397 (index = 4523)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (215)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (481)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (482)
, BOTTOM_UP_END
// State S398 (index = 4530)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (485)
, BOTTOM_UP_END
// State S399 (index = 4533)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (486)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (263)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (263)
, BOTTOM_UP_END
// State S400 (index = 4578)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (488)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (267)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (267)
, BOTTOM_UP_END
// State S401 (index = 4623)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (490)
, BOTTOM_UP_END
// State S402 (index = 4626)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (245)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (245)
, BOTTOM_UP_END
// State S403 (index = 4669)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (491)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (257)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (257)
, BOTTOM_UP_END
// State S404 (index = 4714)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (493)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (250)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (250)
, BOTTOM_UP_END
// State S405 (index = 4759)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (495)
, BOTTOM_UP_END
// State S406 (index = 4762)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (102)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (317)
, BOTTOM_UP_END
// State S407 (index = 4767)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (6)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S408 (index = 4806)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (497)
, BOTTOM_UP_END
// State S409 (index = 4809)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (110)
, BOTTOM_UP_END
// State S410 (index = 4812)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (498)
, BOTTOM_UP_END
// State S411 (index = 4815)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (141)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (141)
, BOTTOM_UP_END
// State S412 (index = 4858)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (499)
, BOTTOM_UP_END
// State S413 (index = 4861)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (500)
, BOTTOM_UP_END
// State S414 (index = 4864)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (13)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S415 (index = 4901)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (14)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S416 (index = 4938)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S417 (index = 4961)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (502)
, BOTTOM_UP_END
// State S418 (index = 4964)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (335)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (236)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (236)
, BOTTOM_UP_END
// State S419 (index = 4985)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (504)
, BOTTOM_UP_END
// State S420 (index = 4988)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S421 (index = 5005)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (1)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S422 (index = 5022)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (23)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S423 (index = 5063)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (340)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (156)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (156)
, BOTTOM_UP_END
// State S424 (index = 5088)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (159)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (159)
, BOTTOM_UP_END
// State S425 (index = 5113)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (160)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (160)
, BOTTOM_UP_END
// State S426 (index = 5138)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (161)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (161)
, BOTTOM_UP_END
// State S427 (index = 5163)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (162)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (162)
, BOTTOM_UP_END
// State S428 (index = 5188)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (163)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (163)
, BOTTOM_UP_END
// State S429 (index = 5213)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (164)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (164)
, BOTTOM_UP_END
// State S430 (index = 5238)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (349)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (350)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (165)
, BOTTOM_UP_END
// State S431 (index = 5279)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (349)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (350)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (165)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (165)
, BOTTOM_UP_END
// State S432 (index = 5320)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (228)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (228)
, BOTTOM_UP_END
// State S433 (index = 5325)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (239)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (239)
, BOTTOM_UP_END
// State S434 (index = 5342)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (232)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (232)
, BOTTOM_UP_END
// State S435 (index = 5347)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (509)
, BOTTOM_UP_END
// State S436 (index = 5350)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S437 (index = 5371)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (511)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_SHIFT (512)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (513)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (514)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (515)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (516)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (517)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (518)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (519)
, Lexique_easyBindings_5F_lexique::kToken_menuItem, BOTTOM_UP_SHIFT (520)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S438 (index = 5400)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_column, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_editableColumn, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_sortkey, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (49)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (49)
, BOTTOM_UP_END
// State S439 (index = 5449)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (292)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (292)
, BOTTOM_UP_END
// State S440 (index = 5478)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (523)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (293)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (293)
, BOTTOM_UP_END
// State S441 (index = 5507)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (324)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (324)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (324)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_REDUCE (324)
, BOTTOM_UP_END
// State S442 (index = 5516)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (325)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (325)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (325)
, Lexique_easyBindings_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (525)
, BOTTOM_UP_END
// State S443 (index = 5525)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (329)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (527)
, BOTTOM_UP_END
// State S444 (index = 5530)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S445 (index = 5551)
, Lexique_easyBindings_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (530)
, BOTTOM_UP_END
// State S446 (index = 5554)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (286)
, BOTTOM_UP_END
// State S447 (index = 5557)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (287)
, BOTTOM_UP_END
// State S448 (index = 5560)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (288)
, BOTTOM_UP_END
// State S449 (index = 5563)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (43)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S450 (index = 5596)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (290)
, BOTTOM_UP_END
// State S451 (index = 5599)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S452 (index = 5616)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (532)
, BOTTOM_UP_END
// State S453 (index = 5619)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (533)
, BOTTOM_UP_END
// State S454 (index = 5622)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (172)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (284)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (172)
, BOTTOM_UP_END
// State S455 (index = 5629)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (535)
, BOTTOM_UP_END
// State S456 (index = 5632)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (27)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S457 (index = 5673)
, Lexique_easyBindings_5F_lexique::kToken_proxy, BOTTOM_UP_REDUCE (137)
, BOTTOM_UP_END
// State S458 (index = 5676)
, Lexique_easyBindings_5F_lexique::kToken_proxy, BOTTOM_UP_REDUCE (136)
, BOTTOM_UP_END
// State S459 (index = 5679)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (536)
, BOTTOM_UP_END
// State S460 (index = 5682)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S461 (index = 5711)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S462 (index = 5740)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S463 (index = 5769)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S464 (index = 5798)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S465 (index = 5827)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (542)
, BOTTOM_UP_END
// State S466 (index = 5830)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (543)
, BOTTOM_UP_END
// State S467 (index = 5833)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (544)
, BOTTOM_UP_END
// State S468 (index = 5836)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (388)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
// State S469 (index = 5841)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_REDUCE (88)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END
// State S470 (index = 5846)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (546)
, BOTTOM_UP_END
// State S471 (index = 5849)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (272)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (547)
, BOTTOM_UP_END
// State S472 (index = 5854)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (549)
, BOTTOM_UP_END
// State S473 (index = 5857)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S474 (index = 5888)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S475 (index = 5919)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S476 (index = 5950)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S477 (index = 5981)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S478 (index = 6012)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S479 (index = 6043)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S480 (index = 6074)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (557)
, BOTTOM_UP_END
// State S481 (index = 6077)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (558)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (559)
, BOTTOM_UP_END
// State S482 (index = 6082)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (561)
, BOTTOM_UP_END
// State S483 (index = 6085)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (215)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (481)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (482)
, BOTTOM_UP_END
// State S484 (index = 6092)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (563)
, BOTTOM_UP_END
// State S485 (index = 6095)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (5)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S486 (index = 6134)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (564)
, BOTTOM_UP_END
// State S487 (index = 6137)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (244)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (244)
, BOTTOM_UP_END
// State S488 (index = 6180)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (565)
, Lexique_easyBindings_5F_lexique::kToken_all, BOTTOM_UP_SHIFT (566)
, BOTTOM_UP_END
// State S489 (index = 6185)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (266)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (266)
, BOTTOM_UP_END
// State S490 (index = 6228)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (567)
, BOTTOM_UP_END
// State S491 (index = 6231)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (568)
, Lexique_easyBindings_5F_lexique::kToken_all, BOTTOM_UP_SHIFT (569)
, Lexique_easyBindings_5F_lexique::kToken_none, BOTTOM_UP_SHIFT (570)
, Lexique_easyBindings_5F_lexique::kToken_one, BOTTOM_UP_SHIFT (571)
, BOTTOM_UP_END
// State S492 (index = 6240)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (256)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (256)
, BOTTOM_UP_END
// State S493 (index = 6283)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (573)
, Lexique_easyBindings_5F_lexique::kToken_all, BOTTOM_UP_SHIFT (574)
, Lexique_easyBindings_5F_lexique::kToken_none, BOTTOM_UP_SHIFT (575)
, BOTTOM_UP_END
// State S494 (index = 6290)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (242)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (242)
, BOTTOM_UP_END
// State S495 (index = 6333)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (577)
, BOTTOM_UP_END
// State S496 (index = 6336)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (103)
, BOTTOM_UP_END
// State S497 (index = 6339)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (111)
, BOTTOM_UP_END
// State S498 (index = 6342)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (145)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (145)
, BOTTOM_UP_END
// State S499 (index = 6385)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (578)
, BOTTOM_UP_END
// State S500 (index = 6388)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (579)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (580)
, BOTTOM_UP_END
// State S501 (index = 6393)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (171)
, BOTTOM_UP_END
// State S502 (index = 6396)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (26)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S503 (index = 6435)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (237)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (237)
, BOTTOM_UP_END
// State S504 (index = 6454)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (582)
, BOTTOM_UP_END
// State S505 (index = 6457)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (231)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (231)
, BOTTOM_UP_END
// State S506 (index = 6462)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (157)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (157)
, BOTTOM_UP_END
// State S507 (index = 6485)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (166)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (166)
, BOTTOM_UP_END
// State S508 (index = 6522)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (167)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (167)
, BOTTOM_UP_END
// State S509 (index = 6559)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (281)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (281)
, BOTTOM_UP_END
// State S510 (index = 6564)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (583)
, BOTTOM_UP_END
// State S511 (index = 6567)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (314)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (314)
, BOTTOM_UP_END
// State S512 (index = 6572)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (584)
, BOTTOM_UP_END
// State S513 (index = 6575)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (585)
, BOTTOM_UP_END
// State S514 (index = 6578)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (310)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (310)
, BOTTOM_UP_END
// State S515 (index = 6583)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (311)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (311)
, BOTTOM_UP_END
// State S516 (index = 6588)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (312)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (312)
, BOTTOM_UP_END
// State S517 (index = 6593)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (586)
, BOTTOM_UP_END
// State S518 (index = 6596)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (587)
, BOTTOM_UP_END
// State S519 (index = 6599)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (588)
, BOTTOM_UP_END
// State S520 (index = 6602)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (589)
, BOTTOM_UP_END
// State S521 (index = 6605)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (306)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (306)
, BOTTOM_UP_END
// State S522 (index = 6610)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (590)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (304)
, BOTTOM_UP_END
// State S523 (index = 6615)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (592)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_REDUCE (295)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (295)
, Lexique_easyBindings_5F_lexique::kToken_outletArray, BOTTOM_UP_SHIFT (593)
, BOTTOM_UP_END
// State S524 (index = 6624)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (595)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (300)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (300)
, BOTTOM_UP_END
// State S525 (index = 6651)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_SHIFT (597)
, BOTTOM_UP_END
// State S526 (index = 6654)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S527 (index = 6673)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S528 (index = 6696)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (600)
, BOTTOM_UP_END
// State S529 (index = 6699)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (289)
, BOTTOM_UP_END
// State S530 (index = 6702)
, Lexique_easyBindings_5F_lexique::kToken_viewName, BOTTOM_UP_SHIFT (601)
, BOTTOM_UP_END
// State S531 (index = 6705)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (106)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (451)
, BOTTOM_UP_END
// State S532 (index = 6710)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (8)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S533 (index = 6749)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (603)
, BOTTOM_UP_END
// State S534 (index = 6752)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (173)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (173)
, BOTTOM_UP_END
// State S535 (index = 6757)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (604)
, BOTTOM_UP_END
// State S536 (index = 6760)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (605)
, BOTTOM_UP_END
// State S537 (index = 6763)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (199)
, BOTTOM_UP_END
// State S538 (index = 6766)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (197)
, BOTTOM_UP_END
// State S539 (index = 6769)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (196)
, BOTTOM_UP_END
// State S540 (index = 6772)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (198)
, BOTTOM_UP_END
// State S541 (index = 6775)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (195)
, BOTTOM_UP_END
// State S542 (index = 6778)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (30)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S543 (index = 6819)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_SHIFT (287)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (288)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (289)
, Lexique_easyBindings_5F_lexique::kToken_menuItem, BOTTOM_UP_SHIFT (290)
, BOTTOM_UP_END
// State S544 (index = 6828)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (292)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (335)
, BOTTOM_UP_END
// State S545 (index = 6833)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END
// State S546 (index = 6836)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (608)
, BOTTOM_UP_END
// State S547 (index = 6839)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (272)
, Lexique_easyBindings_5F_lexique::kToken__40_attribute, BOTTOM_UP_SHIFT (547)
, BOTTOM_UP_END
// State S548 (index = 6844)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (610)
, BOTTOM_UP_END
// State S549 (index = 6847)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (611)
, BOTTOM_UP_END
// State S550 (index = 6850)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (99)
, BOTTOM_UP_END
// State S551 (index = 6853)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END
// State S552 (index = 6856)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (96)
, BOTTOM_UP_END
// State S553 (index = 6859)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END
// State S554 (index = 6862)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (100)
, BOTTOM_UP_END
// State S555 (index = 6865)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (98)
, BOTTOM_UP_END
// State S556 (index = 6868)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (97)
, BOTTOM_UP_END
// State S557 (index = 6871)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (3)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S558 (index = 6912)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (149)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (149)
, BOTTOM_UP_END
// State S559 (index = 6917)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (148)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (148)
, BOTTOM_UP_END
// State S560 (index = 6922)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (612)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (613)
, BOTTOM_UP_END
// State S561 (index = 6927)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (144)
, BOTTOM_UP_END
// State S562 (index = 6930)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (217)
, BOTTOM_UP_END
// State S563 (index = 6933)
, Lexique_easyBindings_5F_lexique::kToken_include, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_mainxib, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_binding, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_extern, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_xcodeproject, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_autolayout, BOTTOM_UP_REDUCE (35)
, Lexique_easyBindings_5F_lexique::kToken_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S564 (index = 6974)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (264)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (264)
, BOTTOM_UP_END
// State S565 (index = 7017)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (268)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (268)
, BOTTOM_UP_END
// State S566 (index = 7060)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (616)
, BOTTOM_UP_END
// State S567 (index = 7063)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (265)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (265)
, BOTTOM_UP_END
// State S568 (index = 7106)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (262)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (262)
, BOTTOM_UP_END
// State S569 (index = 7149)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (617)
, BOTTOM_UP_END
// State S570 (index = 7152)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (261)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (261)
, BOTTOM_UP_END
// State S571 (index = 7195)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (618)
, BOTTOM_UP_END
// State S572 (index = 7198)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (258)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (258)
, BOTTOM_UP_END
// State S573 (index = 7241)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (252)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (252)
, BOTTOM_UP_END
// State S574 (index = 7284)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (619)
, BOTTOM_UP_END
// State S575 (index = 7287)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (254)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (254)
, BOTTOM_UP_END
// State S576 (index = 7330)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (251)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (251)
, BOTTOM_UP_END
// State S577 (index = 7373)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_default, BOTTOM_UP_SHIFT (620)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (270)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (270)
, BOTTOM_UP_END
// State S578 (index = 7418)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S579 (index = 7435)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (125)
, BOTTOM_UP_END
// State S580 (index = 7438)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_REDUCE (124)
, BOTTOM_UP_END
// State S581 (index = 7441)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (623)
, BOTTOM_UP_END
// State S582 (index = 7444)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S583 (index = 7461)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (42)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (42)
, BOTTOM_UP_END
// State S584 (index = 7494)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (307)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (307)
, BOTTOM_UP_END
// State S585 (index = 7499)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (315)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (315)
, BOTTOM_UP_END
// State S586 (index = 7504)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (313)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (313)
, BOTTOM_UP_END
// State S587 (index = 7509)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (625)
, BOTTOM_UP_END
// State S588 (index = 7512)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (309)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (309)
, BOTTOM_UP_END
// State S589 (index = 7517)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (317)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (317)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (626)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (317)
, BOTTOM_UP_END
// State S590 (index = 7526)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (628)
, BOTTOM_UP_END
// State S591 (index = 7529)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (303)
, BOTTOM_UP_END
// State S592 (index = 7532)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (629)
, BOTTOM_UP_END
// State S593 (index = 7535)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (630)
, BOTTOM_UP_END
// State S594 (index = 7538)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_SHIFT (631)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (298)
, BOTTOM_UP_END
// State S595 (index = 7543)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (211)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (282)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (282)
, BOTTOM_UP_END
// State S596 (index = 7562)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (48)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S597 (index = 7587)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (634)
, BOTTOM_UP_END
// State S598 (index = 7590)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (327)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (635)
, BOTTOM_UP_END
// State S599 (index = 7595)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (330)
, BOTTOM_UP_END
// State S600 (index = 7598)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S601 (index = 7619)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (638)
, BOTTOM_UP_END
// State S602 (index = 7622)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (107)
, BOTTOM_UP_END
// State S603 (index = 7625)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (15)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S604 (index = 7664)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (639)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (180)
, BOTTOM_UP_END
// State S605 (index = 7669)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (641)
, BOTTOM_UP_END
// State S606 (index = 7672)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (384)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (220)
, BOTTOM_UP_END
// State S607 (index = 7677)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (336)
, BOTTOM_UP_END
// State S608 (index = 7680)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (93)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_SHIFT (470)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (65)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (471)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (67)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_SHIFT (68)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_SHIFT (472)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S609 (index = 7711)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (273)
, BOTTOM_UP_END
// State S610 (index = 7714)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (644)
, BOTTOM_UP_END
// State S611 (index = 7717)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (29)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S612 (index = 7748)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (150)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (150)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (150)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (150)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (150)
, BOTTOM_UP_END
// State S613 (index = 7759)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (151)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (151)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (151)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (151)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (151)
, BOTTOM_UP_END
// State S614 (index = 7770)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (645)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (146)
, BOTTOM_UP_END
// State S615 (index = 7781)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (215)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (481)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_SHIFT (482)
, BOTTOM_UP_END
// State S616 (index = 7788)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (648)
, BOTTOM_UP_END
// State S617 (index = 7791)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (649)
, BOTTOM_UP_END
// State S618 (index = 7794)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (650)
, BOTTOM_UP_END
// State S619 (index = 7797)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (651)
, BOTTOM_UP_END
// State S620 (index = 7800)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S621 (index = 7817)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (249)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (249)
, BOTTOM_UP_END
// State S622 (index = 7860)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (412)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (122)
, BOTTOM_UP_END
// State S623 (index = 7865)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (654)
, BOTTOM_UP_END
// State S624 (index = 7868)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (655)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (70)
, BOTTOM_UP_END
// State S625 (index = 7873)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (657)
, BOTTOM_UP_END
// State S626 (index = 7876)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (319)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (658)
, BOTTOM_UP_END
// State S627 (index = 7881)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (321)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (321)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (660)
, BOTTOM_UP_END
// State S628 (index = 7888)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (662)
, BOTTOM_UP_END
// State S629 (index = 7891)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_REDUCE (296)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (296)
, BOTTOM_UP_END
// State S630 (index = 7896)
, Lexique_easyBindings_5F_lexique::kToken_configurator, BOTTOM_UP_REDUCE (297)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (297)
, BOTTOM_UP_END
// State S631 (index = 7901)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (663)
, BOTTOM_UP_END
// State S632 (index = 7904)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (664)
, BOTTOM_UP_END
// State S633 (index = 7907)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (226)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_SHIFT (201)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_SHIFT (202)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_SHIFT (203)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_SHIFT (204)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_SHIFT (205)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_SHIFT (206)
, BOTTOM_UP_END
// State S634 (index = 7924)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (666)
, BOTTOM_UP_END
// State S635 (index = 7927)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S636 (index = 7950)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (668)
, BOTTOM_UP_END
// State S637 (index = 7953)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (669)
, BOTTOM_UP_END
// State S638 (index = 7956)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (670)
, BOTTOM_UP_END
// State S639 (index = 7959)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (671)
, BOTTOM_UP_END
// State S640 (index = 7962)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (672)
, BOTTOM_UP_END
// State S641 (index = 7965)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (673)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (201)
, BOTTOM_UP_END
// State S642 (index = 7970)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (221)
, BOTTOM_UP_END
// State S643 (index = 7973)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (101)
, BOTTOM_UP_END
// State S644 (index = 7976)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (274)
, Lexique_easyBindings_5F_lexique::kToken_inverse, BOTTOM_UP_SHIFT (675)
, BOTTOM_UP_END
// State S645 (index = 7981)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_SHIFT (558)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (559)
, BOTTOM_UP_END
// State S646 (index = 7986)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (678)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (152)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (152)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (152)
, BOTTOM_UP_END
// State S647 (index = 7995)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (216)
, BOTTOM_UP_END
// State S648 (index = 7998)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (269)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (269)
, BOTTOM_UP_END
// State S649 (index = 8041)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (259)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (259)
, BOTTOM_UP_END
// State S650 (index = 8084)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (260)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (260)
, BOTTOM_UP_END
// State S651 (index = 8127)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (253)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (253)
, BOTTOM_UP_END
// State S652 (index = 8170)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__3D__3D_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (271)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (271)
, BOTTOM_UP_END
// State S653 (index = 8213)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (123)
, BOTTOM_UP_END
// State S654 (index = 8216)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (680)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (681)
, BOTTOM_UP_END
// State S655 (index = 8221)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (683)
, BOTTOM_UP_END
// State S656 (index = 8224)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (684)
, BOTTOM_UP_END
// State S657 (index = 8227)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (316)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (316)
, BOTTOM_UP_END
// State S658 (index = 8232)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (685)
, BOTTOM_UP_END
// State S659 (index = 8235)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (686)
, BOTTOM_UP_END
// State S660 (index = 8238)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (259)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (240)
, Lexique_easyBindings_5F_lexique::kToken_controllerName, BOTTOM_UP_SHIFT (241)
, Lexique_easyBindings_5F_lexique::kToken_self, BOTTOM_UP_SHIFT (242)
, Lexique_easyBindings_5F_lexique::kToken_root, BOTTOM_UP_SHIFT (243)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (260)
, Lexique_easyBindings_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (261)
, Lexique_easyBindings_5F_lexique::kToken_signature, BOTTOM_UP_SHIFT (244)
, Lexique_easyBindings_5F_lexique::kToken_version, BOTTOM_UP_SHIFT (245)
, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, BOTTOM_UP_SHIFT (246)
, Lexique_easyBindings_5F_lexique::kToken_super, BOTTOM_UP_SHIFT (247)
, BOTTOM_UP_END
// State S661 (index = 8261)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (308)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (308)
, BOTTOM_UP_END
// State S662 (index = 8266)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (511)
, Lexique_easyBindings_5F_lexique::kToken_entity, BOTTOM_UP_SHIFT (512)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (513)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (514)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (515)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (516)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (517)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (518)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (519)
, Lexique_easyBindings_5F_lexique::kToken_menuItem, BOTTOM_UP_SHIFT (520)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S663 (index = 8295)
, Lexique_easyBindings_5F_lexique::kToken__5D_, BOTTOM_UP_REDUCE (299)
, BOTTOM_UP_END
// State S664 (index = 8298)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (294)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (294)
, BOTTOM_UP_END
// State S665 (index = 8325)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (689)
, BOTTOM_UP_END
// State S666 (index = 8328)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (326)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (326)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (326)
, BOTTOM_UP_END
// State S667 (index = 8335)
, Lexique_easyBindings_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (328)
, BOTTOM_UP_END
// State S668 (index = 8338)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S669 (index = 8359)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (51)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S670 (index = 8384)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (284)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (364)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_SHIFT (365)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_SHIFT (366)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_SHIFT (367)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_SHIFT (368)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_SHIFT (369)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_SHIFT (370)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_SHIFT (371)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_SHIFT (372)
, BOTTOM_UP_END
// State S671 (index = 8405)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (692)
, BOTTOM_UP_END
// State S672 (index = 8408)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (179)
, BOTTOM_UP_END
// State S673 (index = 8411)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (693)
, BOTTOM_UP_END
// State S674 (index = 8414)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (694)
, BOTTOM_UP_END
// State S675 (index = 8417)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (695)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_SHIFT (696)
, BOTTOM_UP_END
// State S676 (index = 8422)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (698)
, BOTTOM_UP_END
// State S677 (index = 8425)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (612)
, Lexique_easyBindings_5F_lexique::kToken_enum, BOTTOM_UP_SHIFT (613)
, BOTTOM_UP_END
// State S678 (index = 8430)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (700)
, BOTTOM_UP_END
// State S679 (index = 8433)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (17)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (17)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S680 (index = 8440)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (126)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (126)
, BOTTOM_UP_END
// State S681 (index = 8479)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (128)
, Lexique_easyBindings_5F_lexique::kToken_column, BOTTOM_UP_SHIFT (701)
, Lexique_easyBindings_5F_lexique::kToken_editableColumn, BOTTOM_UP_SHIFT (702)
, BOTTOM_UP_END
// State S682 (index = 8486)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (12)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S683 (index = 8525)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (705)
, BOTTOM_UP_END
// State S684 (index = 8528)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_hidden, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_tableValue, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_run, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (69)
, Lexique_easyBindings_5F_lexique::kToken_graphicController, BOTTOM_UP_REDUCE (69)
, BOTTOM_UP_END
// State S685 (index = 8545)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (320)
, BOTTOM_UP_END
// State S686 (index = 8548)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (318)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (318)
, Lexique_easyBindings_5F_lexique::kToken_enabled, BOTTOM_UP_REDUCE (318)
, BOTTOM_UP_END
// State S687 (index = 8555)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (322)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (322)
, BOTTOM_UP_END
// State S688 (index = 8560)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (590)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (304)
, BOTTOM_UP_END
// State S689 (index = 8565)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (301)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (301)
, BOTTOM_UP_END
// State S690 (index = 8590)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (707)
, BOTTOM_UP_END
// State S691 (index = 8593)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (285)
, BOTTOM_UP_END
// State S692 (index = 8596)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (708)
, BOTTOM_UP_END
// State S693 (index = 8599)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (673)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (201)
, BOTTOM_UP_END
// State S694 (index = 8604)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (194)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_SHIFT (61)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_SHIFT (62)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_SHIFT (63)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (104)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_SHIFT (64)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_SHIFT (457)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_SHIFT (66)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_SHIFT (458)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_SHIFT (70)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_SHIFT (71)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_SHIFT (72)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_SHIFT (459)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S695 (index = 8633)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (711)
, BOTTOM_UP_END
// State S696 (index = 8636)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (712)
, BOTTOM_UP_END
// State S697 (index = 8639)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (275)
, BOTTOM_UP_END
// State S698 (index = 8642)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (41)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END
// State S699 (index = 8673)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (645)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (146)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (146)
, BOTTOM_UP_END
// State S700 (index = 8684)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (714)
, BOTTOM_UP_END
// State S701 (index = 8687)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (130)
, BOTTOM_UP_END
// State S702 (index = 8690)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (131)
, BOTTOM_UP_END
// State S703 (index = 8693)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (715)
, BOTTOM_UP_END
// State S704 (index = 8696)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (716)
, BOTTOM_UP_END
// State S705 (index = 8699)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, BOTTOM_UP_SHIFT (322)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (323)
, Lexique_easyBindings_5F_lexique::kToken_prefs, BOTTOM_UP_SHIFT (324)
, Lexique_easyBindings_5F_lexique::kToken_yes, BOTTOM_UP_SHIFT (325)
, Lexique_easyBindings_5F_lexique::kToken_no, BOTTOM_UP_SHIFT (326)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, BOTTOM_UP_SHIFT (327)
, Lexique_easyBindings_5F_lexique::kToken__2D_, BOTTOM_UP_SHIFT (328)
, Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, BOTTOM_UP_SHIFT (329)
, BOTTOM_UP_END
// State S706 (index = 8716)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (305)
, BOTTOM_UP_END
// State S707 (index = 8719)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_vStack, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_hStack, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_view, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_newView, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_separator, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_gutter, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_divider, BOTTOM_UP_REDUCE (50)
, Lexique_easyBindings_5F_lexique::kToken_space, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S708 (index = 8744)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (639)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (180)
, BOTTOM_UP_END
// State S709 (index = 8749)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (202)
, BOTTOM_UP_END
// State S710 (index = 8752)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (200)
, BOTTOM_UP_END
// State S711 (index = 8755)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (277)
, BOTTOM_UP_END
// State S712 (index = 8758)
, Lexique_easyBindings_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (276)
, BOTTOM_UP_END
// State S713 (index = 8761)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (147)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (147)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (147)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (147)
, BOTTOM_UP_END
// State S714 (index = 8770)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (719)
, BOTTOM_UP_END
// State S715 (index = 8773)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_abstract, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_graphic, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_selectionController, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_computed, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_transient, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_override, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_toMany, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_toOne, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_tableViewController, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_property, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_standalone, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_externFunc, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_arrayController, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_outlet, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_externDelegate, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_stackView, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_linker, BOTTOM_UP_REDUCE (127)
, Lexique_easyBindings_5F_lexique::kToken_action, BOTTOM_UP_REDUCE (127)
, BOTTOM_UP_END
// State S716 (index = 8812)
, Lexique_easyBindings_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (276)
, BOTTOM_UP_END
// State S717 (index = 8815)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (655)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (70)
, BOTTOM_UP_END
// State S718 (index = 8820)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (181)
, BOTTOM_UP_END
// State S719 (index = 8823)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (722)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (154)
, BOTTOM_UP_END
// State S720 (index = 8828)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (132)
, Lexique_easyBindings_5F_lexique::kToken_column, BOTTOM_UP_REDUCE (132)
, Lexique_easyBindings_5F_lexique::kToken_editableColumn, BOTTOM_UP_REDUCE (132)
, Lexique_easyBindings_5F_lexique::kToken_sortkey, BOTTOM_UP_SHIFT (724)
, BOTTOM_UP_END
// State S721 (index = 8837)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END
// State S722 (index = 8840)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (726)
, BOTTOM_UP_END
// State S723 (index = 8843)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (727)
, BOTTOM_UP_END
// State S724 (index = 8846)
, Lexique_easyBindings_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (728)
, BOTTOM_UP_END
// State S725 (index = 8849)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (128)
, Lexique_easyBindings_5F_lexique::kToken_column, BOTTOM_UP_SHIFT (701)
, Lexique_easyBindings_5F_lexique::kToken_editableColumn, BOTTOM_UP_SHIFT (702)
, BOTTOM_UP_END
// State S726 (index = 8856)
, Lexique_easyBindings_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (730)
, BOTTOM_UP_END
// State S727 (index = 8859)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (153)
, Lexique_easyBindings_5F_lexique::kToken_bindingName, BOTTOM_UP_REDUCE (153)
, Lexique_easyBindings_5F_lexique::kToken_func, BOTTOM_UP_REDUCE (153)
, BOTTOM_UP_END
// State S728 (index = 8866)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (133)
, Lexique_easyBindings_5F_lexique::kToken_column, BOTTOM_UP_REDUCE (133)
, Lexique_easyBindings_5F_lexique::kToken_editableColumn, BOTTOM_UP_REDUCE (133)
, BOTTOM_UP_END
// State S729 (index = 8873)
, Lexique_easyBindings_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (129)
, BOTTOM_UP_END
// State S730 (index = 8876)
, Lexique_easyBindings_5F_lexique::kToken_Identifier, BOTTOM_UP_SHIFT (731)
, BOTTOM_UP_END
// State S731 (index = 8879)
, Lexique_easyBindings_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (722)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (154)
, BOTTOM_UP_END
// State S732 (index = 8884)
, Lexique_easyBindings_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (155)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [733] = {
  0  // S0
, 41  // S1
, 44  // S2
, 47  // S3
, 54  // S4
, 57  // S5
, 60  // S6
, 63  // S7
, 66  // S8
, 69  // S9
, 74  // S10
, 77  // S11
, 80  // S12
, 83  // S13
, 86  // S14
, 89  // S15
, 92  // S16
, 133  // S17
, 174  // S18
, 215  // S19
, 256  // S20
, 297  // S21
, 338  // S22
, 379  // S23
, 420  // S24
, 461  // S25
, 502  // S26
, 543  // S27
, 584  // S28
, 587  // S29
, 594  // S30
, 597  // S31
, 600  // S32
, 603  // S33
, 634  // S34
, 637  // S35
, 642  // S36
, 649  // S37
, 654  // S38
, 657  // S39
, 662  // S40
, 665  // S41
, 668  // S42
, 671  // S43
, 674  // S44
, 677  // S45
, 680  // S46
, 683  // S47
, 686  // S48
, 689  // S49
, 692  // S50
, 695  // S51
, 698  // S52
, 701  // S53
, 704  // S54
, 707  // S55
, 710  // S56
, 715  // S57
, 720  // S58
, 723  // S59
, 726  // S60
, 767  // S61
, 770  // S62
, 773  // S63
, 776  // S64
, 779  // S65
, 786  // S66
, 789  // S67
, 796  // S68
, 799  // S69
, 802  // S70
, 805  // S71
, 808  // S72
, 811  // S73
, 814  // S74
, 845  // S75
, 876  // S76
, 907  // S77
, 938  // S78
, 969  // S79
, 1000  // S80
, 1031  // S81
, 1062  // S82
, 1065  // S83
, 1068  // S84
, 1071  // S85
, 1112  // S86
, 1115  // S87
, 1118  // S88
, 1121  // S89
, 1126  // S90
, 1131  // S91
, 1134  // S92
, 1139  // S93
, 1142  // S94
, 1145  // S95
, 1148  // S96
, 1151  // S97
, 1154  // S98
, 1195  // S99
, 1198  // S100
, 1201  // S101
, 1204  // S102
, 1207  // S103
, 1210  // S104
, 1213  // S105
, 1216  // S106
, 1219  // S107
, 1222  // S108
, 1225  // S109
, 1228  // S110
, 1233  // S111
, 1236  // S112
, 1239  // S113
, 1244  // S114
, 1247  // S115
, 1250  // S116
, 1253  // S117
, 1256  // S118
, 1259  // S119
, 1264  // S120
, 1267  // S121
, 1270  // S122
, 1273  // S123
, 1276  // S124
, 1279  // S125
, 1282  // S126
, 1285  // S127
, 1288  // S128
, 1291  // S129
, 1332  // S130
, 1335  // S131
, 1338  // S132
, 1341  // S133
, 1346  // S134
, 1349  // S135
, 1352  // S136
, 1357  // S137
, 1362  // S138
, 1369  // S139
, 1372  // S140
, 1375  // S141
, 1380  // S142
, 1383  // S143
, 1386  // S144
, 1391  // S145
, 1394  // S146
, 1397  // S147
, 1400  // S148
, 1403  // S149
, 1418  // S150
, 1435  // S151
, 1438  // S152
, 1441  // S153
, 1444  // S154
, 1447  // S155
, 1450  // S156
, 1453  // S157
, 1456  // S158
, 1459  // S159
, 1462  // S160
, 1465  // S161
, 1470  // S162
, 1487  // S163
, 1496  // S164
, 1515  // S165
, 1554  // S166
, 1557  // S167
, 1560  // S168
, 1601  // S169
, 1606  // S170
, 1611  // S171
, 1616  // S172
, 1619  // S173
, 1624  // S174
, 1665  // S175
, 1670  // S176
, 1675  // S177
, 1680  // S178
, 1685  // S179
, 1688  // S180
, 1691  // S181
, 1694  // S182
, 1735  // S183
, 1738  // S184
, 1779  // S185
, 1786  // S186
, 1789  // S187
, 1802  // S188
, 1817  // S189
, 1832  // S190
, 1835  // S191
, 1838  // S192
, 1855  // S193
, 1862  // S194
, 1865  // S195
, 1868  // S196
, 1871  // S197
, 1874  // S198
, 1877  // S199
, 1880  // S200
, 1883  // S201
, 1900  // S202
, 1923  // S203
, 1926  // S204
, 1933  // S205
, 1956  // S206
, 1959  // S207
, 1962  // S208
, 1967  // S209
, 1974  // S210
, 1981  // S211
, 1984  // S212
, 1987  // S213
, 2004  // S214
, 2007  // S215
, 2010  // S216
, 2015  // S217
, 2018  // S218
, 2021  // S219
, 2024  // S220
, 2031  // S221
, 2038  // S222
, 2045  // S223
, 2048  // S224
, 2057  // S225
, 2080  // S226
, 2085  // S227
, 2088  // S228
, 2093  // S229
, 2106  // S230
, 2119  // S231
, 2132  // S232
, 2145  // S233
, 2158  // S234
, 2171  // S235
, 2174  // S236
, 2177  // S237
, 2190  // S238
, 2229  // S239
, 2232  // S240
, 2235  // S241
, 2238  // S242
, 2283  // S243
, 2286  // S244
, 2329  // S245
, 2372  // S246
, 2415  // S247
, 2418  // S248
, 2423  // S249
, 2466  // S250
, 2469  // S251
, 2472  // S252
, 2475  // S253
, 2492  // S254
, 2509  // S255
, 2526  // S256
, 2557  // S257
, 2560  // S258
, 2581  // S259
, 2604  // S260
, 2645  // S261
, 2668  // S262
, 2685  // S263
, 2710  // S264
, 2747  // S265
, 2788  // S266
, 2829  // S267
, 2846  // S268
, 2849  // S269
, 2852  // S270
, 2855  // S271
, 2872  // S272
, 2891  // S273
, 2924  // S274
, 2927  // S275
, 2946  // S276
, 2951  // S277
, 2970  // S278
, 2991  // S279
, 3008  // S280
, 3011  // S281
, 3014  // S282
, 3019  // S283
, 3060  // S284
, 3065  // S285
, 3070  // S286
, 3073  // S287
, 3078  // S288
, 3083  // S289
, 3088  // S290
, 3093  // S291
, 3098  // S292
, 3101  // S293
, 3104  // S294
, 3109  // S295
, 3112  // S296
, 3115  // S297
, 3118  // S298
, 3121  // S299
, 3124  // S300
, 3127  // S301
, 3130  // S302
, 3171  // S303
, 3184  // S304
, 3197  // S305
, 3210  // S306
, 3223  // S307
, 3236  // S308
, 3249  // S309
, 3252  // S310
, 3255  // S311
, 3258  // S312
, 3263  // S313
, 3266  // S314
, 3309  // S315
, 3312  // S316
, 3315  // S317
, 3332  // S318
, 3335  // S319
, 3338  // S320
, 3341  // S321
, 3378  // S322
, 3421  // S323
, 3464  // S324
, 3467  // S325
, 3510  // S326
, 3553  // S327
, 3596  // S328
, 3599  // S329
, 3642  // S330
, 3647  // S331
, 3690  // S332
, 3693  // S333
, 3696  // S334
, 3701  // S335
, 3718  // S336
, 3737  // S337
, 3740  // S338
, 3781  // S339
, 3786  // S340
, 3809  // S341
, 3832  // S342
, 3855  // S343
, 3878  // S344
, 3901  // S345
, 3924  // S346
, 3947  // S347
, 3970  // S348
, 3995  // S349
, 4018  // S350
, 4041  // S351
, 4078  // S352
, 4083  // S353
, 4086  // S354
, 4089  // S355
, 4106  // S356
, 4111  // S357
, 4114  // S358
, 4131  // S359
, 4134  // S360
, 4137  // S361
, 4140  // S362
, 4143  // S363
, 4160  // S364
, 4191  // S365
, 4202  // S366
, 4221  // S367
, 4224  // S368
, 4227  // S369
, 4248  // S370
, 4269  // S371
, 4290  // S372
, 4315  // S373
, 4318  // S374
, 4339  // S375
, 4364  // S376
, 4367  // S377
, 4372  // S378
, 4375  // S379
, 4378  // S380
, 4383  // S381
, 4386  // S382
, 4389  // S383
, 4418  // S384
, 4421  // S385
, 4424  // S386
, 4427  // S387
, 4468  // S388
, 4471  // S389
, 4474  // S390
, 4477  // S391
, 4508  // S392
, 4511  // S393
, 4514  // S394
, 4517  // S395
, 4520  // S396
, 4523  // S397
, 4530  // S398
, 4533  // S399
, 4578  // S400
, 4623  // S401
, 4626  // S402
, 4669  // S403
, 4714  // S404
, 4759  // S405
, 4762  // S406
, 4767  // S407
, 4806  // S408
, 4809  // S409
, 4812  // S410
, 4815  // S411
, 4858  // S412
, 4861  // S413
, 4864  // S414
, 4901  // S415
, 4938  // S416
, 4961  // S417
, 4964  // S418
, 4985  // S419
, 4988  // S420
, 5005  // S421
, 5022  // S422
, 5063  // S423
, 5088  // S424
, 5113  // S425
, 5138  // S426
, 5163  // S427
, 5188  // S428
, 5213  // S429
, 5238  // S430
, 5279  // S431
, 5320  // S432
, 5325  // S433
, 5342  // S434
, 5347  // S435
, 5350  // S436
, 5371  // S437
, 5400  // S438
, 5449  // S439
, 5478  // S440
, 5507  // S441
, 5516  // S442
, 5525  // S443
, 5530  // S444
, 5551  // S445
, 5554  // S446
, 5557  // S447
, 5560  // S448
, 5563  // S449
, 5596  // S450
, 5599  // S451
, 5616  // S452
, 5619  // S453
, 5622  // S454
, 5629  // S455
, 5632  // S456
, 5673  // S457
, 5676  // S458
, 5679  // S459
, 5682  // S460
, 5711  // S461
, 5740  // S462
, 5769  // S463
, 5798  // S464
, 5827  // S465
, 5830  // S466
, 5833  // S467
, 5836  // S468
, 5841  // S469
, 5846  // S470
, 5849  // S471
, 5854  // S472
, 5857  // S473
, 5888  // S474
, 5919  // S475
, 5950  // S476
, 5981  // S477
, 6012  // S478
, 6043  // S479
, 6074  // S480
, 6077  // S481
, 6082  // S482
, 6085  // S483
, 6092  // S484
, 6095  // S485
, 6134  // S486
, 6137  // S487
, 6180  // S488
, 6185  // S489
, 6228  // S490
, 6231  // S491
, 6240  // S492
, 6283  // S493
, 6290  // S494
, 6333  // S495
, 6336  // S496
, 6339  // S497
, 6342  // S498
, 6385  // S499
, 6388  // S500
, 6393  // S501
, 6396  // S502
, 6435  // S503
, 6454  // S504
, 6457  // S505
, 6462  // S506
, 6485  // S507
, 6522  // S508
, 6559  // S509
, 6564  // S510
, 6567  // S511
, 6572  // S512
, 6575  // S513
, 6578  // S514
, 6583  // S515
, 6588  // S516
, 6593  // S517
, 6596  // S518
, 6599  // S519
, 6602  // S520
, 6605  // S521
, 6610  // S522
, 6615  // S523
, 6624  // S524
, 6651  // S525
, 6654  // S526
, 6673  // S527
, 6696  // S528
, 6699  // S529
, 6702  // S530
, 6705  // S531
, 6710  // S532
, 6749  // S533
, 6752  // S534
, 6757  // S535
, 6760  // S536
, 6763  // S537
, 6766  // S538
, 6769  // S539
, 6772  // S540
, 6775  // S541
, 6778  // S542
, 6819  // S543
, 6828  // S544
, 6833  // S545
, 6836  // S546
, 6839  // S547
, 6844  // S548
, 6847  // S549
, 6850  // S550
, 6853  // S551
, 6856  // S552
, 6859  // S553
, 6862  // S554
, 6865  // S555
, 6868  // S556
, 6871  // S557
, 6912  // S558
, 6917  // S559
, 6922  // S560
, 6927  // S561
, 6930  // S562
, 6933  // S563
, 6974  // S564
, 7017  // S565
, 7060  // S566
, 7063  // S567
, 7106  // S568
, 7149  // S569
, 7152  // S570
, 7195  // S571
, 7198  // S572
, 7241  // S573
, 7284  // S574
, 7287  // S575
, 7330  // S576
, 7373  // S577
, 7418  // S578
, 7435  // S579
, 7438  // S580
, 7441  // S581
, 7444  // S582
, 7461  // S583
, 7494  // S584
, 7499  // S585
, 7504  // S586
, 7509  // S587
, 7512  // S588
, 7517  // S589
, 7526  // S590
, 7529  // S591
, 7532  // S592
, 7535  // S593
, 7538  // S594
, 7543  // S595
, 7562  // S596
, 7587  // S597
, 7590  // S598
, 7595  // S599
, 7598  // S600
, 7619  // S601
, 7622  // S602
, 7625  // S603
, 7664  // S604
, 7669  // S605
, 7672  // S606
, 7677  // S607
, 7680  // S608
, 7711  // S609
, 7714  // S610
, 7717  // S611
, 7748  // S612
, 7759  // S613
, 7770  // S614
, 7781  // S615
, 7788  // S616
, 7791  // S617
, 7794  // S618
, 7797  // S619
, 7800  // S620
, 7817  // S621
, 7860  // S622
, 7865  // S623
, 7868  // S624
, 7873  // S625
, 7876  // S626
, 7881  // S627
, 7888  // S628
, 7891  // S629
, 7896  // S630
, 7901  // S631
, 7904  // S632
, 7907  // S633
, 7924  // S634
, 7927  // S635
, 7950  // S636
, 7953  // S637
, 7956  // S638
, 7959  // S639
, 7962  // S640
, 7965  // S641
, 7970  // S642
, 7973  // S643
, 7976  // S644
, 7981  // S645
, 7986  // S646
, 7995  // S647
, 7998  // S648
, 8041  // S649
, 8084  // S650
, 8127  // S651
, 8170  // S652
, 8213  // S653
, 8216  // S654
, 8221  // S655
, 8224  // S656
, 8227  // S657
, 8232  // S658
, 8235  // S659
, 8238  // S660
, 8261  // S661
, 8266  // S662
, 8295  // S663
, 8298  // S664
, 8325  // S665
, 8328  // S666
, 8335  // S667
, 8338  // S668
, 8359  // S669
, 8384  // S670
, 8405  // S671
, 8408  // S672
, 8411  // S673
, 8414  // S674
, 8417  // S675
, 8422  // S676
, 8425  // S677
, 8430  // S678
, 8433  // S679
, 8440  // S680
, 8479  // S681
, 8486  // S682
, 8525  // S683
, 8528  // S684
, 8545  // S685
, 8548  // S686
, 8555  // S687
, 8560  // S688
, 8565  // S689
, 8590  // S690
, 8593  // S691
, 8596  // S692
, 8599  // S693
, 8604  // S694
, 8633  // S695
, 8636  // S696
, 8639  // S697
, 8642  // S698
, 8673  // S699
, 8684  // S700
, 8687  // S701
, 8690  // S702
, 8693  // S703
, 8696  // S704
, 8699  // S705
, 8716  // S706
, 8719  // S707
, 8744  // S708
, 8749  // S709
, 8752  // S710
, 8755  // S711
, 8758  // S712
, 8761  // S713
, 8770  // S714
, 8773  // S715
, 8812  // S716
, 8815  // S717
, 8820  // S718
, 8823  // S719
, 8828  // S720
, 8837  // S721
, 8840  // S722
, 8843  // S723
, 8846  // S724
, 8849  // S725
, 8856  // S726
, 8859  // S727
, 8866  // S728
, 8873  // S729
, 8876  // S730
, 8879  // S731
, 8884  // S732
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_easyBindings_grammar_0 [35] = {0, 15,
  2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 28,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_16 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 44,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_17 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 45,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_18 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 46,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_19 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 47,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_20 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 48,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_21 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 49,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_22 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 50,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_23 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 51,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_24 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 52,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_25 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 53,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_26 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 54,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_27 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 55,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_29 [3] = {44, 57, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_33 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 82,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_35 [3] = {101, 88, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_36 [3] = {56, 92, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_37 [3] = {134, 94, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_39 [3] = {86, 97, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_57 [3] = {45, 103, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_60 [33] = {2, 16,
  3, 17,
  4, 18,
  8, 19,
  18, 20,
  19, 21,
  21, 22,
  22, 23,
  24, 24,
  28, 25,
  37, 26,
  38, 27,
  39, 106,
  43, 29,
  83, 30,
  89, 31, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_65 [3] = {53, 111, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_67 [3] = {65, 114, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_74 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 121,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_75 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 122,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_76 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 123,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_77 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 124,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_78 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 125,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_79 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 126,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_80 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 127,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_81 [23] = {5, 74,
  6, 75,
  7, 76,
  10, 77,
  17, 78,
  23, 79,
  26, 80,
  31, 81,
  42, 128,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_90 [5] = {9, 135,
  58, 136, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_92 [3] = {55, 139, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_99 [3] = {25, 145, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_101 [3] = {25, 147, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_110 [3] = {53, 154, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_113 [3] = {65, 157, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_136 [3] = {57, 172, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_138 [3] = {56, 173, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_141 [3] = {79, 178, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_144 [3] = {94, 181, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_149 [3] = {84, 187, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_150 [5] = {25, 188,
  90, 189, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_161 [3] = {76, 200, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_162 [5] = {27, 207,
  97, 208, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_163 [3] = {115, 210, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_164 [5] = {32, 212,
  117, 213, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_171 [3] = {58, 216, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_173 [3] = {55, 217, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_175 [3] = {135, 219, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_178 [3] = {80, 222, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_185 [3] = {46, 228, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_187 [3] = {85, 235, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_189 [3] = {91, 237, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_192 [5] = {29, 248,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_193 [3] = {54, 252, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_201 [5] = {29, 258,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_202 [13] = {13, 262,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_204 [3] = {98, 270, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_205 [13] = {13, 271,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_210 [3] = {116, 275, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_211 [3] = {36, 277, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_216 [3] = {57, 281, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_222 [3] = {78, 285, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_224 [3] = {96, 291, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_226 [3] = {136, 293, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_228 [3] = {48, 296, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_230 [3] = {85, 297, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_231 [3] = {85, 298, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_232 [3] = {85, 299, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_233 [3] = {85, 300, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_234 [3] = {85, 301, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_237 [3] = {92, 309, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_242 [3] = {105, 314, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_248 [3] = {50, 318, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_253 [5] = {11, 330,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_254 [5] = {11, 332,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_255 [5] = {11, 333,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_258 [3] = {99, 336, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_259 [13] = {13, 337,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_261 [7] = {16, 338,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_262 [3] = {97, 339, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_263 [3] = {73, 341, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_264 [3] = {74, 348, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_265 [3] = {75, 351, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_267 [3] = {97, 352, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_271 [3] = {97, 356, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_272 [3] = {100, 358, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_275 [5] = {32, 360,
  117, 213, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_276 [3] = {124, 362, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_277 [3] = {117, 363, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_278 [9] = {33, 373,
  34, 374,
  35, 375,
  118, 376, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_279 [5] = {29, 377,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_282 [3] = {135, 379, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_284 [3] = {79, 380, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_285 [3] = {81, 382, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_291 [3] = {95, 385, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_294 [3] = {47, 389, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_304 [3] = {92, 392, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_305 [3] = {92, 393, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_306 [3] = {92, 394, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_307 [3] = {92, 395, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_308 [3] = {92, 396, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_312 [3] = {109, 402, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_317 [5] = {29, 406,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_330 [3] = {59, 413, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_334 [3] = {77, 417, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_335 [5] = {29, 418,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_336 [5] = {1, 420,
  40, 421, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_340 [11] = {14, 423,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_342 [9] = {15, 424,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_343 [9] = {15, 425,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_344 [9] = {15, 426,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_345 [9] = {15, 427,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_346 [9] = {15, 428,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_347 [9] = {15, 429,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_349 [7] = {16, 430,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_350 [7] = {16, 431,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_355 [3] = {97, 432, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_358 [3] = {97, 434, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_364 [5] = {36, 439,
  119, 440, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_365 [3] = {130, 442, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_366 [5] = {32, 443,
  117, 213, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_369 [7] = {34, 374,
  35, 375,
  118, 446, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_370 [7] = {34, 374,
  35, 375,
  118, 447, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_371 [7] = {34, 374,
  35, 375,
  118, 448, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_374 [7] = {34, 374,
  35, 375,
  118, 450, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_377 [3] = {52, 452, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_380 [3] = {80, 454, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_383 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 465, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_391 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 480,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_397 [5] = {12, 483,
  93, 484, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_399 [3] = {108, 487, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_400 [3] = {110, 489, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_403 [3] = {106, 492, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_404 [3] = {103, 494, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_406 [3] = {50, 496, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_416 [13] = {13, 501,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_418 [3] = {99, 503, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_420 [3] = {97, 505, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_423 [3] = {73, 506, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_430 [3] = {75, 507, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_431 [3] = {75, 508, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_436 [9] = {33, 510,
  34, 374,
  35, 375,
  118, 376, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_437 [7] = {34, 521,
  35, 375,
  126, 522, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_440 [3] = {120, 524, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_442 [3] = {131, 526, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_443 [3] = {133, 528, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_444 [7] = {34, 374,
  35, 375,
  118, 529, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_451 [5] = {29, 531,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_454 [3] = {78, 534, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_460 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 537, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_461 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 538, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_462 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 539, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_463 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 540, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_464 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 541, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_468 [3] = {47, 545, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_471 [3] = {112, 548, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_473 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 550,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_474 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 551,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_475 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 552,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_476 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 553,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_477 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 554,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_478 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 555,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_479 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 556,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_481 [3] = {69, 560, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_483 [5] = {12, 483,
  93, 562, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_491 [3] = {107, 572, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_493 [3] = {104, 576, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_500 [3] = {60, 581, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_522 [3] = {125, 591, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_523 [3] = {121, 594, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_524 [3] = {123, 596, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_526 [5] = {32, 598,
  117, 213, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_527 [13] = {13, 599,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_531 [3] = {52, 602, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_543 [3] = {96, 606, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_544 [3] = {136, 607, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_547 [3] = {112, 609, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_560 [3] = {70, 614, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_561 [3] = {25, 615, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_577 [3] = {111, 621, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_578 [5] = {11, 622,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_582 [5] = {11, 624,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_589 [3] = {127, 627, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_594 [3] = {122, 632, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_595 [5] = {32, 633,
  117, 213, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_598 [3] = {132, 636, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_600 [9] = {33, 637,
  34, 374,
  35, 375,
  118, 376, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_604 [3] = {82, 640, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_606 [3] = {95, 642, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_608 [21] = {5, 473,
  6, 474,
  7, 475,
  10, 476,
  20, 477,
  23, 478,
  30, 479,
  49, 643,
  51, 83,
  66, 84, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_614 [3] = {68, 646, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_615 [5] = {12, 483,
  93, 647, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_620 [5] = {11, 652,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_622 [3] = {59, 653, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_624 [3] = {41, 656, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_626 [3] = {128, 659, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_627 [3] = {129, 661, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_633 [5] = {27, 665,
  97, 208, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_635 [13] = {13, 667,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_641 [3] = {88, 674, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_644 [3] = {113, 676, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_645 [3] = {69, 677, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_646 [3] = {71, 679, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_654 [3] = {61, 682, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_660 [13] = {13, 687,
  14, 263,
  15, 264,
  16, 265,
  29, 266,
  102, 249, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_662 [7] = {34, 521,
  35, 375,
  126, 688, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_668 [9] = {33, 690,
  34, 374,
  35, 375,
  118, 376, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_670 [7] = {34, 374,
  35, 375,
  118, 691, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_675 [3] = {114, 697, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_677 [3] = {70, 699, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_681 [5] = {62, 703,
  63, 704, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_688 [3] = {125, 706, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_693 [3] = {88, 709, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_694 [17] = {5, 460,
  6, 461,
  23, 462,
  26, 463,
  31, 464,
  51, 83,
  66, 84,
  87, 710, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_699 [3] = {68, 713, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_705 [5] = {11, 717,
  67, 331, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_708 [3] = {82, 718, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_716 [3] = {36, 720, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_717 [3] = {41, 721, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_719 [3] = {72, 723, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_720 [3] = {64, 725, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_725 [5] = {62, 729,
  63, 704, -1} ;

static const int32_t gSuccessorTable_easyBindings_grammar_731 [3] = {72, 732, -1} ;

static const int32_t * gSuccessorTable_easyBindings_grammar [733] = {
gSuccessorTable_easyBindings_grammar_0, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, gSuccessorTable_easyBindings_grammar_23, 
  gSuccessorTable_easyBindings_grammar_24, gSuccessorTable_easyBindings_grammar_25, gSuccessorTable_easyBindings_grammar_26, gSuccessorTable_easyBindings_grammar_27, 
  nullptr, gSuccessorTable_easyBindings_grammar_29, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_33, nullptr, gSuccessorTable_easyBindings_grammar_35, 
  gSuccessorTable_easyBindings_grammar_36, gSuccessorTable_easyBindings_grammar_37, nullptr, gSuccessorTable_easyBindings_grammar_39, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_57, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_60, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_65, nullptr, gSuccessorTable_easyBindings_grammar_67, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_74, gSuccessorTable_easyBindings_grammar_75, 
  gSuccessorTable_easyBindings_grammar_76, gSuccessorTable_easyBindings_grammar_77, gSuccessorTable_easyBindings_grammar_78, gSuccessorTable_easyBindings_grammar_79, 
  gSuccessorTable_easyBindings_grammar_80, gSuccessorTable_easyBindings_grammar_81, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_90, nullptr, 
  gSuccessorTable_easyBindings_grammar_92, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_99, 
  nullptr, gSuccessorTable_easyBindings_grammar_101, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_110, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_113, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_136, nullptr, gSuccessorTable_easyBindings_grammar_138, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_141, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_144, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_149, gSuccessorTable_easyBindings_grammar_150, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_161, gSuccessorTable_easyBindings_grammar_162, gSuccessorTable_easyBindings_grammar_163, 
  gSuccessorTable_easyBindings_grammar_164, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_171, 
  nullptr, gSuccessorTable_easyBindings_grammar_173, nullptr, gSuccessorTable_easyBindings_grammar_175, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_178, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_185, nullptr, gSuccessorTable_easyBindings_grammar_187, 
  nullptr, gSuccessorTable_easyBindings_grammar_189, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_192, gSuccessorTable_easyBindings_grammar_193, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_201, gSuccessorTable_easyBindings_grammar_202, nullptr, 
  gSuccessorTable_easyBindings_grammar_204, gSuccessorTable_easyBindings_grammar_205, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_210, gSuccessorTable_easyBindings_grammar_211, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_216, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_222, nullptr, 
  gSuccessorTable_easyBindings_grammar_224, nullptr, gSuccessorTable_easyBindings_grammar_226, nullptr, 
  gSuccessorTable_easyBindings_grammar_228, nullptr, gSuccessorTable_easyBindings_grammar_230, gSuccessorTable_easyBindings_grammar_231, 
  gSuccessorTable_easyBindings_grammar_232, gSuccessorTable_easyBindings_grammar_233, gSuccessorTable_easyBindings_grammar_234, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_237, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_242, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_248, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_253, gSuccessorTable_easyBindings_grammar_254, gSuccessorTable_easyBindings_grammar_255, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_258, gSuccessorTable_easyBindings_grammar_259, 
  nullptr, gSuccessorTable_easyBindings_grammar_261, gSuccessorTable_easyBindings_grammar_262, gSuccessorTable_easyBindings_grammar_263, 
  gSuccessorTable_easyBindings_grammar_264, gSuccessorTable_easyBindings_grammar_265, nullptr, gSuccessorTable_easyBindings_grammar_267, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_271, 
  gSuccessorTable_easyBindings_grammar_272, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_275, 
  gSuccessorTable_easyBindings_grammar_276, gSuccessorTable_easyBindings_grammar_277, gSuccessorTable_easyBindings_grammar_278, gSuccessorTable_easyBindings_grammar_279, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_282, nullptr, 
  gSuccessorTable_easyBindings_grammar_284, gSuccessorTable_easyBindings_grammar_285, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_291, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_294, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_304, gSuccessorTable_easyBindings_grammar_305, gSuccessorTable_easyBindings_grammar_306, gSuccessorTable_easyBindings_grammar_307, 
  gSuccessorTable_easyBindings_grammar_308, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_312, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_317, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_330, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_334, gSuccessorTable_easyBindings_grammar_335, 
  gSuccessorTable_easyBindings_grammar_336, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_340, nullptr, gSuccessorTable_easyBindings_grammar_342, gSuccessorTable_easyBindings_grammar_343, 
  gSuccessorTable_easyBindings_grammar_344, gSuccessorTable_easyBindings_grammar_345, gSuccessorTable_easyBindings_grammar_346, gSuccessorTable_easyBindings_grammar_347, 
  nullptr, gSuccessorTable_easyBindings_grammar_349, gSuccessorTable_easyBindings_grammar_350, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_355, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_358, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_364, gSuccessorTable_easyBindings_grammar_365, gSuccessorTable_easyBindings_grammar_366, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_369, gSuccessorTable_easyBindings_grammar_370, gSuccessorTable_easyBindings_grammar_371, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_374, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_377, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_380, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_383, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_391, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_397, nullptr, gSuccessorTable_easyBindings_grammar_399, 
  gSuccessorTable_easyBindings_grammar_400, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_403, 
  gSuccessorTable_easyBindings_grammar_404, nullptr, gSuccessorTable_easyBindings_grammar_406, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_416, nullptr, gSuccessorTable_easyBindings_grammar_418, nullptr, 
  gSuccessorTable_easyBindings_grammar_420, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_423, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_430, gSuccessorTable_easyBindings_grammar_431, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_436, gSuccessorTable_easyBindings_grammar_437, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_440, nullptr, gSuccessorTable_easyBindings_grammar_442, gSuccessorTable_easyBindings_grammar_443, 
  gSuccessorTable_easyBindings_grammar_444, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_451, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_454, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_460, gSuccessorTable_easyBindings_grammar_461, gSuccessorTable_easyBindings_grammar_462, gSuccessorTable_easyBindings_grammar_463, 
  gSuccessorTable_easyBindings_grammar_464, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_468, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_471, 
  nullptr, gSuccessorTable_easyBindings_grammar_473, gSuccessorTable_easyBindings_grammar_474, gSuccessorTable_easyBindings_grammar_475, 
  gSuccessorTable_easyBindings_grammar_476, gSuccessorTable_easyBindings_grammar_477, gSuccessorTable_easyBindings_grammar_478, gSuccessorTable_easyBindings_grammar_479, 
  nullptr, gSuccessorTable_easyBindings_grammar_481, nullptr, gSuccessorTable_easyBindings_grammar_483, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_491, 
  nullptr, gSuccessorTable_easyBindings_grammar_493, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_500, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_522, gSuccessorTable_easyBindings_grammar_523, 
  gSuccessorTable_easyBindings_grammar_524, nullptr, gSuccessorTable_easyBindings_grammar_526, gSuccessorTable_easyBindings_grammar_527, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_531, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_543, 
  gSuccessorTable_easyBindings_grammar_544, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_547, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_560, gSuccessorTable_easyBindings_grammar_561, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_577, gSuccessorTable_easyBindings_grammar_578, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_582, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_589, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_594, gSuccessorTable_easyBindings_grammar_595, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_598, nullptr, 
  gSuccessorTable_easyBindings_grammar_600, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_604, nullptr, gSuccessorTable_easyBindings_grammar_606, nullptr, 
  gSuccessorTable_easyBindings_grammar_608, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_614, gSuccessorTable_easyBindings_grammar_615, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_620, nullptr, gSuccessorTable_easyBindings_grammar_622, nullptr, 
  gSuccessorTable_easyBindings_grammar_624, nullptr, gSuccessorTable_easyBindings_grammar_626, gSuccessorTable_easyBindings_grammar_627, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_633, nullptr, gSuccessorTable_easyBindings_grammar_635, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_641, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_644, gSuccessorTable_easyBindings_grammar_645, gSuccessorTable_easyBindings_grammar_646, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_easyBindings_grammar_654, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_660, nullptr, gSuccessorTable_easyBindings_grammar_662, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_668, nullptr, gSuccessorTable_easyBindings_grammar_670, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_675, 
  nullptr, gSuccessorTable_easyBindings_grammar_677, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_681, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_688, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_693, gSuccessorTable_easyBindings_grammar_694, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_699, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_705, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_708, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_easyBindings_grammar_716, gSuccessorTable_easyBindings_grammar_717, nullptr, gSuccessorTable_easyBindings_grammar_719, 
  gSuccessorTable_easyBindings_grammar_720, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_easyBindings_grammar_725, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_easyBindings_grammar_731, 
  nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_easyBindings_grammar [338 * 2] = {
  0, 1,
  1, 1,
  2, 4,
  3, 10,
  4, 3,
  5, 8,
  6, 7,
  6, 5,
  6, 8,
  7, 6,
  8, 5,
  9, 2,
  5, 12,
  10, 7,
  10, 7,
  5, 9,
  11, 1,
  12, 5,
  13, 2,
  14, 2,
  15, 2,
  16, 1,
  16, 2,
  16, 3,
  16, 1,
  17, 5,
  5, 8,
  18, 9,
  19, 7,
  20, 3,
  21, 10,
  22, 3,
  23, 3,
  24, 5,
  24, 5,
  24, 10,
  25, 3,
  26, 5,
  27, 1,
  28, 5,
  29, 1,
  30, 6,
  31, 9,
  31, 7,
  32, 1,
  33, 1,
  34, 1,
  34, 1,
  35, 4,
  36, 3,
  34, 8,
  34, 6,
  37, 7,
  38, 8,
  39, 0,
  39, 4,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  40, 0,
  40, 6,
  41, 0,
  41, 5,
  42, 0,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  43, 0,
  43, 1,
  44, 0,
  44, 1,
  45, 0,
  45, 1,
  46, 0,
  46, 4,
  47, 0,
  47, 3,
  48, 0,
  48, 2,
  49, 0,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 4,
  50, 0,
  50, 3,
  51, 0,
  51, 1,
  52, 0,
  52, 3,
  53, 0,
  53, 2,
  54, 3,
  54, 4,
  54, 0,
  55, 0,
  55, 3,
  56, 2,
  56, 1,
  56, 3,
  57, 0,
  57, 3,
  58, 2,
  58, 1,
  59, 0,
  59, 5,
  60, 1,
  60, 1,
  61, 1,
  61, 3,
  62, 0,
  62, 5,
  63, 1,
  63, 1,
  64, 0,
  64, 2,
  65, 0,
  65, 2,
  66, 1,
  66, 1,
  67, 1,
  67, 1,
  67, 1,
  67, 2,
  67, 1,
  67, 1,
  67, 1,
  67, 3,
  68, 0,
  68, 4,
  69, 1,
  69, 1,
  70, 1,
  70, 1,
  71, 0,
  71, 6,
  72, 0,
  72, 5,
  73, 0,
  73, 3,
  74, 0,
  74, 2,
  74, 2,
  74, 2,
  74, 2,
  74, 2,
  74, 2,
  75, 0,
  75, 3,
  75, 3,
  76, 1,
  76, 1,
  77, 0,
  77, 2,
  78, 0,
  78, 4,
  79, 1,
  79, 1,
  80, 1,
  80, 1,
  81, 0,
  81, 6,
  82, 0,
  82, 5,
  83, 1,
  83, 0,
  84, 0,
  84, 2,
  85, 0,
  85, 2,
  85, 2,
  85, 2,
  85, 2,
  85, 2,
  86, 0,
  86, 2,
  87, 0,
  87, 2,
  87, 2,
  87, 2,
  87, 2,
  87, 2,
  87, 7,
  88, 0,
  88, 3,
  89, 1,
  89, 0,
  90, 0,
  90, 1,
  91, 0,
  91, 2,
  92, 0,
  92, 2,
  92, 2,
  92, 2,
  92, 2,
  92, 2,
  93, 0,
  93, 4,
  93, 2,
  94, 0,
  94, 4,
  95, 0,
  95, 5,
  96, 1,
  96, 1,
  96, 1,
  96, 1,
  97, 0,
  97, 3,
  97, 4,
  97, 3,
  97, 3,
  97, 5,
  97, 4,
  98, 0,
  98, 2,
  98, 2,
  99, 0,
  99, 3,
  100, 0,
  100, 2,
  101, 1,
  101, 1,
  102, 4,
  102, 2,
  102, 4,
  102, 3,
  102, 1,
  102, 1,
  102, 1,
  102, 6,
  103, 0,
  103, 2,
  104, 1,
  104, 3,
  104, 1,
  105, 0,
  105, 3,
  106, 0,
  106, 2,
  107, 3,
  107, 3,
  107, 1,
  107, 1,
  108, 0,
  108, 2,
  109, 3,
  109, 2,
  110, 0,
  110, 2,
  110, 4,
  111, 0,
  111, 2,
  112, 0,
  112, 2,
  113, 0,
  113, 2,
  114, 2,
  114, 2,
  115, 0,
  115, 1,
  116, 0,
  116, 4,
  117, 0,
  117, 3,
  118, 0,
  118, 7,
  118, 2,
  118, 2,
  118, 2,
  118, 3,
  118, 2,
  119, 0,
  119, 1,
  120, 0,
  120, 4,
  121, 0,
  121, 2,
  121, 2,
  122, 0,
  122, 2,
  123, 0,
  123, 4,
  124, 0,
  124, 4,
  125, 0,
  125, 5,
  126, 1,
  126, 2,
  126, 4,
  126, 2,
  126, 1,
  126, 1,
  126, 1,
  126, 2,
  126, 1,
  126, 2,
  126, 4,
  127, 0,
  127, 3,
  128, 0,
  128, 2,
  129, 0,
  129, 2,
  130, 0,
  130, 1,
  131, 0,
  131, 4,
  132, 0,
  132, 2,
  133, 0,
  133, 2,
  134, 0,
  134, 1,
  135, 0,
  135, 3,
  136, 0,
  136, 5,
  137, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (GGS_astDeclarationStruct &  parameter_1,
                                GGS_location &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_easyBindings_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                     gProductionsTable_easyBindings_grammar) ;
    if (ok) {
      cGrammar_easyBindings_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_easyBindings_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_easyBindings_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_astDeclarationStruct &  parameter_1,
                                GGS_location &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_easyBindings_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_easyBindings_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                         gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                         gProductionsTable_easyBindings_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_easyBindings_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_astDeclarationStruct &  parameter_1,
                                GGS_location &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_easyBindings_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_easyBindings_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                       gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                       gProductionsTable_easyBindings_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_easyBindings_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'binding_option_list' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GGS_bindingOptionList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'preferences_declaration' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'entity_declaration' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_easyBindings_5F_syntax_entity_5F_declaration_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_easyBindings_5F_syntax_entity_5F_declaration_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_easyBindings_5F_syntax_entity_5F_declaration_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'graphviz_declaration' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'controller_declaration' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i5_parse(inLexique) ;
    break ;
  case 12 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i12_parse(inLexique) ;
    break ;
  case 15 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i15_parse(inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i5_indexing(inLexique) ;
    break ;
  case 12 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i12_indexing(inLexique) ;
    break ;
  case 15 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i15_indexing(inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i26_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GGS_lstring  parameter_1,
                                const GGS_lstring  parameter_2,
                                GGS_arrayControllerBindingListAST &  parameter_3,
                                GGS_astDeclarationStruct &  parameter_4,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i5_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 12 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i12_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 15 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i15_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i26_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'transient_declaration' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (const GGS_lstring  parameter_1,
                                const GGS_lstring  parameter_2,
                                GGS_astDeclarationStruct &  parameter_3,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i6_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 7 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i7_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i8_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'toMany_relationship' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (const GGS_lstring  parameter_1,
                                GGS_stringset &  parameter_2,
                                GGS_astDeclarationStruct &  parameter_3,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'main_xib' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_easyBindings_5F_syntax_main_5F_xib_i10_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_easyBindings_5F_syntax_main_5F_xib_i10_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GGS_mainXibDescriptorList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_easyBindings_5F_syntax_main_5F_xib_i10_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'main_xib_line' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GGS_mainXibLineDescriptorList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'simple_stored_declaration' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_indexing(inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (const GGS_lstring  parameter_1,
                                GGS_simpleStoredPropertyList &  parameter_2,
                                GGS_stringset &  parameter_3,
                                GGS_astDeclarationStruct &  parameter_4,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'explicit_value' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_easyBindings_5F_syntax_explicit_5F_value_i16_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_easyBindings_5F_syntax_explicit_5F_value_i16_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GGS_abstractDefaultValue &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 16) {
  rule_easyBindings_5F_syntax_explicit_5F_value_i16_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'auto_layout_view_binding_specification' non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GGS_lstring  parameter_1,
                                GGS_autoLayoutViewClassBindingSpecificationList &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 17) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                 'booleanMultipleBindingExpression' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GGS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 18) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                 'booleanMultipleBindingComparison' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GGS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'booleanMultipleBindingTerm' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GGS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                  'booleanMultipleBindingOperand' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_parse (Lexique_easyBindings_5F_lexique * inLexique) {
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

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_indexing(inLexique) ;
    break ;
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_indexing(inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_indexing(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GGS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
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
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'extern_swift_func' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_ (GGS_externSwiftFunctionList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 25) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'outlet_binding_specification' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_5F_specification_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 27) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_5F_specification_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 27) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_5F_specification_ (GGS_outletClassBindingSpecificationList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 27) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'outlet_class_declaration' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 28) {
  rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 28) {
  rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 28) {
  rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'extern_swift_delegate' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 29) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 29) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_ (GGS_externSwiftDelegateList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 29) {
  rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'document_declaration' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_easyBindings_5F_syntax_document_5F_declaration_i30_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_easyBindings_5F_syntax_document_5F_declaration_i30_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_easyBindings_5F_syntax_document_5F_declaration_i30_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'xcode_project' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 31) {
  rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 31) {
  rule_easyBindings_5F_syntax_xcode_5F_project_i31_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GGS_lstring &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 31) {
  rule_easyBindings_5F_syntax_xcode_5F_project_i31_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'action_declaration' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 32) {
  rule_easyBindings_5F_syntax_action_5F_declaration_i32_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 32) {
  rule_easyBindings_5F_syntax_action_5F_declaration_i32_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GGS_lstringlist &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 32) {
  rule_easyBindings_5F_syntax_action_5F_declaration_i32_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'autolayout_class_declaration' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_parse(inLexique) ;
    break ;
  case 34 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_parse(inLexique) ;
    break ;
  case 35 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_indexing(inLexique) ;
    break ;
  case 34 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_indexing(inLexique) ;
    break ;
  case 35 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_class_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_(parameter_1, inLexique) ;
    break ;
  case 34 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_(parameter_1, inLexique) ;
    break ;
  case 35 :
      rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                 'autolayout_formal_parameter_list' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_formal_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 36) {
  rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 36) {
  rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_formal_5F_parameter_5F_list_ (const GGS_lstring  parameter_1,
                                GGS_autoLayoutClassParameterList &  parameter_2,
                                GGS_lstring &  parameter_3,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 36) {
  rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'outlet_declaration' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 37) {
  rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 37) {
  rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GGS_outletDeclarationList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 37) {
  rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                          'outlet_binding' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 38) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_i38_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 38) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_i38_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_ (GGS_tableValueBinding &  parameter_1,
                                GGS_runActionDescriptor &  parameter_2,
                                GGS_multipleBindingDescriptor &  parameter_3,
                                GGS_multipleBindingDescriptor &  parameter_4,
                                GGS_graphicController &  parameter_5,
                                GGS_regularBindingList &  parameter_6,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 38) {
  rule_easyBindings_5F_syntax_outlet_5F_binding_i38_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, parameter_6, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'class_declaration' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 39) {
  rule_easyBindings_5F_syntax_class_5F_declaration_i39_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 39) {
  rule_easyBindings_5F_syntax_class_5F_declaration_i39_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 39) {
  rule_easyBindings_5F_syntax_class_5F_declaration_i39_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'observable_property' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 40) {
  rule_easyBindings_5F_syntax_observable_5F_property_i40_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 40) {
  rule_easyBindings_5F_syntax_observable_5F_property_i40_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GGS_observablePropertyAST &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 40) {
  rule_easyBindings_5F_syntax_observable_5F_property_i40_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'toOne_relationship' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 41) {
  rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 41) {
  rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (const GGS_lstring  parameter_1,
                                GGS_astDeclarationStruct &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 41) {
  rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'stack_view_declaration' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_stack_5F_view_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 42 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_parse(inLexique) ;
    break ;
  case 43 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_stack_5F_view_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 42 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_indexing(inLexique) ;
    break ;
  case 43 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_stack_5F_view_5F_declaration_ (GGS_astViewDeclarationList &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 42 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_(parameter_1, inLexique) ;
    break ;
  case 43 :
      rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'auto_layout_func_call_list' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 44) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 44) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_func_5F_call_5F_list_ (GGS_stringset &  parameter_1,
                                GGS_astAutoLayoutViewFunctionCallList &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 44) {
  rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'view_instruction_list' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_5F_list_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 45) {
  rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_5F_list_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 45) {
  rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_5F_list_ (const GGS_bool  parameter_1,
                                GGS_stringset &  parameter_2,
                                GGS_astNewStackViewDeclarationList &  parameter_3,
                                GGS_astViewInstructionList &  parameter_4,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 45) {
  rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                         'view_instruction' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 46 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i46_parse(inLexique) ;
    break ;
  case 47 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i47_parse(inLexique) ;
    break ;
  case 50 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i50_parse(inLexique) ;
    break ;
  case 51 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i51_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 46 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i46_indexing(inLexique) ;
    break ;
  case 47 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i47_indexing(inLexique) ;
    break ;
  case 50 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i50_indexing(inLexique) ;
    break ;
  case 51 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i51_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_ (GGS_stringset &  parameter_1,
                                GGS_astAbstractViewInstructionDeclaration &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 46 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i46_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 47 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i47_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 50 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i50_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 51 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i51_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'computed_view_instruction' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_computed_5F_view_5F_instruction_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 48) {
  rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_computed_5F_view_5F_instruction_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 48) {
  rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_computed_5F_view_5F_instruction_ (GGS_stringset &  parameter_1,
                                GGS_astComputedViewInstruction &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 48) {
  rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'view_actual_parameter_list' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_view_5F_actual_5F_parameter_5F_list_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 49) {
  rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_actual_5F_parameter_5F_list_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 49) {
  rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_actual_5F_parameter_5F_list_ (GGS_stringset &  parameter_1,
                                GGS_astAutoLayoutViewInstructionParameterList &  parameter_2,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 49) {
  rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                         'enum_declaration' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 52) {
  rule_easyBindings_5F_syntax_enum_5F_declaration_i52_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 52) {
  rule_easyBindings_5F_syntax_enum_5F_declaration_i52_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 52) {
  rule_easyBindings_5F_syntax_enum_5F_declaration_i52_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'enum_function_declaration' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_function_5F_declaration_parse (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 53) {
  rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_function_5F_declaration_indexing (Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 53) {
  rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_function_5F_declaration_ (GGS_astDeclarationStruct &  parameter_1,
                                Lexique_easyBindings_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 53) {
  rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_0' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  54 55 56 57 58 59 60 61 62 63 64 65 66 67
  return inLexique->nextProductionIndex () - 53 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_1' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  68 69
  return inLexique->nextProductionIndex () - 67 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_2' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_3' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  72 73 74 75 76 77 78 79 80
  return inLexique->nextProductionIndex () - 71 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_4' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  81 82
  return inLexique->nextProductionIndex () - 80 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_5' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_6' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_7' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_8' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_9' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_10' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  93 94 95 96 97 98 99 100 101
  return inLexique->nextProductionIndex () - 92 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_11' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  102 103
  return inLexique->nextProductionIndex () - 101 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_12' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  104 105
  return inLexique->nextProductionIndex () - 103 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_13' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  106 107
  return inLexique->nextProductionIndex () - 105 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_14' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  108 109
  return inLexique->nextProductionIndex () - 107 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_15' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  110 111 112
  return inLexique->nextProductionIndex () - 109 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_16' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_17' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  115 116 117
  return inLexique->nextProductionIndex () - 114 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_18' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_19' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_20' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_21' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_22' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  126 127
  return inLexique->nextProductionIndex () - 125 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_23' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  128 129
  return inLexique->nextProductionIndex () - 127 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_24' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  130 131
  return inLexique->nextProductionIndex () - 129 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_25' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  132 133
  return inLexique->nextProductionIndex () - 131 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_26' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  134 135
  return inLexique->nextProductionIndex () - 133 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_27' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_28' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  138 139 140 141 142 143 144 145
  return inLexique->nextProductionIndex () - 137 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_29' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_30' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_31' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_32' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_33' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_34' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  156 157
  return inLexique->nextProductionIndex () - 155 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_35' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  158 159 160 161 162 163 164
  return inLexique->nextProductionIndex () - 157 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_36' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  165 166 167
  return inLexique->nextProductionIndex () - 164 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_37' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  168 169
  return inLexique->nextProductionIndex () - 167 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_38' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  170 171
  return inLexique->nextProductionIndex () - 169 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_39' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  172 173
  return inLexique->nextProductionIndex () - 171 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_40' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  174 175
  return inLexique->nextProductionIndex () - 173 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_41' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  176 177
  return inLexique->nextProductionIndex () - 175 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_42' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  178 179
  return inLexique->nextProductionIndex () - 177 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_43' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  180 181
  return inLexique->nextProductionIndex () - 179 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_44' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  182 183
  return inLexique->nextProductionIndex () - 181 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_45' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  184 185
  return inLexique->nextProductionIndex () - 183 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_46' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  186 187 188 189 190 191
  return inLexique->nextProductionIndex () - 185 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_47' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  192 193
  return inLexique->nextProductionIndex () - 191 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_48' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  194 195 196 197 198 199 200
  return inLexique->nextProductionIndex () - 193 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_49' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  201 202
  return inLexique->nextProductionIndex () - 200 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_50' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  203 204
  return inLexique->nextProductionIndex () - 202 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_51' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  205 206
  return inLexique->nextProductionIndex () - 204 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_52' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  207 208
  return inLexique->nextProductionIndex () - 206 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_53' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  209 210 211 212 213 214
  return inLexique->nextProductionIndex () - 208 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_54' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  215 216 217
  return inLexique->nextProductionIndex () - 214 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_55' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  218 219
  return inLexique->nextProductionIndex () - 217 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_56' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  220 221
  return inLexique->nextProductionIndex () - 219 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_57' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_57 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  222 223 224 225
  return inLexique->nextProductionIndex () - 221 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_58' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_58 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  226 227 228 229 230 231 232
  return inLexique->nextProductionIndex () - 225 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_59' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_59 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  233 234 235
  return inLexique->nextProductionIndex () - 232 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_60' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_60 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  236 237
  return inLexique->nextProductionIndex () - 235 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_61' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_61 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  238 239
  return inLexique->nextProductionIndex () - 237 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_62' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_62 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  240 241
  return inLexique->nextProductionIndex () - 239 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_63' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_63 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  242 243 244 245 246 247 248 249
  return inLexique->nextProductionIndex () - 241 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_64' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_64 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  250 251
  return inLexique->nextProductionIndex () - 249 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_65' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_65 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  252 253 254
  return inLexique->nextProductionIndex () - 251 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_66' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_66 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  255 256
  return inLexique->nextProductionIndex () - 254 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_67' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_67 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  257 258
  return inLexique->nextProductionIndex () - 256 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_68' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_68 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  259 260 261 262
  return inLexique->nextProductionIndex () - 258 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_69' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_69 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  263 264
  return inLexique->nextProductionIndex () - 262 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_70' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_70 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  265 266
  return inLexique->nextProductionIndex () - 264 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_71' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_71 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  267 268 269
  return inLexique->nextProductionIndex () - 266 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_72' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_72 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  270 271
  return inLexique->nextProductionIndex () - 269 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_73' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_73 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  272 273
  return inLexique->nextProductionIndex () - 271 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_74' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_74 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  274 275
  return inLexique->nextProductionIndex () - 273 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_75' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_75 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  276 277
  return inLexique->nextProductionIndex () - 275 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_76' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_76 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  278 279
  return inLexique->nextProductionIndex () - 277 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_77' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_77 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  280 281
  return inLexique->nextProductionIndex () - 279 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_78' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_78 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  282 283
  return inLexique->nextProductionIndex () - 281 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_79' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_79 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  284 285 286 287 288 289 290
  return inLexique->nextProductionIndex () - 283 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_80' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_80 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  291 292
  return inLexique->nextProductionIndex () - 290 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_81' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_81 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  293 294
  return inLexique->nextProductionIndex () - 292 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_82' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_82 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  295 296 297
  return inLexique->nextProductionIndex () - 294 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_83' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_83 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  298 299
  return inLexique->nextProductionIndex () - 297 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_84' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_84 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  300 301
  return inLexique->nextProductionIndex () - 299 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_85' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_85 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  302 303
  return inLexique->nextProductionIndex () - 301 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_86' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_86 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  304 305
  return inLexique->nextProductionIndex () - 303 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_87' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_87 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  306 307 308 309 310 311 312 313 314 315 316
  return inLexique->nextProductionIndex () - 305 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_88' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_88 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  317 318
  return inLexique->nextProductionIndex () - 316 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_89' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_89 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  319 320
  return inLexique->nextProductionIndex () - 318 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_90' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_90 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  321 322
  return inLexique->nextProductionIndex () - 320 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_91' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_91 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  323 324
  return inLexique->nextProductionIndex () - 322 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_92' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_92 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  325 326
  return inLexique->nextProductionIndex () - 324 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_93' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_93 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  327 328
  return inLexique->nextProductionIndex () - 326 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_94' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_94 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  329 330
  return inLexique->nextProductionIndex () - 328 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_95' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_95 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  331 332
  return inLexique->nextProductionIndex () - 330 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_96' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_96 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  333 334
  return inLexique->nextProductionIndex () - 332 ;
}

//--------------------------------------------------------------------------------------------------
//
//                 'select_easyBindings_5F_syntax_97' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_97 (Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers:  335 336
  return inLexique->nextProductionIndex () - 334 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 24)) ;
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
                                                             const cObjectArray & /* inEffectiveParameterArray */,
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
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3974, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 94)) ;
  }
  {
  GGS_propertyGenerationList temp_1 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.ggs", 97)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_3974, temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 95)) ;
  }
  UpEnumerator_actionMap enumerator_4116 (var_actionMap_3974) ;
  while (enumerator_4116.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_2 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_2.readProperty_mClassName ().readProperty_string (), enumerator_4116.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 103)) ;
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
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("init")  COMMA_SOURCE_FILE ("preferences.ggs", 121)) ;
  GGS_stringset var_availableCallers_4779 = temp_0 ;
  GGS_externFunctionMap var_externFunctionMap_4848 = GGS_externFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  UpEnumerator_externSwiftFunctionList enumerator_4904 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList ()) ;
  while (enumerator_4904.hasCurrentObject ()) {
    {
    var_externFunctionMap_4848.setter_insertKey (enumerator_4904.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 124)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_availableCallers_4779.getter_hasKey (enumerator_4904.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.ggs", 125)).operator_not (SOURCE_FILE ("preferences.ggs", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_5098 = GGS_string ("invalid caller; available callers:") ;
        UpEnumerator_stringset enumerator_5150 (var_availableCallers_4779) ;
        while (enumerator_5150.hasCurrentObject ()) {
          var_s_5098.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_5150.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 128)) ;
          enumerator_5150.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4904.current_mCallerName (HERE).readProperty_location (), var_s_5098, fixItArray3  COMMA_SOURCE_FILE ("preferences.ggs", 130)) ;
      }
    }
    enumerator_4904.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5387 ;
  GGS_actionMap var_actionMap_5420 ;
  GGS_propertyGenerationList var_propertyGenerationList_5440 ;
  GGS_classKind joker_5374 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 135)), inCompiler COMMA_HERE), joker_5374, var_preferencesPropertyMap_5387, var_actionMap_5420, var_propertyGenerationList_5440, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5806 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_5877 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5949 ;
  GGS_decoratedOutletMap var_outletMap_6010 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6062 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6149 ;
  {
  const GGS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5387, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5387, var_actionMap_5420, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5806, var_multipleBindingGenerationList_5877, var_actionBindingListForGeneration_5949, var_outletMap_6010, var_tableViewBindingGenerationList_6062, var_ebViewGraphicControllerBindingGenerationList_6149, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6275 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_5 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 162)) ;
  GGS_viewGenerationList var_viewGenerationList_6325 = temp_5 ;
  GGS_implicitViewFunctionGenerationList temp_6 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 163)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6391 = temp_6 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6464 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6512 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_7 = this ;
  UpEnumerator_astViewDeclarationList enumerator_6554 (temp_7.readProperty_mDeclaration ().readProperty_mViewDeclarationList ()) ;
  while (enumerator_6554.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6275.setter_insertKey (enumerator_6554.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7057 ;
    const GGS_prefsDeclarationAST temp_8 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6554.current_mView (HERE).ptr (), enumerator_6554.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6275, GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5387, ioArgument_ioSemanticContext, GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5420, temp_8.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6391, var_configuratorMap_6464, var_autoLayoutOutletMap_6512, var_viewGeneration_7057, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 168)) ;
    {
    var_viewGenerationList_6325.setter_append (enumerator_6554.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7057, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 184)) ;
    }
    enumerator_6554.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_viewDeclarationMap_6275.getter_hasKey (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.ggs", 186)).operator_not (SOURCE_FILE ("preferences.ggs", 186)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.ggs", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray10  COMMA_SOURCE_FILE ("preferences.ggs", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5440, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5806, var_multipleBindingGenerationList_5877, var_actionBindingListForGeneration_5949, var_outletMap_6010, temp_11.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6062, var_ebViewGraphicControllerBindingGenerationList_6149, var_viewGenerationList_6325, var_implicitViewFunctionGenerationList_6391, var_configuratorMap_6464, var_autoLayoutOutletMap_6512, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 190)) ;
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
  GGS_string var_s_10721 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.ggs", 266))) ;
  GGS_string var_fileName_11222 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 280)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 280)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11222, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 281)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11222, var_s_10721, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 282)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_11414 (temp_12.readProperty_mConfiguratorMap ()) ;
  while (enumerator_11414.hasCurrentObject ()) {
    GGS_string var_s_11466 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11414.current_lkey (HERE).readProperty_string (), enumerator_11414.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.ggs", 289))) ;
    GGS_string var_header_11643 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 294)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 294)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 294)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 296)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 297)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 298)) ;
    GGS_string var_fileName_11985 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11414.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 299)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11985, inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 300)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11985, GGS_string ("//"), var_header_11643, GGS_string ("\n\n"), var_s_11466, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.ggs", 309)), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 309)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 301)) ;
    }
    enumerator_11414.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'
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
//Overriding extension method '@entityDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_5244 ;
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5244, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 162)) ;
  }
  {
  const GGS_entityDeclarationAST temp_1 = this ;
  const GGS_entityDeclarationAST temp_2 = this ;
  const GGS_entityDeclarationAST temp_3 = this ;
  const GGS_entityDeclarationAST temp_4 = this ;
  const GGS_entityDeclarationAST temp_5 = this ;
  GGS_propertyGenerationList temp_6 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 173)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 165)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5244, temp_6, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 163)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST secondAnalysisPhase'
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
      GGS_propertyMap var_inheritedPropertyMap_6051 ;
      const GGS_entityDeclarationAST temp_2 = this ;
      GGS_classKind joker_6023 ; // Joker input parameter
      GGS_actionMap joker_6079_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6079_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_6023, var_inheritedPropertyMap_6051, joker_6079_2, joker_6079_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 183)) ;
      GGS_propertyMap var_propertyMap_6237 ;
      const GGS_entityDeclarationAST temp_3 = this ;
      GGS_classKind joker_6209 ; // Joker input parameter
      GGS_actionMap joker_6256_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6256_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6209, var_propertyMap_6237, joker_6256_2, joker_6256_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 190)) ;
      GGS_propertyMap var_newPropertyMap_6298 = var_inheritedPropertyMap_6051 ;
      UpEnumerator_propertyMap enumerator_6472 (var_propertyMap_6237) ;
      while (enumerator_6472.hasCurrentObject ()) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_6472.current_mIsOverriding (HERE).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_propertyKind joker_6577_3 ; // Joker input parameter
            GGS_actionMap joker_6577_2 ; // Joker input parameter
            GGS_bool joker_6577_1 ; // Joker input parameter
            var_inheritedPropertyMap_6051.method_searchKey (enumerator_6472.current_lkey (HERE), joker_6577_3, joker_6577_2, joker_6577_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          var_newPropertyMap_6298.setter_insertKey (enumerator_6472.current_lkey (HERE), enumerator_6472.current_mKind (HERE), enumerator_6472.current_mActionMap (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 206)) ;
          }
        }
        enumerator_6472.gotoNextObject () ;
      }
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_classMap_2E_element var_entry_6759 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_5.readProperty_mClassName (), inCompiler COMMA_HERE) ;
      var_entry_6759.mProperty_mPropertyMap = var_newPropertyMap_6298 ;
      {
      ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6759, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 212)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_propertyMap_7463 ;
  GGS_propertyGenerationList var_propertyGenerationList_7517 ;
  const GGS_entityDeclarationAST temp_0 = this ;
  GGS_classKind joker_7437 ; // Joker input parameter
  GGS_actionMap joker_7480 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7437, var_propertyMap_7463, joker_7480, var_propertyGenerationList_7517, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 225)) ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 233)) ;
  GGS_stringset var_overridenTransients_7662 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    const GGS_entityDeclarationAST temp_4 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (temp_4.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 234)) COMMA_SOURCE_FILE ("entity.ggs", 234)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_classKind var_superClassKind_7851 ;
      GGS_propertyMap var_superPropertyMap_7891 ;
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_actionMap joker_7915_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7915_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_5.readProperty_mSuperEntityName (), var_superClassKind_7851, var_superPropertyMap_7891, joker_7915_2, joker_7915_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 235)) ;
      switch (var_superClassKind_7851.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          const GGS_entityDeclarationAST temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("prefs cannot be a super entity"), fixItArray7  COMMA_SOURCE_FILE ("entity.ggs", 243)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_8054__0 ;
          var_superClassKind_7851.getAssociatedValuesFor_atomic (extractedValue_8054__0) ;
          const GGS_entityDeclarationAST temp_8 = this ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("an atomic class cannot be a super entity"), fixItArray9  COMMA_SOURCE_FILE ("entity.ggs", 245)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_8157__0 ;
          var_superClassKind_7851.getAssociatedValuesFor_document (extractedValue_8157__0) ;
          const GGS_entityDeclarationAST temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("a document cannot be a super entity"), fixItArray11  COMMA_SOURCE_FILE ("entity.ggs", 247)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_8253__0 ;
          GGS_bool extractedValue_8262_isGraphic_1 ;
          GGS_bool extractedValue_8279_isAbstract_2 ;
          GGS_bool extractedValue_8291__3 ;
          var_superClassKind_7851.getAssociatedValuesFor_entity (extractedValue_8253__0, extractedValue_8262_isGraphic_1, extractedValue_8279_isAbstract_2, extractedValue_8291__3) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_entityDeclarationAST temp_13 = this ;
            test_12 = extractedValue_8262_isGraphic_1.operator_and (temp_13.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 249)) COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_entityDeclarationAST temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray15  COMMA_SOURCE_FILE ("entity.ggs", 250)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_entityDeclarationAST temp_17 = this ;
            test_16 = extractedValue_8279_isAbstract_2.operator_and (temp_17.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 252)) COMMA_SOURCE_FILE ("entity.ggs", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              UpEnumerator_propertyMap enumerator_8588 (var_superPropertyMap_7891) ;
              while (enumerator_8588.hasCurrentObject ()) {
                GalgasBool test_18 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_18) {
                  test_18 = extensionGetter_isAbstract (enumerator_8588.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 254)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_18) {
                    GalgasBool test_19 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_19) {
                      test_19 = var_propertyMap_7463.getter_hasKey (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 255)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_19) {
                        {
                        var_overridenTransients_7662.setter_insert (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)) ;
                        }
                        GGS_propertyKind var_propertyKind_8865 ;
                        GGS_actionMap joker_8879_2 ; // Joker input parameter
                        GGS_bool joker_8879_1 ; // Joker input parameter
                        var_propertyMap_7463.method_searchKey (enumerator_8588.current (HERE).readProperty_lkey (), var_propertyKind_8865, joker_8879_2, joker_8879_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 257)) ;
                        GGS_string var_typeName_8902 = extensionGetter_typeName (var_propertyKind_8865, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 258)) ;
                        GGS_string var_superTypeName_8953 = extensionGetter_typeName (enumerator_8588.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 259)) ;
                        GalgasBool test_20 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_20) {
                          test_20 = GGS_bool (ComparisonKind::notEqual, var_typeName_8902.objectCompare (var_superTypeName_8953)).boolEnum () ;
                          if (GalgasBool::boolTrue == test_20) {
                            GenericArray <FixItDescription> fixItArray21 ;
                            inCompiler->emitSemanticError (var_propertyMap_7463.getter_locationForKey (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 261)), GGS_string ("type '").add_operation (var_superTypeName_8953, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 262)).add_operation (GGS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 262)), fixItArray21  COMMA_SOURCE_FILE ("entity.ggs", 261)) ;
                          }
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_19) {
                      const GGS_entityDeclarationAST temp_22 = this ;
                      GenericArray <FixItDescription> fixItArray23 ;
                      inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("transient '").add_operation (enumerator_8588.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 266)).add_operation (GGS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 266)), fixItArray23  COMMA_SOURCE_FILE ("entity.ggs", 265)) ;
                    }
                  }
                }
                enumerator_8588.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GGS_bool var_canCopyAndPaste_5F_option_9492 = GGS_bool (false) ;
  GGS_bool var_cannotBeDeleted_5F_option_9529 = GGS_bool (false) ;
  const GGS_entityDeclarationAST temp_24 = this ;
  UpEnumerator_lstringlist enumerator_9570 (temp_24.readProperty_mGraphicOptionArray ()) ;
  while (enumerator_9570.hasCurrentObject ()) {
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = GGS_bool (ComparisonKind::equal, enumerator_9570.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("canCopyAndPaste"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = var_canCopyAndPaste_5F_option_9492.boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            GenericArray <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray27  COMMA_SOURCE_FILE ("entity.ggs", 280)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9492 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::equal, enumerator_9570.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("cannotBeDeleted"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GalgasBool test_29 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_29) {
            test_29 = var_cannotBeDeleted_5F_option_9529.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              GenericArray <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 285)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9529 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        GenericArray <FixItDescription> fixItArray31 ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9570.current_mValue (HERE).readProperty_location (), GGS_string ("unkown graphic option"), fixItArray31  COMMA_SOURCE_FILE ("entity.ggs", 289)) ;
      }
    }
    enumerator_9570.gotoNextObject () ;
  }
  GGS_bool var_hasSubClass_10236 = GGS_bool (false) ;
  UpEnumerator_classMap enumerator_10300 (ioArgument_ioSemanticContext.readProperty_mClassMap ()) ;
  bool bool_32 = var_hasSubClass_10236.operator_not (SOURCE_FILE ("entity.ggs", 298)).isValidAndTrue () ;
  if (enumerator_10300.hasCurrentObject () && bool_32) {
    while (enumerator_10300.hasCurrentObject () && bool_32) {
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = enumerator_10300.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 299)).boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_string var_superEntityName_10455 ;
          GGS_bool joker_10472_3 ; // Joker input parameter
          GGS_bool joker_10472_2 ; // Joker input parameter
          GGS_bool joker_10472_1 ; // Joker input parameter
          enumerator_10300.current (HERE).readProperty_mClassKind ().method_extractEntity (var_superEntityName_10455, joker_10472_3, joker_10472_2, joker_10472_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 300)) ;
          const GGS_entityDeclarationAST temp_34 = this ;
          var_hasSubClass_10236 = GGS_bool (ComparisonKind::equal, temp_34.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10455)) ;
        }
      }
      enumerator_10300.gotoNextObject () ;
      if (enumerator_10300.hasCurrentObject ()) {
        bool_32 = var_hasSubClass_10236.operator_not (SOURCE_FILE ("entity.ggs", 298)).isValidAndTrue () ;
      }
    }
  }
  {
  const GGS_entityDeclarationAST temp_35 = this ;
  const GGS_entityDeclarationAST temp_36 = this ;
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.setter_append (temp_35.readProperty_mClassName ().readProperty_string (), temp_36.readProperty_mObsoleteEntityNames (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 305)) ;
  }
  {
  const GGS_entityDeclarationAST temp_37 = this ;
  const GGS_entityDeclarationAST temp_38 = this ;
  const GGS_entityDeclarationAST temp_39 = this ;
  const GGS_entityDeclarationAST temp_40 = this ;
  const GGS_entityDeclarationAST temp_41 = this ;
  const GGS_entityDeclarationAST temp_42 = this ;
  const GGS_entityDeclarationAST temp_43 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_entityForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mClassName ().readProperty_string (), temp_38.readProperty_mSuperEntityName ().readProperty_string (), temp_39.readProperty_mHandlingOpposite (), var_propertyGenerationList_7517, temp_40.readProperty_mSignatureList (), temp_41.readProperty_mIsGraphicEntity (), temp_42.readProperty_mIsAbstract (), var_overridenTransients_7662, temp_43.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10236, var_canCopyAndPaste_5F_option_9492, var_cannotBeDeleted_5F_option_9529, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 309)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                             const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                             GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                             GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@entityForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_generationStruct constinArgument_inGenerationStruct,
                                                             const GGS_stringset constinArgument_inUsedProtocolSet,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList temp_0 = GGS_atomicPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 365)) ;
  GGS_atomicPropertyGenerationList var_atomicPropertyGenerationList_12934 = temp_0 ;
  GGS_transientPropertyGenerationList temp_1 = GGS_transientPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 366)) ;
  GGS_transientPropertyGenerationList var_transientPropertyGenerationList_13009 = temp_1 ;
  GGS_computedPropertyGenerationList temp_2 = GGS_computedPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 367)) ;
  GGS_computedPropertyGenerationList var_computedPropertyGenerationList_13086 = temp_2 ;
  GGS_toOnePropertyGenerationList temp_3 = GGS_toOnePropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 368)) ;
  GGS_toOnePropertyGenerationList var_toOnePropertyGenerationList_13159 = temp_3 ;
  GGS_toManyPropertyGenerationList temp_4 = GGS_toManyPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 369)) ;
  GGS_toManyPropertyGenerationList var_toManyPropertyGenerationList_13230 = temp_4 ;
  GGS_atomicProxyGenerationList temp_5 = GGS_atomicProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 370)) ;
  GGS_atomicProxyGenerationList var_proxyGenerationList_13299 = temp_5 ;
  GGS_toManyProxyGenerationList temp_6 = GGS_toManyProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 371)) ;
  GGS_toManyProxyGenerationList var_toManyProxyGenerationList_13359 = temp_6 ;
  const GGS_entityForGeneration temp_7 = this ;
  UpEnumerator_propertyGenerationList enumerator_13399 (temp_7.readProperty_mPropertyGenerationList ()) ;
  while (enumerator_13399.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_atomicPropertyGeneration var_atomicProperty_13457 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
      if (nullptr == var_atomicProperty_13457.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        {
        var_atomicPropertyGenerationList_12934.setter_append (var_atomicProperty_13457, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 374)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_transientPropertyGeneration var_transientProperty_13596 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
        if (nullptr == var_transientProperty_13596.ptr ()) {
          test_9 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_9) {
          {
          var_transientPropertyGenerationList_13009.setter_append (var_transientProperty_13596, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 376)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_computedPropertyGeneration var_computedProperty_13747 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
          if (nullptr == var_computedProperty_13747.ptr ()) {
            test_10 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_10) {
            {
            var_computedPropertyGenerationList_13086.setter_append (var_computedProperty_13747, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 378)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_toManyProxyGeneration var_toManyProxy_13894 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
            if (nullptr == var_toManyProxy_13894.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              {
              var_toManyProxyGenerationList_13359.setter_append (var_toManyProxy_13894, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 380)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_atomicProxyGeneration var_proxyProperty_14021 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
              if (nullptr == var_proxyProperty_14021.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                {
                var_proxyGenerationList_13299.setter_append (var_proxyProperty_14021, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 382)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_toOnePropertyGeneration var_toOneProperty_14146 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
                if (nullptr == var_toOneProperty_14146.ptr ()) {
                  test_13 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_13) {
                  {
                  var_toOnePropertyGenerationList_13159.setter_append (var_toOneProperty_14146, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 384)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                GalgasBool test_14 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_14) {
                  GGS_toManyPropertyGeneration var_toOneProperty_14281 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_13399.current_mProperty (HERE).ptr ())) ;
                  if (nullptr == var_toOneProperty_14281.ptr ()) {
                    test_14 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_14) {
                    {
                    var_toManyPropertyGenerationList_13230.setter_append (var_toOneProperty_14281, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 386)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_13399.gotoNextObject () ;
  }
  GGS_string var_superEntityName_14428 = GGS_string::makeEmptyString () ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_entityForGeneration temp_16 = this ;
    test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mSuperEntityName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_entityForGeneration temp_17 = this ;
      var_superEntityName_14428 = temp_17.readProperty_mSuperEntityName () ;
    }
  }
  if (GalgasBool::boolFalse == test_15) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_entityForGeneration temp_19 = this ;
      test_18 = temp_19.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_superEntityName_14428 = GGS_string ("EBGraphicManagedObject") ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_superEntityName_14428 = GGS_string ("EBManagedObject") ;
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
  GGS_string var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_20.readProperty_mEntityName (), var_superEntityName_14428, temp_21.readProperty_mPropertyGenerationList (), constinArgument_inUsedProtocolSet, var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_22.readProperty_mSignatureSet (), temp_23.readProperty_mIsGraphicEntity (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_mOverridenTransients (), temp_26.readProperty_mExternSwiftDelegateList (), temp_27.readProperty_mHasSubEntity (), temp_28.readProperty_mCanCopyAndPaste_5F_option (), temp_29.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_30.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 417)) COMMA_SOURCE_FILE ("entity.ggs", 397))) ;
  const GGS_entityForGeneration temp_31 = this ;
  GGS_string var_fileName_15469 = GGS_string ("entity-").add_operation (temp_31.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 419)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 419)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 420)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 421)) ;
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    const GGS_entityForGeneration temp_33 = this ;
    test_32 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_33.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 426)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_entityForGeneration temp_34 = this ;
      const GGS_entityForGeneration temp_35 = this ;
      const GGS_entityForGeneration temp_36 = this ;
      const GGS_entityForGeneration temp_37 = this ;
      const GGS_entityForGeneration temp_38 = this ;
      const GGS_entityForGeneration temp_39 = this ;
      const GGS_entityForGeneration temp_40 = this ;
      const GGS_entityForGeneration temp_41 = this ;
      var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_34.readProperty_mEntityName (), var_superEntityName_14428, temp_35.readProperty_mHandlingOpposite (), temp_36.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_37.readProperty_mSignatureSet (), temp_38.readProperty_mIsGraphicEntity (), temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mOverridenTransients (), temp_41.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 427))) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    var_s_14688 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_42 = this ;
  var_fileName_15469 = GGS_string ("toone-").add_operation (temp_42.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 448)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 448)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 449)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 450)) ;
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    const GGS_entityForGeneration temp_44 = this ;
    test_43 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_44.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 455)).boolEnum () ;
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
      var_s_14688 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_45.readProperty_mEntityName (), var_superEntityName_14428, temp_46.readProperty_mHandlingOpposite (), temp_47.readProperty_mPropertyGenerationList (), var_proxyGenerationList_13299, var_toManyProxyGenerationList_13359, var_atomicPropertyGenerationList_12934, var_transientPropertyGenerationList_13009, var_computedPropertyGenerationList_13086, var_toOnePropertyGenerationList_13159, var_toManyPropertyGenerationList_13230, temp_48.readProperty_mSignatureSet (), temp_49.readProperty_mIsGraphicEntity (), temp_50.readProperty_mIsAbstract (), temp_51.readProperty_mOverridenTransients (), temp_52.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_53.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 473)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_54.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 474)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_55.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 475)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_56.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 476)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_57.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 477)), constinArgument_inUsedProtocolSet COMMA_SOURCE_FILE ("entity.ggs", 456))) ;
    }
  }
  if (GalgasBool::boolFalse == test_43) {
    var_s_14688 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_58 = this ;
  var_fileName_15469 = GGS_string ("tomany-").add_operation (temp_58.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 483)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 483)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_15469, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 484)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_15469, var_s_14688, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 485)) ;
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inEntityListForGeneration.getter_count (SOURCE_FILE ("entity.ggs", 501)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_fileName_18591 = GGS_string ("EBManagedObjectFactory.swift") ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_18591, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 503)) ;
      }
      GGS_string var_s_18684 = GGS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 504))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_18591, var_s_18684, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 505)) ;
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
                                                                                     const GGS_stringset & in_USED_5F_PROTOCOL_5F_SET,
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
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_1 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).add_operation (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 12)).boolEnum () ;
        switch (test_1) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 14)).stringValue ()) ;
          result.appendString (" { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 19)).stringValue ()) ;
          result.appendString (" { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
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
  const GalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1033_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicProxyGenerationList enumerator_1033 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1033.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_3 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).add_operation (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_3) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 32)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//  var ") ;
          result.appendString (enumerator_1033.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1033.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 36)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1033.gotoNextObject () ;
        index_1033_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_4 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1686_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1686 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1686.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
        const GalgasBool test_5 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).add_operation (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 46)).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString ("@MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n  var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 48)).stringValue ()) ;
          result.appendString ("\? { get }\n}\n\n") ;
          } break ;
        case GalgasBool::boolFalse : {
          result.appendString ("// Commented out, not used\n// @MainActor protocol ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : AnyObject {\n//   var ") ;
          result.appendString (enumerator_1686.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString (" : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1686.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 53)).stringValue ()) ;
          result.appendString ("\? { get }\n// }\n\n") ;
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1686.gotoNextObject () ;
        index_1686_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_6 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 65)).boolEnum () ;
  switch (test_6) {
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
  result.appendString ("\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    GGS_uint index_2668_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_propertyGenerationList enumerator_2668 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2668.hasCurrentObject ()) {
        const GalgasBool test_8 = GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).operator_or (GGS_bool (enumerator_2668.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 71)).boolEnum () ;
        switch (test_8) {
        case GalgasBool::boolTrue : {
          const GalgasBool test_9 = in_USED_5F_PROTOCOL_5F_SET.getter_hasKey (in_ENTITY_5F_NAME.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).add_operation (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 72)).boolEnum () ;
          switch (test_9) {
          case GalgasBool::boolTrue : {
            result.appendString ("    , ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString ("\n") ;
            } break ;
          case GalgasBool::boolFalse : {
            result.appendString ("    // ") ;
            result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
            result.appendString ("_") ;
            result.appendString (enumerator_2668.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
            result.appendString (" // Commented out, not used\n") ;
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
        enumerator_2668.gotoNextObject () ;
        index_2668_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    {\n\n") ;
  GGS_uint index_3151_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3151 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3151.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_3151.current_mProperty (HERE).ptr (), GGS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 84)).stringValue ()) ;
      enumerator_3151.gotoNextObject () ;
      index_3151_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  required init (_ inUndoManager : UndoManager\?) {\n") ;
  GGS_uint index_3580_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3580 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3580.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_3580.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 93)).stringValue ()) ;
      enumerator_3580.gotoNextObject () ;
      index_3580_.increment () ;
    }
  }
  result.appendString ("    super.init (inUndoManager)\n") ;
  GGS_uint index_3689_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toOnePropertyGenerationList enumerator_3689 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_3689.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: self.") ;
      result.appendString (enumerator_3689.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none)\n") ;
      enumerator_3689.gotoNextObject () ;
      index_3689_.increment () ;
    }
  }
  GGS_uint index_4124_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_4124 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4124.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_4124.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 108)).stringValue ()) ;
      enumerator_4124.gotoNextObject () ;
      index_4124_.increment () ;
    }
  }
  result.appendString ("  //--- Install undoers and opposite setter for relationships\n") ;
  GGS_uint index_4281_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4281 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4281.hasCurrentObject ()) {
      switch (enumerator_4281.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid :
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none :
        {
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance :
        {
          GGS_string extractedValue_4356_masterPropertyName_0 ;
          GGS_string extractedValue_4375__1 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_4356_masterPropertyName_0, extractedValue_4375__1) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setDataProvider (self.") ;
          result.appendString (extractedValue_4356_masterPropertyName_0.stringValue ()) ;
          result.appendString ("_property)\n") ;
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite :
        {
          GGS_string extractedValue_4515_oppositeName_0 ;
          enumerator_4281.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_4515_oppositeName_0) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_4281.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (me) } },\n      resetter: { inObject in inObject.") ;
          result.appendString (extractedValue_4515_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (nil) }\n    )\n") ;
        }
        break ;
      }
      enumerator_4281.gotoNextObject () ;
      index_4281_.increment () ;
    }
  }
  result.appendString ("  //--- Register properties for handling signature\n") ;
  GGS_uint index_4931_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_4931 (in_SIGNATURE_5F_SET) ;
    while (enumerator_4931.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_4931.current_key (HERE).stringValue ()) ;
      result.appendString ("_property.setSignatureObserver (observer: self)\n") ;
      enumerator_4931.gotoNextObject () ;
      index_4931_.increment () ;
    }
  }
  result.appendString ("  //--- Extern delegates\n") ;
  GGS_uint index_5115_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5115 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5115.hasCurrentObject ()) {
      result.appendString ("    self.mExternDelegate") ;
      result.appendString (index_5115_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 133)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_5115.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (object: self)\n") ;
      enumerator_5115.gotoNextObject () ;
      index_5115_idx.increment () ;
    }
  }
  result.appendString ("   }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Extern delegates\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_5545_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_5545 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_5545.hasCurrentObject ()) {
      result.appendString ("  final var mExternDelegate") ;
      result.appendString (index_5545_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 143)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_5545.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_5545.gotoNextObject () ;
      index_5545_idx.increment () ;
    }
  }
  result.appendString ("\n") ;
  const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 147)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_10) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   computeSignature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n") ;
    GGS_uint index_6034_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      UpEnumerator_stringset enumerator_6034 (in_SIGNATURE_5F_SET) ;
      while (enumerator_6034.hasCurrentObject ()) {
        result.appendString ("    crc.accumulate (u32: self.") ;
        result.appendString (enumerator_6034.current_key (HERE).stringValue ()) ;
        result.appendString ("_property.signature ())\n") ;
        enumerator_6034.gotoNextObject () ;
        index_6034_.increment () ;
      }
    }
    result.appendString ("    return crc\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_11 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 163)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 163)).boolEnum () ;
  switch (test_11) {
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
    const GalgasBool test_12 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    switch (test_12) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  COPY AND PASTE\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    const GalgasBool test_13 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    switch (test_13) {
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
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_,
                                                                                           const GGS_stringset & /* in_USED_5F_PROTOCOL_5F_SET */
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
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_3403.gotoNextObject () ;
      index_3403_.increment () ;
    }
  }
  GGS_uint index_4806_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_4806 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4806.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' toMany proxy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4806.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4806.gotoNextObject () ;
      index_4806_.increment () ;
    }
  }
  GGS_uint index_6198_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicProxyGenerationList enumerator_6198 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6198.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' proxy property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_6198.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_6198.gotoNextObject () ;
      index_6198_.increment () ;
    }
  }
  GGS_uint index_7600_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_7600 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_7600.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by:  inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_7600.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_7600.gotoNextObject () ;
      index_7600_.increment () ;
    }
  }
  GGS_uint index_9015_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_9015 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_9015.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_9015.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_9015.gotoNextObject () ;
      index_9015_.increment () ;
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
    result.appendString (") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (",\n                        sortCallback inSortCallBack : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <") ;
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
  const GalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 351)).boolEnum () ;
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
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : EBReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : EBReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <") ;
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
  result.appendString (GGS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 444)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 447)).boolEnum () ;
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
  const GalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 464)).boolEnum () ;
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
  result.appendString (GGS_string ("StandAlone Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 539)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 542)).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" { // , EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak final var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
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
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Update observers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
    const GalgasBool test_6 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_6) {
    case GalgasBool::boolTrue : {
      result.appendString ("  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (">) {\n    for managedObject in inRemovedSet.values {\n      self.mResetOppositeRelationship\? (managedObject)\n    }\n    for managedObject in inAddedSet.values {\n      self.mSetOppositeRelationship\? (managedObject)\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    return .single (self.mInternalArrayValue.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mInternalArrayValue = inValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func remove (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if let idx = self.mInternalArrayValue.firstIndex (of: inObject) {\n      self.mInternalArrayValue.remove (at: idx)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func add (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if !self.internalSetValue.contains (inObject) {\n      self.mInternalArrayValue.append (inObject)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 651)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_7 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 654)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.key = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final let key : String\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndexArray = inDictionary [self.key] as\? [Int] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for idx in objectSavingIndexArray {\n        objectArray.append (inManagedObjectArray [idx] as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n      }\n      self.setProp (objectArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    let indexArray = inData.base62EncodedIntArray (fromRange: inRange)\n    for idx in indexArray {\n      objectArray.append (inRawObjectArray [idx].object as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n    }\n    self.setProp (objectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if self.mInternalArrayValue.count > 0 {\n      var array = [Int] ()\n      for object in self.mInternalArrayValue.values {\n        array.append (object.savingIndex)\n      }\n      ioDictionary [self.key] = array\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mInternalArrayValue.count > 0 {\n      for object in self.mInternalArrayValue.values {\n        ioArray.append (object)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    enterToManyRelationshipObjectIndexes (from: self.propval.values, into: &ioData)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    if self.mUsedForSignature {\n      for managedObject in inRemovedSet.values {\n        managedObject.setSignatureObserver (observer: nil)\n      }\n      for managedObject in inAddedSet.values {\n        managedObject.setSignatureObserver (observer: self)\n      }\n    }\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak final var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    for object in self.mInternalArrayValue.values {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 800)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 803)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("// PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StandAloneArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mPrefKey : String\n  private let mObserverForWritingPreferences = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (prefKey inPrefKey : String) {\n    self.mPrefKey = inPrefKey\n    super.init ()\n    if let array = UserDefaults.standard.array (forKey: inPrefKey) as\? [[String : Any]] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for dictionary in array {\n        let object = newInstanceOfEntityNamed (self.undoManager, \"") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\") as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\n        object.setUpProperties (fromValueDictionary: dictionary, managedObjectArray: [])\n        objectArray.append (object)\n      }\n      self.setProp (objectArray)\n    }\n") ;
    GGS_uint index_33741_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_33741 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_33741.hasCurrentObject ()) {
        result.appendString ("    self.toMany_") ;
        result.appendString (enumerator_33741.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mObserverForWritingPreferences)\n") ;
        enumerator_33741.gotoNextObject () ;
        index_33741_.increment () ;
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
      result.appendString ("_StartsBeingObserved (by inObserver : some EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?.") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : some EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4527.gotoNextObject () ;
      index_4527_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   INIT\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n") ;
  GGS_uint index_6224_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_6224 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6224.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" simple stored property\n    self.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6224.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6224.gotoNextObject () ;
      index_6224_.increment () ;
    }
  }
  GGS_uint index_6567_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_6567 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6567.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" transient property\n    self.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6567.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6567.gotoNextObject () ;
      index_6567_.increment () ;
    }
  }
  GGS_uint index_6914_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_6914 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6914.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" computed property\n    self.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6914.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6914.gotoNextObject () ;
      index_6914_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mKey : String\n  var key : String { return self.mKey }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromValueDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let objectSavingIndex = inDictionary [self.mKey] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    if let idx = inData.base62EncodedInt (range: inRange) {\n      let object = inRawObjectArray [idx].object as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let idx = self.mWeakInternalValue\?.savingIndex {\n      ioDictionary [self.mKey] = idx\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if let object = self.mWeakInternalValue {\n      ioArray.append (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    if let object = self.propval {\n      ioData.append (base62Encoded: object.savingIndex)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
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
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n  //--- Register old value in undo manager\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      selfTarget.setProp (inOldValue) // Ok in Swift 6.2\n      // MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    if let object = inOldValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: nil)\n      }\n") ;
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
  result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//  newInstanceOfEntityNamed\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//--------------------------------------------------------------------------------------------------\n//   makeManagedObjectFromDictionary\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (fromValueDictionary: inDictionary, managedObjectArray: [])\n  return object\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

