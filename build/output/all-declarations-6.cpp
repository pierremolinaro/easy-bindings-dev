#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

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

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::class_func_new (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  const GGS_autoLayoutViewInstructionGenerationList_2E_element * p = (const GGS_autoLayoutViewInstructionGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::class_func_new (const GGS_uint & in_mIndex,
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

AC_GALGAS_root * GGS_enumFunAssociationSortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFunAssociationSortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList_2E_element result ;
  const GGS_enumFunAssociationSortedList_2E_element * p = (const GGS_enumFunAssociationSortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFunAssociationSortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
GGS_outletDeclarationList temp_0 = GGS_outletDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 6)) ;
  mProperty_mOutletDeclarationList = temp_0 ;
GGS_simpleStoredPropertyList temp_1 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 7)) ;
  mProperty_mSimpleStoredAttributeList = temp_1 ;
GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 8)) ;
  mProperty_mActionDeclarationList = temp_2 ;
GGS_externSwiftFunctionList temp_3 = GGS_externSwiftFunctionList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 9)) ;
  mProperty_mExternSwiftFunctionList = temp_3 ;
GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 10)) ;
  mProperty_mSignatureList = temp_4 ;
GGS_mainXibDescriptorList temp_5 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 11)) ;
  mProperty_mMainXibDescriptorList = temp_5 ;
GGS_astViewDeclarationList temp_6 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 12)) ;
  mProperty_mViewDeclarationList = temp_6 ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration::GGS_prefDeclaration (const GGS_outletDeclarationList & inOperand0,
                                          const GGS_simpleStoredPropertyList & inOperand1,
                                          const GGS_lstringlist & inOperand2,
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

GGS_prefDeclaration GGS_prefDeclaration::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
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

AC_GALGAS_root * GGS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefDeclaration GGS_prefDeclaration::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_prefDeclaration result ;
  const GGS_prefDeclaration * p = (const GGS_prefDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDeclarationAST::objectCompare (const GGS_abstractDeclarationAST & inOperand) const {
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

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractDeclarationAST::
abstractDeclarationAST_init_21_ (const GGS_lstring & in_mClassName,
                                 Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST::GGS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_abstractDeclarationAST::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractDeclarationAST::setProperty_mClassName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mClassName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GGS_lstring & in_mClassName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mClassName () {
  mProperty_mClassName = in_mClassName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST result ;
  const GGS_abstractDeclarationAST * p = (const GGS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsDeclarationAST_2E_weak::objectCompare (const GGS_prefsDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_prefsDeclarationAST_2E_weak::GGS_prefsDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak & GGS_prefsDeclarationAST_2E_weak::operator = (const GGS_prefsDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak::GGS_prefsDeclarationAST_2E_weak (const GGS_prefsDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak GGS_prefsDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefsDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_prefsDeclarationAST result ;
  if (isValid ()) {
    const cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefsDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST_2E_weak::bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefsDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsDeclarationAST) ;
      result = GGS_prefsDeclarationAST ((cPtr_prefsDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefsDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ("prefsDeclarationAST.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefsDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak GGS_prefsDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsDeclarationAST_2E_weak result ;
  const GGS_prefsDeclarationAST_2E_weak * p = (const GGS_prefsDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @preferencesForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_preferencesForGeneration::objectCompare (const GGS_preferencesForGeneration & inOperand) const {
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

GGS_preferencesForGeneration::GGS_preferencesForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                          const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                          const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                          const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                          const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                          const GGS_decoratedOutletMap & in_mOutletMap,
                                                          const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                          const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                          const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                          const GGS_viewGenerationList & in_mViewGenerationList,
                                                          const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                          const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                          const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_preferencesForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_preferencesForGeneration (inCompiler COMMA_THERE)) ;
  object->preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mPropertyListForGeneration, in_mMainXibDescriptorList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mActionBindingListForGeneration, in_mOutletMap, in_mExternSwiftFunctionList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewGenerationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mAutoLayoutOutletMap, inCompiler) ;
  const GGS_preferencesForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::
preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                                                   const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                                                   const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                   const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                   const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                                                   const GGS_decoratedOutletMap & in_mOutletMap,
                                                                                   const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                                                   const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                   const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                   const GGS_viewGenerationList & in_mViewGenerationList,
                                                                                   const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                   const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                   const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                   Compiler * /* inCompiler */) {
  mProperty_mPropertyListForGeneration = in_mPropertyListForGeneration ;
  mProperty_mMainXibDescriptorList = in_mMainXibDescriptorList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mActionBindingListForGeneration = in_mActionBindingListForGeneration ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mExternSwiftFunctionList = in_mExternSwiftFunctionList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewGenerationList = in_mViewGenerationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration::GGS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration::class_func_new (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                                           const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                                           const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                           const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                           const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                                           const GGS_decoratedOutletMap & in_mOutletMap,
                                                                           const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                                           const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                           const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                           const GGS_viewGenerationList & in_mViewGenerationList,
                                                                           const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                           const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                           const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_preferencesForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_preferencesForGeneration (in_mPropertyListForGeneration, in_mMainXibDescriptorList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mActionBindingListForGeneration, in_mOutletMap, in_mExternSwiftFunctionList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewGenerationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mAutoLayoutOutletMap,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_preferencesForGeneration::readProperty_mPropertyListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mPropertyListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_preferencesForGeneration::readProperty_mMainXibDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mainXibDescriptorList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMainXibDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_preferencesForGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingsGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_preferencesForGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_preferencesForGeneration::readProperty_mActionBindingListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actionBindingListForGeneration () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mActionBindingListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_preferencesForGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_preferencesForGeneration::readProperty_mExternSwiftFunctionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftFunctionList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mExternSwiftFunctionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_preferencesForGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableViewBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_preferencesForGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_preferencesForGeneration::readProperty_mViewGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_viewGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mViewGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_preferencesForGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_preferencesForGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_preferencesForGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @preferencesForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mPropertyListForGeneration (),
mProperty_mMainXibDescriptorList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mActionBindingListForGeneration (),
mProperty_mOutletMap (),
mProperty_mExternSwiftFunctionList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewGenerationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mAutoLayoutOutletMap () {
}

//--------------------------------------------------------------------------------------------------

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                              const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                              const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                              const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                              const GGS_decoratedOutletMap & in_mOutletMap,
                                                              const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                              const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                              const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                              const GGS_viewGenerationList & in_mViewGenerationList,
                                                              const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                              const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                              const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mPropertyListForGeneration (),
mProperty_mMainXibDescriptorList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mActionBindingListForGeneration (),
mProperty_mOutletMap (),
mProperty_mExternSwiftFunctionList (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mEBViewBindingGenerationList (),
mProperty_mViewGenerationList (),
mProperty_mImplicitViewFunctionGenerationList (),
mProperty_mConfiguratorMap (),
mProperty_mAutoLayoutOutletMap () {
  mProperty_mPropertyListForGeneration = in_mPropertyListForGeneration ;
  mProperty_mMainXibDescriptorList = in_mMainXibDescriptorList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mActionBindingListForGeneration = in_mActionBindingListForGeneration ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mExternSwiftFunctionList = in_mExternSwiftFunctionList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewGenerationList = in_mViewGenerationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

void cPtr_preferencesForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@preferencesForGeneration:") ;
  mProperty_mPropertyListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mViewGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_preferencesForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mMainXibDescriptorList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewGenerationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mAutoLayoutOutletMap, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_preferencesForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyListForGeneration.printNonNullClassInstanceProperties ("mPropertyListForGeneration") ;
    mProperty_mMainXibDescriptorList.printNonNullClassInstanceProperties ("mMainXibDescriptorList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mActionBindingListForGeneration.printNonNullClassInstanceProperties ("mActionBindingListForGeneration") ;
    mProperty_mOutletMap.printNonNullClassInstanceProperties ("mOutletMap") ;
    mProperty_mExternSwiftFunctionList.printNonNullClassInstanceProperties ("mExternSwiftFunctionList") ;
    mProperty_mTableViewBindingGenerationList.printNonNullClassInstanceProperties ("mTableViewBindingGenerationList") ;
    mProperty_mEBViewBindingGenerationList.printNonNullClassInstanceProperties ("mEBViewBindingGenerationList") ;
    mProperty_mViewGenerationList.printNonNullClassInstanceProperties ("mViewGenerationList") ;
    mProperty_mImplicitViewFunctionGenerationList.printNonNullClassInstanceProperties ("mImplicitViewFunctionGenerationList") ;
    mProperty_mConfiguratorMap.printNonNullClassInstanceProperties ("mConfiguratorMap") ;
    mProperty_mAutoLayoutOutletMap.printNonNullClassInstanceProperties ("mAutoLayoutOutletMap") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @preferencesForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_preferencesForGeneration result ;
  const GGS_preferencesForGeneration * p = (const GGS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_preferencesForGeneration_2E_weak::objectCompare (const GGS_preferencesForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_preferencesForGeneration_2E_weak::GGS_preferencesForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak & GGS_preferencesForGeneration_2E_weak::operator = (const GGS_preferencesForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak::GGS_preferencesForGeneration_2E_weak (const GGS_preferencesForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak GGS_preferencesForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_preferencesForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_preferencesForGeneration result ;
  if (isValid ()) {
    const cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_preferencesForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration_2E_weak::bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_preferencesForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_preferencesForGeneration) ;
      result = GGS_preferencesForGeneration ((cPtr_preferencesForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @preferencesForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ("preferencesForGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_preferencesForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_preferencesForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_preferencesForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak GGS_preferencesForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_preferencesForGeneration_2E_weak result ;
  const GGS_preferencesForGeneration_2E_weak * p = (const GGS_preferencesForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_preferencesForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityDeclarationAST::objectCompare (const GGS_entityDeclarationAST & inOperand) const {
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

GGS_entityDeclarationAST::GGS_entityDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                  const GGS_bool & in_mIsAbstract,
                                                  const GGS_lstring & in_mSuperEntityName,
                                                  const GGS_bool & in_mHandlingOpposite,
                                                  const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                  const GGS_stringset & in_mSignatureList,
                                                  const GGS_lstringlist & in_mActionDeclarationList,
                                                  const GGS_lstringlist & in_mObsoleteEntityNames,
                                                  const GGS_bool & in_mIsGraphicEntity,
                                                  const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                  const GGS_lstringlist & in_mGraphicOptionArray,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_entityDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_entityDeclarationAST (inCompiler COMMA_THERE)) ;
  object->entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mIsAbstract, in_mSuperEntityName, in_mHandlingOpposite, in_mSimpleStoredPropertyList, in_mSignatureList, in_mActionDeclarationList, in_mObsoleteEntityNames, in_mIsGraphicEntity, in_mExternSwiftDelegateList, in_mGraphicOptionArray, inCompiler) ;
  const GGS_entityDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::
entityDeclarationAST_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                       const GGS_bool & in_mIsAbstract,
                                                                       const GGS_lstring & in_mSuperEntityName,
                                                                       const GGS_bool & in_mHandlingOpposite,
                                                                       const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                                       const GGS_stringset & in_mSignatureList,
                                                                       const GGS_lstringlist & in_mActionDeclarationList,
                                                                       const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                       const GGS_bool & in_mIsGraphicEntity,
                                                                       const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                       const GGS_lstringlist & in_mGraphicOptionArray,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mSimpleStoredPropertyList = in_mSimpleStoredPropertyList ;
  mProperty_mSignatureList = in_mSignatureList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mGraphicOptionArray = in_mGraphicOptionArray ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST::GGS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                   const GGS_bool & in_mIsAbstract,
                                                                   const GGS_lstring & in_mSuperEntityName,
                                                                   const GGS_bool & in_mHandlingOpposite,
                                                                   const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                                   const GGS_stringset & in_mSignatureList,
                                                                   const GGS_lstringlist & in_mActionDeclarationList,
                                                                   const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                   const GGS_bool & in_mIsGraphicEntity,
                                                                   const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                   const GGS_lstringlist & in_mGraphicOptionArray,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (in_mClassName, in_mIsAbstract, in_mSuperEntityName, in_mHandlingOpposite, in_mSimpleStoredPropertyList, in_mSignatureList, in_mActionDeclarationList, in_mObsoleteEntityNames, in_mIsGraphicEntity, in_mExternSwiftDelegateList, in_mGraphicOptionArray,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_entityDeclarationAST::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_entityDeclarationAST::readProperty_mSimpleStoredPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_simpleStoredPropertyList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSimpleStoredPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityDeclarationAST::readProperty_mSignatureList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSignatureList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mObsoleteEntityNames (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityDeclarationAST::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_entityDeclarationAST::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftDelegateList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityDeclarationAST::readProperty_mGraphicOptionArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mGraphicOptionArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mSimpleStoredPropertyList (),
mProperty_mSignatureList (),
mProperty_mActionDeclarationList (),
mProperty_mObsoleteEntityNames (),
mProperty_mIsGraphicEntity (),
mProperty_mExternSwiftDelegateList (),
mProperty_mGraphicOptionArray () {
}

//--------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GGS_lstring & in_mClassName,
                                                      const GGS_bool & in_mIsAbstract,
                                                      const GGS_lstring & in_mSuperEntityName,
                                                      const GGS_bool & in_mHandlingOpposite,
                                                      const GGS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                      const GGS_stringset & in_mSignatureList,
                                                      const GGS_lstringlist & in_mActionDeclarationList,
                                                      const GGS_lstringlist & in_mObsoleteEntityNames,
                                                      const GGS_bool & in_mIsGraphicEntity,
                                                      const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                      const GGS_lstringlist & in_mGraphicOptionArray,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mSimpleStoredPropertyList (),
mProperty_mSignatureList (),
mProperty_mActionDeclarationList (),
mProperty_mObsoleteEntityNames (),
mProperty_mIsGraphicEntity (),
mProperty_mExternSwiftDelegateList (),
mProperty_mGraphicOptionArray () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mSimpleStoredPropertyList = in_mSimpleStoredPropertyList ;
  mProperty_mSignatureList = in_mSignatureList ;
  mProperty_mActionDeclarationList = in_mActionDeclarationList ;
  mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mGraphicOptionArray = in_mGraphicOptionArray ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@entityDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSimpleStoredPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphicOptionArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mSimpleStoredPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList, mProperty_mGraphicOptionArray, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mSimpleStoredPropertyList.printNonNullClassInstanceProperties ("mSimpleStoredPropertyList") ;
    mProperty_mSignatureList.printNonNullClassInstanceProperties ("mSignatureList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mObsoleteEntityNames.printNonNullClassInstanceProperties ("mObsoleteEntityNames") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mGraphicOptionArray.printNonNullClassInstanceProperties ("mGraphicOptionArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @entityDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST result ;
  const GGS_entityDeclarationAST * p = (const GGS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@entityStrongReferenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::GGS_entityStrongReferenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_string inArgument_0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GGS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_topologicalSort (GGS_stringlist & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_stringlist & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GGS_stringlist & outSortedList,
                                                                       GGS_lstringlist & outSortedKeyList,
                                                                       GGS_stringlist & outUnsortedList,
                                                                       GGS_lstringlist & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_circularities (GGS_stringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GGS_stringlist & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GGS_stringlist & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                            const GGS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_entityStrongReferenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @entityStrongReferenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityStrongReferenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityStrongReferenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  const GGS_entityStrongReferenceGraph * p = (const GGS_entityStrongReferenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityStrongReferenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityStrongReferenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectionControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectionControllerDeclarationAST::objectCompare (const GGS_selectionControllerDeclarationAST & inOperand) const {
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

GGS_selectionControllerDeclarationAST::GGS_selectionControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                          const GGS_lstring & in_mSelectionControllerName,
                          const GGS_lstring & in_mModelControllerName,
                          const GGS_lstring & in_mModelControllerPropertyName,
                          const GGS_lstring & in_mSelectionEntityName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_selectionControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_selectionControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->selectionControllerDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName, inCompiler) ;
  const GGS_selectionControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::
selectionControllerDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mSelectionControllerName,
                                                            const GGS_lstring & in_mModelControllerName,
                                                            const GGS_lstring & in_mModelControllerPropertyName,
                                                            const GGS_lstring & in_mSelectionEntityName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  mProperty_mSelectionEntityName = in_mSelectionEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST::GGS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                             const GGS_lstring & in_mSelectionControllerName,
                                                                                             const GGS_lstring & in_mModelControllerName,
                                                                                             const GGS_lstring & in_mModelControllerPropertyName,
                                                                                             const GGS_lstring & in_mSelectionEntityName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mSelectionControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mModelControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mModelControllerPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selectionControllerDeclarationAST::readProperty_mSelectionEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSelectionControllerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName (),
mProperty_mSelectionEntityName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                const GGS_lstring & in_mSelectionControllerName,
                                                                                const GGS_lstring & in_mModelControllerName,
                                                                                const GGS_lstring & in_mModelControllerPropertyName,
                                                                                const GGS_lstring & in_mSelectionEntityName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mSelectionControllerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName (),
mProperty_mSelectionEntityName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  mProperty_mSelectionEntityName = in_mSelectionEntityName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectionControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

void cPtr_selectionControllerDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@selectionControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectionEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectionControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectionControllerName.printNonNullClassInstanceProperties ("mSelectionControllerName") ;
    mProperty_mModelControllerName.printNonNullClassInstanceProperties ("mModelControllerName") ;
    mProperty_mModelControllerPropertyName.printNonNullClassInstanceProperties ("mModelControllerPropertyName") ;
    mProperty_mSelectionEntityName.printNonNullClassInstanceProperties ("mSelectionEntityName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectionControllerDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST result ;
  const GGS_selectionControllerDeclarationAST * p = (const GGS_selectionControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectionControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectionControllerPropertyGeneration::objectCompare (const GGS_selectionControllerPropertyGeneration & inOperand) const {
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

GGS_selectionControllerPropertyGeneration::GGS_selectionControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration::
init_21__21__21__21_ (const GGS_string & in_mPropertyName,
                      const GGS_string & in_mOwnerName,
                      const GGS_string & in_mModelControllerName,
                      const GGS_string & in_mModelControllerPropertyName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectionControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectionControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->selectionControllerPropertyGeneration_init_21__21__21__21_ (in_mPropertyName, in_mOwnerName, in_mModelControllerName, in_mModelControllerPropertyName, inCompiler) ;
  const GGS_selectionControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerPropertyGeneration::
selectionControllerPropertyGeneration_init_21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                            const GGS_string & in_mOwnerName,
                                                            const GGS_string & in_mModelControllerName,
                                                            const GGS_string & in_mModelControllerPropertyName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration::GGS_selectionControllerPropertyGeneration (const cPtr_selectionControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                                     const GGS_string & in_mOwnerName,
                                                                                                     const GGS_string & in_mModelControllerName,
                                                                                                     const GGS_string & in_mModelControllerPropertyName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selectionControllerPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_selectionControllerPropertyGeneration (in_mPropertyName, in_mOwnerName, in_mModelControllerName, in_mModelControllerPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerPropertyGeneration::readProperty_mModelControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerPropertyGeneration::readProperty_mModelControllerPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                                        const GGS_string & in_mOwnerName,
                                                                                        const GGS_string & in_mModelControllerName,
                                                                                        const GGS_string & in_mModelControllerPropertyName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selectionControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

void cPtr_selectionControllerPropertyGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@selectionControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectionControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectionControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mOwnerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectionControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mModelControllerName.printNonNullClassInstanceProperties ("mModelControllerName") ;
    mProperty_mModelControllerPropertyName.printNonNullClassInstanceProperties ("mModelControllerPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectionControllerPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ("selectionControllerPropertyGeneration",
                                                                                          & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selectionControllerPropertyGeneration result ;
  const GGS_selectionControllerPropertyGeneration * p = (const GGS_selectionControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectionControllerPropertyGeneration_2E_weak::objectCompare (const GGS_selectionControllerPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_selectionControllerPropertyGeneration_2E_weak::GGS_selectionControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration_2E_weak & GGS_selectionControllerPropertyGeneration_2E_weak::operator = (const GGS_selectionControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration_2E_weak::GGS_selectionControllerPropertyGeneration_2E_weak (const GGS_selectionControllerPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration_2E_weak GGS_selectionControllerPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectionControllerPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selectionControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectionControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration_2E_weak::bang_selectionControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerPropertyGeneration) ;
      result = GGS_selectionControllerPropertyGeneration ((cPtr_selectionControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectionControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ("selectionControllerPropertyGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration_2E_weak GGS_selectionControllerPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selectionControllerPropertyGeneration_2E_weak result ;
  const GGS_selectionControllerPropertyGeneration_2E_weak * p = (const GGS_selectionControllerPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyDeclarationAST::objectCompare (const GGS_computedPropertyDeclarationAST & inOperand) const {
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

GGS_computedPropertyDeclarationAST::GGS_computedPropertyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::
init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                          const GGS_lstring & in_mRootEntityName,
                          const GGS_lstring & in_mComputedPropertyTypeName,
                          const GGS_lstring & in_mComputedPropertyName,
                          const GGS_observablePropertyList & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->computedPropertyDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList, inCompiler) ;
  const GGS_computedPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::
computedPropertyDeclarationAST_init_21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                         const GGS_lstring & in_mRootEntityName,
                                                         const GGS_lstring & in_mComputedPropertyTypeName,
                                                         const GGS_lstring & in_mComputedPropertyName,
                                                         const GGS_observablePropertyList & in_mDependencyList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mComputedPropertyTypeName = in_mComputedPropertyTypeName ;
  mProperty_mComputedPropertyName = in_mComputedPropertyName ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST::GGS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                       const GGS_lstring & in_mRootEntityName,
                                                                                       const GGS_lstring & in_mComputedPropertyTypeName,
                                                                                       const GGS_lstring & in_mComputedPropertyName,
                                                                                       const GGS_observablePropertyList & in_mDependencyList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mRootEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mComputedPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mComputedPropertyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedPropertyDeclarationAST::readProperty_mComputedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mComputedPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_computedPropertyDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyList () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyDeclarationAST::setProperty_mDependencyList (const GGS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mComputedPropertyTypeName (),
mProperty_mComputedPropertyName (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                                                          const GGS_lstring & in_mRootEntityName,
                                                                          const GGS_lstring & in_mComputedPropertyTypeName,
                                                                          const GGS_lstring & in_mComputedPropertyName,
                                                                          const GGS_observablePropertyList & in_mDependencyList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mComputedPropertyTypeName (),
mProperty_mComputedPropertyName (),
mProperty_mDependencyList () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mComputedPropertyTypeName = in_mComputedPropertyTypeName ;
  mProperty_mComputedPropertyName = in_mComputedPropertyName ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

void cPtr_computedPropertyDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@computedPropertyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComputedPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComputedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mComputedPropertyTypeName.printNonNullClassInstanceProperties ("mComputedPropertyTypeName") ;
    mProperty_mComputedPropertyName.printNonNullClassInstanceProperties ("mComputedPropertyName") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computedPropertyDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST result ;
  const GGS_computedPropertyDeclarationAST * p = (const GGS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyGeneration::objectCompare (const GGS_computedPropertyGeneration & inOperand) const {
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

GGS_computedPropertyGeneration::GGS_computedPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_string & in_mClassName,
                          const GGS_typeKind & in_mType,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          const GGS_bool & in_mGenerate,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->computedPropertyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate, inCompiler) ;
  const GGS_computedPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::
computedPropertyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                     const GGS_string & in_mClassName,
                                                     const GGS_typeKind & in_mType,
                                                     const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                     const GGS_bool & in_mGenerate,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration::GGS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                               const GGS_string & in_mClassName,
                                                                               const GGS_typeKind & in_mType,
                                                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                               const GGS_bool & in_mGenerate,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computedPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_computedPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_computedPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGeneration::setProperty_mGenerate (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                  const GGS_string & in_mClassName,
                                                                  const GGS_typeKind & in_mType,
                                                                  const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  const GGS_bool & in_mGenerate,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

void cPtr_computedPropertyGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@computedPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computedPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                                               & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration result ;
  const GGS_computedPropertyGeneration * p = (const GGS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @transientDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientDeclarationAST::objectCompare (const GGS_transientDeclarationAST & inOperand) const {
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

GGS_transientDeclarationAST::GGS_transientDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_lstring & in_mRootEntityName,
                              const GGS_lstring & in_mTransientTypeName,
                              const GGS_lstring & in_mTransientName,
                              const GGS_observablePropertyList & in_mDependencyList,
                              const GGS_bool & in_mIsOverriding,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_transientDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_transientDeclarationAST (inCompiler COMMA_THERE)) ;
  object->transientDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding, inCompiler) ;
  const GGS_transientDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::
transientDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                      const GGS_lstring & in_mRootEntityName,
                                                      const GGS_lstring & in_mTransientTypeName,
                                                      const GGS_lstring & in_mTransientName,
                                                      const GGS_observablePropertyList & in_mDependencyList,
                                                      const GGS_bool & in_mIsOverriding,
                                                      Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mTransientTypeName = in_mTransientTypeName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mIsOverriding = in_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST::GGS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                         const GGS_lstring & in_mRootEntityName,
                                                                         const GGS_lstring & in_mTransientTypeName,
                                                                         const GGS_lstring & in_mTransientName,
                                                                         const GGS_observablePropertyList & in_mDependencyList,
                                                                         const GGS_bool & in_mIsOverriding,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mRootEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mTransientTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mTransientTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_transientDeclarationAST::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mTransientName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_transientDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyList () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mDependencyList (const GGS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientDeclarationAST::readProperty_mIsOverriding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mIsOverriding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDeclarationAST::setProperty_mIsOverriding (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mIsOverriding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mTransientTypeName (),
mProperty_mTransientName (),
mProperty_mDependencyList (),
mProperty_mIsOverriding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mRootEntityName,
                                                            const GGS_lstring & in_mTransientTypeName,
                                                            const GGS_lstring & in_mTransientName,
                                                            const GGS_observablePropertyList & in_mDependencyList,
                                                            const GGS_bool & in_mIsOverriding,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mTransientTypeName (),
mProperty_mTransientName (),
mProperty_mDependencyList (),
mProperty_mIsOverriding () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mTransientTypeName = in_mTransientTypeName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mIsOverriding = in_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_transientDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

void cPtr_transientDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@transientDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mIsOverriding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mTransientTypeName.printNonNullClassInstanceProperties ("mTransientTypeName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mIsOverriding.printNonNullClassInstanceProperties ("mIsOverriding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST result ;
  const GGS_transientDeclarationAST * p = (const GGS_transientDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyRelationshipAST::objectCompare (const GGS_toManyRelationshipAST & inOperand) const {
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

GGS_toManyRelationshipAST::GGS_toManyRelationshipAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::
init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                      const GGS_lstring & in_mDestinationEntityName,
                                      const GGS_lstring & in_mToManyRelationshipName,
                                      const GGS_toManyRelationshipOptionAST & in_mOption,
                                      const GGS_bool & in_mCustomStore,
                                      const GGS_bool & in_mUsedForSignature,
                                      const GGS_bool & in_mGenerateDirectAccess,
                                      const GGS_bool & in_mGenerateDirectRead,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_toManyRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toManyRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead, inCompiler) ;
  const GGS_toManyRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::
toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                            const GGS_lstring & in_mDestinationEntityName,
                                                            const GGS_lstring & in_mToManyRelationshipName,
                                                            const GGS_toManyRelationshipOptionAST & in_mOption,
                                                            const GGS_bool & in_mCustomStore,
                                                            const GGS_bool & in_mUsedForSignature,
                                                            const GGS_bool & in_mGenerateDirectAccess,
                                                            const GGS_bool & in_mGenerateDirectRead,
                                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToManyRelationshipName = in_mToManyRelationshipName ;
  mProperty_mOption = in_mOption ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST::GGS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                     const GGS_lstring & in_mDestinationEntityName,
                                                                     const GGS_lstring & in_mToManyRelationshipName,
                                                                     const GGS_toManyRelationshipOptionAST & in_mOption,
                                                                     const GGS_bool & in_mCustomStore,
                                                                     const GGS_bool & in_mUsedForSignature,
                                                                     const GGS_bool & in_mGenerateDirectAccess,
                                                                     const GGS_bool & in_mGenerateDirectRead,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST result ;
  macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toManyRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toManyRelationshipAST::readProperty_mToManyRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mToManyRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipAST::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toManyRelationshipOptionAST () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mCustomStore (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mCustomStore ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipAST::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyRelationshipAST class
//--------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToManyRelationshipName (),
mProperty_mOption (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature (),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GGS_lstring & in_mClassName,
                                                        const GGS_lstring & in_mDestinationEntityName,
                                                        const GGS_lstring & in_mToManyRelationshipName,
                                                        const GGS_toManyRelationshipOptionAST & in_mOption,
                                                        const GGS_bool & in_mCustomStore,
                                                        const GGS_bool & in_mUsedForSignature,
                                                        const GGS_bool & in_mGenerateDirectAccess,
                                                        const GGS_bool & in_mGenerateDirectRead,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToManyRelationshipName (),
mProperty_mOption (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature (),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToManyRelationshipName = in_mToManyRelationshipName ;
  mProperty_mOption = in_mOption ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

void cPtr_toManyRelationshipAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@toManyRelationshipAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyRelationshipAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption, mProperty_mCustomStore, mProperty_mUsedForSignature, mProperty_mGenerateDirectAccess, mProperty_mGenerateDirectRead, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyRelationshipAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDestinationEntityName.printNonNullClassInstanceProperties ("mDestinationEntityName") ;
    mProperty_mToManyRelationshipName.printNonNullClassInstanceProperties ("mToManyRelationshipName") ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
    mProperty_mCustomStore.printNonNullClassInstanceProperties ("mCustomStore") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST result ;
  const GGS_toManyRelationshipAST * p = (const GGS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyPropertyGeneration::objectCompare (const GGS_toManyPropertyGeneration & inOperand) const {
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

GGS_toManyPropertyGeneration::GGS_toManyPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                      const GGS_bool & in_mGenerateDirectAccess,
                                      const GGS_bool & in_mGenerateDirectRead,
                                      const GGS_propertyKind & in_mRelationshipType,
                                      const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                      const GGS_bool & in_mInPreferences,
                                      const GGS_bool & in_mCustomStore,
                                      const GGS_bool & in_mUsedForSignature,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_toManyPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_toManyPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->toManyPropertyGeneration_init_21__21__21__21__21__21__21__21_ (in_mPropertyName, in_mGenerateDirectAccess, in_mGenerateDirectRead, in_mRelationshipType, in_mOption, in_mInPreferences, in_mCustomStore, in_mUsedForSignature, inCompiler) ;
  const GGS_toManyPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::
toManyPropertyGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                               const GGS_bool & in_mGenerateDirectAccess,
                                                               const GGS_bool & in_mGenerateDirectRead,
                                                               const GGS_propertyKind & in_mRelationshipType,
                                                               const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                                               const GGS_bool & in_mInPreferences,
                                                               const GGS_bool & in_mCustomStore,
                                                               const GGS_bool & in_mUsedForSignature,
                                                               Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOption = in_mOption ;
  mProperty_mInPreferences = in_mInPreferences ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration::GGS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                           const GGS_bool & in_mGenerateDirectAccess,
                                                                           const GGS_bool & in_mGenerateDirectRead,
                                                                           const GGS_propertyKind & in_mRelationshipType,
                                                                           const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                                                           const GGS_bool & in_mInPreferences,
                                                                           const GGS_bool & in_mCustomStore,
                                                                           const GGS_bool & in_mUsedForSignature,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_toManyPropertyGeneration (in_mPropertyName, in_mGenerateDirectAccess, in_mGenerateDirectRead, in_mRelationshipType, in_mOption, in_mInPreferences, in_mCustomStore, in_mUsedForSignature,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyPropertyGeneration::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyPropertyGeneration::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_toManyPropertyGeneration::readProperty_mRelationshipType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyKind () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyPropertyGeneration::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toManyRelationshipOptionGeneration () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyPropertyGeneration::readProperty_mInPreferences (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyPropertyGeneration::readProperty_mCustomStore (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mCustomStore ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyPropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead (),
mProperty_mRelationshipType (),
mProperty_mOption (),
mProperty_mInPreferences (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (const GGS_string & in_mPropertyName,
                                                              const GGS_bool & in_mGenerateDirectAccess,
                                                              const GGS_bool & in_mGenerateDirectRead,
                                                              const GGS_propertyKind & in_mRelationshipType,
                                                              const GGS_toManyRelationshipOptionGeneration & in_mOption,
                                                              const GGS_bool & in_mInPreferences,
                                                              const GGS_bool & in_mCustomStore,
                                                              const GGS_bool & in_mUsedForSignature,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mGenerateDirectAccess (),
mProperty_mGenerateDirectRead (),
mProperty_mRelationshipType (),
mProperty_mOption (),
mProperty_mInPreferences (),
mProperty_mCustomStore (),
mProperty_mUsedForSignature () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOption = in_mOption ;
  mProperty_mInPreferences = in_mInPreferences ;
  mProperty_mCustomStore = in_mCustomStore ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_toManyPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

void cPtr_toManyPropertyGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@toManyPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyPropertyGeneration (mProperty_mPropertyName, mProperty_mGenerateDirectAccess, mProperty_mGenerateDirectRead, mProperty_mRelationshipType, mProperty_mOption, mProperty_mInPreferences, mProperty_mCustomStore, mProperty_mUsedForSignature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
    mProperty_mRelationshipType.printNonNullClassInstanceProperties ("mRelationshipType") ;
    mProperty_mOption.printNonNullClassInstanceProperties ("mOption") ;
    mProperty_mInPreferences.printNonNullClassInstanceProperties ("mInPreferences") ;
    mProperty_mCustomStore.printNonNullClassInstanceProperties ("mCustomStore") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration ("toManyPropertyGeneration",
                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGeneration result ;
  const GGS_toManyPropertyGeneration * p = (const GGS_toManyPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST::objectCompare (const GGS_atomicClassDeclarationAST & inOperand) const {
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

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_typeKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_atomicClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicClassDeclarationAST_init_21__21_ (in_mClassName, in_mKind, inCompiler) ;
  const GGS_atomicClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::
atomicClassDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                        const GGS_typeKind & in_mKind,
                                        Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                             const GGS_typeKind & in_mKind,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (in_mClassName, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_atomicClassDeclarationAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicClassDeclarationAST::setProperty_mKind (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_typeKind & in_mKind,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @atomicClassDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST result ;
  const GGS_atomicClassDeclarationAST * p = (const GGS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_semanticContext GGS_semanticContext::class_func_new (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticContext result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
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

AC_GALGAS_root * GGS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticContext GGS_semanticContext::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_semanticContext result ;
  const GGS_semanticContext * p = (const GGS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                                                 const GGS_lstring & in_mControllerName,
                                                                                                                 const GGS_bool & in_mIsRoot,
                                                                                                                 const GGS_lstring & in_mRootEntityName,
                                                                                                                 const GGS_lstring & in_mToManyPropertyName,
                                                                                                                 const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                                 const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerDeclarationAST (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST,  inCompiler COMMA_THERE)) ;
  return result ;
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

acPtr_class * cPtr_autoLayoutTableViewControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
                                              const GGS__32_stringlist & in_mAttributeListForGeneration,
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
                                                                                      const GGS__32_stringlist & in_mAttributeListForGeneration,
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

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                                                         const GGS_lstring & in_mControllerName,
                                                                                                         const GGS_string & in_mModelString,
                                                                                                         const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                                         const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                                         const GGS_string & in_mModelTypeName,
                                                                                                         const GGS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                                         const GGS_string & in_mElementTypeName,
                                                                                                         const GGS_bool & in_mElementTypeIsGraphic,
                                                                                                         const GGS__32_stringlist & in_mAttributeListForGeneration,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerGeneration (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
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

GGS__32_stringlist GGS_autoLayoutTableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__32_stringlist () ;
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
                                                                                            const GGS__32_stringlist & in_mAttributeListForGeneration,
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

acPtr_class * cPtr_autoLayoutTableViewControllerGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_autoLayoutTableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration result ;
  const GGS_autoLayoutTableViewControllerGeneration * p = (const GGS_autoLayoutTableViewControllerGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mActionMap (),
mProperty_mIsOverriding () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_propertyMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mActionMap (inSource.mProperty_mActionMap),
mProperty_mIsOverriding (inSource.mProperty_mIsOverriding) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element & GGS_propertyMap_2E_element::operator = (const GGS_propertyMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mActionMap = inSource.mProperty_mActionMap ;
  mProperty_mIsOverriding = inSource.mProperty_mIsOverriding ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_propertyKind & in_mKind,
                                                                             const GGS_actionMap & in_mActionMap,
                                                                             const GGS_bool & in_mIsOverriding,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element::GGS_propertyMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_propertyKind & inOperand1,
                                                        const GGS_actionMap & inOperand2,
                                                        const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mActionMap (inOperand2),
mProperty_mIsOverriding (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                       const GGS_propertyKind & in_mKind,
                                                                       const GGS_actionMap & in_mActionMap,
                                                                       const GGS_bool & in_mIsOverriding,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mIsOverriding.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsOverriding.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element ("propertyMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element GGS_propertyMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element result ;
  const GGS_propertyMap_2E_element * p = (const GGS_propertyMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyDeclarationAST::objectCompare (const GGS_atomicPropertyDeclarationAST & inOperand) const {
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

GGS_atomicPropertyDeclarationAST::GGS_atomicPropertyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::
init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const GGS_lstring & in_mClassName,
                                                                                                         const GGS_lstring & in_mPropertyTypeName,
                                                                                                         const GGS_lstring & in_mPropertyName,
                                                                                                         const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                                         const GGS_bool & in_generateResetMethod,
                                                                                                         const GGS_bool & in_generateDirectRead,
                                                                                                         const GGS_bool & in_generateDirectAccess,
                                                                                                         const GGS_bool & in_standalone,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_atomicPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicPropertyDeclarationAST_init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_generateResetMethod, in_generateDirectRead, in_generateDirectAccess, in_standalone, inCompiler) ;
  const GGS_atomicPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::
atomicPropertyDeclarationAST_init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (const GGS_lstring & in_mClassName,
                                                                                                                                      const GGS_lstring & in_mPropertyTypeName,
                                                                                                                                      const GGS_lstring & in_mPropertyName,
                                                                                                                                      const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                                                                      const GGS_bool & in_generateResetMethod,
                                                                                                                                      const GGS_bool & in_generateDirectRead,
                                                                                                                                      const GGS_bool & in_generateDirectAccess,
                                                                                                                                      const GGS_bool & in_standalone,
                                                                                                                                      Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_generateResetMethod = in_generateResetMethod ;
  mProperty_generateDirectRead = in_generateDirectRead ;
  mProperty_generateDirectAccess = in_generateDirectAccess ;
  mProperty_standalone = in_standalone ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST::GGS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                                   const GGS_lstring & in_mPropertyTypeName,
                                                                                   const GGS_lstring & in_mPropertyName,
                                                                                   const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                   const GGS_bool & in_generateResetMethod,
                                                                                   const GGS_bool & in_generateDirectRead,
                                                                                   const GGS_bool & in_generateDirectAccess,
                                                                                   const GGS_bool & in_standalone,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_generateResetMethod, in_generateDirectRead, in_generateDirectAccess, in_standalone,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_atomicPropertyDeclarationAST::readProperty_mPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mPropertyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_atomicPropertyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_atomicPropertyDeclarationAST::readProperty_mDefaultValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractDefaultValue () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mDefaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_mDefaultValue (const GGS_abstractDefaultValue & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mDefaultValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_generateResetMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_generateResetMethod ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyDeclarationAST::setProperty_generateResetMethod (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_generateResetMethod = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_generateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_generateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_generateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_generateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyDeclarationAST::readProperty_standalone (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_standalone ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_generateResetMethod (),
mProperty_generateDirectRead (),
mProperty_generateDirectAccess (),
mProperty_standalone () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GGS_lstring & in_mClassName,
                                                                      const GGS_lstring & in_mPropertyTypeName,
                                                                      const GGS_lstring & in_mPropertyName,
                                                                      const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GGS_bool & in_generateResetMethod,
                                                                      const GGS_bool & in_generateDirectRead,
                                                                      const GGS_bool & in_generateDirectAccess,
                                                                      const GGS_bool & in_standalone,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_generateResetMethod (),
mProperty_generateDirectRead (),
mProperty_generateDirectAccess (),
mProperty_standalone () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_generateResetMethod = in_generateResetMethod ;
  mProperty_generateDirectRead = in_generateDirectRead ;
  mProperty_generateDirectAccess = in_generateDirectAccess ;
  mProperty_standalone = in_standalone ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

void cPtr_atomicPropertyDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicPropertyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateResetMethod.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_standalone.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_generateResetMethod, mProperty_generateDirectRead, mProperty_generateDirectAccess, mProperty_standalone, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyTypeName.printNonNullClassInstanceProperties ("mPropertyTypeName") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
    mProperty_mDefaultValue.printNonNullClassInstanceProperties ("mDefaultValue") ;
    mProperty_generateResetMethod.printNonNullClassInstanceProperties ("generateResetMethod") ;
    mProperty_generateDirectRead.printNonNullClassInstanceProperties ("generateDirectRead") ;
    mProperty_generateDirectAccess.printNonNullClassInstanceProperties ("generateDirectAccess") ;
    mProperty_standalone.printNonNullClassInstanceProperties ("standalone") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @atomicPropertyDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST result ;
  const GGS_atomicPropertyDeclarationAST * p = (const GGS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @proxyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_proxyDeclarationAST::objectCompare (const GGS_proxyDeclarationAST & inOperand) const {
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

GGS_proxyDeclarationAST::GGS_proxyDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_proxyKind & in_mProxyKind,
                              const GGS_lstring & in_mProxyTypeName,
                              const GGS_lstring & in_mProxyName,
                              const GGS_lstring & in_mToOneRelationshipName,
                              const GGS_lstring & in_mPropertyName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_proxyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_proxyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->proxyDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName, inCompiler) ;
  const GGS_proxyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::
proxyDeclarationAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                  const GGS_proxyKind & in_mProxyKind,
                                                  const GGS_lstring & in_mProxyTypeName,
                                                  const GGS_lstring & in_mProxyName,
                                                  const GGS_lstring & in_mToOneRelationshipName,
                                                  const GGS_lstring & in_mPropertyName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mProxyTypeName = in_mProxyTypeName ;
  mProperty_mProxyName = in_mProxyName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST::GGS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                 const GGS_proxyKind & in_mProxyKind,
                                                                 const GGS_lstring & in_mProxyTypeName,
                                                                 const GGS_lstring & in_mProxyName,
                                                                 const GGS_lstring & in_mToOneRelationshipName,
                                                                 const GGS_lstring & in_mPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_proxyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_proxyDeclarationAST::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_proxyKind () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyKind (const GGS_proxyKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mProxyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyTypeName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mProxyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mProxyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mToOneRelationshipName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_proxyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyDeclarationAST::setProperty_mPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @proxyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mProxyTypeName (),
mProperty_mProxyName (),
mProperty_mToOneRelationshipName (),
mProperty_mPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GGS_lstring & in_mClassName,
                                                    const GGS_proxyKind & in_mProxyKind,
                                                    const GGS_lstring & in_mProxyTypeName,
                                                    const GGS_lstring & in_mProxyName,
                                                    const GGS_lstring & in_mToOneRelationshipName,
                                                    const GGS_lstring & in_mPropertyName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mProxyTypeName (),
mProperty_mProxyName (),
mProperty_mToOneRelationshipName (),
mProperty_mPropertyName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mProxyTypeName = in_mProxyTypeName ;
  mProperty_mProxyName = in_mProxyName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

void cPtr_proxyDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@proxyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_proxyDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyKind, mProperty_mProxyTypeName, mProperty_mProxyName, mProperty_mToOneRelationshipName, mProperty_mPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_proxyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mProxyTypeName.printNonNullClassInstanceProperties ("mProxyTypeName") ;
    mProperty_mProxyName.printNonNullClassInstanceProperties ("mProxyName") ;
    mProperty_mToOneRelationshipName.printNonNullClassInstanceProperties ("mToOneRelationshipName") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @proxyDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_proxyDeclarationAST result ;
  const GGS_proxyDeclarationAST * p = (const GGS_proxyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_proxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @stringAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringAsDefaultValue::objectCompare (const GGS_stringAsDefaultValue & inOperand) const {
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

GGS_stringAsDefaultValue::GGS_stringAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::
init_21_ (const GGS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_stringAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_stringAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->stringAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_stringAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::
stringAsDefaultValue_init_21_ (const GGS_lstring & in_mValue,
                               Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue::GGS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::class_func_new (const GGS_lstring & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_stringAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_stringAsDefaultValue::setProperty_mValue (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @stringAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GGS_lstring & in_mValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@stringAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @stringAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                                                         & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue result ;
  const GGS_stringAsDefaultValue * p = (const GGS_stringAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @identifierAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_identifierAsDefaultValue::objectCompare (const GGS_identifierAsDefaultValue & inOperand) const {
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

GGS_identifierAsDefaultValue::GGS_identifierAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::
init_21_ (const GGS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_identifierAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_identifierAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->identifierAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_identifierAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::
identifierAsDefaultValue_init_21_ (const GGS_lstring & in_mValue,
                                   Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue::GGS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::class_func_new (const GGS_lstring & in_mValue,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_identifierAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_identifierAsDefaultValue::setProperty_mValue (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @identifierAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GGS_lstring & in_mValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@identifierAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_identifierAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @identifierAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue result ;
  const GGS_identifierAsDefaultValue * p = (const GGS_identifierAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_identifierAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefsAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsAsDefaultValue::objectCompare (const GGS_prefsAsDefaultValue & inOperand) const {
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

GGS_prefsAsDefaultValue::GGS_prefsAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::
init_21_ (const GGS_lstring & in_mPrefPropertyName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_prefsAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_prefsAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->prefsAsDefaultValue_init_21_ (in_mPrefPropertyName, inCompiler) ;
  const GGS_prefsAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::
prefsAsDefaultValue_init_21_ (const GGS_lstring & in_mPrefPropertyName,
                              Compiler * /* inCompiler */) {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue::GGS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::class_func_new (const GGS_lstring & in_mPrefPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_prefsAsDefaultValue (in_mPrefPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_prefsAsDefaultValue::readProperty_mPrefPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    return p->mProperty_mPrefPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_prefsAsDefaultValue::setProperty_mPrefPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    p->mProperty_mPrefPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mPrefPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (const GGS_lstring & in_mPrefPropertyName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mPrefPropertyName () {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_prefsAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

void cPtr_prefsAsDefaultValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@prefsAsDefaultValue:") ;
  mProperty_mPrefPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsAsDefaultValue (mProperty_mPrefPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mPrefPropertyName.printNonNullClassInstanceProperties ("mPrefPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @prefsAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ("prefsAsDefaultValue",
                                                                        & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefsAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue result ;
  const GGS_prefsAsDefaultValue * p = (const GGS_prefsAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GGS_declarationPrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_lstring result ;
  if (nullptr != inObject) {
    result = inObject->getter_nodeKey (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GGS_semanticContext & io_ioSemanticContext,
                                             GGS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_firstAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GGS_semanticContext & io_ioSemanticContext,
                                              GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_secondAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                             GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GGS_semanticContext & io_ioSemanticContext,
                                             GGS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_thirdAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GGS_semanticContext & io_ioSemanticContext,
                                              GGS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_fourthAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
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
GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 364)) ;
  mProperty_mMainGroupChildrenRefs = temp_0 ;
  mProperty_mProjectObjectReference = GGS_string::makeEmptyString () ;
GGS_XCodeGroupList temp_1 = GGS_XCodeGroupList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 366)) ;
  mProperty_mGroupList = temp_1 ;
GGS_XCodeToolTargetList temp_2 = GGS_XCodeToolTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 367)) ;
  mProperty_mToolTargetList = temp_2 ;
GGS_XCodeAppTargetList temp_3 = GGS_XCodeAppTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 368)) ;
  mProperty_mAppTargetList = temp_3 ;
GGS__32_stringlist temp_4 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 369)) ;
  mProperty_mCppFileList = temp_4 ;
GGS__32_stringlist temp_5 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 370)) ;
  mProperty_m_5F_M_5F_FileList = temp_5 ;
GGS__32_stringlist temp_6 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 371)) ;
  mProperty_m_5F_MM_5F_FileList = temp_6 ;
GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 372)) ;
  mProperty_m_5F_SwiftFileList = temp_7 ;
GGS__32_stringlist temp_8 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 373)) ;
  mProperty_mFrameworkFileList = temp_8 ;
GGS__32_stringlist temp_9 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 374)) ;
  mProperty_mHeaderFileList = temp_9 ;
GGS_BuildFileList temp_10 = GGS_BuildFileList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 375)) ;
  mProperty_mBuildFileList = temp_10 ;
  mProperty_mDefaultConfigurationRef = GGS_string::makeEmptyString () ;
GGS_stringlist temp_11 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 378)) ;
  mProperty_mDefaultConfigurationSettingList = temp_11 ;
  mProperty_mProjectBuildConfigurationRef = GGS_string::makeEmptyString () ;
GGS__32_stringlist temp_12 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 381)) ;
  mProperty_mInfoPlistFileList = temp_12 ;
GGS__32_stringlist temp_13 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 382)) ;
  mProperty_mXIB_5F_fileList = temp_13 ;
GGS__32_stringlist temp_14 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 383)) ;
  mProperty_mTIFF_5F_fileList = temp_14 ;
GGS__32_stringlist temp_15 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 384)) ;
  mProperty_mICNS_5F_fileList = temp_15 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor::GGS_XcodeProjectDescriptor (const GGS_uint & inOperand0,
                                                        const GGS_string & inOperand1,
                                                        const GGS_stringlist & inOperand2,
                                                        const GGS_string & inOperand3,
                                                        const GGS_XCodeGroupList & inOperand4,
                                                        const GGS_XCodeToolTargetList & inOperand5,
                                                        const GGS_XCodeAppTargetList & inOperand6,
                                                        const GGS__32_stringlist & inOperand7,
                                                        const GGS__32_stringlist & inOperand8,
                                                        const GGS__32_stringlist & inOperand9,
                                                        const GGS__32_stringlist & inOperand10,
                                                        const GGS__32_stringlist & inOperand11,
                                                        const GGS__32_stringlist & inOperand12,
                                                        const GGS_BuildFileList & inOperand13,
                                                        const GGS_string & inOperand14,
                                                        const GGS_stringlist & inOperand15,
                                                        const GGS_string & inOperand16,
                                                        const GGS__32_stringlist & inOperand17,
                                                        const GGS__32_stringlist & inOperand18,
                                                        const GGS__32_stringlist & inOperand19,
                                                        const GGS__32_stringlist & inOperand20) :
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

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::class_func_new (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
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

AC_GALGAS_root * GGS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XcodeProjectDescriptor GGS_XcodeProjectDescriptor::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor result ;
  const GGS_XcodeProjectDescriptor * p = (const GGS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addTIFF_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addTIFF_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 15)) ;
  }
  {
  ioObject.mProperty_mTIFF_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 16)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 24)) ;
  }
  {
  ioObject.mProperty_mInfoPlistFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 25)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 33)) ;
  }
  {
  ioObject.mProperty_mXIB_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GGS_XcodeProjectDescriptor & ioObject,
                                       const GGS_string constinArgument_inFileName,
                                       GGS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 42)) ;
  }
  {
  ioObject.mProperty_mFrameworkFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inFileName,
                               GGS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 51)) ;
  }
  {
  ioObject.mProperty_m_5F_M_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 52)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inFileName,
                                   GGS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 60)) ;
  }
  {
  ioObject.mProperty_m_5F_SwiftFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 61)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GGS_XcodeProjectDescriptor & ioObject,
                                const GGS_string constinArgument_inFileName,
                                GGS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 69)) ;
  }
  {
  ioObject.mProperty_m_5F_MM_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 70)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GGS_XcodeProjectDescriptor & ioObject,
                                 const GGS_string constinArgument_inFileName,
                                 GGS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 78)) ;
  }
  {
  ioObject.mProperty_mCppFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 79)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inFileName,
                                    GGS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 87)) ;
  }
  {
  ioObject.mProperty_mHeaderFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 88)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 97)) ;
  }
  {
  ioObject.mProperty_mBuildFileList.setter_append (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GGS_XcodeProjectDescriptor & ioObject,
                                    const GGS_string constinArgument_inTargetName,
                                    const GGS_string constinArgument_inProductFileName,
                                    const GGS_stringlist constinArgument_inSourceList,
                                    const GGS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GGS_string & outArgument_outTargetRef,
                                    GGS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 111)) ;
  }
  GGS_string var_buildPhaseRef_4477 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4477, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 113)) ;
  }
  GGS_string var_buildConfigurationListRef_4574 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4574, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 114)) ;
  }
  GGS_string var_buildConfigurationRef_4637 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4637, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 115)) ;
  }
  GGS_string var_frameworkBuildRef_4696 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 116)) ;
  }
  {
  ioObject.mProperty_mToolTargetList.setter_append (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4477, var_buildConfigurationListRef_4574, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4637, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GGS_XcodeProjectDescriptor & ioObject,
                                   const GGS_string constinArgument_inTargetName,
                                   const GGS_string constinArgument_inProductFileName,
                                   const GGS_stringlist constinArgument_inSourceList,
                                   const GGS_stringlist constinArgument_inFrameworksFileRefList,
                                   const GGS_stringlist constinArgument_inResourceFileBuildRefs,
                                   const GGS_stringlist constinArgument_inBuildConfigurationSettingList,
                                   const GGS_stringlist constinArgument_inDependentTargetRefList,
                                   const GGS__32_stringlist constinArgument_inProductCopyList,
                                   const GGS_string constinArgument_inInfoPList,
                                   GGS_string & outArgument_outProductFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 146)) ;
  }
  GGS_string var_buildPhaseRef_5838 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5838, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 147)) ;
  }
  GGS_string var_targetRef_5889 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5889, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 148)) ;
  }
  GGS_string var_buildConfigurationListRef_5936 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5936, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 149)) ;
  }
  GGS_string var_buildConfigurationRef_5999 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5999, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 150)) ;
  }
  GGS_string var_frameworkBuildRef_6058 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6058, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 151)) ;
  }
  GGS_string var_resourceBuildRef_6113 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 152)) ;
  }
  GGS__32_stringlist temp_0 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 153)) ;
  GGS__32_stringlist var_dependentTargets_6150 = temp_0 ;
  UpEnumerator_stringlist enumerator_6179 (constinArgument_inDependentTargetRefList) ;
  while (enumerator_6179.hasCurrentObject ()) {
    GGS_string var_dependencyBuildRef_6253 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6253, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 155)) ;
    }
    {
    var_dependentTargets_6150.setter_append (var_dependencyBuildRef_6253, enumerator_6179.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 156)) ;
    }
    enumerator_6179.gotoNextObject () ;
  }
  GGS_stringlist var_resourceFileBuildRefs_6353 = constinArgument_inResourceFileBuildRefs ;
  UpEnumerator__32_stringlist enumerator_6413 (constinArgument_inProductCopyList) ;
  while (enumerator_6413.hasCurrentObject ()) {
    GGS_string var_buildRef_6520 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6413.current_mValue_30_ (HERE), enumerator_6413.current_mValue_31_ (HERE), var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 160)) ;
    }
    {
    var_resourceFileBuildRefs_6353.setter_append (var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 161)) ;
    }
    enumerator_6413.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mAppTargetList.setter_append (var_targetRef_5889, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5838, var_buildConfigurationListRef_5936, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5999, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_6058, var_dependentTargets_6150, var_resourceBuildRef_6113, var_resourceFileBuildRefs_6353, constinArgument_inInfoPList, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 163)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GGS_XcodeProjectDescriptor & ioObject,
                               const GGS_string constinArgument_inGroupName,
                               const GGS_string constinArgument_inGroupPath,
                               const GGS_stringlist constinArgument_inChildrenRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 190)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 193)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 196)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 198)) ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 199)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GGS_XcodeProjectDescriptor & ioObject,
                                        const GGS_string constinArgument_inGroupName,
                                        const GGS_string constinArgument_inGroupPath,
                                        const GGS_stringset constinArgument_inFileNames,
                                        GGS_stringlist & ioArgument_ioCppFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioMFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioMMFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                        GGS_stringlist & ioArgument_ioResourceFileBuildRefs,
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
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 216)) ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 219)) ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GGS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 222)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 224)) ;
  }
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 226)) ;
  GGS_stringlist var_childrenRefs_8856 = temp_6 ;
  UpEnumerator_stringset enumerator_8881 (constinArgument_inFileNames) ;
  while (enumerator_8881.hasCurrentObject ()) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 228)).objectCompare (GGS_string ("cpp"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GGS_string var_cppFileRef_8998 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_8881.current_key (HERE), var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 229)) ;
        }
        {
        var_childrenRefs_8856.setter_append (var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 230)) ;
        }
        GGS_string var_buildRef_9134 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_8998, enumerator_8881.current_key (HERE), var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 231)) ;
        }
        {
        ioArgument_ioCppFileBuildRefs.setter_append (var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 232)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 233)).objectCompare (GGS_string ("h"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GGS_string var_headerFileRef_9289 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_8881.current_key (HERE), var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 234)) ;
          }
          {
          var_childrenRefs_8856.setter_append (var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 235)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 236)).objectCompare (GGS_string ("m"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            GGS_string var_m_5F_FileRef_9443 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 237)) ;
            }
            GGS_string var_buildRef_9536 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9443, enumerator_8881.current_key (HERE), var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 238)) ;
            }
            {
            var_childrenRefs_8856.setter_append (var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 239)) ;
            }
            {
            ioArgument_ioMFileBuildRefs.setter_append (var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 240)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_9) {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 241)).objectCompare (GGS_string ("swift"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              GGS_string var_swift_5F_FileRef_9732 ;
              {
              extensionSetter_addSwiftFile (ioObject, enumerator_8881.current_key (HERE), var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 242)) ;
              }
              GGS_string var_buildRef_9833 ;
              {
              extensionSetter_addBuildFile (ioObject, var_swift_5F_FileRef_9732, enumerator_8881.current_key (HERE), var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 243)) ;
              }
              {
              var_childrenRefs_8856.setter_append (var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 244)) ;
              }
              {
              ioArgument_ioSwiftFileBuildRefs.setter_append (var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 245)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_10) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 246)).objectCompare (GGS_string ("mm"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GGS_string var_m_5F_FileRef_10031 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 247)) ;
                }
                GGS_string var_buildRef_10124 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10031, enumerator_8881.current_key (HERE), var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 248)) ;
                }
                {
                var_childrenRefs_8856.setter_append (var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 249)) ;
                }
                {
                ioArgument_ioMMFileBuildRefs.setter_append (var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 250)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 251)).objectCompare (GGS_string ("framework"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  GGS_string var_framework_5F_FileRef_10329 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_8881.current_key (HERE), var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 252)) ;
                  }
                  GGS_string var_buildRef_10438 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10329, enumerator_8881.current_key (HERE), var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 253)) ;
                  }
                  {
                  var_childrenRefs_8856.setter_append (var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 254)) ;
                  }
                  {
                  ioArgument_ioFrameWorkFileBuildRefs.setter_append (var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 255)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_12) {
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 256)).objectCompare (GGS_string ("plist"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    GGS_string var_resource_5F_FileRef_10654 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 257)) ;
                    }
                    {
                    var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 258)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 259)).objectCompare (GGS_string ("xib"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      GGS_string var_resource_5F_FileRef_10818 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 260)) ;
                      }
                      {
                      var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 261)) ;
                      }
                      GGS_string var_buildRef_10972 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10818, enumerator_8881.current_key (HERE), var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 262)) ;
                      }
                      {
                      ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 263)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_14) {
                    GalgasBool test_15 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 264)).objectCompare (GGS_string ("tiff"))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_15) {
                        GGS_string var_resource_5F_FileRef_11134 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 265)) ;
                        }
                        {
                        var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 266)) ;
                        }
                        GGS_string var_buildRef_11288 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11134, enumerator_8881.current_key (HERE), var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 267)) ;
                        }
                        {
                        ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 268)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_15) {
                      GalgasBool test_16 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_16) {
                        test_16 = GGS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectGeneration.ggs", 269)).objectCompare (GGS_string ("icns"))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_16) {
                          GGS_string var_resource_5F_FileRef_11450 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 270)) ;
                          }
                          {
                          var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 271)) ;
                          }
                          GGS_string var_buildRef_11604 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11450, enumerator_8881.current_key (HERE), var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 272)) ;
                          }
                          {
                          ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 273)) ;
                          }
                        }
                      }
                      if (GalgasBool::boolFalse == test_16) {
                        GenericArray <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectGeneration.ggs", 275)), GGS_string ("unhandled extension for file '").add_operation (enumerator_8881.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 275)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 275)), fixItArray17  COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 275)) ;
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
    enumerator_8881.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_8856, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 278)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GGS_XcodeProjectDescriptor & ioObject,
                                            const GGS_string constinArgument_inGroupRef,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mMainGroupChildrenRefs.setter_append (constinArgument_inGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 285)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GGS_XcodeProjectDescriptor & ioObject,
                                                        const GGS_stringlist constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssignOperation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 292)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
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
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.ggs", 352)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.ggs", 352)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 352)) ;
      ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 353)) ;
    }
  }
  const GGS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectGeneration.ggs", 355)).getter_md_35_ (SOURCE_FILE ("XcodeProjectGeneration.ggs", 355)).getter_rightSubString (GGS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 355)) ;
  ioObject.mProperty_mSequenceNumber.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 356)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
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
  GGS_string var_contents_17330 = GGS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCppFileList (), temp_7.readProperty_m_5F_M_5F_FileList (), temp_8.readProperty_m_5F_MM_5F_FileList (), temp_9.readProperty_m_5F_SwiftFileList (), temp_10.readProperty_mFrameworkFileList (), temp_11.readProperty_mHeaderFileList (), temp_12.readProperty_mInfoPlistFileList (), temp_13.readProperty_mTIFF_5F_fileList (), temp_14.readProperty_mICNS_5F_fileList (), temp_15.readProperty_mXIB_5F_fileList (), temp_16.readProperty_mBuildFileList (), temp_17.readProperty_mDefaultConfigurationRef (), temp_18.readProperty_mDefaultConfigurationSettingList (), temp_19.readProperty_mProjectBuildConfigurationRef () COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 421))) ;
  GGS_string var_projectCoreFile_17974 = constinArgument_inPath.add_operation (GGS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 443)) ;
  GalgasBool test_20 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_20) {
    GGS_bool test_21 = var_projectCoreFile_17974.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.ggs", 444)) ;
    if (GalgasBool::boolTrue != test_21.boolEnum ()) {
      test_21 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectGeneration.ggs", 444)) ;
    }
    GGS_bool test_22 = test_21 ;
    if (GalgasBool::boolTrue != test_22.boolEnum ()) {
      test_22 = GGS_bool (ComparisonKind::notEqual, GGS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 444)).objectCompare (var_contents_17330)) ;
    }
    test_20 = test_22.boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      GGS_bool joker_18234 ; // Joker input parameter
      var_contents_17330.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18234, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 445)) ;
      var_contents_17330.method_makeDirectoryAndWriteToFile (var_projectCoreFile_17974, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.ggs", 446)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @literalIntMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntMultipleBindingExpressionAST::objectCompare (const GGS_literalIntMultipleBindingExpressionAST & inOperand) const {
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

GGS_literalIntMultipleBindingExpressionAST::GGS_literalIntMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::
init_21_ (const GGS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntMultipleBindingExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalIntMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::
literalIntMultipleBindingExpressionAST_init_21_ (const GGS_luint & in_mValue,
                                                 Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST::GGS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::class_func_new (const GGS_luint & in_mValue,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_literalIntMultipleBindingExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_literalIntMultipleBindingExpressionAST::setProperty_mValue (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GGS_luint & in_mValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntMultipleBindingExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalIntMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST result ;
  const GGS_literalIntMultipleBindingExpressionAST * p = (const GGS_literalIntMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GGS_location & outArgument_outEndOfFile,
                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      GGS_lstring var_filePath_1817 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
      GGS_lstring var_sourceFile_1847 = GGS_lstring::init_21__21_ (var_filePath_1817.readProperty_string ().getter_absolutePathFromPath (GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.ggs", 44)) COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)), var_filePath_1817.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_location joker_2077 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_1847, ioArgument_ioDeclarationAST, joker_2077  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 47)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_ (ioArgument_ioDeclarationAST.mProperty_mBindingSpecificationListMap, inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_ (ioArgument_ioDeclarationAST.mProperty_mXcodeProject, inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mMainXibDescriptorList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_parse (inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_indexing (inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_indexing (inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_ (GGS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  GGS_bindingOptionList temp_0 = GGS_bindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("regular-binding.ggs", 20)) ;
  outArgument_outBindingOptions = temp_0 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_optionName_916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      GGS_abstractDefaultValue var_optionValue_993 ;
      nt_explicit_5F_value_ (var_optionValue_993, inCompiler) ;
      {
      outArgument_outBindingOptions.setter_append (var_optionName_916, var_optionValue_993, inCompiler COMMA_SOURCE_FILE ("regular-binding.ggs", 28)) ;
      }
      if (select_easyBindings_5F_syntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      if (select_easyBindings_5F_syntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i1_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      nt_explicit_5F_value_indexing (inCompiler) ;
      if (select_easyBindings_5F_syntax_2 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  GGS_lstring var_prefs_1956 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 49)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 49)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 51)) ;
  GGS_stringset var_signatureList_2028 = temp_0 ;
  GGS_arrayControllerBindingListAST temp_1 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 52)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2086 = temp_1 ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      GGS_astViewDeclarationList temp_3 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 55)) ;
      GGS_astViewDeclarationList var_viewDeclarationList_2176 = temp_3 ;
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2176, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mViewDeclarationList.plusAssignOperation(var_viewDeclarationList_2176, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 57)) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 4: {
      GGS_simpleStoredPropertyList temp_4 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 61)) ;
      GGS_simpleStoredPropertyList var_simpleStoredPropertyList_2476 = temp_4 ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_1956, var_simpleStoredPropertyList_2476, var_signatureList_2028, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssignOperation(var_simpleStoredPropertyList_2476, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 67)) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_ (var_prefs_1956, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 71)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 8: {
      GGS_stringset var_unusedSignatureList_3026 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      nt_toMany_5F_relationship_ (var_prefs_1956, var_unusedSignatureList_3026, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_ (var_prefs_1956, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 78)), var_arrayControllerBindingListAST_2086, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssignOperation(var_signatureList_2028, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i2_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_simple_5F_stored_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_toMany_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i3_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_isAbstract_1738 ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_isAbstract_1738 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
    var_isAbstract_1738 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_graphicEntity_1855 ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_graphicEntity_1855 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
    var_graphicEntity_1855 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_handlingOpposite_1980 ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_handlingOpposite_1980 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
    var_handlingOpposite_1980 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  GGS_lstring var_entityName_2154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 65)) ;
  GGS_lstringlist var_obsoleteEntityNames_2187 = temp_0 ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_obsoleteName_2289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      {
      var_obsoleteEntityNames_2187.setter_append (var_obsoleteName_2289, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 71)) ;
      }
      if (select_easyBindings_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_superEntityName_2424 ;
  switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
  case 1: {
    var_superEntityName_2424 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    var_superEntityName_2424 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  GGS_simpleStoredPropertyList temp_2 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 85)) ;
  GGS_simpleStoredPropertyList var_simpleStoredPropertyList_2592 = temp_2 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 86)) ;
  GGS_stringset var_signatureList_2641 = temp_3 ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 87)) ;
  GGS_lstringlist var_actionDeclarationList_2681 = temp_4 ;
  GGS_externSwiftDelegateList temp_5 = GGS_externSwiftDelegateList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 88)) ;
  GGS_externSwiftDelegateList var_externSwiftDelegateList_2741 = temp_5 ;
  GGS_arrayControllerBindingListAST temp_6 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 89)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2809 = temp_6 ;
  GGS_lstringlist temp_7 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 90)) ;
  GGS_lstringlist var_graphicOptionArray_2865 = temp_7 ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_2154, var_simpleStoredPropertyList_2592, var_signatureList_2641, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 95)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_2154, var_signatureList_2641, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_2154, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2681, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 103)), var_arrayControllerBindingListAST_2809, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2741, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      GGS_lstring var_graphicOption_3568 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      {
      var_graphicOptionArray_2865.setter_append (var_graphicOption_3568, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 109)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_graphicEntity_1855.operator_not (SOURCE_FILE ("entity.ggs", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (var_graphicOption_3568.readProperty_location (), GGS_string ("only a graphic entity accepts a graphic option"), fixItArray10  COMMA_SOURCE_FILE ("entity.ggs", 112)) ;
        }
      }
    } break ;
    default:
      repeatFlag_8 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_entityDeclarationAST::init_21__21__21__21__21__21__21__21__21__21__21_ (var_entityName_2154, var_isAbstract_1738, var_superEntityName_2424, var_handlingOpposite_1980, var_simpleStoredPropertyList_2592, var_signatureList_2641, var_actionDeclarationList_2681, var_obsoleteEntityNames_2187, var_graphicEntity_1855, var_externSwiftDelegateList_2741, var_graphicOptionArray_2865, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 116)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = var_isAbstract_1738 ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      test_12 = var_graphicEntity_1855 ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      GGS_observablePropertyList temp_13 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 136)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 133)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 134)), GGS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 135)), temp_13, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 131)) ;
      }
      {
      GGS_observablePropertyList temp_14 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 145)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 142)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 143)), GGS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 144)), temp_14, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 140)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i3_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      if (select_easyBindings_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i3_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      if (select_easyBindings_5F_syntax_8 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  GGS_lstring var_entityName_475 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mGraphvizList.setter_append (var_entityName_475, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 12)) ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i4_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i5_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring /* constinArgument_inRootEntity */,
                                                                                                GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  GGS_lstring var_selectionEntityName_2014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  GGS_lstring var_selectionControllerName_2071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  GGS_lstring var_modelControllerName_2131 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  GGS_lstring var_propertyName_2192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_selectionControllerDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, var_selectionControllerName_2071, var_modelControllerName_2131, var_propertyName_2192, var_selectionEntityName_2014, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 49)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i5_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i5_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i6_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                               const GGS_lstring constinArgument_inRootEntity,
                                                                                               GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 97)) ;
  GGS_lstring var_transientTypeName_5563 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  GGS_lstring var_transientName_5614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 101)) ;
  GGS_observablePropertyList var_dependanceList_5679 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_5767 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5767, inCompiler) ;
    {
    var_dependanceList_5679.setter_append (var_observablePropertyAST_5767, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 104)) ;
    }
    if (select_easyBindings_5F_syntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 106)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 108)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_computedPropertyDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5563, var_transientName_5614, var_dependanceList_5679, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 109)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 108)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i7_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                               const GGS_lstring constinArgument_inRootEntity,
                                                                                               GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  GGS_lstring var_transientTypeName_5574 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 96)) ;
  GGS_lstring var_transientName_5625 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 98)) ;
  {
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 104)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5574, var_transientName_5625, temp_0, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 99)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 98)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i8_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                               const GGS_lstring constinArgument_inRootEntity,
                                                                                               GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_isOverriding_6163 ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
    var_isOverriding_6163 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 119)) ;
    var_isOverriding_6163 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  GGS_lstring var_transientTypeName_6311 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  GGS_lstring var_transientName_6362 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 125)) ;
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 126)) ;
  GGS_observablePropertyList var_dependanceList_6427 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_6515 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6515, inCompiler) ;
    {
    var_dependanceList_6427.setter_append (var_observablePropertyAST_6515, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 129)) ;
    }
    if (select_easyBindings_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 131)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 133)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6311, var_transientName_6362, var_dependanceList_6427, var_isOverriding_6163, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 134)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 119)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 125)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 131)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 133)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 119)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 125)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_13 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 131)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                             GGS_stringset & ioArgument_ioSignatureList,
                                                                                             GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  GGS_bool var_usedForSignature_2403 = GGS_bool (false) ;
  GGS_bool var_customStore_2436 = GGS_bool (false) ;
  GGS_bool var_generateDirectAccess_2464 = GGS_bool (false) ;
  GGS_bool var_generateDirectRead_2501 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_2403.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 67)) ;
            }
          }
          var_usedForSignature_2403 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("customStore"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_customStore_2436.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 72)) ;
              }
            }
            var_customStore_2436 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("generateDirectRead"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_generateDirectRead_2501.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  GenericArray <FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 77)) ;
                }
              }
              var_generateDirectRead_2501 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("generateDirectAccess"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2464.boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    GenericArray <FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 82)) ;
                  }
                }
                var_generateDirectAccess_2464 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@customStore")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectAccess")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectRead")) ;
              inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 86)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = var_generateDirectAccess_2464 ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2501 ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 93)), GGS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 93)) ;
    }
  }
  GGS_lstring var_destinationEntityName_3817 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  GGS_lstring var_relationshipName_3863 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_usedForSignature_2403.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_relationshipName_3863.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 98)) ;
      }
    }
  }
  GGS_toManyRelationshipOptionAST var_toManyRelationshipOption_4012 ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    GGS_lstring var_inserseRelationshipName_4103 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
    var_toManyRelationshipOption_4012 = GGS_toManyRelationshipOptionAST::class_func_hasOpposite (var_inserseRelationshipName_4103  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    GGS_lstring var_masterPropertyName_4290 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
    var_toManyRelationshipOption_4012 = GGS_toManyRelationshipOptionAST::class_func_hasDependance (var_masterPropertyName_4290  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 111)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_4012 = GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 113)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_toManyRelationshipAST::init_21__21__21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_destinationEntityName_3817, var_relationshipName_3863, var_toManyRelationshipOption_4012, var_customStore_2436, var_usedForSignature_2403, var_generateDirectAccess_2464, var_generateDirectRead_2501, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 116)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i9_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i10_ (GGS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_1178 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      GGS_lstring var_outletName_1226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
      {
      GGS_mainXibLineDescriptorList temp_1 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
      temp_1.plusPlusAssignOperation (GGS_mainXibLineDescriptorList_2E_element::init_21_ (GGS_mainXibElement::class_func_outlet (var_outletType_1178, var_outletName_1226  COMMA_SOURCE_FILE ("main-xib.ggs", 39)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
      ioArgument_ioElementList.setter_append (temp_1, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
      }
    } break ;
    case 2: {
      GGS_lstring var_s_1382 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
      {
      GGS_mainXibLineDescriptorList temp_2 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 42)) ;
      temp_2.plusPlusAssignOperation (GGS_mainXibLineDescriptorList_2E_element::init_21_ (GGS_mainXibElement::class_func_text (var_s_1382  COMMA_SOURCE_FILE ("main-xib.ggs", 42)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.ggs", 42)) ;
      ioArgument_ioElementList.setter_append (temp_2, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 42)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      GGS_mainXibLineDescriptorList var_lineDescription_1517 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1517, inCompiler) ;
      {
      ioArgument_ioElementList.setter_append (var_lineDescription_1517, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 46)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i10_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      nt_main_5F_xib_5F_line_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i10_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      nt_main_5F_xib_5F_line_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_16 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_ (GGS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  GGS_mainXibLineDescriptorList temp_0 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 60)) ;
  outArgument_outLineDescription = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_1916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      GGS_lstring var_outletName_1964 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_outlet (var_outletType_1916, var_outletName_1964  COMMA_SOURCE_FILE ("main-xib.ggs", 66)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 65)) ;
      }
    } break ;
    case 2: {
      GGS_lstring var_s_2140 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_text (var_s_2140  COMMA_SOURCE_FILE ("main-xib.ggs", 70)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 70)) ;
      }
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i11_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i12_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring constinArgument_inRootEntity,
                                                                                                 GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  GGS_lstring var_controllerName_2962 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  GGS_autoLayoutTableViewControllerAttributListAST temp_0 = GGS_autoLayoutTableViewControllerAttributListAST::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 65)) ;
  GGS_autoLayoutTableViewControllerAttributListAST var_arrayControllerAttributListAST_3032 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_attributeName_3121 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    GGS_abstractDefaultValue var_attributeValue_3197 ;
    nt_explicit_5F_value_ (var_attributeValue_3197, inCompiler) ;
    {
    var_arrayControllerAttributListAST_3032.setter_append (var_attributeName_3121, var_attributeValue_3197, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 71)) ;
    }
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  GGS_bool var_isRoot_3354 ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
    var_isRoot_3354 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
    var_isRoot_3354 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  GGS_lstring var_relationshipName_3494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST temp_2 = GGS_autoLayoutTableViewControllerBoundColumnListAST::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 87)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3569 = temp_2 ;
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_easyBindings_5F_syntax_23 (inCompiler) == 2) {
        GGS_bool var_editableColumn_3689 ;
        switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
          var_editableColumn_3689 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
          var_editableColumn_3689 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_propertyName_3880 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        GGS_stringset var_unusedSet_3906 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_astAutoLayoutViewInstructionParameterList var_columnParameterListAST_3988 ;
        nt_view_5F_actual_5F_parameter_5F_list_ (var_unusedSet_3906, var_columnParameterListAST_3988, inCompiler) ;
        GGS_lstring var_sortPropertyName_4033 ;
        switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4033 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 107)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
          var_sortPropertyName_4033 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 110)) ;
        } break ;
        default:
          break ;
        }
        {
        var_arrayControllerBoundColumnListAST_3569.setter_append (var_editableColumn_3689, var_propertyName_3880, var_columnParameterListAST_3988, var_sortPropertyName_4033, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 112)) ;
        }
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 119)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutTableViewControllerDeclarationAST::init_21__21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2962, var_isRoot_3354, constinArgument_inRootEntity, var_relationshipName_3494, var_arrayControllerBoundColumnListAST_3569, var_arrayControllerAttributListAST_3032, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 121)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i12_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_23 (inCompiler) == 2) {
        switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 110)) ;
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 119)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i12_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    nt_explicit_5F_value_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_23 (inCompiler) == 2) {
        switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
        switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 110)) ;
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 119)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_ (const GGS_lstring constinArgument_inClassName,
                                                                                                       GGS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GGS_stringset & ioArgument_ioSignatureList,
                                                                                                       GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 51)) ;
  GGS_bool var_usedForSignature_2352 = GGS_bool (false) ;
  GGS_bool var_generateResetMethod_2385 = GGS_bool (false) ;
  GGS_bool var_generateDirectRead_2421 = GGS_bool (false) ;
  GGS_bool var_generateDirectAccess_2456 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_26 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2531 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 58)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_2352.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 61)) ;
            }
          }
          var_usedForSignature_2352 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateResetMethod"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_generateResetMethod_2385.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 66)) ;
              }
            }
            var_generateResetMethod_2385 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateDirectRead"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_generateDirectRead_2421.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  GenericArray <FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 71)) ;
                }
              }
              var_generateDirectRead_2421 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateDirectAccess"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2456.boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    GenericArray <FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 76)) ;
                  }
                }
                var_generateDirectAccess_2456 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateResetMethod")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectRead")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectAccess")) ;
              inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 80)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = var_generateDirectAccess_2456 ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2421 ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 87)), GGS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 87)) ;
    }
  }
  GGS_lstring var_attributeTypeName_3815 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 89)) ;
  GGS_lstring var_attributeName_3866 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_usedForSignature_2352.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_attributeName_3866.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 92)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 94)) ;
  GGS_abstractDefaultValue var_defaultValue_4035 ;
  nt_explicit_5F_value_ (var_defaultValue_4035, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 96)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_3815, var_attributeName_3866, var_defaultValue_4035, var_generateResetMethod_2385, var_generateDirectRead_2421, var_generateDirectAccess_2456, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 97)) ;
  }
  {
  ioArgument_ioAttributeList.setter_append (var_attributeTypeName_3815, var_attributeName_3866, var_defaultValue_4035, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 109)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 89)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 94)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 96)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i13_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_26 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 89)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 94)) ;
  nt_explicit_5F_value_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_ (const GGS_lstring constinArgument_inClassName,
                                                                                                       GGS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GGS_stringset & /* ioArgument_ioSignatureList */,
                                                                                                       GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 123)) ;
  GGS_lstring var_attributeTypeName_5009 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 124)) ;
  GGS_lstring var_attributeName_5060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 126)) ;
  GGS_abstractDefaultValue var_defaultValue_5138 ;
  nt_explicit_5F_value_ (var_defaultValue_5138, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 128)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_5009, var_attributeName_5060, var_defaultValue_5138, GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 129)) ;
  }
  {
  ioArgument_ioAttributeList.setter_append (var_attributeTypeName_5009, var_attributeName_5060, var_defaultValue_5138, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 141)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 126)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 128)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 126)) ;
  nt_explicit_5F_value_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i15_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_proxyKind var_proxyKind_1966 ;
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
    var_proxyKind_1966 = GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
    var_proxyKind_1966 = GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  GGS_lstring var_proxyTypeName_2142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  GGS_lstring var_proxyName_2189 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  GGS_lstring var_toOnePropertyName_2240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  GGS_lstring var_propertyName_2299 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_proxyDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_proxyKind_1966, var_proxyTypeName_2142, var_proxyName_2189, var_toOnePropertyName_2240, var_propertyName_2299, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 65)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i16_ (GGS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
    outArgument_outDefaultValue = GGS_boolAsDefaultValue::init_21_ (GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
    outArgument_outDefaultValue = GGS_boolAsDefaultValue::init_21_ (GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_luint var_integerValue_2036 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2036, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    GGS_luint var_integerValue_2173 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2173, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_ldouble var_doubleValue_2300 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
    outArgument_outDefaultValue = GGS_doubleAsDefaultValue::init_21_ (var_doubleValue_2300, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_lstring var_stringValue_2422 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
    outArgument_outDefaultValue = GGS_stringAsDefaultValue::init_21_ (var_stringValue_2422, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_lstring var_stringValue_2536 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
    outArgument_outDefaultValue = GGS_identifierAsDefaultValue::init_21_ (var_stringValue_2536, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    GGS_lstring var_name_2669 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
    outArgument_outDefaultValue = GGS_prefsAsDefaultValue::init_21_ (var_name_2669, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i16_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i16_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                          GGS_autoLayoutViewClassBindingSpecificationList & ioArgument_ioBindingList,
                                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_lstring var_bindingName_1068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  GGS_outletClassBindingSpecificationModelList temp_0 = GGS_outletClassBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 23)) ;
  GGS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1131 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1204 ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
      var_modelShouldBeWritableProperty_1204 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
      var_modelShouldBeWritableProperty_1204 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1415 ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      var_modelTypeName_1415 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
      var_modelTypeName_1415 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 38)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1131.setter_append (var_modelTypeName_1415, var_modelShouldBeWritableProperty_1204, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 40)) ;
    }
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_controllerBindingOptionList temp_2 = GGS_controllerBindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 44)) ;
  GGS_controllerBindingOptionList var_bindingOptionList_1723 = temp_2 ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_1823 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      GGS_lstring var_optionType_1883 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      {
      var_bindingOptionList_1723.setter_append (var_optionName_1823, var_optionType_1883, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 52)) ;
      }
      if (select_easyBindings_5F_syntax_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioBindingList.setter_append (constinArgument_inClassName, var_bindingName_1068, var_outletClassBindingSpecificationModelList_1131, var_bindingOptionList_1723, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 58)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      if (select_easyBindings_5F_syntax_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i17_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      if (select_easyBindings_5F_syntax_33 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_3582 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3582, inCompiler) ;
      outArgument_outBinding = GGS_andBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_3582, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      nt_booleanMultipleBindingComparison_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_34 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4009 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4009, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greater (SOURCE_FILE ("multiple-binding.ggs", 101)), var_rightBinding_4009, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4178 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4178, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greaterOrEqual (SOURCE_FILE ("multiple-binding.ggs", 105)), var_rightBinding_4178, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4354 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4354, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lowerOrEqual (SOURCE_FILE ("multiple-binding.ggs", 109)), var_rightBinding_4354, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4527 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4527, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lower (SOURCE_FILE ("multiple-binding.ggs", 113)), var_rightBinding_4527, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4694 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4694, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_equal (SOURCE_FILE ("multiple-binding.ggs", 117)), var_rightBinding_4694, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4861 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4861, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_notEqual (SOURCE_FILE ("multiple-binding.ggs", 121)), var_rightBinding_4861, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5363 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5363, inCompiler) ;
      outArgument_outBinding = GGS_orBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5363, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5562 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5562, inCompiler) ;
      outArgument_outBinding = GGS_xorBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5562, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GGS_observablePropertyAST var_observablePropertyAST_5932 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5932, inCompiler) ;
  outArgument_outBinding = GGS_observablePropertyInMultipleBindingExpressionAST::init_21_ (var_observablePropertyAST_5932, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  GGS_abstractBooleanMultipleBindingExpressionAST var_binding_6358 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6358, inCompiler) ;
  outArgument_outBinding = GGS_negateBooleanMultipleBindingExpressionAST::init_21_ (var_binding_6358, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GGS_luint var_value_6965 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  outArgument_outBinding = GGS_literalIntMultipleBindingExpressionAST::init_21_ (var_value_6965, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_ (GGS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  GGS_lstring var_externFunctionName_819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  GGS_lstring var_callerName_886 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  {
  ioArgument_ioExternSwiftFunctionList.setter_append (var_externFunctionName_819, var_callerName_886, inCompiler COMMA_SOURCE_FILE ("extern-swift-func.ggs", 26)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i25_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i26_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring constinArgument_inRootEntity,
                                                                                                 GGS_arrayControllerBindingListAST & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  GGS_lstring var_controllerName_2691 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  GGS_arrayControllerBoundModelAST var_model_2758 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
    var_model_2758 = GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.ggs", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
    var_model_2758 = GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (SOURCE_FILE ("array-controller.ggs", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  GGS_lstring var_relationshipName_2972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3140 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3140, inCompiler) ;
    GGS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3169 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_3140  COMMA_SOURCE_FILE ("array-controller.ggs", 80)) ;
    {
    ioArgument_ioArrayControllerBindingListAST.setter_append (var_controllerName_2691, var_hiddenSelectionViewBindingDescriptor_3169, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 81)) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_arrayControllerDeclarationAST::init_21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2691, var_model_2758, var_relationshipName_2972, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 87)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i26_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i26_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_ (GGS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  GGS_lstring var_outletClassName_1443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  GGS_lstring var_bindingName_1493 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  GGS_outletClassBindingSpecificationModelList temp_0 = GGS_outletClassBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 40)) ;
  GGS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1564 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1637 ;
    switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
      var_modelShouldBeWritableProperty_1637 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
      var_modelShouldBeWritableProperty_1637 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1848 ;
    switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
    case 1: {
      var_modelTypeName_1848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
      var_modelTypeName_1848 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 55)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1564.setter_append (var_modelTypeName_1848, var_modelShouldBeWritableProperty_1637, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 57)) ;
    }
    if (select_easyBindings_5F_syntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_controllerBindingOptionList temp_2 = GGS_controllerBindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 61)) ;
  GGS_controllerBindingOptionList var_bindingOptionList_2156 = temp_2 ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_2256 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      GGS_lstring var_optionType_2316 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      {
      var_bindingOptionList_2156.setter_append (var_optionName_2256, var_optionType_2316, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 69)) ;
      }
      if (select_easyBindings_5F_syntax_43 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  {
  ioArgument_ioControllerTemplateList.setter_append (var_outletClassName_1443, var_bindingName_1493, var_outletClassBindingSpecificationModelList_1564, var_bindingOptionList_2156, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 76)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      if (select_easyBindings_5F_syntax_43 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i27_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_39 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      if (select_easyBindings_5F_syntax_43 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_userDefined_1554 ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
    var_userDefined_1554 = GGS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_1554 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  GGS_lstring var_outletClassName_1715 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  GGS_lstring var_superClassName_1749 ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_superClassName_1749 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    var_superClassName_1749 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasRunAction_1882 = GGS_bool (false) ;
  GGS_bool var_hasEnabled_1917 = GGS_bool (false) ;
  GGS_bool var_hasHidden_1950 = GGS_bool (false) ;
  GGS_bool var_handlesTableViewBinding_1982 = GGS_bool (false) ;
  GGS_bool var_handlesGraphicControllerBinding_2028 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
      var_handlesTableViewBinding_1982 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
      var_hasRunAction_1882 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
      var_hasEnabled_1917 = GGS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
      var_hasHidden_1950 = GGS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
      var_handlesGraphicControllerBinding_2028 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_outletClassDeclarationAST::init_21__21__21__21__21__21__21__21_ (var_outletClassName_1715, var_userDefined_1554, var_superClassName_1749, var_hasRunAction_1882, var_hasEnabled_1917, var_handlesTableViewBinding_1982, var_handlesGraphicControllerBinding_2028, var_hasHidden_1950, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 79)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i28_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_ (GGS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  GGS_lstring var_externDelegateName_793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  {
  ioArgument_ioExternSwiftDelegateList.setter_append (var_externDelegateName_793, inCompiler COMMA_SOURCE_FILE ("extern-delegate.ggs", 23)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i29_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i30_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 52)) ;
  GGS_lstring var_documentName_2225 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 53)) ;
  GGS_string var_customSuperClassName_2255 ;
  switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_customSuperClassName_2255 = GGS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 58)) ;
    GGS_lstring var_name_2361 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 59)) ;
    var_customSuperClassName_2255 = var_name_2361.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 62)) ;
  GGS_lstring var_rootEntityName_2459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 64)) ;
  GGS_lstring var_mainViewName_2521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  GGS_outletDeclarationList temp_0 = GGS_outletDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  GGS_outletDeclarationList var_outletDeclarationList_2574 = temp_0 ;
  GGS_lstringlist temp_1 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 68)) ;
  GGS_lstringlist var_actionDeclarationList_2622 = temp_1 ;
  GGS_arrayControllerBindingListAST temp_2 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 69)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2688 = temp_2 ;
  GGS_astViewDeclarationList temp_3 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 70)) ;
  GGS_astViewDeclarationList var_viewDeclarationList_2755 = temp_3 ;
  GGS_astAutoLayoutOutletLinkerList temp_4 = GGS_astAutoLayoutOutletLinkerList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
  GGS_astAutoLayoutOutletLinkerList var_autoLayoutOutletLinkerList_2890 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2755, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2622, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2225, var_rootEntityName_2459, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_2574, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2225, var_rootEntityName_2459, var_arrayControllerBindingListAST_2688, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 85)) ;
      GGS_lstring var_linkerName_3390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 86)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 87)) ;
      GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 88)) ;
      GGS_lstringlist var_outletNameList_3435 = temp_6 ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lstring var_outletName_3495 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 90)) ;
        {
        var_outletNameList_3435.setter_append (var_outletName_3495, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 91)) ;
        }
        if (select_easyBindings_5F_syntax_49 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 93)) ;
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 95)) ;
      {
      var_autoLayoutOutletLinkerList_2890.setter_append (var_linkerName_3390, var_outletNameList_3435, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 96)) ;
      }
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 98)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutDocumentDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_documentName_2225, var_rootEntityName_2459, var_mainViewName_2521, var_outletDeclarationList_2574, var_actionDeclarationList_2622, var_arrayControllerBindingListAST_2688, var_viewDeclarationList_2755, var_customSuperClassName_2255, var_autoLayoutOutletLinkerList_2890, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
  }
  {
  GGS_observablePropertyList temp_8 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 116)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_documentName_2225, var_rootEntityName_2459, GGS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 114)), GGS_string ("documentFileName").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 115)), temp_8, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 111)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 52)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 53)) ;
  switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 58)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 86)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 87)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 90)) ;
        if (select_easyBindings_5F_syntax_49 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 93)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 95)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 98)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 52)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 53)) ;
  switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 58)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 86)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 87)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 90)) ;
        if (select_easyBindings_5F_syntax_49 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 93)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 95)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i31_ (GGS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  GGS_lstring var_xcodeProjectString_399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_xcodeProjectString_399.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_399.readProperty_location (), GGS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.ggs", 16)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioXcodeProjectString.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_399.readProperty_location (), GGS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.ggs", 18)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_399 ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i31_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i32_ (GGS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  GGS_lstring var_actionName_796 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  {
  ioArgument_ioActionDeclarationList.setter_append (var_actionName_796, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 22)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  GGS_lstring var_functionName_3150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  GGS_autoLayoutClassParameterList var_parameterList_3223 ;
  GGS_lstring var_mangledName_3243 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3150, var_parameterList_3223, var_mangledName_3243, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3243, var_parameterList_3223, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 89)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i33_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  GGS_lstring var_functionName_3594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  GGS_autoLayoutClassParameterList var_parameterList_3667 ;
  GGS_lstring var_mangledName_3687 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3594, var_parameterList_3667, var_mangledName_3687, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3687, var_parameterList_3667, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 100)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i34_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_userDefined_4005 ;
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
    var_userDefined_4005 = GGS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_4005 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  GGS_lstring var_outletClassName_4170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  GGS_autoLayoutClassParameterList var_parameterList_4225 ;
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
    GGS_autoLayoutClassParameterList temp_0 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 118)) ;
    var_parameterList_4225 = temp_0 ;
  } break ;
  case 2: {
    GGS_lstring joker_4353 ; // Joker input parameter
    nt_autolayout_5F_formal_5F_parameter_5F_list_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 120)), var_parameterList_4225, joker_4353, inCompiler) ;
    joker_4353.drop () ; // Release temporary input variables (joker in source)
  } break ;
  default:
    break ;
  }
  GGS_lstring var_superClassName_4382 ;
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    var_superClassName_4382 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    var_superClassName_4382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasRunAction_4515 = GGS_bool (false) ;
  GGS_bool var_hasEnabled_4550 = GGS_bool (false) ;
  GGS_bool var_hasHidden_4583 = GGS_bool (false) ;
  GGS_bool var_handlesTableViewBinding_4615 = GGS_bool (false) ;
  GGS_bool var_handlesGraphicControllerBinding_4661 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
      var_handlesTableViewBinding_4615 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
      var_hasRunAction_4515 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
      var_hasEnabled_4550 = GGS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
      var_hasHidden_4583 = GGS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
      var_handlesGraphicControllerBinding_4661 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GGS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_5051 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      GGS_lstring var_functionName_5152 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      GGS_autoLayoutClassParameterList var_parameterList_5227 ;
      GGS_lstring var_mangledName_5247 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_5152, var_parameterList_5227, var_mangledName_5247, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_5051.setter_insertKey (var_mangledName_5247, var_parameterList_5227, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 158)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4170, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutViewClassDeclarationAST::init_21__21__21__21__21__21__21__21__21__21_ (var_outletClassName_4170, var_userDefined_4005, var_superClassName_4382, var_hasRunAction_4515, var_hasEnabled_4550, var_handlesTableViewBinding_4615, var_handlesGraphicControllerBinding_4661, var_hasHidden_4583, var_parameterList_4225, var_astAutoLayoutViewFunctionMap_5051, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 163)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i35_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_ (const GGS_lstring constinArgument_inFunctionName,
                                                                                                                 GGS_autoLayoutClassParameterList & outArgument_ioParameterList,
                                                                                                                 GGS_lstring & outArgument_outMangledName,
                                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  GGS_autoLayoutClassParameterList temp_0 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 183)) ;
  outArgument_ioParameterList = temp_0 ;
  GGS_string var_mangledName_6203 = constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 184)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_6311 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      var_mangledName_6203.plusAssignOperation(var_parameterName_6311.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view-class.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 194)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view-class.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 197)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view-class.ggs", 200)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 200)) ;
        }
      } break ;
      case 4: {
        GGS_lstring var_parameterTypeName_6706 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("String"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view-class.ggs", 204)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 204)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("StringArray"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view-class.ggs", 206)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 206)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("Int"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view-class.ggs", 208)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 208)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("Bool"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view-class.ggs", 210)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 210)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_parameterTypeName_6706  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 212)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 212)) ;
                }
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_56 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
  var_mangledName_6203.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 220)) ;
  outArgument_outMangledName = GGS_lstring::init_21__21_ (var_mangledName_6203, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_56 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i36_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_56 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_ (GGS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  GGS_lstring var_outletTypeName_1775 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  GGS_lstring var_outletName_1814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  GGS_tableValueBinding var_tableValueBinding_1872 ;
  GGS_runActionDescriptor var_runActionDescriptor_1938 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_2012 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_2091 ;
  GGS_graphicController var_graphicController_2161 ;
  GGS_regularBindingList var_regularBindingList_2226 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_1872, var_runActionDescriptor_1938, var_enabledBindingDescriptor_2012, var_hiddenBindingDescriptor_2091, var_graphicController_2161, var_regularBindingList_2226, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  {
  ioArgument_ioOutletDeclarationList.setter_append (var_outletTypeName_1775, var_outletName_1814, var_tableValueBinding_1872, var_runActionDescriptor_1938, var_enabledBindingDescriptor_2012, var_hiddenBindingDescriptor_2091, var_regularBindingList_2226, var_graphicController_2161, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 56)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  nt_outlet_5F_binding_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i37_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  nt_outlet_5F_binding_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i38_ (GGS_tableValueBinding & outArgument_tableValueBinding,
                                                                                         GGS_runActionDescriptor & outArgument_runActionDescriptor,
                                                                                         GGS_multipleBindingDescriptor & outArgument_enabledBindingDescriptor,
                                                                                         GGS_multipleBindingDescriptor & outArgument_hiddenBindingDescriptor,
                                                                                         GGS_graphicController & outArgument_graphicController,
                                                                                         GGS_regularBindingList & outArgument_regularBindingList,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_tableValueBinding.drop () ; // Release 'out' argument
  outArgument_runActionDescriptor.drop () ; // Release 'out' argument
  outArgument_enabledBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_hiddenBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_graphicController.drop () ; // Release 'out' argument
  outArgument_regularBindingList.drop () ; // Release 'out' argument
  outArgument_tableValueBinding = GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 77)) ;
  outArgument_runActionDescriptor = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.ggs", 78)) ;
  outArgument_enabledBindingDescriptor = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 79)) ;
  outArgument_hiddenBindingDescriptor = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 80)) ;
  outArgument_graphicController = GGS_graphicController::class_func_none (SOURCE_FILE ("outlet-declaration.ggs", 81)) ;
  GGS_regularBindingList temp_0 = GGS_regularBindingList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 82)) ;
  outArgument_regularBindingList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, outArgument_tableValueBinding.objectCompare (GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 86)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 87)), GGS_string ("duplicated $tableValue binding"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 87)) ;
        }
      }
      GGS_lstring var_controllerName_3568 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
      outArgument_tableValueBinding = GGS_tableValueBinding::class_func_tableValueBinding (var_controllerName_3568  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, outArgument_runActionDescriptor.objectCompare (GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.ggs", 93)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 94)), GGS_string ("duplicated $run binding"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 94)) ;
        }
      }
      GGS_lstring var_runTargetName_3809 ;
      switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
      case 1: {
        var_runTargetName_3809 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 98)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        var_runTargetName_3809 = GGS_lstring::init_21__21_ (GGS_string ("prefs"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 101)), inCompiler COMMA_HERE) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 102)) ;
      } break ;
      case 3: {
        var_runTargetName_3809 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 105)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_runActionName_4079 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
      outArgument_runActionDescriptor = GGS_runActionDescriptor::class_func_action (var_runTargetName_3809, var_runActionName_4079  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 108)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 111)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, outArgument_enabledBindingDescriptor.objectCompare (GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 112)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 113)), GGS_string ("duplicated $enabled binding"), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 113)) ;
        }
      }
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4426 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4426, inCompiler) ;
      outArgument_enabledBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4426  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 116)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 119)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, outArgument_hiddenBindingDescriptor.objectCompare (GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 120)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 121)), GGS_string ("duplicated $hidden binding"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 121)) ;
        }
      }
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4763 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4763, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4763  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 124)) ;
    } break ;
    case 6: {
      GGS_lstring var_bindingName_4923 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 127)) ;
      GGS_observablePropertyList temp_10 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 128)) ;
      GGS_observablePropertyList var_observablePropertyList_4970 = temp_10 ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GGS_observablePropertyAST var_observableProperty_5070 ;
        nt_observable_5F_property_ (var_observableProperty_5070, inCompiler) ;
        {
        var_observablePropertyList_4970.setter_append (var_observableProperty_5070, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 131)) ;
        }
        if (select_easyBindings_5F_syntax_60 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 133)) ;
        }else{
          repeatFlag_11 = false ;
        }
      }
      GGS_bindingOptionList var_bindingOptions_5219 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5219, inCompiler) ;
      {
      outArgument_regularBindingList.setter_append (var_bindingName_4923, var_observablePropertyList_4970, var_bindingOptions_5219, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 136)) ;
      }
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
      GGS_lstring var_graphicControllerName_5466 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 144)) ;
      GGS_lstring var_propertyName_5508 ;
      switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
      case 1: {
        var_propertyName_5508 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 147)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 149)) ;
        var_propertyName_5508 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 150)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.ggs", 152)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          outArgument_graphicController = GGS_graphicController::class_func_defined (var_graphicControllerName_5466, var_propertyName_5508  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 153)) ;
        }
      }
      if (GalgasBool::boolFalse == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5466.readProperty_location (), GGS_string ("binding already defined"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 155)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i38_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 102)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 111)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 119)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 127)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        if (select_easyBindings_5F_syntax_60 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 133)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 144)) ;
      switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 149)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 150)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i38_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 102)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 111)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 119)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 127)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_indexing (inCompiler) ;
        if (select_easyBindings_5F_syntax_60 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 133)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      nt_binding_5F_option_5F_list_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 144)) ;
      switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 149)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 150)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i39_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  GGS_bool var_isClass_1251 ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
    var_isClass_1251 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
    var_isClass_1251 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_1389 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientClassDeclarationAST::init_21__21_ (var_propertyTypeName_1389, var_isClass_1251, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 42)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i39_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i39_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i40_ (GGS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    GGS_lstring var_propertyName_2333 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootProperty (var_propertyName_2333  COMMA_SOURCE_FILE ("observable-property.ggs", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
      case 1: {
        GGS_lstring var_optionName_2503 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyWithOption (var_propertyName_2333, var_optionName_2503  COMMA_SOURCE_FILE ("observable-property.ggs", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        GGS_lstring var_observablePropertyName_2699 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyRelationship (var_propertyName_2333, var_observablePropertyName_2699  COMMA_SOURCE_FILE ("observable-property.ggs", 59)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyNone (var_propertyName_2333  COMMA_SOURCE_FILE ("observable-property.ggs", 64)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfWithoutProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 70))  COMMA_SOURCE_FILE ("observable-property.ggs", 70)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      GGS_lstring var_propertyName_3180 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfProperty (var_propertyName_3180  COMMA_SOURCE_FILE ("observable-property.ggs", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          GGS_lstring var_elementPropertyName_3396 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyArray (var_propertyName_3180, var_elementPropertyName_3396  COMMA_SOURCE_FILE ("observable-property.ggs", 82)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          GGS_lstring var_elementPropertyName_3666 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyObject (var_propertyName_3180, var_elementPropertyName_3666  COMMA_SOURCE_FILE ("observable-property.ggs", 90)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyNone (var_propertyName_3180  COMMA_SOURCE_FILE ("observable-property.ggs", 96)) ;
        } break ;
        case 4: {
          GGS_lstring var_optionName_4021 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyWithOption (var_propertyName_3180, var_optionName_4021  COMMA_SOURCE_FILE ("observable-property.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    GGS_lstring var_propertyName_4241 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsProperty (var_propertyName_4241  COMMA_SOURCE_FILE ("observable-property.ggs", 108)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      GGS_lstring var_optionName_4395 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsPropertyWithOption (var_propertyName_4241, var_optionName_4395  COMMA_SOURCE_FILE ("observable-property.ggs", 112)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GGS_lstring var_controllerName_4566 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      GGS_lstring var_propertyName_4658 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerOneProperty (var_controllerName_4566, var_propertyName_4658  COMMA_SOURCE_FILE ("observable-property.ggs", 121)) ;
    } break ;
    case 2: {
      GGS_lstring var_propertyName_4831 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerProperty (var_controllerName_4566, var_propertyName_4831  COMMA_SOURCE_FILE ("observable-property.ggs", 125)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        GGS_lstring var_secondaryPropertyName_5036 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (var_controllerName_4566, var_propertyName_4831, var_secondaryPropertyName_5036  COMMA_SOURCE_FILE ("observable-property.ggs", 129)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        GGS_lstring var_secondaryPropertyName_5368 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerAllProperties (var_controllerName_4566, var_propertyName_4831, var_secondaryPropertyName_5368  COMMA_SOURCE_FILE ("observable-property.ggs", 139)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_signatureProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 148))  COMMA_SOURCE_FILE ("observable-property.ggs", 148)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 151))  COMMA_SOURCE_FILE ("observable-property.ggs", 151)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionShouldChangeProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 154))  COMMA_SOURCE_FILE ("observable-property.ggs", 154)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    GGS_lstring var_superEntityName_5994 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    GGS_lstring var_propertyName_6046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superProperty (var_superEntityName_5994, var_propertyName_6046  COMMA_SOURCE_FILE ("observable-property.ggs", 162)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      GGS_abstractDefaultValue var_defaultValue_6298 ;
      nt_explicit_5F_value_ (var_defaultValue_6298, inCompiler) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (var_superEntityName_5994, var_propertyName_6046, var_defaultValue_6298  COMMA_SOURCE_FILE ("observable-property.ggs", 169)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i40_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i40_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      nt_explicit_5F_value_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                             GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  GGS_bool var_usedForSignature_1989 = GGS_bool (false) ;
  GGS_bool var_isWeak_2022 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_73 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2083 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2083.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_1989.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 53)) ;
            }
          }
          var_usedForSignature_1989 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2083.readProperty_string ().objectCompare (GGS_string ("weak"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_isWeak_2022.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 58)) ;
              }
            }
            var_isWeak_2022 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GenericArray <FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@weak")) ;
          inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 62)) ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_destinationEntityName_2640 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  GGS_lstring var_relationshipName_2695 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  GGS_toOneOppositeRelationship var_opposite_2748 ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_opposite_2748 = GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      GGS_lstring var_inverseRelationshipName_2870 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
      var_opposite_2748 = GGS_toOneOppositeRelationship::class_func_oppositeIsToOne (var_inverseRelationshipName_2870  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 75)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      GGS_lstring var_inverseRelationshipName_3037 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
      var_opposite_2748 = GGS_toOneOppositeRelationship::class_func_oppositeIsToMany (var_inverseRelationshipName_3037  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 79)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_toOneRelationshipAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_destinationEntityName_2640, var_relationshipName_2695, var_opposite_2748, var_usedForSignature_1989, var_isWeak_2022, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 83)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i41_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_73 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_ (GGS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 192)) ;
  GGS_lstring var_viewName_8942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 193)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 194)) ;
  GGS_bool var_hasVerticalScroller_8979 ;
  switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_8979 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 199)) ;
    var_hasVerticalScroller_8979 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_9131 ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
    var_configuratorName_9131 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 204)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 206)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
    var_configuratorName_9131 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
  } break ;
  default:
    break ;
  }
  GGS_stringset var_unusedSet_9298 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_9376 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_9298, var_functionCallList_9376, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 214)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_9442 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 215)) ;
  GGS_stringset var_stackViewInstances_9497 = temp_1 ;
  GGS_astViewInstructionList temp_2 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 216)) ;
  GGS_astViewInstructionList var_instructionList_9529 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), var_stackViewInstances_9497, var_astNewStackViewDeclarationList_9442, var_instructionList_9529, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 223)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_8942, GGS_astComputedVerticalViewDeclaration::init_21__21__21__21__21_ (var_hasVerticalScroller_8979, var_configuratorName_9131, var_functionCallList_9376, var_instructionList_9529, var_astNewStackViewDeclarationList_9442, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 224)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 192)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 193)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 194)) ;
  switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 199)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 206)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 223)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i42_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 192)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 193)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 194)) ;
  switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 199)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 206)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_ (GGS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 239)) ;
  GGS_lstring var_viewName_10223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 240)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 241)) ;
  GGS_stringset var_unusedSet_10254 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_10332 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_10254, var_functionCallList_10332, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 244)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 245)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_10398 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 246)) ;
  GGS_stringset var_stackViewInstances_10453 = temp_1 ;
  GGS_astViewInstructionList temp_2 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 247)) ;
  GGS_astViewInstructionList var_instructionList_10485 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), var_stackViewInstances_10453, var_astNewStackViewDeclarationList_10398, var_instructionList_10485, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 249)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_10223, GGS_astComputedHorizontalViewDeclaration::init_21__21__21_ (var_functionCallList_10332, var_instructionList_10485, var_astNewStackViewDeclarationList_10398, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 250)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 239)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 240)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 241)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 244)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 249)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i43_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 239)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 240)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 241)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 244)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 249)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                              GGS_astAutoLayoutViewFunctionCallList & outArgument_outFunctionCallList,
                                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  GGS_astAutoLayoutViewFunctionCallList temp_0 = GGS_astAutoLayoutViewFunctionCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 260)) ;
  outArgument_outFunctionCallList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
      GGS_lstring var_functionName_11184 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 263)) ;
      GGS_astAutoLayoutViewInstructionParameterList var_actualParameterList_11264 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_actualParameterList_11264, inCompiler) ;
      {
      outArgument_outFunctionCallList.setter_append (var_functionName_11184, var_actualParameterList_11264, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 265)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 263)) ;
      nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i44_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 263)) ;
      nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_ (const GGS_bool constinArgument_inHorizontal,
                                                                                                   GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                   GGS_astNewStackViewDeclarationList & ioArgument_ioNewStackViewDeclarationList,
                                                                                                   GGS_astViewInstructionList & ioArgument_ioInstructionList,
                                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 277)) ;
      GGS_lstring var_instancedStackViewName_11848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 278)) ;
      {
      ioArgument_ioStackViewInstances.setter_insert (var_instancedStackViewName_11848.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 279)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
      GGS_lstring var_typeStackViewName_11966 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 281)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
      {
      ioArgument_ioNewStackViewDeclarationList.setter_append (var_instancedStackViewName_11848, var_typeStackViewName_11966, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 284)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 286)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astSeparatorInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 287)) ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.ggs", 289)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astGutterInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 290)) ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 292)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astDividerInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 293)) ;
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 295)) ;
      GGS_lstring var_localViewName_12513 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 296)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = ioArgument_ioStackViewInstances.getter_hasKey (var_localViewName_12513.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 297)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 297)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_localViewName_12513.readProperty_location (), GGS_string ("the view is not instancied"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 298)) ;
        }
      }
      {
      ioArgument_ioInstructionList.setter_append (GGS_astLocalViewInstruction::init_21_ (var_localViewName_12513, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 300)) ;
      }
    } break ;
    case 7: {
      GGS_astAbstractViewInstructionDeclaration var_instruction_12807 ;
      nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_12807, inCompiler) ;
      {
      ioArgument_ioInstructionList.setter_append (var_instruction_12807, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 303)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 277)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 278)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 281)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 286)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.ggs", 289)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 292)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 295)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 296)) ;
    } break ;
    case 7: {
      nt_view_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i45_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 277)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 278)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 281)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 286)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.ggs", 289)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 292)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 295)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 296)) ;
    } break ;
    case 7: {
      nt_view_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i46_ (GGS_stringset & /* ioArgument_ioStackViewInstances */,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
  outArgument_outInstruction = GGS_astSpaceViewInstruction::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i46_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i46_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i47_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_astComputedViewInstruction var_instruction_13515 ;
  nt_computed_5F_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_13515, inCompiler) ;
  outArgument_outInstruction = var_instruction_13515 ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i47_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i47_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                       GGS_astComputedViewInstruction & outArgument_outInstruction,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_viewClassName_13847 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 327)) ;
  GGS_astAutoLayoutViewInstructionParameterList var_instanciationParameterList_13913 ;
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
    GGS_astAutoLayoutViewInstructionParameterList temp_0 = GGS_astAutoLayoutViewInstructionParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 330)) ;
    var_instanciationParameterList_13913 = temp_0 ;
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_instanciationParameterList_13913, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_14110 ;
  GGS_lstring var_outletName_14144 ;
  GGS_bool var_outletIsArray_14169 ;
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
    var_outletName_14144 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 338)) ;
    var_configuratorName_14110 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
    var_outletIsArray_14169 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 342)) ;
    switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
    case 1: {
      var_outletName_14144 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 344)) ;
      var_outletIsArray_14169 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 347)) ;
      var_outletName_14144 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
      var_outletIsArray_14169 = GGS_bool (false) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 351)) ;
      var_outletName_14144 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 352)) ;
      var_outletIsArray_14169 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_83 (inCompiler)) {
    case 1: {
      var_configuratorName_14110 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 356)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 358)) ;
      var_configuratorName_14110 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 361)) ;
  } break ;
  default:
    break ;
  }
  GGS_tableValueBinding var_tableValueBinding_14755 ;
  GGS_runActionDescriptor var_runActionDescriptor_14802 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_14857 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_14917 ;
  GGS_graphicController var_graphicController_14968 ;
  GGS_regularBindingList var_regularBindingList_15014 ;
  GGS_astAutoLayoutViewFunctionCallList var_autoLayoutViewFunctionCallList_15076 ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
    var_tableValueBinding_14755 = GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("auto-layout-view.ggs", 371)) ;
    var_runActionDescriptor_14802 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.ggs", 372)) ;
    var_enabledBindingDescriptor_14857 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 373)) ;
    var_hiddenBindingDescriptor_14917 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 374)) ;
    var_graphicController_14968 = GGS_graphicController::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 375)) ;
    GGS_regularBindingList temp_1 = GGS_regularBindingList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 376)) ;
    var_regularBindingList_15014 = temp_1 ;
    GGS_astAutoLayoutViewFunctionCallList temp_2 = GGS_astAutoLayoutViewFunctionCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 377)) ;
    var_autoLayoutViewFunctionCallList_15076 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_autoLayoutViewFunctionCallList_15076, inCompiler) ;
    nt_outlet_5F_binding_ (var_tableValueBinding_14755, var_runActionDescriptor_14802, var_enabledBindingDescriptor_14857, var_hiddenBindingDescriptor_14917, var_graphicController_14968, var_regularBindingList_15014, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_astComputedViewInstruction::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_viewClassName_13847, var_instanciationParameterList_13913, var_autoLayoutViewFunctionCallList_15076, var_tableValueBinding_14755, var_runActionDescriptor_14802, var_enabledBindingDescriptor_14857, var_hiddenBindingDescriptor_14917, var_graphicController_14968, var_regularBindingList_15014, var_configuratorName_14110, var_outletName_14144, var_outletIsArray_14169, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 327)) ;
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 342)) ;
    switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 347)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 351)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 352)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_83 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 358)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 361)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
    nt_outlet_5F_binding_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i48_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 327)) ;
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 342)) ;
    switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 347)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 351)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 352)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_83 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 358)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 361)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
    nt_outlet_5F_binding_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                           GGS_astAutoLayoutViewInstructionParameterList & outArgument_outParameterList,
                                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  GGS_astAutoLayoutViewInstructionParameterList temp_0 = GGS_astAutoLayoutViewInstructionParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 409)) ;
  outArgument_outParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 410)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_16553 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 414)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 415)) ;
      switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
      case 1: {
        GGS_astAbstractViewInstructionDeclaration var_instruction_16693 ;
        nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_16693, inCompiler) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.ggs", 418)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (var_instruction_16693  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 418)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 418)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
        GGS_lstring var_entityName_16867 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 421)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view.ggs", 422)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_entity (var_entityName_16867  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 422)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 422)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 424)) ;
        GGS_lstring var_menuItemTitle_17039 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 425)) ;
        GGS_runActionDescriptor var_runActionDescriptor_17089 ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
          var_runActionDescriptor_17089 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.ggs", 428)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 430)) ;
          GGS_lstring var_runTargetName_17226 ;
          switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
          case 1: {
            var_runTargetName_17226 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 433)), inCompiler COMMA_HERE) ;
          } break ;
          case 2: {
            var_runTargetName_17226 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 436)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_runActionName_17451 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 438)) ;
          var_runActionDescriptor_17089 = GGS_runActionDescriptor::class_func_action (var_runTargetName_17226, var_runActionName_17451  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 439)) ;
        } break ;
        default:
          break ;
        }
        GGS_multipleBindingDescriptor var_enabledBindingDescriptor_17610 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 441)) ;
        switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
        case 1: {
          var_enabledBindingDescriptor_17610 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 443)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 445)) ;
          GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_17848 ;
          nt_booleanMultipleBindingExpression_ (var_bindingExpression_17848, inCompiler) ;
          var_enabledBindingDescriptor_17610 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_17848  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 447)) ;
        } break ;
        default:
          break ;
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view.ggs", 451)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (var_menuItemTitle_17039.readProperty_string (), var_runActionDescriptor_17089, var_enabledBindingDescriptor_17610  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 452)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
        GGS_lstring var_viewName_18226 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 456)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = ioArgument_ioStackViewInstances.getter_hasKey (var_viewName_18226.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 457)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 457)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_viewName_18226.readProperty_location (), GGS_string ("view is not instancied"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 458)) ;
          }
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.ggs", 460)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_viewName_18226.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 460)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 460)) ;
        }
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 462)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 463)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 463)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 463)) ;
        }
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 465)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 466)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 466)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 466)) ;
        }
      } break ;
      case 7: {
        GGS_luint var_uint_33__32__18747 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 468)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 469)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_uint_33__32__18747.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 469))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 469)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 469)) ;
        }
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 471)) ;
        GGS_luint var_uint_33__32__18915 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 472)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 473)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("-").add_operation (var_uint_33__32__18915.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 473)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 473))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 473)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 473)) ;
        }
      } break ;
      case 9: {
        GGS_lstring var_literalString_19073 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 475)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view.ggs", 476)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_literalString_19073.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 476))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 476)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 476)) ;
        }
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 478)) ;
        GGS_lstring var_enumConstantName_19266 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 479)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_enumConstantName_19266  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 480)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string (".").add_operation (var_enumConstantName_19266.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 480))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 480)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 480)) ;
        }
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 482)) ;
        GGS_lstring var_enumTypeName_19472 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 483)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 484)) ;
        GGS_lstring var_enumFuncName_19529 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 485)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16553, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view.ggs", 488)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (var_enumTypeName_19472, var_enumFuncName_19529  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 489)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 486)) ;
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 493)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 496)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 410)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 414)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 415)) ;
      switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 421)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 424)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 425)) ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 430)) ;
          switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 436)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 438)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 445)) ;
          nt_booleanMultipleBindingExpression_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 456)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 462)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 465)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 468)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 471)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 472)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 475)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 478)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 479)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 482)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 483)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 484)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 485)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 493)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 496)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i49_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 410)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 414)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 415)) ;
      switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 421)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 424)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 425)) ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 430)) ;
          switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 436)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 438)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 445)) ;
          nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 456)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 462)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 465)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 468)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 471)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 472)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 475)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 478)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 479)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 482)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 483)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 484)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 485)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 493)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 496)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i50_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 503)) ;
  GGS_bool var_hasVerticalScroller_20077 ;
  switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_20077 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 508)) ;
    var_hasVerticalScroller_20077 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_20229 ;
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
    var_configuratorName_20229 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 513)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 515)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 516)) ;
    var_configuratorName_20229 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 517)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 518)) ;
  } break ;
  default:
    break ;
  }
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_20451 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_20451, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_20500 ;
  switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_20500 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 523)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 525)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_20688 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_20688, inCompiler) ;
    var_optionalHiddenBinding_20500 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_20688  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 527)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 529)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 530)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_20831 = temp_0 ;
  GGS_astViewInstructionList temp_1 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 531)) ;
  GGS_astViewInstructionList var_instructionList_20875 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_20831, var_instructionList_20875, inCompiler) ;
  outArgument_outInstruction = GGS_astVStackViewInstructionDeclaration::init_21__21__21__21__21__21_ (var_hasVerticalScroller_20077, var_configuratorName_20229, var_functionCallList_20451, var_instructionList_20875, var_optionalHiddenBinding_20500, var_astNewStackViewDeclarationList_20831, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 546)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i50_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 503)) ;
  switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 508)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 515)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 516)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 517)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 518)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 525)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 529)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 546)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i50_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 503)) ;
  switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.ggs", 508)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 515)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 516)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 517)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 518)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 525)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 529)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 546)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i51_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 553)) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_21645 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_21645, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_21694 ;
  switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_21694 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 557)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 559)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_21882 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_21882, inCompiler) ;
    var_optionalHiddenBinding_21694 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_21882  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 561)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 563)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 564)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_22025 = temp_0 ;
  GGS_astViewInstructionList temp_1 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 565)) ;
  GGS_astViewInstructionList var_instructionList_22069 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_22025, var_instructionList_22069, inCompiler) ;
  outArgument_outInstruction = GGS_astHStackViewInstructionDeclaration::init_21__21__21__21_ (var_functionCallList_21645, var_instructionList_22069, var_optionalHiddenBinding_21694, var_astNewStackViewDeclarationList_22025, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 578)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i51_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 553)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 559)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 563)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 578)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i51_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 553)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 559)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 563)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 578)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i52_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  GGS_lstring var_enumName_1507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  GGS_bool var_caseIterable_1531 ;
  switch (select_easyBindings_5F_syntax_95 (inCompiler)) {
  case 1: {
    var_caseIterable_1531 = GGS_bool (false) ;
  } break ;
  case 2: {
    GGS_lstring var_attribute_1614 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1614.readProperty_string ().objectCompare (GGS_string ("CaseIterable"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@CaseIterable")) ;
        inCompiler->emitSemanticError (var_attribute_1614.readProperty_location (), GGS_string ("only @CaseIterable attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("enumeration.ggs", 47)) ;
      }
    }
    var_caseIterable_1531 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 52)) ;
  GGS_lstringlist var_enumConstants_1857 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GGS_lstring var_constantName_1921 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    {
    var_enumConstants_1857.setter_append (var_constantName_1921, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 55)) ;
    }
    if (select_easyBindings_5F_syntax_96 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_enumerationDeclarationAST::init_21__21__21_ (var_enumName_1507, var_enumConstants_1857, var_caseIterable_1531, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 60)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i52_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  switch (select_easyBindings_5F_syntax_95 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    if (select_easyBindings_5F_syntax_96 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i52_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  switch (select_easyBindings_5F_syntax_95 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    if (select_easyBindings_5F_syntax_96 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  GGS_lstring var_enumName_2379 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  GGS_lstring var_funcName_2433 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  GGS__32_lstringlist temp_0 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 72)) ;
  GGS__32_lstringlist var_associationList_2473 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_97 (inCompiler) == 2) {
      GGS_lstring var_constantName_2549 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      GGS_lstring var_associatedString_2611 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
      {
      var_associationList_2473.setter_append (var_constantName_2549, var_associatedString_2611, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 79)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.setter_append (var_enumName_2379, var_funcName_2433, var_associationList_2473, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 82)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_97 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i53_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_97 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
}

