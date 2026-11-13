#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// @arrayControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerDeclarationAST::objectCompare (const GGS_arrayControllerDeclarationAST & inOperand) const {
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

GGS_arrayControllerDeclarationAST::GGS_arrayControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST::
init_21__21__21__21_ (const GGS_lstring & in_mClassName,
                      const GGS_lstring & in_mControllerName,
                      const GGS_arrayControllerBoundModelAST & in_mModel,
                      const GGS_lstring & in_mToManyPropertyName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayControllerDeclarationAST_init_21__21__21__21_ (in_mClassName, in_mControllerName, in_mModel, in_mToManyPropertyName, inCompiler) ;
  const GGS_arrayControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::
arrayControllerDeclarationAST_init_21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                    const GGS_lstring & in_mControllerName,
                                                    const GGS_arrayControllerBoundModelAST & in_mModel,
                                                    const GGS_lstring & in_mToManyPropertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST::GGS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mControllerName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerDeclarationAST::readProperty_mModel (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_arrayControllerBoundModelAST () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mModel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mModel (const GGS_arrayControllerBoundModelAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mModel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerDeclarationAST::setProperty_mToManyPropertyName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                        const GGS_lstring & in_mControllerName,
                                                                        const GGS_arrayControllerBoundModelAST & in_mModel,
                                                                        const GGS_lstring & in_mToManyPropertyName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

void cPtr_arrayControllerDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModel.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_arrayControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mModel, mProperty_mToManyPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModel.printNonNullClassInstanceProperties ("mModel") ;
    mProperty_mToManyPropertyName.printNonNullClassInstanceProperties ("mToManyPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayControllerDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (void) :
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

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (const GGS_selectionControllerForGeneration & inSource) :
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

GGS_selectionControllerForGeneration & GGS_selectionControllerForGeneration::operator = (const GGS_selectionControllerForGeneration & inSource) {
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

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                                                                                 const GGS_string & in_mSelectionControllerName,
                                                                                                                 const GGS_string & in_mBoundControllerName,
                                                                                                                 const GGS_string & in_mBoundControllerPropertyName,
                                                                                                                 const GGS_string & in_mBaseTypeName,
                                                                                                                 const GGS_string & in_mSelectionTypeName,
                                                                                                                 const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                                 const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration result ;
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

void GGS_selectionControllerForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (const GGS_string & inOperand0,
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

bool GGS_selectionControllerForGeneration::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::drop (void) {
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

void GGS_selectionControllerForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selectionControllerForGeneration:") ;
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
//     @selectionControllerForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedViewInstruction::objectCompare (const GGS_astComputedViewInstruction & inOperand) const {
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

GGS_astComputedViewInstruction::GGS_astComputedViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                      const GGS__5B_astAutoLayoutViewInstructionParameter_5D_ & in_mParameterList,
                                                      const GGS__5B_astAutoLayoutViewFunctionCall_5D_ & in_mFunctionCallList,
                                                      const GGS_tableValueBinding & in_mTableValueBinding,
                                                      const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                      const GGS_graphicController & in_mGraphicController,
                                                      const GGS__5B_regularBinding_5D_ & in_mRegularBindingList,
                                                      const GGS_lstring & in_mConfiguratorName,
                                                      const GGS_lstring & in_mOutletName,
                                                      const GGS_bool & in_mOutletIsArray,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_astComputedViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astComputedViewInstruction (inCompiler COMMA_THERE)) ;
  object->astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mTableValueBinding, in_mRunActionDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mGraphicController, in_mRegularBindingList, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GGS_astComputedViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::
astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                                                 const GGS__5B_astAutoLayoutViewInstructionParameter_5D_ & in_mParameterList,
                                                                                 const GGS__5B_astAutoLayoutViewFunctionCall_5D_ & in_mFunctionCallList,
                                                                                 const GGS_tableValueBinding & in_mTableValueBinding,
                                                                                 const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                                                 const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                 const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                 const GGS_graphicController & in_mGraphicController,
                                                                                 const GGS__5B_regularBinding_5D_ & in_mRegularBindingList,
                                                                                 const GGS_lstring & in_mConfiguratorName,
                                                                                 const GGS_lstring & in_mOutletName,
                                                                                 const GGS_bool & in_mOutletIsArray,
                                                                                 Compiler * /* inCompiler */) {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mTableValueBinding = in_mTableValueBinding ;
  mProperty_mRunActionDescriptor = in_mRunActionDescriptor ;
  mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  mProperty_mGraphicController = in_mGraphicController ;
  mProperty_mRegularBindingList = in_mRegularBindingList ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction::GGS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_astAutoLayoutViewInstructionParameter_5D_ GGS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_astAutoLayoutViewInstructionParameter_5D_ () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_astAutoLayoutViewFunctionCall_5D_ GGS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_astAutoLayoutViewFunctionCall_5D_ () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding GGS_astComputedViewInstruction::readProperty_mTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableValueBinding () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor GGS_astComputedViewInstruction::readProperty_mRunActionDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_runActionDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRunActionDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_astComputedViewInstruction::readProperty_mEnabledBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mEnabledBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_astComputedViewInstruction::readProperty_mHiddenBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mHiddenBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController GGS_astComputedViewInstruction::readProperty_mGraphicController (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphicController () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mGraphicController ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_regularBinding_5D_ GGS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_regularBinding_5D_ () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRegularBindingList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedViewInstruction::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astComputedViewInstruction::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mTableValueBinding (),
mProperty_mRunActionDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mGraphicController (),
mProperty_mRegularBindingList (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                                  const GGS__5B_astAutoLayoutViewInstructionParameter_5D_ & in_mParameterList,
                                                                  const GGS__5B_astAutoLayoutViewFunctionCall_5D_ & in_mFunctionCallList,
                                                                  const GGS_tableValueBinding & in_mTableValueBinding,
                                                                  const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GGS_graphicController & in_mGraphicController,
                                                                  const GGS__5B_regularBinding_5D_ & in_mRegularBindingList,
                                                                  const GGS_lstring & in_mConfiguratorName,
                                                                  const GGS_lstring & in_mOutletName,
                                                                  const GGS_bool & in_mOutletIsArray,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mTableValueBinding (),
mProperty_mRunActionDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mGraphicController (),
mProperty_mRegularBindingList (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mTableValueBinding = in_mTableValueBinding ;
  mProperty_mRunActionDescriptor = in_mRunActionDescriptor ;
  mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  mProperty_mGraphicController = in_mGraphicController ;
  mProperty_mRegularBindingList = in_mRegularBindingList ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

void cPtr_astComputedViewInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedViewInstruction:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRunActionDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_astComputedViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mTableValueBinding.printNonNullClassInstanceProperties ("mTableValueBinding") ;
    mProperty_mRunActionDescriptor.printNonNullClassInstanceProperties ("mRunActionDescriptor") ;
    mProperty_mEnabledBindingDescriptor.printNonNullClassInstanceProperties ("mEnabledBindingDescriptor") ;
    mProperty_mHiddenBindingDescriptor.printNonNullClassInstanceProperties ("mHiddenBindingDescriptor") ;
    mProperty_mGraphicController.printNonNullClassInstanceProperties ("mGraphicController") ;
    mProperty_mRegularBindingList.printNonNullClassInstanceProperties ("mRegularBindingList") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astComputedViewInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCall::GGS_autoLayoutViewInstructionGenerationFuncCall (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCall::GGS_autoLayoutViewInstructionGenerationFuncCall (const GGS_autoLayoutViewInstructionGenerationFuncCall & inSource) :
mProperty_mFunctionName (inSource.mProperty_mFunctionName),
mProperty_mParameters (inSource.mProperty_mParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCall & GGS_autoLayoutViewInstructionGenerationFuncCall::operator = (const GGS_autoLayoutViewInstructionGenerationFuncCall & inSource) {
  mProperty_mFunctionName = inSource.mProperty_mFunctionName ;
  mProperty_mParameters = inSource.mProperty_mParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCall GGS_autoLayoutViewInstructionGenerationFuncCall::init_21__21_ (const GGS_string & in_mFunctionName,
                                                                                                               const GGS__5B_autoLayoutViewInstructionGenerationParameter_5D_ & in_mParameters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCall result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCall::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCall::GGS_autoLayoutViewInstructionGenerationFuncCall (const GGS_string & inOperand0,
                                                                                                  const GGS__5B_autoLayoutViewInstructionGenerationParameter_5D_ & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationFuncCall::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCall::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCall::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationFuncCall:") ;
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
//     @autoLayoutViewInstructionGenerationFuncCall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCall ("autoLayoutViewInstructionGenerationFuncCall",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationFuncCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCall ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGeneration::GGS_autoLayoutRegularBindingsGeneration (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGeneration::GGS_autoLayoutRegularBindingsGeneration (const GGS_autoLayoutRegularBindingsGeneration & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectList (inSource.mProperty_mBoundObjectList),
mProperty_mBindingOptionsString (inSource.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGeneration & GGS_autoLayoutRegularBindingsGeneration::operator = (const GGS_autoLayoutRegularBindingsGeneration & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectList = inSource.mProperty_mBoundObjectList ;
  mProperty_mBindingOptionsString = inSource.mProperty_mBindingOptionsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGeneration GGS_autoLayoutRegularBindingsGeneration::init_21__21__21_ (const GGS_string & in_mBindingName,
                                                                                                   const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                   const GGS_string & in_mBindingOptionsString,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGeneration::GGS_autoLayoutRegularBindingsGeneration (const GGS_string & inOperand0,
                                                                                  const GGS_boundObjectList & inOperand1,
                                                                                  const GGS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutRegularBindingsGeneration::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGeneration::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutRegularBindingsGeneration:") ;
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
//     @autoLayoutRegularBindingsGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGeneration ("autoLayoutRegularBindingsGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutRegularBindingsGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedHorizontalViewGeneration::objectCompare (const GGS_computedHorizontalViewGeneration & inOperand) const {
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

GGS_computedHorizontalViewGeneration::GGS_computedHorizontalViewGeneration (void) :
GGS_abstractViewGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration::
init_21__21__21_ (const GGS__5B_autoLayoutViewInstructionGenerationFuncCall_5D_ & in_mFuncCallList,
                  const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                  const GGS__5B_astNewStackViewDeclaration_5D_ & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_computedHorizontalViewGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedHorizontalViewGeneration (inCompiler COMMA_THERE)) ;
  object->computedHorizontalViewGeneration_init_21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_computedHorizontalViewGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedHorizontalViewGeneration::
computedHorizontalViewGeneration_init_21__21__21_ (const GGS__5B_autoLayoutViewInstructionGenerationFuncCall_5D_ & in_mFuncCallList,
                                                   const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                   const GGS__5B_astNewStackViewDeclaration_5D_ & in_mNewStackViewDeclarationList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration::GGS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GGS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewInstructionGenerationFuncCall_5D_ GGS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_autoLayoutViewInstructionGenerationFuncCall_5D_ () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_computedHorizontalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_astNewStackViewDeclaration_5D_ GGS_computedHorizontalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_astNewStackViewDeclaration_5D_ () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GGS__5B_autoLayoutViewInstructionGenerationFuncCall_5D_ & in_mFuncCallList,
                                                                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                              const GGS__5B_astNewStackViewDeclaration_5D_ & in_mNewStackViewDeclarationList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

void cPtr_computedHorizontalViewGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@computedHorizontalViewGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_computedHorizontalViewGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedHorizontalViewGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computedHorizontalViewGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                                                     & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @transientPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientPropertyGeneration::objectCompare (const GGS_transientPropertyGeneration & inOperand) const {
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

GGS_transientPropertyGeneration::GGS_transientPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_string & in_mClassName,
                          const GGS_typeKind & in_mType,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          const GGS_bool & in_mGenerate,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_transientPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_transientPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->transientPropertyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate, inCompiler) ;
  const GGS_transientPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientPropertyGeneration::
transientPropertyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
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

GGS_transientPropertyGeneration::GGS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_transientPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGeneration::setProperty_mGenerate (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientPropertyGeneration * p = (cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GGS_string & in_mPropertyName,
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

const GALGAS_TypeDescriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@transientPropertyGeneration:") ;
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

AbstractPtrClass * cPtr_transientPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (void) :
mProperty_mFileGenerationList (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedXibDocumentSwift (),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (),
mProperty_mNeededOutletClasses (),
mProperty_mMainXibDescriptorList (),
mProperty_mToOneClassImplementations (),
mProperty_mToManyClassImplementations (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList (),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_generationStruct & inSource) :
mProperty_mFileGenerationList (inSource.mProperty_mFileGenerationList),
mProperty_mEntityListForGeneration (inSource.mProperty_mEntityListForGeneration),
mProperty_mGenerateEBManagedXibDocumentSwift (inSource.mProperty_mGenerateEBManagedXibDocumentSwift),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift),
mProperty_mNeededOutletClasses (inSource.mProperty_mNeededOutletClasses),
mProperty_mMainXibDescriptorList (inSource.mProperty_mMainXibDescriptorList),
mProperty_mToOneClassImplementations (inSource.mProperty_mToOneClassImplementations),
mProperty_mToManyClassImplementations (inSource.mProperty_mToManyClassImplementations),
mProperty_mSelectionControllerListForGeneration (inSource.mProperty_mSelectionControllerListForGeneration),
mProperty_mPropertyClassList (inSource.mProperty_mPropertyClassList),
mProperty_mTransientPropertyTypeList (inSource.mProperty_mTransientPropertyTypeList),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct & GGS_generationStruct::operator = (const GGS_generationStruct & inSource) {
  mProperty_mFileGenerationList = inSource.mProperty_mFileGenerationList ;
  mProperty_mEntityListForGeneration = inSource.mProperty_mEntityListForGeneration ;
  mProperty_mGenerateEBManagedXibDocumentSwift = inSource.mProperty_mGenerateEBManagedXibDocumentSwift ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  mProperty_mNeededOutletClasses = inSource.mProperty_mNeededOutletClasses ;
  mProperty_mMainXibDescriptorList = inSource.mProperty_mMainXibDescriptorList ;
  mProperty_mToOneClassImplementations = inSource.mProperty_mToOneClassImplementations ;
  mProperty_mToManyClassImplementations = inSource.mProperty_mToManyClassImplementations ;
  mProperty_mSelectionControllerListForGeneration = inSource.mProperty_mSelectionControllerListForGeneration ;
  mProperty_mPropertyClassList = inSource.mProperty_mPropertyClassList ;
  mProperty_mTransientPropertyTypeList = inSource.mProperty_mTransientPropertyTypeList ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::setInitializedProperties (Compiler * inCompiler) {
GGS_fileGenerationList temp_0 = GGS_fileGenerationList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 38)) ;
  mProperty_mFileGenerationList = temp_0 ;
GGS_entityListForGeneratingEBManagedObjectContext temp_1 = GGS_entityListForGeneratingEBManagedObjectContext::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 39)) ;
  mProperty_mEntityListForGeneration = temp_1 ;
  mProperty_mGenerateEBManagedXibDocumentSwift = GGS_bool (false) ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (false) ;
GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 42)) ;
  mProperty_mNeededOutletClasses = temp_2 ;
GGS__5B_mainXibDescriptor_5D_ temp_3 = GGS__5B_mainXibDescriptor_5D_::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 43)) ;
  mProperty_mMainXibDescriptorList = temp_3 ;
GGS_stringset temp_4 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 45)) ;
  mProperty_mToOneClassImplementations = temp_4 ;
GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 46)) ;
  mProperty_mToManyClassImplementations = temp_5 ;
GGS__5B_selectionControllerForGeneration_5D_ temp_6 = GGS__5B_selectionControllerForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 48)) ;
  mProperty_mSelectionControllerListForGeneration = temp_6 ;
GGS__5B_string_5D_ temp_7 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 49)) ;
  mProperty_mPropertyClassList = temp_7 ;
GGS_transientExternTypeList temp_8 = GGS_transientExternTypeList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 50)) ;
  mProperty_mTransientPropertyTypeList = temp_8 ;
GGS_stringset temp_9 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 52)) ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = temp_9 ;
GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 53)) ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = temp_10 ;
GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 54)) ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = temp_11 ;
GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 55)) ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = temp_12 ;
GGS_stringset temp_13 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.galgas4", 56)) ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = temp_13 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_fileGenerationList & inOperand0,
                                            const GGS_entityListForGeneratingEBManagedObjectContext & inOperand1,
                                            const GGS_bool & inOperand2,
                                            const GGS_bool & inOperand3,
                                            const GGS_stringset & inOperand4,
                                            const GGS__5B_mainXibDescriptor_5D_ & inOperand5,
                                            const GGS_stringset & inOperand6,
                                            const GGS_stringset & inOperand7,
                                            const GGS__5B_selectionControllerForGeneration_5D_ & inOperand8,
                                            const GGS__5B_string_5D_ & inOperand9,
                                            const GGS_transientExternTypeList & inOperand10,
                                            const GGS_stringset & inOperand11,
                                            const GGS_stringset & inOperand12,
                                            const GGS_stringset & inOperand13,
                                            const GGS_stringset & inOperand14,
                                            const GGS_stringset & inOperand15) :
mProperty_mFileGenerationList (inOperand0),
mProperty_mEntityListForGeneration (inOperand1),
mProperty_mGenerateEBManagedXibDocumentSwift (inOperand2),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inOperand3),
mProperty_mNeededOutletClasses (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5),
mProperty_mToOneClassImplementations (inOperand6),
mProperty_mToManyClassImplementations (inOperand7),
mProperty_mSelectionControllerListForGeneration (inOperand8),
mProperty_mPropertyClassList (inOperand9),
mProperty_mTransientPropertyTypeList (inOperand10),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inOperand11),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inOperand12),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inOperand13),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inOperand14),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inOperand15) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationStruct::isValid (void) const {
  return mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StoredArrayOf_5F_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::drop (void) {
  mProperty_mFileGenerationList.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedXibDocumentSwift.drop () ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mToOneClassImplementations.drop () ;
  mProperty_mToManyClassImplementations.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedXibDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToOneClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToManyClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_StoredArrayOf_5F_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generationStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
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
    const GGS_propertyKind_2E_property var_prop_4695 = temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.galgas4", 122)).unwrappedValue () ;
    if (!temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.galgas4", 122)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_prop_4695.readProperty_accessibility ().getter_isTransient (SOURCE_FILE ("semantic-analysis.galgas4", 123)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_bool var_ab_4833 ;
          var_prop_4695.readProperty_accessibility ().method_extractTransient (var_ab_4833, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas4", 124)) ;
          result_result = var_ab_4833 ;
        }
      }
    }
  }
//---
  return result_result ;
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
//
//Extension proc '@XcodeProjectDescriptor addICNS_file'
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
  ioObject.mProperty_mICNS_5F_fileList.plusPlusAssignOperation (GGS__32_string::init_21__21_ (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 7)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1441 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 33)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 33)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1441, temp_3, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 34)) ;
  }
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1441, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 35)) ;
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
      ioArgument_ioGraph.setter_addEdge (var_node_1441, GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)) ;
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
        ioArgument_ioGraph.setter_addEdge (var_node_1441, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)).add_operation (temp_13.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)), temp_14.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutTableViewControllerDeclarationAST nodeKey'
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
//Overriding extension proc '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5183 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_5347 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_5347.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 147)) ;
  }
  {
  var_controllerActions_5347.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 148)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_rootProperties_5574 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      GGS_classKind joker_5565 ; // Joker input parameter
      GGS_actionMap joker_5590_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5590_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mRootEntityName (), joker_5565, var_rootProperties_5574, joker_5590_2, joker_5590_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 150)) ;
      GGS_propertyKind var_classKind_5658 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
      GGS_actionMap joker_5669_2 ; // Joker input parameter
      GGS_bool joker_5669_1 ; // Joker input parameter
      var_rootProperties_5574.method_searchKey (temp_4.readProperty_mToManyPropertyName (), var_classKind_5658, joker_5669_2, joker_5669_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 151)) ;
      switch (var_classKind_5658.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5719__0 ;
          GGS_propertyAccessibility extractedValue_5719__1 ;
          var_classKind_5658.getAssociatedValuesFor_property (extractedValue_5719__0, extractedValue_5719__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 154)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5823_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5833__1 ;
          GGS_bool extractedValue_5836_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5845__3 ;
          var_classKind_5658.getAssociatedValuesFor_toMany (extractedValue_5823_typeName_0, extractedValue_5833__1, extractedValue_5836_graphic_2, extractedValue_5845__3) ;
          GGS_propertyKind var_kind_5862 = GGS_propertyKind::class_func_arrayController (extractedValue_5823_typeName_0, extractedValue_5836_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 156)) ;
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
          var_entry_5183.mProperty_mPropertyMap.setter_insertKey (temp_7.readProperty_mControllerName (), var_kind_5862, var_controllerActions_5347, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 160)) ;
          }
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
          var_entry_5183.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_8.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_9.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 165)), temp_10.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 162)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6349__0 ;
          GGS_propertyAccessibility extractedValue_6349__1 ;
          GGS_bool extractedValue_6349__2 ;
          GGS_toOneOppositeRelationship extractedValue_6349__3 ;
          GGS_bool extractedValue_6349__4 ;
          var_classKind_5658.getAssociatedValuesFor_toOne (extractedValue_6349__0, extractedValue_6349__1, extractedValue_6349__2, extractedValue_6349__3, extractedValue_6349__4) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 170)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6463__0 ;
          GGS_bool extractedValue_6463__1 ;
          var_classKind_5658.getAssociatedValuesFor_arrayController (extractedValue_6463__0, extractedValue_6463__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 172)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6580__0 ;
          var_classKind_5658.getAssociatedValuesFor_selectionController (extractedValue_6580__0) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 174)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_propertyKind var_classKind_6751 ;
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
    GGS_actionMap joker_6762_2 ; // Joker input parameter
    GGS_bool joker_6762_1 ; // Joker input parameter
    var_entry_5183.readProperty_mPropertyMap ().method_searchKey (temp_17.readProperty_mToManyPropertyName (), var_classKind_6751, joker_6762_2, joker_6762_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 177)) ;
    switch (var_classKind_6751.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_6812__0 ;
        GGS_propertyAccessibility extractedValue_6812__1 ;
        var_classKind_6751.getAssociatedValuesFor_property (extractedValue_6812__0, extractedValue_6812__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 180)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_6916_typeName_0 ;
        GGS_propertyAccessibility extractedValue_6926__1 ;
        GGS_bool extractedValue_6929_graphic_2 ;
        GGS_toManyRelationshipOptionAST extractedValue_6938__3 ;
        var_classKind_6751.getAssociatedValuesFor_toMany (extractedValue_6916_typeName_0, extractedValue_6926__1, extractedValue_6929_graphic_2, extractedValue_6938__3) ;
        GGS_propertyKind var_kind_6955 = GGS_propertyKind::class_func_arrayController (extractedValue_6916_typeName_0, extractedValue_6929_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 182)) ;
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_20 = this ;
        var_entry_5183.mProperty_mPropertyMap.setter_insertKey (temp_20.readProperty_mControllerName (), var_kind_6955, var_controllerActions_5347, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 186)) ;
        }
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
        var_entry_5183.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_21.readProperty_mControllerName ().readProperty_string (), temp_22.readProperty_mToManyPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 188)) ;
        }
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_7409__0 ;
        GGS_propertyAccessibility extractedValue_7409__1 ;
        GGS_bool extractedValue_7409__2 ;
        GGS_toOneOppositeRelationship extractedValue_7409__3 ;
        GGS_bool extractedValue_7409__4 ;
        var_classKind_6751.getAssociatedValuesFor_toOne (extractedValue_7409__0, extractedValue_7409__1, extractedValue_7409__2, extractedValue_7409__3, extractedValue_7409__4) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 195)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_7523__0 ;
        GGS_bool extractedValue_7523__1 ;
        var_classKind_6751.getAssociatedValuesFor_arrayController (extractedValue_7523__0, extractedValue_7523__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 197)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_7640__0 ;
        var_classKind_6751.getAssociatedValuesFor_selectionController (extractedValue_7640__0) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray29  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 199)) ;
      }
      break ;
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5183, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 202)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & ioArgument_ioGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_8298 ;
  GGS_classKind joker_8285 ; // Joker input parameter
  GGS_actionMap joker_8326_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8326_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 215)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 215)), inCompiler COMMA_HERE), joker_8285, var_preferencesPropertyMap_8298, joker_8326_2, joker_8326_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 214)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  GGS_stringset var_attributes_8436 = temp_0 ;
  GGS__5B_typeKind_5D_ temp_1 = GGS__5B_typeKind_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222)) ;
  temp_1.plusPlusAssignOperation (GGS_typeKind::class_func_boolType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222)) ;
  GGS__5B_typeKind_5D_ var_allowedTypes_8518 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 223)) ;
  GGS_stringset var_definedAttributes_8574 = temp_2 ;
  GGS__5B__32_string_5D_ temp_3 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 224)) ;
  GGS__5B__32_string_5D_ var_attributeListForGeneration_8614 = temp_3 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  UpEnumerator__5B_autoLayoutTableViewControllerAttributeAST_5D_ enumerator_8664 (temp_4.readProperty_mTableViewControllerAttributListAST ()) ;
  while (enumerator_8664.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_attributes_8436.getter_contains (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 226)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_location (), GGS_string ("unknown attribute"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 227)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_definedAttributes_8574.getter_contains (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_location (), GGS_string ("attribute multiply defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 229)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        {
        var_definedAttributes_8574.setter_insert (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 231)) ;
        }
      }
    }
    GGS_string var_valueAsString_9126 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8664.current (HERE).readProperty_mAttributeValue ().ptr (), var_allowedTypes_8518, var_preferencesPropertyMap_8298, var_valueAsString_9126, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 233)) ;
    var_attributeListForGeneration_8614.plusPlusAssignOperation (GGS__32_string::init_21__21_ (enumerator_8664.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_valueAsString_9126, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 234)) ;
    enumerator_8664.gotoNextObject () ;
  }
  UpEnumerator_stringset enumerator_9237 (var_attributes_8436) ;
  while (enumerator_9237.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_definedAttributes_8574.getter_contains (enumerator_9237.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 237)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mControllerName ().readProperty_location (), GGS_string ("attribute '").add_operation (enumerator_9237.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)).add_operation (GGS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)) ;
      }
    }
    enumerator_9237.gotoNextObject () ;
  }
  GGS_propertyMap var_boundModelPropertyMap_9412 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
      GGS_classKind joker_9536 ; // Joker input parameter
      GGS_actionMap joker_9578_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_9578_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_14.readProperty_mRootEntityName (), joker_9536, var_boundModelPropertyMap_9412, joker_9578_2, joker_9578_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 244)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
    GGS_classKind joker_9670 ; // Joker input parameter
    GGS_actionMap joker_9712_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9712_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_15.readProperty_mClassName (), joker_9670, var_boundModelPropertyMap_9412, joker_9712_2, joker_9712_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 251)) ;
  }
  GGS_propertyKind var_boundModelClassKind_9819 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
  GGS_actionMap joker_9845_2 ; // Joker input parameter
  GGS_bool joker_9845_1 ; // Joker input parameter
  var_boundModelPropertyMap_9412.method_searchKey (temp_16.readProperty_mToManyPropertyName (), var_boundModelClassKind_9819, joker_9845_2, joker_9845_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 258)) ;
  GGS_propertyMap var_propertyMap_9959 ;
  GGS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_10017 ;
  GGS_bool var_graphic_10054 ;
  GGS_string var_elementTypeName_10076 ;
  switch (var_boundModelClassKind_9819.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_10139__0 ;
      GGS_propertyAccessibility extractedValue_10139__1 ;
      var_boundModelClassKind_9819.getAssociatedValuesFor_property (extractedValue_10139__0, extractedValue_10139__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 270)) ;
      var_graphic_10054.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10017.drop () ; // Release error dropped variable
      var_propertyMap_9959.drop () ; // Release error dropped variable
      var_elementTypeName_10076.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_10317_typeName_0 ;
      GGS_propertyAccessibility extractedValue_10327_accessibility_1 ;
      GGS_bool extractedValue_10342_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_10353__3 ;
      var_boundModelClassKind_9819.getAssociatedValuesFor_toMany (extractedValue_10317_typeName_0, extractedValue_10327_accessibility_1, extractedValue_10342_isGraphic_2, extractedValue_10353__3) ;
      var_elementTypeName_10076 = extractedValue_10317_typeName_0.readProperty_string () ;
      var_graphic_10054 = extractedValue_10342_isGraphic_2 ;
      GGS_autoLayoutTableViewControllerModelKind temp_19 ;
      const GalgasBool test_20 = extractedValue_10327_accessibility_1.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 276)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 277)) ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 278)) ;
      }
      var_arrayControllerModelKind_10017 = temp_19 ;
      GGS_classKind joker_10585 ; // Joker input parameter
      GGS_actionMap joker_10603 ; // Joker input parameter
      GGS_propertyGenerationList joker_10607 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10317_typeName_0, joker_10585, var_propertyMap_9959, joker_10603, joker_10607, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 280)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_10626__0 ;
      GGS_propertyAccessibility extractedValue_10626__1 ;
      GGS_bool extractedValue_10626__2 ;
      GGS_toOneOppositeRelationship extractedValue_10626__3 ;
      GGS_bool extractedValue_10626__4 ;
      var_boundModelClassKind_9819.getAssociatedValuesFor_toOne (extractedValue_10626__0, extractedValue_10626__1, extractedValue_10626__2, extractedValue_10626__3, extractedValue_10626__4) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 282)) ;
      var_graphic_10054.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10017.drop () ; // Release error dropped variable
      var_propertyMap_9959.drop () ; // Release error dropped variable
      var_elementTypeName_10076.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_10814__0 ;
      GGS_bool extractedValue_10814__1 ;
      var_boundModelClassKind_9819.getAssociatedValuesFor_arrayController (extractedValue_10814__0, extractedValue_10814__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 286)) ;
      var_graphic_10054.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10017.drop () ; // Release error dropped variable
      var_propertyMap_9959.drop () ; // Release error dropped variable
      var_elementTypeName_10076.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_11005__0 ;
      var_boundModelClassKind_9819.getAssociatedValuesFor_selectionController (extractedValue_11005__0) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
      GenericArray <FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 290)) ;
      var_graphic_10054.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_10017.drop () ; // Release error dropped variable
      var_propertyMap_9959.drop () ; // Release error dropped variable
      var_elementTypeName_10076.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ temp_27 = GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 294)) ;
  GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ var_arrayControllerBoundColumnListForGeneration_11237 = temp_27 ;
  GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ temp_28 = GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 295)) ;
  GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ var_arrayControllerSortedColumnListForGeneration_11350 = temp_28 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
  UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ enumerator_11421 (temp_29.readProperty_mTableViewControllerBoundColumnListAST ()) ;
  while (enumerator_11421.hasCurrentObject ()) {
    GGS__5B_autoLayoutClassParameter_5D_ temp_30 = GGS__5B_autoLayoutClassParameter_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 298)) ;
    GGS__5B_autoLayoutClassParameter_5D_ var_formalArgumentList_11521 = temp_30 ;
    var_formalArgumentList_11521.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (GGS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)), GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)) ;
    var_formalArgumentList_11521.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (GGS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)) ;
    var_formalArgumentList_11521.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (GGS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)) ;
    var_formalArgumentList_11521.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (GGS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)) ;
    var_formalArgumentList_11521.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (GGS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)) ;
    GGS__5B__32_string_5D_ temp_31 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 304)) ;
    GGS__5B__32_string_5D_ var_actualParameterList_11949 = temp_31 ;
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::notEqual, var_formalArgumentList_11521.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 305)).objectCompare (enumerator_11421.current (HERE).readProperty_mColumnParameterListAST ().getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 305)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        GenericArray <FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_11421.current (HERE).readProperty_mPropertyName ().readProperty_location (), enumerator_11421.current (HERE).readProperty_mColumnParameterListAST ().getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (GGS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (var_formalArgumentList_11521.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (GGS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)), fixItArray33  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)) ;
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      UpEnumerator__5B_autoLayoutClassParameter_5D_ enumerator_12223 (var_formalArgumentList_11521) ;
      UpEnumerator__5B_astAutoLayoutViewInstructionParameter_5D_ enumerator_12260 (enumerator_11421.current (HERE).readProperty_mColumnParameterListAST ()) ;
      while (enumerator_12223.hasCurrentObject () && enumerator_12260.hasCurrentObject ()) {
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_12223.current (HERE).readProperty_mParameterName ().readProperty_string ().objectCompare (enumerator_12260.current (HERE).readProperty_mParameterName ().readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (enumerator_12260.current (HERE).readProperty_mParameterName ().readProperty_location (), GGS_string ("required argument name: ").add_operation (enumerator_12223.current (HERE).readProperty_mParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 310)), fixItArray35  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 310)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_12484 = enumerator_12223.current (HERE).readProperty_mParameterType ().getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).unwrappedValue () ;
          if (!enumerator_12223.current (HERE).readProperty_mParameterType ().getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).isValuated ()) {
            test_36 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_36) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_12540 = enumerator_12260.current (HERE).readProperty_mParameterType ().getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).unwrappedValue () ;
            if (!enumerator_12260.current (HERE).readProperty_mParameterType ().getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).isValuated ()) {
              test_36 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_36) {
              GGS_classKind var_typeKind_12671 ;
              GGS_propertyMap joker_12681_3 ; // Joker input parameter
              GGS_actionMap joker_12681_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_12681_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_formalTypeEnum_12484.readProperty_name (), var_typeKind_12671, joker_12681_3, joker_12681_2, joker_12681_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 313)) ;
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_12703 = var_typeKind_12671.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).unwrappedValue () ;
                if (!var_typeKind_12671.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).isValuated ()) {
                  test_37 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_37) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_12744 = var_atomicTypeKind_12703.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).unwrappedValue () ;
                  if (!var_atomicTypeKind_12703.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).isValuated ()) {
                    test_37 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_37) {
                    GGS_uint joker_12869 ; // Joker input parameter
                    var_atomicEnumType_12744.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_12540.readProperty_name (), joker_12869, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 315)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_12484.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray38  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 317)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_36) {
          GalgasBool test_39 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_39) {
            test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_12260.current (HERE).readProperty_mParameterType ().objectCompare (enumerator_12223.current (HERE).readProperty_mParameterType ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_39) {
              GenericArray <FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_12260.current (HERE).readProperty_mParameterName ().readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_12223.current (HERE).readProperty_mParameterType (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)).add_operation (extensionGetter_string (enumerator_12260.current (HERE).readProperty_mParameterType (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), fixItArray40  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)) ;
            }
          }
        }
        GalgasBool test_41 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_41) {
          const GGS_astAutoLayoutViewInstructionParameterValue_2E_string var_actualString_13219 = enumerator_12260.current (HERE).readProperty_mParameter ().getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 322)).unwrappedValue () ;
          if (!enumerator_12260.current (HERE).readProperty_mParameter ().getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 322)).isValuated ()) {
            test_41 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_41) {
            var_actualParameterList_11949.plusPlusAssignOperation (GGS__32_string::init_21__21_ (enumerator_12223.current (HERE).readProperty_mParameterName ().readProperty_string (), var_actualString_13219.readProperty_value (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 323)) ;
          }
        }
        if (GalgasBool::boolFalse == test_41) {
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_12260.current (HERE).readProperty_mParameterName ().readProperty_location (), GGS_string ("parameter value is not string convertible"), fixItArray42  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 325)) ;
        }
        enumerator_12223.gotoNextObject () ;
        enumerator_12260.gotoNextObject () ;
      }
    }
    GalgasBool test_43 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_43) {
      test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_11421.current (HERE).readProperty_mSortPropertyName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_43) {
        GGS_propertyKind var_sortPropertyKind_13625 ;
        GGS_actionMap joker_13651_2 ; // Joker input parameter
        GGS_bool joker_13651_1 ; // Joker input parameter
        var_propertyMap_9959.method_searchKey (enumerator_11421.current (HERE).readProperty_mSortPropertyName (), var_sortPropertyKind_13625, joker_13651_2, joker_13651_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 331)) ;
        GalgasBool test_44 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_44) {
          test_44 = extensionGetter_isComparable (var_sortPropertyKind_13625, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 336)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 336)).boolEnum () ;
          if (GalgasBool::boolTrue == test_44) {
            GenericArray <FixItDescription> fixItArray45 ;
            inCompiler->emitSemanticError (enumerator_11421.current (HERE).readProperty_mSortPropertyName ().readProperty_location (), GGS_string ("this property is not comparable"), fixItArray45  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 337)) ;
          }
        }
        var_arrayControllerSortedColumnListForGeneration_11350.plusPlusAssignOperation (GGS_autoLayoutTableViewControllerSortedColumnForGeneration::init_21__21__21_ (enumerator_11421.current (HERE).readProperty_mPropertyName ().readProperty_string (), var_sortPropertyKind_13625, enumerator_11421.current (HERE).readProperty_mSortPropertyName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 339)) ;
      }
    }
    GGS_propertyKind var_propertyKind_14072 ;
    GGS_actionMap joker_14092_2 ; // Joker input parameter
    GGS_bool joker_14092_1 ; // Joker input parameter
    var_propertyMap_9959.method_searchKey (enumerator_11421.current (HERE).readProperty_mPropertyName (), var_propertyKind_14072, joker_14092_2, joker_14092_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 346)) ;
    var_arrayControllerBoundColumnListForGeneration_11237.plusPlusAssignOperation (GGS_autoLayoutTableViewControllerBoundColumnForGeneration::init_21__21__21__21__21__21_ (enumerator_11421.current (HERE).readProperty_mEditable (), enumerator_11421.current (HERE).readProperty_mSortPropertyName ().readProperty_string (), enumerator_11421.current (HERE).readProperty_mPropertyName ().readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_14072, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 355)), GGS_string::makeEmptyString (), var_actualParameterList_11949, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 351)) ;
    enumerator_11421.gotoNextObject () ;
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
  GGS_string var_modelString_14685 = temp_47 ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_51 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_52 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutTableViewControllerGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_51.readProperty_mClassName ().readProperty_string (), temp_52.readProperty_mControllerName (), var_modelString_14685, var_arrayControllerBoundColumnListForGeneration_11237, var_arrayControllerSortedColumnListForGeneration_11350, GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_10076, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 376)), var_arrayControllerModelKind_10017, var_elementTypeName_10076, var_graphic_10054, var_attributeListForGeneration_8614, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 370)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_10076, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 383)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.setter_insert (var_elementTypeName_10076, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 384)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutTableViewControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_bool /* constinArgument__5F_inGenerationDirectAccess */,
                                                                                                 const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
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
//Overriding extension func '@autoLayoutTableViewControllerPropertyGeneration configurationCode'
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
  GGS_string var_prefix_17077 = temp_0 ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 421)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 421)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_17077, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (GGS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (var_prefix_17077, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutTableViewControllerPropertyGeneration initCode'
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
                                                                                                                            const GGS__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ & in_BOUND_5F_COLUMNS,
                                                                                                                            const GGS__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ & in_SORTED_5F_COLUMNS,
                                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                            const GGS__5B__32_string_5D_ & in_ATTRIBUTE_5F_VALUES
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
  GGS_uint index_942_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_942 (in_ATTRIBUTE_5F_VALUES) ;
    while (enumerator_942.hasCurrentObject ()) {
      result.appendString ("  private let ") ;
      result.appendString (enumerator_942.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_942.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_942.gotoNextObject () ;
      index_942_.increment () ;
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
  GGS_uint index_3032_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3032 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3032.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3032.current_key (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: observer)\n") ;
      enumerator_3032.gotoNextObject () ;
      index_3032_.increment () ;
    }
  }
  result.appendString ("      },\n      removeSortObserversCallback: {(observer) in\n") ;
  GGS_uint index_3216_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3216 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3216.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3216.current_key (HERE).stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by: observer)\n") ;
      enumerator_3216.gotoNextObject () ;
      index_3216_.increment () ;
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
  GGS_uint index_6328_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ enumerator_6328 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_6328.hasCurrentObject ()) {
      result.appendString ("  //--- Observe '") ;
      result.appendString (enumerator_6328.current_entry (HERE).readProperty_mDisplayedPropertyName ().stringValue ()) ;
      result.appendString ("' column\n    self.sortedArray_property.toMany_") ;
      result.appendString (enumerator_6328.current_entry (HERE).readProperty_mDisplayedPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_6328.current_entry (HERE).readProperty_mSortPropertyName ().objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_6328.current_entry (HERE).readProperty_mSortPropertyName ().objectCompare (enumerator_6328.current_entry (HERE).readProperty_mDisplayedPropertyName ())) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("     self.sortedArray_property.toMany_") ;
        result.appendString (enumerator_6328.current_entry (HERE).readProperty_mSortPropertyName ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6328.gotoNextObject () ;
      index_6328_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    bind_tableView\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n") ;
  GGS_uint index_7872_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator__5B_autoLayoutTableViewControllerBoundColumnForGeneration_5D_ enumerator_7872 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_7872.hasCurrentObject ()) {
      result.appendString ("  //--- Configure '") ;
      result.appendString (enumerator_7872.current_entry (HERE).readProperty_mDisplayedPropertyName ().stringValue ()) ;
      result.appendString ("' column\n    inTableView.addColumn_") ;
      result.appendString (enumerator_7872.current_entry (HERE).readProperty_mColumnObjectTypeName ().stringValue ()) ;
      result.appendString (" (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0].") ;
      result.appendString (enumerator_7872.current_entry (HERE).readProperty_mDisplayedPropertyName ().stringValue ()) ;
      result.appendString (" },\n      valueSetterDelegate: ") ;
      const GalgasBool test_3 = enumerator_7872.current_entry (HERE).readProperty_mEditable ().boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex].") ;
        result.appendString (enumerator_7872.current_entry (HERE).readProperty_mDisplayedPropertyName ().stringValue ()) ;
        result.appendString (" = inNewValue }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n      sortDelegate: ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_7872.current_entry (HERE).readProperty_mSortPropertyName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (", _ right : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") in return compare_") ;
        result.appendString (enumerator_7872.current_entry (HERE).readProperty_mColumnObjectTypeName ().stringValue ()) ;
        result.appendString ("_properties (left.") ;
        result.appendString (enumerator_7872.current_entry (HERE).readProperty_mSortPropertyName ().stringValue ()) ;
        result.appendString ("_property, ascending, right.") ;
        result.appendString (enumerator_7872.current_entry (HERE).readProperty_mSortPropertyName ().stringValue ()) ;
        result.appendString ("_property) })\n      }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      GGS_uint index_8787_ (0) ;
      if (enumerator_7872.current_entry (HERE).readProperty_mActualParameterList ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_8787 (enumerator_7872.current_entry (HERE).readProperty_mActualParameterList ()) ;
        while (enumerator_8787.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8787.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (": ") ;
          result.appendString (enumerator_8787.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
          enumerator_8787.gotoNextObject () ;
          if (enumerator_8787.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_8787_.increment () ;
        }
      }
      result.appendString ("\n    )\n") ;
      enumerator_7872.gotoNextObject () ;
      index_7872_.increment () ;
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
//Overriding extension proc '@autoLayoutTableViewControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                                 const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutTableViewControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                                 const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                                 const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 513)) ;
  GGS_stringset var_observedProperties_21043 = temp_0 ;
  const GGS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  UpEnumerator__5B_autoLayoutTableViewControllerSortedColumnForGeneration_5D_ enumerator_21088 (temp_1.readProperty_mTableViewControllerSortedColumnListForGeneration ()) ;
  while (enumerator_21088.hasCurrentObject ()) {
    {
    var_observedProperties_21043.setter_insert (enumerator_21088.current (HERE).readProperty_mObservablePropertyForSorting (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 515)) ;
    }
    enumerator_21088.gotoNextObject () ;
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
  GGS_string var_s_21224 = GGS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mControllerName ().readProperty_string (), temp_4.readProperty_mModelString (), temp_5.readProperty_mTableViewControllerModelKind (), temp_6.readProperty_mModelTypeName (), temp_7.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_8.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_9.readProperty_mElementTypeName (), var_observedProperties_21043, temp_10.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 517))) ;
  {
  const GGS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_12 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-table-view-").add_operation (temp_11.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (temp_12.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)), var_s_21224, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 529)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTestFile_3F__3F__3F__3F_ (const GGS_string constinArgument_inBundleIdentifier,
                                               const GGS_string constinArgument_inProjectName,
                                               const GGS__5B_mainXibDescriptor_5D_ constinArgument_inMainXibDescriptorList,
                                               const GGS_string constinArgument_inOutputDirectory,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inMainXibDescriptorList.getter_count (SOURCE_FILE ("main-xib.galgas4", 122)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBundleIdentifier.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 123)) ;
      GGS__5B_string_5D_ var_outlet_5F_identifier_5F_list_4900 = temp_2 ;
      UpEnumerator__5B_mainXibDescriptor_5D_ enumerator_4944 (constinArgument_inMainXibDescriptorList) ;
      while (enumerator_4944.hasCurrentObject ()) {
        UpEnumerator__5B_mainXibElement_5D_ enumerator_4997 (enumerator_4944.current (HERE).readProperty_mLine ()) ;
        while (enumerator_4997.hasCurrentObject ()) {
          switch (enumerator_4997.current (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_5074__0 ;
              GGS_lstring extractedValue_5077_outletName_1 ;
              enumerator_4997.current (HERE).getAssociatedValuesFor_outlet (extractedValue_5074__0, extractedValue_5077_outletName_1) ;
              {
              var_outlet_5F_identifier_5F_list_4900.setter_append (extractedValue_5077_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 129)) ;
              }
            }
            break ;
          }
          enumerator_4997.gotoNextObject () ;
        }
        enumerator_4944.gotoNextObject () ;
      }
      GGS_string var_s_5191 = GGS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_4900 COMMA_SOURCE_FILE ("main-xib.galgas4", 133))) ;
      GGS_string var_header_5317 = GGS_string ("#!/usr/bin/python3\n// coding=utf-8\n\n// https://pypi.python.org/pypi/atomac\n// https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n\n") ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GGS_string ("test.py"), GGS_string ("#"), var_header_5317, GGS_string::makeEmptyString (), var_s_5191, GGS_string ("//    ENTER USER CODE HERE\n"), GGS_string ("\nquitApplication ()\n\n//---------------------------------------------------------------------------*\n"), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 142)) ;
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
                                                     const GGS__5B_string_5D_ & in_OUTLET_5F_IDENTIFIER_5F_LIST
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
    UpEnumerator__5B_string_5D_ enumerator_1788 (in_OUTLET_5F_IDENTIFIER_5F_LIST) ;
    while (enumerator_1788.hasCurrentObject ()) {
      result.appendString ("  global ") ;
      result.appendString (enumerator_1788.current_entry (HERE).stringValue ()) ;
      result.appendString ("\n  ") ;
      result.appendString (enumerator_1788.current_entry (HERE).stringValue ()) ;
      result.appendString (" = window.findFirst (AXIdentifier='") ;
      result.appendString (enumerator_1788.current_entry (HERE).stringValue ()) ;
      result.appendString ("')\n") ;
      enumerator_1788.gotoNextObject () ;
      index_1788_.increment () ;
    }
  }
  result.appendString ("\n//-----------------------------------------------------------------------------*\n//   CHECK TEXT FIELD VALUE                                                     *\n//-----------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n//-----------------------------------------------------------------------------*\n//   SET TEXT FIELD                                                             *\n//-----------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   MAIN                                                                       *\n//-----------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@toManyRelationshipAST enterInPrecedenceGraph'
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
//Overriding extension func '@toManyRelationshipAST nodeKey'
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
//Overriding extension proc '@toManyRelationshipAST firstAnalysisPhase'
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
//Overriding extension func '@toManyPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                          const GGS_bool /* constinArgument__5F_inGenerationDirectAccess */,
                                                                          const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 225)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 225)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 225)) ;
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 226)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 226)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 227)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 227)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 227)) ;
      GGS_string var_masterPropertyTypeName_9399 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9360_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9360_1, var_masterPropertyTypeName_9399, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 228)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)).add_operation (var_masterPropertyTypeName_9399, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 230)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 230)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 229)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 234)).operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 234)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 237)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)) ;
        const GGS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(GGS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 240)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 240)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 240)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)) ;
        const GGS_toManyPropertyGeneration temp_15 = this ;
        const GGS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 242)).add_operation (GGS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 242)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 242)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 242)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 242)) ;
        const GGS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssignOperation(GGS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 243)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 243)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 243)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)) ;
      const GGS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)) ;
      const GGS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)).add_operation (GGS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssignOperation(GGS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 250)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 250)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 250)) ;
        }
      }
      const GGS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssignOperation(GGS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)) ;
      const GGS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.galgas4", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)).add_operation (GGS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)) ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_toManyPropertyGeneration temp_27 = this ;
          const GGS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssignOperation(GGS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 255)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 255)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 255)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 255)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 255)) ;
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        const GGS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssignOperation(GGS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 257)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 257)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 257)) ;
      }
      result_result.plusAssignOperation(GGS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 259)) ;
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
          result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)) ;
          const GGS_toManyPropertyGeneration temp_34 = this ;
          const GGS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 262)) ;
          const GGS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)) ;
          GalgasBool test_37 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_37) {
            const GGS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 264)).operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 264)).boolEnum () ;
            if (GalgasBool::boolTrue == test_37) {
              const GGS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 265)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 265)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 265)) ;
              }
            }
          }
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 267)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@toManyPropertyGeneration initCode'
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
//Overriding extension func '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyPropertyGeneration temp_0 = this ;
  const GGS_toManyPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 281)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 281)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 281)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 281)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@toManyPropertyGeneration configurationCode'
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
  GGS_string var_prefix_12589 = temp_0 ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_12658 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 291)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 291)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12589, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)).add_operation (var_undoManager_12658, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 292)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_12981__0 ;
      GGS_string extractedValue_12981__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_12981__0, extractedValue_12981__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13030_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13030_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 296)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 296)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12589, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)).add_operation (var_undoManager_12658, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12589, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13030_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 299)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 299)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 299)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13030_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 300)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 300)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 301)) ;
    }
    break ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 303)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
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
//Overriding extension func '@autoLayoutDocumentDeclarationAST nodeKey'
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
//Overriding extension proc '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GGS_generationStruct & ioArgument_ioGeneration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_4686 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_4686, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 133)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GGS_propertyGenerationList temp_3 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 139)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 136)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_4686, temp_3, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 134)) ;
  }
  UpEnumerator_actionMap enumerator_4858 (var_actionMap_4686) ;
  while (enumerator_4858.hasCurrentObject ()) {
    {
    const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string (), enumerator_4858.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 142)) ;
    }
    enumerator_4858.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & ioArgument_ioGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_5375 ;
  GGS_classKind joker_5362 ; // Joker input parameter
  GGS_actionMap joker_5403_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5403_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 157)), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.galgas4", 157)), inCompiler COMMA_HERE), joker_5362, var_preferencesPropertyMap_5375, joker_5403_2, joker_5403_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 156)) ;
  GGS_propertyMap var_documentPropertyMap_5535 ;
  GGS_actionMap var_documentActionMap_5565 ;
  GGS_propertyGenerationList var_documentPropertyGenerationList_5593 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GGS_classKind joker_5522 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.galgas4", 164)), inCompiler COMMA_HERE), joker_5522, var_documentPropertyMap_5535, var_documentActionMap_5565, var_documentPropertyGenerationList_5593, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 163)) ;
  GGS_propertyMap var_rootPropertyMap_5746 ;
  GGS_actionMap var__5F_rootActionMap_5772 ;
  GGS_propertyGenerationList var__5F_rootPropertyGenerationList_5797 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GGS_classKind joker_5733 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_5733, var_rootPropertyMap_5746, var__5F_rootActionMap_5772, var__5F_rootPropertyGenerationList_5797, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 171)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_6160 ;
  GGS__5B_multipleBindingGeneration_5D_ var_multipleBindingGenerationList_6225 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_6297 ;
  GGS_decoratedOutletMap var_outletMap_6358 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6410 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6497 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (false), var_rootPropertyMap_5746, var_preferencesPropertyMap_5375, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_5535, var_documentActionMap_5565, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_6160, var_multipleBindingGenerationList_6225, var_actionBindingListForGeneration_6297, var_outletMap_6358, var_tableViewBindingGenerationList_6410, var_ebViewGraphicControllerBindingGenerationList_6497, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 179)) ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  UpEnumerator__5B_arrayControllerBindingAST_5D_ enumerator_6604 (temp_5.readProperty_mArrayControllerBindingListAST ()) ;
  while (enumerator_6604.hasCurrentObject ()) {
    switch (enumerator_6604.current (HERE).readProperty_mHiddenSelectionViewBindingDescriptor ().enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_6796_expression_0 ;
        enumerator_6604.current (HERE).readProperty_mHiddenSelectionViewBindingDescriptor ().getAssociatedValuesFor_binding (extractedValue_6796_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_7069 ;
        GGS_typeKind var_type_7110 ;
        GGS_location var_errorLocation_7139 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_6796_expression_0.ptr (), GGS_bool (false), var_rootPropertyMap_5746, ioArgument_ioSemanticContext, var_documentPropertyMap_5535, var_preferencesPropertyMap_5375, var_hiddenExpression_7069, var_type_7110, var_errorLocation_7139, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 203)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_type_7110.getter_isBoolType (SOURCE_FILE ("document-auto-layout.galgas4", 213)).operator_not (SOURCE_FILE ("document-auto-layout.galgas4", 213)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_7139, GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 214)) ;
          }
        }
        var_multipleBindingGenerationList_6225.plusPlusAssignOperation (GGS_multipleBindingGeneration::init_21__21__21_ (enumerator_6604.current (HERE).readProperty_mControllerName ().readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_7069, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 216)) ;
      }
      break ;
    }
    enumerator_6604.gotoNextObject () ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_7493 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_viewGeneration_5D_ temp_8 = GGS__5B_viewGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 225)) ;
  GGS__5B_viewGeneration_5D_ var_viewGenerationList_7541 = temp_8 ;
  GGS__5B_abstractViewInstructionGeneration_5D_ temp_9 = GGS__5B_abstractViewInstructionGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 226)) ;
  GGS__5B_abstractViewInstructionGeneration_5D_ var_implicitViewFunctionGenerationList_7608 = temp_9 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_7681 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_7729 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  UpEnumerator__5B_astViewDeclaration_5D_ enumerator_7773 (temp_10.readProperty_mViewDeclarationList ()) ;
  while (enumerator_7773.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_7493.setter_insertKey (enumerator_7773.current (HERE).readProperty_mViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 230)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_8242 ;
    const GGS_autoLayoutDocumentDeclarationAST temp_11 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_7773.current (HERE).readProperty_mView ().ptr (), enumerator_7773.current (HERE).readProperty_mViewName ().readProperty_string (), var_viewDeclarationMap_7493, GGS_bool (false), var_rootPropertyMap_5746, var_preferencesPropertyMap_5375, ioArgument_ioSemanticContext, var_documentPropertyMap_5535, var_documentActionMap_5565, temp_11.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_7608, var_configuratorMap_7681, var_autoLayoutOutletMap_7729, var_viewGeneration_8242, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 231)) ;
    var_viewGenerationList_7541.plusPlusAssignOperation (GGS_viewGeneration::init_21__21_ (enumerator_7773.current (HERE).readProperty_mViewName ().readProperty_string (), var_viewGeneration_8242, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 247)) ;
    enumerator_7773.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_12 = this ;
  var_viewDeclarationMap_7493.method_searchKey (temp_12.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 249)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (true) ;
  GGS__5B_autoLayoutOutletLinkerGeneration_5D_ temp_13 = GGS__5B_autoLayoutOutletLinkerGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 253)) ;
  GGS__5B_autoLayoutOutletLinkerGeneration_5D_ var_outletLinkerGenerationList_8534 = temp_13 ;
  GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 254)) ;
  GGS_stringset var_linkerNameSet_8583 = temp_14 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  UpEnumerator__5B_astAutoLayoutOutletLinker_5D_ enumerator_8623 (temp_15.readProperty_mOutletLinkerList ()) ;
  while (enumerator_8623.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_linkerNameSet_8583.getter_contains (enumerator_8623.current (HERE).readProperty_mLinkerName ().readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 256)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_8623.current (HERE).readProperty_mLinkerName ().readProperty_location (), GGS_string ("duplicated linker name"), fixItArray17  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 257)) ;
      }
    }
    {
    var_linkerNameSet_8583.setter_insert (enumerator_8623.current (HERE).readProperty_mLinkerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 259)) ;
    }
    GGS__5B__32_string_5D_ temp_18 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 260)) ;
    GGS__5B__32_string_5D_ var_outletNameAndTypeNameList_8849 = temp_18 ;
    UpEnumerator__5B_lstring_5D_ enumerator_8909 (enumerator_8623.current (HERE).readProperty_mOutletNameList ()) ;
    while (enumerator_8909.hasCurrentObject ()) {
      GGS_string var_outletTypeName_8982 ;
      GGS_bool var__5F_outletIsArray_9003 ;
      var_autoLayoutOutletMap_7729.method_searchKey (enumerator_8909.current (HERE), var_outletTypeName_8982, var__5F_outletIsArray_9003, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 262)) ;
      var_outletNameAndTypeNameList_8849.plusPlusAssignOperation (GGS__32_string::init_21__21_ (enumerator_8909.current (HERE).readProperty_string (), var_outletTypeName_8982, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 263)) ;
      enumerator_8909.gotoNextObject () ;
    }
    var_outletLinkerGenerationList_8534.plusPlusAssignOperation (GGS_autoLayoutOutletLinkerGeneration::init_21__21_ (enumerator_8623.current (HERE).readProperty_mLinkerName ().readProperty_string (), var_outletNameAndTypeNameList_8849, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 265)) ;
    enumerator_8623.gotoNextObject () ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_19 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_20 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_21 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_19.readProperty_mClassName ().readProperty_string (), temp_20.readProperty_mRootEntityName ().readProperty_string (), temp_21.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_5593, var_outletMap_6358, var_autoLayoutOutletMap_7729, var_actionBindingListForGeneration_6297, var_regularBindingsGenerationList_6160, var_multipleBindingGenerationList_6225, var_tableViewBindingGenerationList_6410, var_ebViewGraphicControllerBindingGenerationList_6497, var_viewGenerationList_7541, var_implicitViewFunctionGenerationList_7608, var_configuratorMap_7681, temp_22.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_8534, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 268)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                          const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                          GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                          GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutDocumentFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                          const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                          const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
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
  GGS_string var_s_11803 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 328))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12474 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 345)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 345)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12474, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 346)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12474, var_s_11803, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 347)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_12655 (temp_19.readProperty_mConfiguratorMap ()) ;
  while (enumerator_12655.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_12718 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12655.current_lkey (HERE).readProperty_string (), enumerator_12655.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 353))) ;
    GGS_string var_header_12905 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 358)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 358)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 358)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 361)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 363)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 363)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 363)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13281 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)).add_operation (enumerator_12655.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13281, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13281, GGS_string ("//"), var_header_12905, GGS_string ("\n\n"), var_s_12718, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 374)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 374)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 374)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 366)) ;
    }
    enumerator_12655.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ enumerator_13856 (temp_22.readProperty_mOutletLinkerGenerationList ()) ;
  while (enumerator_13856.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_13895 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_13856.current (HERE).readProperty_mLinkerName (), enumerator_13856.current (HERE).readProperty_mOutletNameAndTypeNameList () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 379))) ;
    GGS_string var_header_14083 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 384)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 384)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 384)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 386)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 386)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 386)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 386)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 388)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14459 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (enumerator_13856.current (HERE).readProperty_mLinkerName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14459, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14459, GGS_string ("//"), var_header_14083, GGS_string ("\n\n"), var_s_13895, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 392)) ;
    }
    enumerator_13856.gotoNextObject () ;
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
                                                                                            const GGS__5B_multipleBindingGeneration_5D_ & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const GGS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS__5B_viewGeneration_5D_ & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const GGS__5B_abstractViewInstructionGeneration_5D_ & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const GGS__5B_autoLayoutOutletLinkerGeneration_5D_ & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_543_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_543 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_543.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_543.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 14)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 14)).stringValue ()) ;
      enumerator_543.gotoNextObject () ;
      index_543_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_923_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_923 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_923.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_923.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_923.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_923.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_923.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_923.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_923.gotoNextObject () ;
      index_923_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1430_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_1430 (in_OUTLET_5F_GENERATION_5F_MAP) ;
    while (enumerator_1430.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1430.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1430.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1430.gotoNextObject () ;
      index_1430_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1800_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_multipleBindingGeneration_5D_ enumerator_1800 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_1800.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1800.current_entry (HERE).readProperty_mOutletName ().stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1800.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1800.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1800.gotoNextObject () ;
      index_1800_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3059_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_viewGeneration_5D_ enumerator_3059 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_3059.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3059.current_entry (HERE).readProperty_mViewName ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3059.current_entry (HERE).readProperty_mView ().ptr (), GGS_bool (false), enumerator_3059.current_entry (HERE).readProperty_mViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 79)).stringValue ()) ;
      enumerator_3059.gotoNextObject () ;
      index_3059_.increment () ;
    }
  }
  GGS_uint index_3450_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator__5B_abstractViewInstructionGeneration_5D_ enumerator_3450 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_3450.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3450_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 83)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3450_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3450.current_entry (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 86)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_3450.gotoNextObject () ;
      index_3450_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4609_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    UpEnumerator__5B_autoLayoutOutletLinkerGeneration_5D_ enumerator_4609 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST) ;
    while (enumerator_4609.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4609.current_entry (HERE).readProperty_mLinkerName ().stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4722_ (0) ;
      if (enumerator_4609.current_entry (HERE).readProperty_mOutletNameAndTypeNameList ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_4722 (enumerator_4609.current_entry (HERE).readProperty_mOutletNameAndTypeNameList ()) ;
        while (enumerator_4722.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4722.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          enumerator_4722.gotoNextObject () ;
          if (enumerator_4722.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_4722_.increment () ;
        }
      }
      result.appendString (")\n") ;
      enumerator_4609.gotoNextObject () ;
      index_4609_.increment () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5211_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5211 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5211.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5211.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 126)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5211.gotoNextObject () ;
      index_5211_.increment () ;
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
                                                                                                const GGS__5B__32_string_5D_ & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_225_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_225 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST) ;
    while (enumerator_225.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_225.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_225.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString ("\?") ;
      enumerator_225.gotoNextObject () ;
      if (enumerator_225.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_225_.increment () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsDeclarationAST enterInPrecedenceGraph'
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
//Overriding extension func '@prefsDeclarationAST nodeKey'
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

static GGS_string onceFunction_preferencesName (Compiler * /* inCompiler */
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
//Overriding extension proc '@prefsDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_3933 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3933, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 94)) ;
  }
  {
  GGS_propertyGenerationList temp_1 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.galgas4", 97)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_3933, temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 95)) ;
  }
  UpEnumerator_actionMap enumerator_4075 (var_actionMap_3933) ;
  while (enumerator_4075.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_2 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_2.readProperty_mClassName ().readProperty_string (), enumerator_4075.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 103)) ;
    }
    enumerator_4075.gotoNextObject () ;
  }
  const GGS_prefsDeclarationAST temp_3 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_3.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  GGS_stringset var_availableCallers_4738 = temp_0 ;
  GGS_externFunctionMap var_externFunctionMap_4807 = GGS_externFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  UpEnumerator_externSwiftFunctionList enumerator_4863 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList ()) ;
  while (enumerator_4863.hasCurrentObject ()) {
    {
    var_externFunctionMap_4807.setter_insertKey (enumerator_4863.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 124)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_availableCallers_4738.getter_contains (enumerator_4863.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.galgas4", 125)).operator_not (SOURCE_FILE ("preferences.galgas4", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_5059 = GGS_string ("invalid caller; available callers:") ;
        UpEnumerator_stringset enumerator_5117 (var_availableCallers_4738) ;
        while (enumerator_5117.hasCurrentObject ()) {
          var_s_5059.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_5117.current (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 128)) ;
          enumerator_5117.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4863.current_mCallerName (HERE).readProperty_location (), var_s_5059, fixItArray3  COMMA_SOURCE_FILE ("preferences.galgas4", 130)) ;
      }
    }
    enumerator_4863.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5348 ;
  GGS_actionMap var_actionMap_5381 ;
  GGS_propertyGenerationList var_propertyGenerationList_5401 ;
  GGS_classKind joker_5335 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 135)), inCompiler COMMA_HERE), joker_5335, var_preferencesPropertyMap_5348, var_actionMap_5381, var_propertyGenerationList_5401, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5767 ;
  GGS__5B_multipleBindingGeneration_5D_ var_multipleBindingGenerationList_5836 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5908 ;
  GGS_decoratedOutletMap var_outletMap_5969 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6021 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6108 ;
  {
  const GGS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5348, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5348, var_actionMap_5381, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5767, var_multipleBindingGenerationList_5836, var_actionBindingListForGeneration_5908, var_outletMap_5969, var_tableViewBindingGenerationList_6021, var_ebViewGraphicControllerBindingGenerationList_6108, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6234 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_viewGeneration_5D_ temp_5 = GGS__5B_viewGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 162)) ;
  GGS__5B_viewGeneration_5D_ var_viewGenerationList_6282 = temp_5 ;
  GGS__5B_abstractViewInstructionGeneration_5D_ temp_6 = GGS__5B_abstractViewInstructionGeneration_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 163)) ;
  GGS__5B_abstractViewInstructionGeneration_5D_ var_implicitViewFunctionGenerationList_6349 = temp_6 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6422 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6470 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_7 = this ;
  UpEnumerator__5B_astViewDeclaration_5D_ enumerator_6527 (temp_7.readProperty_mDeclaration ().readProperty_mViewDeclarationList ()) ;
  while (enumerator_6527.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6234.setter_insertKey (enumerator_6527.current (HERE).readProperty_mViewName (), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_6999 ;
    const GGS_prefsDeclarationAST temp_8 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6527.current (HERE).readProperty_mView ().ptr (), enumerator_6527.current (HERE).readProperty_mViewName ().readProperty_string (), var_viewDeclarationMap_6234, GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5348, ioArgument_ioSemanticContext, GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5381, temp_8.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6349, var_configuratorMap_6422, var_autoLayoutOutletMap_6470, var_viewGeneration_6999, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 168)) ;
    var_viewGenerationList_6282.plusPlusAssignOperation (GGS_viewGeneration::init_21__21_ (enumerator_6527.current (HERE).readProperty_mViewName ().readProperty_string (), var_viewGeneration_6999, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("preferences.galgas4", 184)) ;
    enumerator_6527.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_viewDeclarationMap_6234.getter_contains (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.galgas4", 186)).operator_not (SOURCE_FILE ("preferences.galgas4", 186)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray10  COMMA_SOURCE_FILE ("preferences.galgas4", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5401, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5767, var_multipleBindingGenerationList_5836, var_actionBindingListForGeneration_5908, var_outletMap_5969, temp_11.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6021, var_ebViewGraphicControllerBindingGenerationList_6108, var_viewGenerationList_6282, var_implicitViewFunctionGenerationList_6349, var_configuratorMap_6422, var_autoLayoutOutletMap_6470, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 190)) ;
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
                                                                    const GGS__5B_mainXibDescriptor_5D_ & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                    const GGS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                    const GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                    const GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                    const GGS__5B_multipleBindingGeneration_5D_ & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                    const GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS__5B_viewGeneration_5D_ & in_VIEW_5F_GENERATION_5F_LIST,
                                                                    const GGS__5B_abstractViewInstructionGeneration_5D_ & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
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
  GGS_uint index_1877_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_viewGeneration_5D_ enumerator_1877 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_1877.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_1877.current_entry (HERE).readProperty_mViewName ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1877.current_entry (HERE).readProperty_mView ().ptr (), GGS_bool (true), enumerator_1877.current_entry (HERE).readProperty_mViewName (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      enumerator_1877.gotoNextObject () ;
      index_1877_.increment () ;
    }
  }
  GGS_uint index_2267_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator__5B_abstractViewInstructionGeneration_5D_ enumerator_2267 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_2267.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2267_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2267_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2267.current_entry (HERE).ptr (), GGS_bool (true), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_2267.gotoNextObject () ;
      index_2267_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3013_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_3013 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_3013.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_3013.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_3013.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_3013.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_3013.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_3013.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3013.gotoNextObject () ;
      index_3013_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3509_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_3509 (in_OUTLET_5F_MAP) ;
    while (enumerator_3509.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet var ") ;
      result.appendString (enumerator_3509.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_3509.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_3509.gotoNextObject () ;
      index_3509_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3873_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_multipleBindingGeneration_5D_ enumerator_3873 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_3873.hasCurrentObject ()) {
      result.appendString ("  private var mController_") ;
      result.appendString (enumerator_3873.current_entry (HERE).readProperty_mOutletName ().stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3873.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_3873.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString ("\?\n") ;
      enumerator_3873.gotoNextObject () ;
      index_3873_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo Manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mUndoManager = UndoManager ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // The preferences window should register this object as delegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n    g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" = self\n  //--- Read from preferences\n") ;
  GGS_uint index_5200_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5200 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_5200.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5200.current_mProperty (HERE).ptr (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue ()) ;
      enumerator_5200.gotoNextObject () ;
      index_5200_.increment () ;
    }
  }
  result.appendString ("    //--- Extern functions\n") ;
  GGS_uint index_5351_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_5351 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_5351.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_5351.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_5351.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5351.gotoNextObject () ;
      index_5351_.increment () ;
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
  GGS_uint index_6116_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_6116 (in_OUTLET_5F_MAP) ;
    while (enumerator_6116.hasCurrentObject ()) {
      result.appendString ("      checkOutletConnection (self.") ;
      result.appendString (enumerator_6116.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6116.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6116.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      enumerator_6116.gotoNextObject () ;
      index_6116_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install bindings\n") ;
  GGS_uint index_6394_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_regularBindingsGenerationList enumerator_6394 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST) ;
    while (enumerator_6394.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_6394.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6394.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_6508_ (0) ;
      if (enumerator_6394.current_mBoundObjectList (HERE).isValid ()) {
        UpEnumerator_boundObjectList enumerator_6508 (enumerator_6394.current_mBoundObjectList (HERE)) ;
        while (enumerator_6508.hasCurrentObject ()) {
          result.appendString (enumerator_6508.current_mBoundObjectString (HERE).stringValue ()) ;
          enumerator_6508.gotoNextObject () ;
          if (enumerator_6508.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_6508_.increment () ;
        }
      }
      result.appendString (enumerator_6394.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_6394.gotoNextObject () ;
      index_6394_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install multiple bindings\n") ;
  GGS_uint index_6701_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator__5B_multipleBindingGeneration_5D_ enumerator_6701 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_6701.hasCurrentObject ()) {
      result.appendString ("      do{\n        let controller = MultipleBindingController_") ;
      result.appendString (enumerator_6701.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString (" (\n          computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_6701.current_entry (HERE).readProperty_mBoundObjectExpression ().ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (",\n          outlet: self.") ;
      result.appendString (enumerator_6701.current_entry (HERE).readProperty_mOutletName ().stringValue ()) ;
      result.appendString ("\n        )\n        self.mController_") ;
      result.appendString (enumerator_6701.current_entry (HERE).readProperty_mOutletName ().stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6701.current_entry (HERE).readProperty_mBindingName ().stringValue ()) ;
      result.appendString (" = controller\n      }\n") ;
      enumerator_6701.gotoNextObject () ;
      index_6701_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Array controller\n") ;
  GGS_uint index_7228_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_tableViewBindingGenerationList enumerator_7228 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7228.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7228.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7228.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7228.gotoNextObject () ;
      index_7228_.increment () ;
    }
  }
  GGS_uint index_7458_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7458 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7458.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7458.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7458.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7458.gotoNextObject () ;
      index_7458_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Set targets / actions\n") ;
  GGS_uint index_7701_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    UpEnumerator_actionBindingListForGeneration enumerator_7701 (in_TARGET_5F_ACTION_5F_LIST) ;
    while (enumerator_7701.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_7701.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7701.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n      self.") ;
      result.appendString (enumerator_7701.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7701.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7701.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      enumerator_7701.gotoNextObject () ;
      index_7701_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Extern functions\n") ;
  GGS_uint index_7983_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_7983 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_7983.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7983.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_7983.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_7983.gotoNextObject () ;
      index_7983_.increment () ;
    }
  }
  result.appendString ("    }\n    super.awakeFromNib ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8402_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8402 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8402.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8402.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 206)).stringValue ()) ;
      enumerator_8402.gotoNextObject () ;
      index_8402_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_8498_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8498 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8498.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8498.current_mProperty (HERE).ptr (), GGS_bool (true), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 211)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 211)).stringValue ()) ;
      enumerator_8498.gotoNextObject () ;
      index_8498_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@preferencesForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@preferencesForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
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
  GGS_string var_s_10595 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.galgas4", 266))) ;
  GGS_string var_fileName_11096 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11096, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 281)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11096, var_s_10595, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 282)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_11282 (temp_12.readProperty_mConfiguratorMap ()) ;
  while (enumerator_11282.hasCurrentObject ()) {
    GGS_string var_s_11345 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11282.current_lkey (HERE).readProperty_string (), enumerator_11282.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.galgas4", 289))) ;
    GGS_string var_header_11527 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("import AppKit\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("import CanariGeometry\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 297)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 298)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)) ;
    GGS_string var_fileName_11902 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11282.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 300)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 300)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11902, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 301)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11902, GGS_string ("//"), var_header_11527, GGS_string ("\n\n"), var_s_11345, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 310)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 310)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 302)) ;
    }
    enumerator_11282.gotoNextObject () ;
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
                                                                            const GGS__5B_XCodeGroup_5D_ & in_GROUPS,
                                                                            const GGS__5B_string_5D_ & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS__5B_XCodeToolTarget_5D_ & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS__5B_XCodeAppTarget_5D_ & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__5B__32_string_5D_ & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS__5B_BuildFile_5D_ & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS__5B_string_5D_ & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_213_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B_BuildFile_5D_ enumerator_213 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_213.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_213.current_entry (HERE).readProperty_mBuildReference ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_213.current_entry (HERE).readProperty_mFileName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_213.current_entry (HERE).readProperty_mFileReference ().stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_213.gotoNextObject () ;
      index_213_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_523_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_523 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_523.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_523.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_523.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_523.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_523.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_523.gotoNextObject () ;
      index_523_.increment () ;
    }
  }
  GGS_uint index_884_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_884 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_884.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_884.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_884.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_884.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_884.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_884.gotoNextObject () ;
      index_884_.increment () ;
    }
  }
  GGS_uint index_1244_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1244 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_1244.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1244.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1244.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1244.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1244.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1244.gotoNextObject () ;
      index_1244_.increment () ;
    }
  }
  GGS_uint index_1612_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1612 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1612.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1612.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1612.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1612.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1612.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1612.gotoNextObject () ;
      index_1612_.increment () ;
    }
  }
  GGS_uint index_1976_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_1976 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_1976.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1976.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1976.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1976.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1976.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1976.gotoNextObject () ;
      index_1976_.increment () ;
    }
  }
  GGS_uint index_2341_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_2341 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2341.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2341.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2341.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2341.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2341.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2341.gotoNextObject () ;
      index_2341_.increment () ;
    }
  }
  GGS_uint index_2681_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_2681 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_2681.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2681.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2681.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2681.gotoNextObject () ;
      index_2681_.increment () ;
    }
  }
  GGS_uint index_2995_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_2995 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_2995.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2995.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2995.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2995.gotoNextObject () ;
      index_2995_.increment () ;
    }
  }
  GGS_uint index_3308_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_3308 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3308.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3308.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3308.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3308.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3308.gotoNextObject () ;
      index_3308_.increment () ;
    }
  }
  GGS_uint index_3640_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_3640 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_3640.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3640.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_3640.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3640.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3640.gotoNextObject () ;
      index_3640_.increment () ;
    }
  }
  GGS_uint index_3974_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_3974 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_3974.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3974.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3974.gotoNextObject () ;
      index_3974_.increment () ;
    }
  }
  GGS_uint index_4281_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__5B__32_string_5D_ enumerator_4281 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_4281.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4281.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4281.current_entry (HERE).readProperty_mValue_31_ ().getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4281.current_entry (HERE).readProperty_mValue_31_ ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4281.gotoNextObject () ;
      index_4281_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_4693_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_4693 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_4693.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_4693.current_entry (HERE).readProperty_mFrameworksFileRefList ().getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_4693.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_4953_ (0) ;
        if (enumerator_4693.current_entry (HERE).readProperty_mFrameworksFileRefList ().isValid ()) {
          UpEnumerator__5B_string_5D_ enumerator_4953 (enumerator_4693.current_entry (HERE).readProperty_mFrameworksFileRefList ()) ;
          while (enumerator_4953.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_4953.current_entry (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_4953.gotoNextObject () ;
            index_4953_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_4693.gotoNextObject () ;
      index_4693_.increment () ;
    }
  }
  GGS_uint index_5115_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_5115 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_5115.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5115.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_5313_ (0) ;
      if (enumerator_5115.current_entry (HERE).readProperty_mFrameworksFileRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_5313 (enumerator_5115.current_entry (HERE).readProperty_mFrameworksFileRefList ()) ;
        while (enumerator_5313.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_5313.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_5313.gotoNextObject () ;
          index_5313_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_5115.gotoNextObject () ;
      index_5115_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_5543_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator__5B_XCodeGroup_5D_ enumerator_5543 (in_GROUPS) ;
    while (enumerator_5543.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5543.current_entry (HERE).readProperty_mGroupReference ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_5543.current_entry (HERE).readProperty_mGroupName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_5688_ (0) ;
      if (enumerator_5543.current_entry (HERE).readProperty_mChildrenRefs ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_5688 (enumerator_5543.current_entry (HERE).readProperty_mChildrenRefs ()) ;
        while (enumerator_5688.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_5688.current_entry (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_5688.gotoNextObject () ;
          index_5688_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_5543.current_entry (HERE).readProperty_mGroupName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_5543.current_entry (HERE).readProperty_mGroupPath ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_5543.gotoNextObject () ;
      index_5543_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6012_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_6012 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_6012.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6012.current_entry (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_6012.gotoNextObject () ;
      index_6012_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_6209_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_6209 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_6209.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mTargetName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_6209.current_entry (HERE).readProperty_mFrameworksFileRefList ().getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_6209.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_6209.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_6209.gotoNextObject () ;
      index_6209_.increment () ;
    }
  }
  GGS_uint index_6913_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_6913 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_6913.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mTargetName ().stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mResourceBuildRef ().stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mFrameworkBuildPhaseRef ().stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_7341_ (0) ;
      if (enumerator_6913.current_entry (HERE).readProperty_mDependentTargets ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_7341 (enumerator_6913.current_entry (HERE).readProperty_mDependentTargets ()) ;
        while (enumerator_7341.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_7341.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_7341.gotoNextObject () ;
          index_7341_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mTargetName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_6913.current_entry (HERE).readProperty_mProductFileReference ().stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_6913.gotoNextObject () ;
      index_6913_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_8223_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_8223 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_8223.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_8223.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_8223.gotoNextObject () ;
      index_8223_.increment () ;
    }
  }
  GGS_uint index_8293_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_8293 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8293.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_8293.current_entry (HERE).readProperty_mTargetRef ().stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_8293.gotoNextObject () ;
      index_8293_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_8476_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_8476 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8476.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8476.current_entry (HERE).readProperty_mResourceBuildRef ().stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_8673_ (0) ;
      if (enumerator_8476.current_entry (HERE).readProperty_mResourceFileBuildRefs ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_8673 (enumerator_8476.current_entry (HERE).readProperty_mResourceFileBuildRefs ()) ;
        while (enumerator_8673.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8673.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_8673.gotoNextObject () ;
          index_8673_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_8476.gotoNextObject () ;
      index_8476_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_8906_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_8906 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_8906.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_8906.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_9087_ (0) ;
      if (enumerator_8906.current_entry (HERE).readProperty_mBuildPhaseRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_9087 (enumerator_8906.current_entry (HERE).readProperty_mBuildPhaseRefList ()) ;
        while (enumerator_9087.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_9087.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_9087.gotoNextObject () ;
          index_9087_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_8906.gotoNextObject () ;
      index_8906_.increment () ;
    }
  }
  GGS_uint index_9217_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_9217 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9217.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9217.current_entry (HERE).readProperty_mBuildPhaseRef ().stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_9398_ (0) ;
      if (enumerator_9217.current_entry (HERE).readProperty_mBuildPhaseRefList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_9398 (enumerator_9217.current_entry (HERE).readProperty_mBuildPhaseRefList ()) ;
        while (enumerator_9398.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_9398.current_entry (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_9398.gotoNextObject () ;
          index_9398_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_9217.gotoNextObject () ;
      index_9217_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_9629_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_9629 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_9629.hasCurrentObject ()) {
      GGS_uint index_9674_ (0) ;
      if (enumerator_9629.current_entry (HERE).readProperty_mDependentTargets ().isValid ()) {
        UpEnumerator__5B__32_string_5D_ enumerator_9674 (enumerator_9629.current_entry (HERE).readProperty_mDependentTargets ()) ;
        while (enumerator_9674.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_9674.current_entry (HERE).readProperty_mValue_30_ ().stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_9674.current_entry (HERE).readProperty_mValue_31_ ().stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_9674.gotoNextObject () ;
          index_9674_.increment () ;
        }
      }
      enumerator_9629.gotoNextObject () ;
      index_9629_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_10163_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator__5B_string_5D_ enumerator_10163 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_10163.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_10163.current_entry (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_10163.gotoNextObject () ;
      index_10163_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_10261_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_10261 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_10261.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10261.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_10443_ (0) ;
      if (enumerator_10261.current_entry (HERE).readProperty_mBuildConfigurationSettingList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_10443 (enumerator_10261.current_entry (HERE).readProperty_mBuildConfigurationSettingList ()) ;
        while (enumerator_10443.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10443.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_10443.gotoNextObject () ;
          index_10443_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_10261.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_10261.gotoNextObject () ;
      index_10261_.increment () ;
    }
  }
  GGS_uint index_10629_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_10629 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10629.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10629.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_10811_ (0) ;
      if (enumerator_10629.current_entry (HERE).readProperty_mBuildConfigurationSettingList ().isValid ()) {
        UpEnumerator__5B_string_5D_ enumerator_10811 (enumerator_10629.current_entry (HERE).readProperty_mBuildConfigurationSettingList ()) ;
        while (enumerator_10811.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10811.current_entry (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_10811.gotoNextObject () ;
          index_10811_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_10629.current_entry (HERE).readProperty_mInfoPListFile ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_10629.current_entry (HERE).readProperty_mProductFileName ().getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_10629.gotoNextObject () ;
      index_10629_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_11490_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeToolTarget_5D_ enumerator_11490 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11490.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11490.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_11490.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_11490.gotoNextObject () ;
      index_11490_.increment () ;
    }
  }
  GGS_uint index_11810_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator__5B_XCodeAppTarget_5D_ enumerator_11810 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11810.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11810.current_entry (HERE).readProperty_mBuildConfigurationListRef ().stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_11810.current_entry (HERE).readProperty_mBuildConfigurationRef ().stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_11810.gotoNextObject () ;
      index_11810_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@outletClassDeclarationAST enterInPrecedenceGraph'
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
//Overriding extension func '@outletClassDeclarationAST nodeKey'
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
//Overriding extension proc '@outletClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
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
    GGS_bool var_hasRunAction_3623 ;
    GGS_bool var_handlesTableValueBinding_3648 ;
    GGS_bool var_hasEnabled_3685 ;
    GGS_bool var_hasHidden_3708 ;
    GGS_bool var_handlesGraphicControllerBinding_3730 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3608 ; // Joker input parameter
    GGS_bool joker_3769 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3608, var_hasRunAction_3623, var_handlesTableValueBinding_3648, var_hasEnabled_3685, var_hasHidden_3708, var_handlesGraphicControllerBinding_3730, joker_3769, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 116)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3623 COMMA_SOURCE_FILE ("outlet-class.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas4", 127)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3648 COMMA_SOURCE_FILE ("outlet-class.galgas4", 129)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.galgas4", 130)) ;
      }
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3685 COMMA_SOURCE_FILE ("outlet-class.galgas4", 132)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.galgas4", 133)) ;
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3708 COMMA_SOURCE_FILE ("outlet-class.galgas4", 135)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.galgas4", 136)) ;
      }
    }
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3730 COMMA_SOURCE_FILE ("outlet-class.galgas4", 138)).boolEnum () ;
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
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3623 COMMA_SOURCE_FILE ("outlet-class.galgas4", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3648 COMMA_SOURCE_FILE ("outlet-class.galgas4", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3685 COMMA_SOURCE_FILE ("outlet-class.galgas4", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3708 COMMA_SOURCE_FILE ("outlet-class.galgas4", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3730 COMMA_SOURCE_FILE ("outlet-class.galgas4", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 141)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1039 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1039, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1039, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1039, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1039, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyDeclarationAST nodeKey'
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
//Overriding extension proc '@atomicPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6059 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6276 ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6287_3 ; // Joker input parameter
  GGS_actionMap joker_6287_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6287_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6276, joker_6287_3, joker_6287_2, joker_6287_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 161)) ;
  GGS_propertyMap var_preferencesPropertyMap_6396 ;
  GGS_classKind joker_6381 ; // Joker input parameter
  GGS_actionMap joker_6426_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6426_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 163)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.galgas4", 163)), inCompiler COMMA_HERE), joker_6381, var_preferencesPropertyMap_6396, joker_6426_2, joker_6426_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 162)) ;
  switch (var_classKind_6276.enumValue ()) {
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
      GGS_typeKind extractedValue_6565_kind_0 ;
      var_classKind_6276.getAssociatedValuesFor_atomic (extractedValue_6565_kind_0) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_4 = this ;
      var_entry_6059.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6565_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.galgas4", 172))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)) ;
      }
      GGS_string var_swiftDefaultValueAsString_6818 ;
      const GGS_atomicPropertyDeclarationAST temp_5 = this ;
      GGS__5B_typeKind_5D_ temp_6 = GGS__5B_typeKind_5D_::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      temp_6.plusPlusAssignOperation (extractedValue_6565_kind_0  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_6396, var_swiftDefaultValueAsString_6818, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_7 = this ;
      const GGS_atomicPropertyDeclarationAST temp_8 = this ;
      const GGS_atomicPropertyDeclarationAST temp_9 = this ;
      const GGS_atomicPropertyDeclarationAST temp_10 = this ;
      const GGS_atomicPropertyDeclarationAST temp_11 = this ;
      const GGS_atomicPropertyDeclarationAST temp_12 = this ;
      var_entry_6059.mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_generateResetMethod (), temp_9.readProperty_generateDirectRead (), temp_10.readProperty_generateDirectAccess (), temp_11.readProperty_standalone (), extractedValue_6565_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6818, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 185)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 176)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7337__0 ;
      var_classKind_6276.getAssociatedValuesFor_document (extractedValue_7337__0) ;
      const GGS_atomicPropertyDeclarationAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 189)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7434__0 ;
      GGS_bool extractedValue_7434__1 ;
      GGS_bool extractedValue_7434__2 ;
      GGS_bool extractedValue_7434__3 ;
      var_classKind_6276.getAssociatedValuesFor_entity (extractedValue_7434__0, extractedValue_7434__1, extractedValue_7434__2, extractedValue_7434__3) ;
      const GGS_atomicPropertyDeclarationAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 191)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6059, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 215)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 215)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 215)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 215)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 222)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 222)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 222)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 223)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 223)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 223)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 223)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 224)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 231)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 231)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 231)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 232)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 232)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 232)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 232)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 233)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 233)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 234)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 235)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 240)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 242)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 243)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 244)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 244)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 244)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 245)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 246)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 248)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 249)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 251)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 252)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 253)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 254)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 255)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 256)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 257)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 258)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 259)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 260)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 261)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 262)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 263)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 264)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 265)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 266)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 268)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 269)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 270)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 271)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 272)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 274)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 274)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 274)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 275)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 276)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 277)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 278)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 279)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 290)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 290)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 290)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 291)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 291)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 291)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 292)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 292)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 292)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 292)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 294)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 294)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 294)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 295)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 295)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 295)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 295)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 295)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("_property = EBPreferenceProperty_").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 299)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 299)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 299)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 307)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)) ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 312)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 312)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 312)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 312)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssignOperation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 314)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 314)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 314)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 314)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 314)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)) ;
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
    GGS_bool var_generateAccess_13773 = test_26 ;
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_generateAccess_13773.boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 321)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 321)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 321)) ;
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 323)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 323)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 323)) ;
          }
        }
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration initCode'
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
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 334)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 334)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 334)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 334)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 335)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 335)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 335)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 337)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 337)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 337)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 337)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 338)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 338)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 338)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 339)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 339)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
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
    result_result = GGS_string ("    self.accumulateProperty (self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 349)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 349)) ;
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
                                         const GGS__5B_abstractDeclarationAST_5D_ constinArgument_inDeclarationListAST,
                                         GGS__5B_abstractDeclarationAST_5D_ & outArgument_outSortedDeclarationListAST,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2207 = GGS_declarationPrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_2261 (constinArgument_inDeclarationListAST) ;
  while (enumerator_2261.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2261.current (HERE).ptr (), var_declarationPrecedenceGraph_2207, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 63)) ;
    enumerator_2261.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2484 = var_declarationPrecedenceGraph_2207.getter_graphviz (SOURCE_FILE ("declaration-graph.galgas4", 67)) ;
      GGS_string var_path_2532 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 68)) ;
      GGS_bool joker_2629 ; // Joker input parameter
      var_s_2484.method_writeToFileWhenDifferentContents (var_path_2532, joker_2629, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 69)) ;
    }
  }
  GGS__5B_abstractDeclarationAST_5D_ temp_1 = GGS__5B_abstractDeclarationAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 72)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2207.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.galgas4", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator__5B_lstring_5D_ enumerator_2838 (var_declarationPrecedenceGraph_2207.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.galgas4", 74))) ;
      while (enumerator_2838.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_2838.current (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_2838.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)) ;
        enumerator_2838.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS__5B_abstractDeclarationAST_5D_ var_unsortedSemanticDeclarationListAST_3060 ;
    GGS__5B_lstring_5D_ joker_3045 ; // Joker input parameter
    GGS__5B_lstring_5D_ joker_3102 ; // Joker input parameter
    var_declarationPrecedenceGraph_2207.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3045, var_unsortedSemanticDeclarationListAST_3060, joker_3102, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 78)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3060.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 84)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3178 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3060.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 86)).getter_string (SOURCE_FILE ("declaration-graph.galgas4", 85)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 85)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 86)) ;
        UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_3366 (var_unsortedSemanticDeclarationListAST_3060) ;
        while (enumerator_3366.hasCurrentObject ()) {
          var_s_3178.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3366.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 89)) ;
          enumerator_3366.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.galgas4", 91)), var_s_3178, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 91)) ;
        UpEnumerator__5B_abstractDeclarationAST_5D_ enumerator_3510 (var_unsortedSemanticDeclarationListAST_3060) ;
        while (enumerator_3510.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3510.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3510.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 93)) ;
          enumerator_3510.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@boolAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3817 = GGS_bool (false) ;
  UpEnumerator__5B_typeKind_5D_ enumerator_3845 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_3817.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
  if (enumerator_3845.hasCurrentObject () && bool_0) {
    while (enumerator_3845.hasCurrentObject () && bool_0) {
      switch (enumerator_3845.current (HERE).enumValue ()) {
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
          var_found_3817 = GGS_bool (true) ;
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
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_3845.gotoNextObject () ;
      if (enumerator_3845.hasCurrentObject ()) {
        bool_0 = var_found_3817.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_found_3817.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 128)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@integerAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4846 = GGS_bool (false) ;
  UpEnumerator__5B_typeKind_5D_ enumerator_4874 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_4846.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 143)).isValidAndTrue () ;
  if (enumerator_4874.hasCurrentObject () && bool_0) {
    while (enumerator_4874.hasCurrentObject () && bool_0) {
      switch (enumerator_4874.current (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_integerAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 146)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 146)) ;
          var_found_4846 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        {
          outArgument_outSwiftDefaultValueAsString = GGS_string (".degree (Double (") ;
          const GGS_integerAsDefaultValue temp_5 = this ;
          GGS_string temp_6 ;
          const GalgasBool test_7 = temp_5.readProperty_mNegative ().boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            temp_6 = GGS_string ("-") ;
          }else if (GalgasBool::boolFalse == test_7) {
            temp_6 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_8 = this ;
          outArgument_outSwiftDefaultValueAsString.plusAssignOperation(temp_6.add_operation (temp_8.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 150)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 150)), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 150)) ;
          outArgument_outSwiftDefaultValueAsString.plusAssignOperation(GGS_string (") / 1000.0)"), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 151)) ;
          var_found_4846 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_integerAsDefaultValue temp_10 = this ;
            test_9 = temp_10.readProperty_mNegative ().boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              const GGS_integerAsDefaultValue temp_11 = this ;
              GenericArray <FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (temp_11.readProperty_mValue ().readProperty_location (), GGS_string ("Uint32 value should be ≥ 0"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 155)) ;
            }
          }
          const GGS_integerAsDefaultValue temp_13 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_13.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 157)) ;
          var_found_4846 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_integerAsDefaultValue temp_14 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_14.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 160)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 160)).add_operation (GGS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 160)) ;
          var_found_4846 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        break ;
      }
      enumerator_4874.gotoNextObject () ;
      if (enumerator_4874.hasCurrentObject ()) {
        bool_0 = var_found_4846.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 143)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = var_found_4846.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 170)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_integerAsDefaultValue temp_16 = this ;
      GenericArray <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray17  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 171)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@doubleAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6444 = GGS_bool (false) ;
  UpEnumerator__5B_typeKind_5D_ enumerator_6473 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_6444.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 186)).isValidAndTrue () ;
  if (enumerator_6473.hasCurrentObject () && bool_0) {
    while (enumerator_6473.hasCurrentObject () && bool_0) {
      switch (enumerator_6473.current (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.galgas4", 189)) ;
          var_found_6444 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_6473.gotoNextObject () ;
      if (enumerator_6473.hasCurrentObject ()) {
        bool_0 = var_found_6444.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 186)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = var_found_6444.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 200)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 201)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@stringAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7465 = GGS_bool (false) ;
  UpEnumerator__5B_typeKind_5D_ enumerator_7493 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_7465.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 216)).isValidAndTrue () ;
  if (enumerator_7493.hasCurrentObject () && bool_0) {
    while (enumerator_7493.hasCurrentObject () && bool_0) {
      switch (enumerator_7493.current (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        {
          const GGS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_string () ;
          var_found_7465 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_stringAsDefaultValue temp_2 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("\"").add_operation (temp_2.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 222)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 222)) ;
          var_found_7465 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        break ;
      }
      enumerator_7493.gotoNextObject () ;
      if (enumerator_7493.hasCurrentObject ()) {
        bool_0 = var_found_7465.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 216)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_found_7465.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 233)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_stringAsDefaultValue temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mValue ().readProperty_location (), GGS_string ("only a string attribute can be initialized by a string constant"), fixItArray5  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 234)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedDates (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 243)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("now"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 244)) ;
  }
  {
  result_result.setter_insert (GGS_string ("distantPast"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 245)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GGS_stringset gOnceFunctionResult_predefinedDates ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedDates (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (nullptr,
                                                           releaseOnceFunctionResult_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedColors (Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 251)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("black"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 252)) ;
  }
  {
  result_result.setter_insert (GGS_string ("blue"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 253)) ;
  }
  {
  result_result.setter_insert (GGS_string ("brown"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 254)) ;
  }
  {
  result_result.setter_insert (GGS_string ("clear"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 255)) ;
  }
  {
  result_result.setter_insert (GGS_string ("control"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 256)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlDarkShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 257)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 258)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlLightHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 259)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 260)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 261)) ;
  }
  {
  result_result.setter_insert (GGS_string ("cyan"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 262)) ;
  }
  {
  result_result.setter_insert (GGS_string ("darkGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 263)) ;
  }
  {
  result_result.setter_insert (GGS_string ("disabledControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 264)) ;
  }
  {
  result_result.setter_insert (GGS_string ("gray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 265)) ;
  }
  {
  result_result.setter_insert (GGS_string ("green"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 266)) ;
  }
  {
  result_result.setter_insert (GGS_string ("grid"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 267)) ;
  }
  {
  result_result.setter_insert (GGS_string ("header"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 268)) ;
  }
  {
  result_result.setter_insert (GGS_string ("headerText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 269)) ;
  }
  {
  result_result.setter_insert (GGS_string ("highlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 270)) ;
  }
  {
  result_result.setter_insert (GGS_string ("keyboardFocusIndicator"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 271)) ;
  }
  {
  result_result.setter_insert (GGS_string ("knob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 272)) ;
  }
  {
  result_result.setter_insert (GGS_string ("lightGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 273)) ;
  }
  {
  result_result.setter_insert (GGS_string ("magenta"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 274)) ;
  }
  {
  result_result.setter_insert (GGS_string ("orange"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 275)) ;
  }
  {
  result_result.setter_insert (GGS_string ("purple"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 276)) ;
  }
  {
  result_result.setter_insert (GGS_string ("red"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 277)) ;
  }
  {
  result_result.setter_insert (GGS_string ("scrollBar"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 278)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControl"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 279)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 280)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedKnob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 281)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItem"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 282)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItemText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 283)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedTextBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 284)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 285)) ;
  }
  {
  result_result.setter_insert (GGS_string ("shadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 286)) ;
  }
  {
  result_result.setter_insert (GGS_string ("textBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 287)) ;
  }
  {
  result_result.setter_insert (GGS_string ("white"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 288)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 289)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrame"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 290)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrameText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 291)) ;
  }
  {
  result_result.setter_insert (GGS_string ("yellow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 292)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GGS_stringset gOnceFunctionResult_predefinedColors ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedColors (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (nullptr,
                                                            releaseOnceFunctionResult_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@identifierAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument__5F_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_10327 = GGS_bool (false) ;
  UpEnumerator__5B_typeKind_5D_ enumerator_10355 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_10327.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 303)).isValidAndTrue () ;
  if (enumerator_10355.hasCurrentObject () && bool_0) {
    while (enumerator_10355.hasCurrentObject () && bool_0) {
      switch (enumerator_10355.current (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_10327 = GGS_bool (true) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 307)).getter_contains (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 307)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GalgasBool test_3 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (GalgasBool::boolFalse == test_3) {
                GalgasBool test_5 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (GalgasBool::boolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  GenericArray <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 313)) ;
                }
              }
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            GenericArray <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 316)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_10327 = GGS_bool (true) ;
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            GenericArray <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 323)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_10327 = GGS_bool (true) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 330)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_11422_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_11453_constantMap_1 ;
          GGS_enumFuncMap extractedValue_11466__2 ;
          enumerator_10355.current (HERE).getAssociatedValuesFor_enumType (extractedValue_11422_enumTypeName_0, extractedValue_11453_constantMap_1, extractedValue_11466__2) ;
          var_found_10327 = GGS_bool (true) ;
          GalgasBool test_19 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_11453_constantMap_1.getter_contains (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 334)).boolEnum () ;
            if (GalgasBool::boolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_11422_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 335)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 335)) ;
            }
          }
          if (GalgasBool::boolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            GenericArray <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_11422_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 338)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 337)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11837__0 ;
          GGS_bool extractedValue_11837__1 ;
          enumerator_10355.current (HERE).getAssociatedValuesFor_entityType (extractedValue_11837__0, extractedValue_11837__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 342)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11912__0 ;
          enumerator_10355.current (HERE).getAssociatedValuesFor_classType (extractedValue_11912__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 344)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 346)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_10327 = GGS_bool (true) ;
          GalgasBool test_31 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (GalgasBool::boolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            GenericArray <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 352)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariLength type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 355)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariAngleType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariAngle type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 357)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_canariLengthUnitType:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid CanariLengthUnit type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 359)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 361)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          GenericArray <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 363)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_45 = this ;
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (temp_45.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray46  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 365)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_47 = this ;
          GenericArray <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (temp_47.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray48  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 367)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_49 = this ;
          GenericArray <FixItDescription> fixItArray50 ;
          inCompiler->emitSemanticError (temp_49.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray50  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 369)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          GalgasBool test_51 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_51) {
            const GGS_identifierAsDefaultValue temp_52 = this ;
            test_51 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 371)).getter_contains (temp_52.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 371)).boolEnum () ;
            if (GalgasBool::boolTrue == test_51) {
              const GGS_identifierAsDefaultValue temp_53 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_53.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 372)) ;
              var_found_10327 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_51) {
            const GGS_identifierAsDefaultValue temp_54 = this ;
            GenericArray <FixItDescription> fixItArray55 ;
            inCompiler->emitSemanticError (temp_54.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray55  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 375)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_13169__0 ;
          enumerator_10355.current (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_13169__0) ;
          const GGS_identifierAsDefaultValue temp_56 = this ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (temp_56.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray57  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 378)) ;
        }
        break ;
      }
      enumerator_10355.gotoNextObject () ;
      if (enumerator_10355.hasCurrentObject ()) {
        bool_0 = var_found_10327.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 303)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_58 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_58) {
    test_58 = var_found_10327.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 381)).boolEnum () ;
    if (GalgasBool::boolTrue == test_58) {
      const GGS_identifierAsDefaultValue temp_59 = this ;
      GenericArray <FixItDescription> fixItArray60 ;
      inCompiler->emitSemanticError (temp_59.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray60  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 382)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS__5B_typeKind_5D_ constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_13710 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_13716_2 ; // Joker input parameter
  GGS_bool joker_13716_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_13710, joker_13716_2, joker_13716_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 395)) ;
  switch (var_kind_13710.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13762_type_0 ;
      GGS_propertyAccessibility extractedValue_13768__1 ;
      var_kind_13710.getAssociatedValuesFor_property (extractedValue_13762_type_0, extractedValue_13768__1) ;
      GGS_bool var_found_13781 = GGS_bool (false) ;
      UpEnumerator__5B_typeKind_5D_ enumerator_13808 (constinArgument_inAttributeActualTypeList) ;
      bool bool_1 = var_found_13781.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 399)).isValidAndTrue () ;
      if (enumerator_13808.hasCurrentObject () && bool_1) {
        while (enumerator_13808.hasCurrentObject () && bool_1) {
          var_found_13781 = GGS_bool (ComparisonKind::equal, extractedValue_13762_type_0.objectCompare (enumerator_13808.current (HERE))) ;
          enumerator_13808.gotoNextObject () ;
          if (enumerator_13808.hasCurrentObject ()) {
            bool_1 = var_found_13781.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 399)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_found_13781.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 402)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 403)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_14015__0 ;
      GGS_propertyAccessibility extractedValue_14015__1 ;
      GGS_bool extractedValue_14015__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_14015__3 ;
      var_kind_13710.getAssociatedValuesFor_toMany (extractedValue_14015__0, extractedValue_14015__1, extractedValue_14015__2, extractedValue_14015__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 406)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_14110__0 ;
      GGS_propertyAccessibility extractedValue_14110__1 ;
      GGS_bool extractedValue_14110__2 ;
      GGS_toOneOppositeRelationship extractedValue_14110__3 ;
      GGS_bool extractedValue_14110__4 ;
      var_kind_13710.getAssociatedValuesFor_toOne (extractedValue_14110__0, extractedValue_14110__1, extractedValue_14110__2, extractedValue_14110__3, extractedValue_14110__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 408)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_14215__0 ;
      GGS_bool extractedValue_14215__1 ;
      var_kind_13710.getAssociatedValuesFor_arrayController (extractedValue_14215__0, extractedValue_14215__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 410)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_14323__0 ;
      var_kind_13710.getAssociatedValuesFor_selectionController (extractedValue_14323__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 412)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 414)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@prefsAsDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_14723 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 423)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_14723 COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 424)) ;
  }
}

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
//Overriding extension proc '@autoLayoutViewClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 63)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 65)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@autoLayoutViewClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutViewClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutViewClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@autoLayoutViewClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_autoLayoutViewClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_autoLayoutViewClassDeclarationAST temp_2 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_3 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_4 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_5 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_6 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_7 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_8 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_9 = this ;
      const GGS_autoLayoutViewClassDeclarationAST temp_10 = this ;
      ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas4", 239)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), temp_9.readProperty_mParameterList (), temp_10.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 237)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_8399 ;
    GGS_bool var_handlesTableValueBinding_8424 ;
    GGS_bool var_hasEnabled_8461 ;
    GGS_bool var_hasHidden_8484 ;
    GGS_bool var_handlesGraphicControllerBinding_8506 ;
    const GGS_autoLayoutViewClassDeclarationAST temp_11 = this ;
    GGS_lstring joker_8384 ; // Joker input parameter
    GGS_bool joker_8545_3 ; // Joker input parameter
    GGS__5B_autoLayoutClassParameter_5D_ joker_8545_2 ; // Joker input parameter
    GGS_astAutoLayoutViewFunctionMap joker_8545_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (temp_11.readProperty_mSuperClassName (), joker_8384, var_hasRunAction_8399, var_handlesTableValueBinding_8424, var_hasEnabled_8461, var_hasHidden_8484, var_handlesGraphicControllerBinding_8506, joker_8545_3, joker_8545_2, joker_8545_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 250)) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutViewClassDeclarationAST temp_13 = this ;
      test_12 = temp_13.readProperty_mHasRunAction ().operator_and (var_hasRunAction_8399 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 260)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_autoLayoutViewClassDeclarationAST temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 261)) ;
      }
    }
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_autoLayoutViewClassDeclarationAST temp_17 = this ;
      test_16 = temp_17.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_8424 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 263)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        const GGS_autoLayoutViewClassDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 264)) ;
      }
    }
    GalgasBool test_20 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_20) {
      const GGS_autoLayoutViewClassDeclarationAST temp_21 = this ;
      test_20 = temp_21.readProperty_mHasEnabled ().operator_and (var_hasEnabled_8461 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 266)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_autoLayoutViewClassDeclarationAST temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray23  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 267)) ;
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      const GGS_autoLayoutViewClassDeclarationAST temp_25 = this ;
      test_24 = temp_25.readProperty_mHasHidden ().operator_and (var_hasHidden_8484 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 269)).boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        const GGS_autoLayoutViewClassDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 270)) ;
      }
    }
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      const GGS_autoLayoutViewClassDeclarationAST temp_29 = this ;
      test_28 = temp_29.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_8506 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 272)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        const GGS_autoLayoutViewClassDeclarationAST temp_30 = this ;
        GenericArray <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (temp_30.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray31  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 273)) ;
      }
    }
    {
    const GGS_autoLayoutViewClassDeclarationAST temp_32 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_33 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_34 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_35 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_36 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_37 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_38 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_39 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_40 = this ;
    const GGS_autoLayoutViewClassDeclarationAST temp_41 = this ;
    ioArgument_ioSemanticContext.mProperty_mAutolayoutViewClassMap.setter_insertKey (temp_32.readProperty_mClassName (), temp_33.readProperty_mSuperClassName (), temp_34.readProperty_mHasRunAction ().operator_or (var_hasRunAction_8399 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 279)), temp_35.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_8424 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 280)), temp_36.readProperty_mHasEnabled ().operator_or (var_hasEnabled_8461 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 281)), temp_37.readProperty_mHasHidden ().operator_or (var_hasHidden_8484 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 282)), temp_38.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_8506 COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 283)), temp_39.readProperty_mUserDefined (), temp_40.readProperty_mParameterList (), temp_41.readProperty_mAutoLayoutViewFunctionMap (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 276)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 12)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@atomicClassDeclarationAST nodeKey'
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

void routine_enterAtomicClassesIn_26_declarationList (GGS__5B_abstractDeclarationAST_5D_ & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.galgas4", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.galgas4", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.galgas4", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.galgas4", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.galgas4", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariLength").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 31)), GGS_typeKind::class_func_canariLengthType (SOURCE_FILE ("atomic-class.galgas4", 31)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 31)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariLengthUnit").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 32)), GGS_typeKind::class_func_canariLengthUnitType (SOURCE_FILE ("atomic-class.galgas4", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("CanariAngle").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 33)), GGS_typeKind::class_func_canariAngleType (SOURCE_FILE ("atomic-class.galgas4", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 35)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.galgas4", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 36)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.galgas4", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 37)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.galgas4", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 37)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 38)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.galgas4", 38)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 38)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 39)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.galgas4", 39)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 39)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.galgas4", 40)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.galgas4", 40)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 40)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@atomicClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyGenerationList temp_2 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 56)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.galgas4", 53)), GGS_propertyMap::init (inCompiler COMMA_HERE), GGS_actionMap::init (inCompiler COMMA_HERE), temp_2, inCompiler COMMA_SOURCE_FILE ("atomic-class.galgas4", 51)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                           const GGS__5B_lstring_5D_ constinArgument_inGraphvizList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("graphviz.galgas4", 29)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_lstring_5D_ enumerator_1072 (constinArgument_inGraphvizList) ;
      while (enumerator_1072.hasCurrentObject ()) {
        {
        routine_graphvizRootEntityAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1072.current (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 31)) ;
        }
        {
        routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (constinArgument_inSourceFileDirectory, constinArgument_inSemanticContext, enumerator_1072.current (HERE).readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 32)) ;
        }
        enumerator_1072.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                     const GGS_semanticContext constinArgument_inSemanticContext,
                                                     const GGS_string constinArgument_inRootEntityName,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 42)) ;
  GGS_stringset var_reachableEntityNameSet_1658 = temp_0 ;
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  temp_1.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 43)) ;
  GGS__5B_string_5D_ var_exploreArray_1718 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 44)) ;
  GGS__5B_string_5D_ var_nodeList_1768 = temp_2 ;
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 45)) ;
  GGS__5B_string_5D_ var_arrowList_1798 = temp_3 ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).isValid ()) {
    uint32_t variant_1815 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 46)).uintValue () ;
    bool loop_1815 = true ;
    while (loop_1815) {
      loop_1815 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1718.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_1815) {
        loop_1815 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_1718.getter_count (SOURCE_FILE ("graphviz.galgas4", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_1815 && (0 == variant_1815)) {
        loop_1815 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 46)) ;
      }
      if (loop_1815) {
        variant_1815 -= 1 ;
        GGS_string var_entityName_1936 ;
        {
        var_exploreArray_1718.setter_removeLast (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 47)) ;
        }
        GGS_string var_node_1956 = GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string ("[label=\"<"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)).add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 48)) ;
        GGS_classKind var_entityKind_2097 ;
        GGS_propertyMap var_propertyMap_2127 ;
        GGS_actionMap joker_2140_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_2140_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_1936.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 49)), var_entityKind_2097, var_propertyMap_2127, joker_2140_2, joker_2140_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 49)) ;
        GGS_string var_superEntityName_2197 ;
        GGS_bool joker_2214_3 ; // Joker input parameter
        GGS_bool joker_2214_2 ; // Joker input parameter
        GGS_bool joker_2214_1 ; // Joker input parameter
        var_entityKind_2097.method_extractEntity (var_superEntityName_2197, joker_2214_3, joker_2214_2, joker_2214_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 50)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_2197.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_1658.getter_contains (var_superEntityName_2197 COMMA_SOURCE_FILE ("graphviz.galgas4", 52)).operator_not (SOURCE_FILE ("graphviz.galgas4", 52)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_1658.setter_insert (var_superEntityName_2197, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 53)) ;
                }
                {
                var_exploreArray_1718.setter_append (var_superEntityName_2197, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 54)) ;
                }
              }
            }
            {
            var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (var_superEntityName_2197, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)).add_operation (GGS_string (" [dir=both arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 56)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_2588 (var_propertyMap_2127) ;
        while (enumerator_2588.hasCurrentObject ()) {
          switch (enumerator_2588.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            {
              GGS_typeKind extractedValue_2649_type_0 ;
              GGS_propertyAccessibility extractedValue_2655_accessibility_1 ;
              enumerator_2588.current_mKind (HERE).getAssociatedValuesFor_property (extractedValue_2649_type_0, extractedValue_2655_accessibility_1) ;
              switch (extractedValue_2655_accessibility_1.enumValue ()) {
              case GGS_propertyAccessibility::Enumeration::invalid:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_stored:
                {
                  var_node_1956.plusAssignOperation(GGS_string ("|").add_operation (extensionGetter_swiftTypeName (extractedValue_2649_type_0, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 63)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 63)) ;
                }
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_transient:
                break ;
              case GGS_propertyAccessibility::Enumeration::enum_computed:
                break ;
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_2943_typeName_0 ;
              GGS_propertyAccessibility extractedValue_2976_accessibility_1 ;
              GGS_bool extractedValue_2991__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_2994_optionKind_3 ;
              enumerator_2588.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_2943_typeName_0, extractedValue_2976_accessibility_1, extractedValue_2991__2, extractedValue_2994_optionKind_3) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_2976_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 70)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  var_node_1956.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string (">["), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (GGS_string ("] "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 71)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 71)) ;
                  switch (extractedValue_2994_optionKind_3.enumValue ()) {
                  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
                    {
                      GalgasBool test_7 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_7) {
                        test_7 = var_reachableEntityNameSet_1658.getter_contains (extractedValue_2943_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 74)).operator_not (SOURCE_FILE ("graphviz.galgas4", 74)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_7) {
                          {
                          var_reachableEntityNameSet_1658.setter_insert (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 75)) ;
                          }
                          {
                          var_exploreArray_1718.setter_append (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 76)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)).add_operation (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 79)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 78)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
                    {
                      GGS_lstring extractedValue_3511_oppositeName_0 ;
                      extractedValue_2994_optionKind_3.getAssociatedValuesFor_hasOpposite (extractedValue_3511_oppositeName_0) ;
                      GalgasBool test_8 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_8) {
                        test_8 = var_reachableEntityNameSet_1658.getter_contains (extractedValue_2943_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 81)).operator_not (SOURCE_FILE ("graphviz.galgas4", 81)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_8) {
                          {
                          var_reachableEntityNameSet_1658.setter_insert (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 82)) ;
                          }
                          {
                          var_exploreArray_1718.setter_append (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 83)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)).add_operation (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (extractedValue_3511_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 85)) ;
                      }
                    }
                    break ;
                  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
                    {
                      GGS_lstring extractedValue_3908__0 ;
                      extractedValue_2994_optionKind_3.getAssociatedValuesFor_hasDependance (extractedValue_3908__0) ;
                      GalgasBool test_9 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_9) {
                        test_9 = var_reachableEntityNameSet_1658.getter_contains (extractedValue_2943_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 88)).operator_not (SOURCE_FILE ("graphviz.galgas4", 88)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_9) {
                          {
                          var_reachableEntityNameSet_1658.setter_insert (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 89)) ;
                          }
                          {
                          var_exploreArray_1718.setter_append (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 90)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)).add_operation (extractedValue_2943_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 93)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 92)) ;
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_4293_typeName_0 ;
              GGS_propertyAccessibility extractedValue_4326_accessibility_1 ;
              GGS_bool extractedValue_4341__2 ;
              GGS_toOneOppositeRelationship extractedValue_4344_opposite_3 ;
              GGS_bool extractedValue_4354__4 ;
              enumerator_2588.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_4293_typeName_0, extractedValue_4326_accessibility_1, extractedValue_4341__2, extractedValue_4344_opposite_3, extractedValue_4354__4) ;
              GalgasBool test_10 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_10) {
                test_10 = extractedValue_4326_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 97)).boolEnum () ;
                if (GalgasBool::boolTrue == test_10) {
                  var_node_1956.plusAssignOperation(GGS_string ("|<").add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string (">"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (GGS_string ("\? "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 98)) ;
                  switch (extractedValue_4344_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_1658.getter_contains (extractedValue_4293_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 101)).operator_not (SOURCE_FILE ("graphviz.galgas4", 101)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_1658.setter_insert (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 102)) ;
                          }
                          {
                          var_exploreArray_1718.setter_append (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 103)) ;
                          }
                        }
                      }
                      {
                      var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)).add_operation (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 105)) ;
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_4946_oppositeName_0 ;
                      extractedValue_4344_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_4946_oppositeName_0) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = var_reachableEntityNameSet_1658.getter_contains (extractedValue_4293_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 109)).operator_not (SOURCE_FILE ("graphviz.galgas4", 109)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          {
                          var_reachableEntityNameSet_1658.setter_insert (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 110)) ;
                          }
                          {
                          var_exploreArray_1718.setter_append (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 111)) ;
                          }
                        }
                      }
                      GalgasBool test_13 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_13) {
                        test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_2588.current_lkey (HERE).readProperty_string ().objectCompare (extractedValue_4946_oppositeName_0.readProperty_string ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_13) {
                          {
                          var_arrowList_1798.setter_append (GGS_string ("  ").add_operation (var_entityName_1936, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (enumerator_2588.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)).add_operation (extractedValue_4293_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (extractedValue_4946_oppositeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)).add_operation (GGS_string (" [dir=both arrowtail=onormal arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 115)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 114)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_2588.gotoNextObject () ;
        }
        var_node_1956.plusAssignOperation(GGS_string ("\"]"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 121)) ;
        {
        var_nodeList_1768.setter_append (var_node_1956, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 122)) ;
        }
      }
    }
  }
  GGS_string var_s_5516 = GGS_string ("digraph G {\n") ;
  var_s_5516.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 126)) ;
  var_s_5516.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 127)) ;
  UpEnumerator__5B_string_5D_ enumerator_5644 (var_nodeList_1768) ;
  while (enumerator_5644.hasCurrentObject ()) {
    var_s_5516.plusAssignOperation(enumerator_5644.current (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 129)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 129)) ;
    enumerator_5644.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_5700 (var_arrowList_1798) ;
  while (enumerator_5700.hasCurrentObject ()) {
    var_s_5516.plusAssignOperation(enumerator_5700.current (HERE).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 132)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 132)) ;
    enumerator_5700.gotoNextObject () ;
  }
  var_s_5516.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 134)) ;
  GGS_string var_filePath_5762 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/graph-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 135)) ;
  GGS_string var_temp_5848 = var_filePath_5762.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 136)) ;
  var_temp_5848.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 136)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'graphvizRootEntityStrongAnalysis???'
//
//--------------------------------------------------------------------------------------------------

void routine_graphvizRootEntityStrongAnalysis_3F__3F__3F_ (const GGS_string constinArgument_inSourceFileDirectory,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           const GGS_string constinArgument_inRootEntityName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 150)) ;
  temp_0.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 150)) ;
  GGS_stringset var_reachableEntityNameSet_6513 = temp_0 ;
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  temp_1.plusPlusAssignOperation (constinArgument_inRootEntityName  COMMA_SOURCE_FILE ("graphviz.galgas4", 151)) ;
  GGS__5B_string_5D_ var_exploreArray_6573 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 152)) ;
  GGS__5B_string_5D_ var_nodeList_6623 = temp_2 ;
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 153)) ;
  GGS__5B_string_5D_ var_arrowList_6653 = temp_3 ;
  GGS_entityStrongReferenceGraph var_entityStrongReferenceGraph_6702 = GGS_entityStrongReferenceGraph::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 155)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 155)).isValid ()) {
    uint32_t variant_6737 = constinArgument_inSemanticContext.readProperty_mClassMap ().getter_count (SOURCE_FILE ("graphviz.galgas4", 155)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 155)).uintValue () ;
    bool loop_6737 = true ;
    while (loop_6737) {
      loop_6737 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6573.getter_count (SOURCE_FILE ("graphviz.galgas4", 155)).objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_6737) {
        loop_6737 = GGS_bool (ComparisonKind::greaterThan, var_exploreArray_6573.getter_count (SOURCE_FILE ("graphviz.galgas4", 155)).objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_6737 && (0 == variant_6737)) {
        loop_6737 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("graphviz.galgas4", 155)) ;
      }
      if (loop_6737) {
        variant_6737 -= 1 ;
        GGS_string var_entityName_6858 ;
        {
        var_exploreArray_6573.setter_removeLast (var_entityName_6858, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 156)) ;
        }
        {
        var_nodeList_6623.setter_append (var_entityName_6858, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 157)) ;
        }
        {
        var_entityStrongReferenceGraph_6702.setter_addNode (GGS_lstring::init_21__21_ (var_entityName_6858, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 158)), inCompiler COMMA_HERE), var_entityName_6858, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 158)) ;
        }
        GGS_classKind var_entityKind_7053 ;
        GGS_propertyMap var_propertyMap_7083 ;
        GGS_actionMap joker_7096_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_7096_1 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (var_entityName_6858.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 159)), var_entityKind_7053, var_propertyMap_7083, joker_7096_2, joker_7096_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 159)) ;
        GGS_string var_superEntityName_7153 ;
        GGS_bool joker_7170_3 ; // Joker input parameter
        GGS_bool joker_7170_2 ; // Joker input parameter
        GGS_bool joker_7170_1 ; // Joker input parameter
        var_entityKind_7053.method_extractEntity (var_superEntityName_7153, joker_7170_3, joker_7170_2, joker_7170_1, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 160)) ;
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::notEqual, var_superEntityName_7153.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_reachableEntityNameSet_6513.getter_contains (var_superEntityName_7153 COMMA_SOURCE_FILE ("graphviz.galgas4", 162)).operator_not (SOURCE_FILE ("graphviz.galgas4", 162)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                {
                var_reachableEntityNameSet_6513.setter_insert (var_superEntityName_7153, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 163)) ;
                }
                {
                var_exploreArray_6573.setter_append (var_superEntityName_7153, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 164)) ;
                }
              }
            }
            {
            var_arrowList_6653.setter_append (var_superEntityName_7153.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 166)).add_operation (var_entityName_6858, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 166)).add_operation (GGS_string (" [arrowtail=dot arrowhead=normal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 166)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 166)) ;
            }
            {
            var_entityStrongReferenceGraph_6702.setter_addEdge (GGS_lstring::init_21__21_ (var_superEntityName_7153, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 167)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (var_entityName_6858, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 167)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 167)) ;
            }
          }
        }
        UpEnumerator_propertyMap enumerator_7636 (var_propertyMap_7083) ;
        while (enumerator_7636.hasCurrentObject ()) {
          switch (enumerator_7636.current_mKind (HERE).enumValue ()) {
          case GGS_propertyKind::Enumeration::invalid:
            break ;
          case GGS_propertyKind::Enumeration::enum_property:
            break ;
          case GGS_propertyKind::Enumeration::enum_arrayController:
            break ;
          case GGS_propertyKind::Enumeration::enum_selectionController:
            break ;
          case GGS_propertyKind::Enumeration::enum_toMany:
            {
              GGS_lstring extractedValue_7803_typeName_0 ;
              GGS_propertyAccessibility extractedValue_7836_accessibility_1 ;
              GGS_bool extractedValue_7852__2 ;
              GGS_toManyRelationshipOptionAST extractedValue_7852__3 ;
              enumerator_7636.current_mKind (HERE).getAssociatedValuesFor_toMany (extractedValue_7803_typeName_0, extractedValue_7836_accessibility_1, extractedValue_7852__2, extractedValue_7852__3) ;
              {
              var_arrowList_6653.setter_append (var_entityName_6858.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 175)).add_operation (extractedValue_7803_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 175)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=veevee]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 175)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 175)) ;
              }
              {
              var_entityStrongReferenceGraph_6702.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_6858, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 176)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_7803_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 176)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 176)) ;
              }
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = extractedValue_7836_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 177)).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GalgasBool test_7 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_7) {
                    test_7 = var_reachableEntityNameSet_6513.getter_contains (extractedValue_7803_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 178)).operator_not (SOURCE_FILE ("graphviz.galgas4", 178)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_7) {
                      {
                      var_reachableEntityNameSet_6513.setter_insert (extractedValue_7803_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 179)) ;
                      }
                      {
                      var_exploreArray_6573.setter_append (extractedValue_7803_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 180)) ;
                      }
                    }
                  }
                }
              }
            }
            break ;
          case GGS_propertyKind::Enumeration::enum_toOne:
            {
              GGS_lstring extractedValue_8331_typeName_0 ;
              GGS_propertyAccessibility extractedValue_8364_accessibility_1 ;
              GGS_bool extractedValue_8379__2 ;
              GGS_toOneOppositeRelationship extractedValue_8382_opposite_3 ;
              GGS_bool extractedValue_8392_isWeak_4 ;
              enumerator_7636.current_mKind (HERE).getAssociatedValuesFor_toOne (extractedValue_8331_typeName_0, extractedValue_8364_accessibility_1, extractedValue_8379__2, extractedValue_8382_opposite_3, extractedValue_8392_isWeak_4) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = extractedValue_8392_isWeak_4.operator_not (SOURCE_FILE ("graphviz.galgas4", 184)).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  {
                  var_arrowList_6653.setter_append (var_entityName_6858.add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 185)).add_operation (extractedValue_8331_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 185)).add_operation (GGS_string (" [dir=both arrowtail=none arrowhead=onormal]"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 185)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 185)) ;
                  }
                  {
                  var_entityStrongReferenceGraph_6702.setter_addEdge (GGS_lstring::init_21__21_ (var_entityName_6858, GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 186)), inCompiler COMMA_HERE), GGS_lstring::init_21__21_ (extractedValue_8331_typeName_0.readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 186)), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 186)) ;
                  }
                }
              }
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = extractedValue_8364_accessibility_1.getter_isStored (SOURCE_FILE ("graphviz.galgas4", 188)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  switch (extractedValue_8382_opposite_3.enumValue ()) {
                  case GGS_toOneOppositeRelationship::Enumeration::invalid:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_none:
                    {
                      GalgasBool test_10 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_10) {
                        test_10 = var_reachableEntityNameSet_6513.getter_contains (extractedValue_8331_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 191)).operator_not (SOURCE_FILE ("graphviz.galgas4", 191)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_10) {
                          {
                          var_reachableEntityNameSet_6513.setter_insert (extractedValue_8331_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 192)) ;
                          }
                          {
                          var_exploreArray_6573.setter_append (extractedValue_8331_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 193)) ;
                          }
                        }
                      }
                    }
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToMany:
                    break ;
                  case GGS_toOneOppositeRelationship::Enumeration::enum_oppositeIsToOne:
                    {
                      GGS_lstring extractedValue_9021__0 ;
                      extractedValue_8382_opposite_3.getAssociatedValuesFor_oppositeIsToOne (extractedValue_9021__0) ;
                      GalgasBool test_11 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_11) {
                        test_11 = var_reachableEntityNameSet_6513.getter_contains (extractedValue_8331_typeName_0.readProperty_string () COMMA_SOURCE_FILE ("graphviz.galgas4", 197)).operator_not (SOURCE_FILE ("graphviz.galgas4", 197)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_11) {
                          {
                          var_reachableEntityNameSet_6513.setter_insert (extractedValue_8331_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 198)) ;
                          }
                          {
                          var_exploreArray_6573.setter_append (extractedValue_8331_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 199)) ;
                          }
                        }
                      }
                    }
                    break ;
                  }
                }
              }
            }
            break ;
          }
          enumerator_7636.gotoNextObject () ;
        }
      }
    }
  }
  GGS_string var_s_9285 = GGS_string ("digraph G {\n") ;
  var_s_9285.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 208)) ;
  var_s_9285.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 209)) ;
  UpEnumerator__5B_string_5D_ enumerator_9413 (var_nodeList_6623) ;
  while (enumerator_9413.hasCurrentObject ()) {
    var_s_9285.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9413.current (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 211)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 211)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 211)) ;
    enumerator_9413.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_9476 (var_arrowList_6653) ;
  while (enumerator_9476.hasCurrentObject ()) {
    var_s_9285.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_9476.current (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 214)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 214)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 214)) ;
    enumerator_9476.gotoNextObject () ;
  }
  var_s_9285.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 216)) ;
  GGS_string var_filePath_9545 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 217)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 217)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 217)) ;
  GGS_string var_temp_9632 = var_filePath_9545.getter_deletingLastPathComponent (SOURCE_FILE ("graphviz.galgas4", 218)) ;
  var_temp_9632.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 218)) ;
  GGS_bool joker_9746 ; // Joker input parameter
  var_s_9285.method_writeToFileWhenDifferentContents (var_filePath_9545, joker_9746, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 219)) ;
  var_filePath_9545 = constinArgument_inSourceFileDirectory.add_operation (GGS_string ("/models/strong-dep-"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 221)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 221)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 221)) ;
  GGS_string var_temp_32__9860 = var_entityStrongReferenceGraph_6702.getter_graphviz (SOURCE_FILE ("graphviz.galgas4", 222)) ;
  GGS_bool joker_9956 ; // Joker input parameter
  var_temp_32__9860.method_writeToFileWhenDifferentContents (var_filePath_9545, joker_9956, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 222)) ;
  GGS__5B_string_5D_ var_undefinedNodeList_9998 = var_entityStrongReferenceGraph_6702.getter_undefinedNodeKeyList (SOURCE_FILE ("graphviz.galgas4", 224)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::greaterThan, var_undefinedNodeList_9998.getter_count (SOURCE_FILE ("graphviz.galgas4", 225)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      GGS_string var_s_10112 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 226)).add_operation (GGS_string (" graph , the following entities are not defined"), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 226)) ;
      UpEnumerator__5B_string_5D_ enumerator_10210 (var_undefinedNodeList_9998) ;
      while (enumerator_10210.hasCurrentObject ()) {
        var_s_10112.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_10210.current (HERE), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 228)) ;
        enumerator_10210.gotoNextObject () ;
      }
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 230)), var_s_10112, fixItArray13  COMMA_SOURCE_FILE ("graphviz.galgas4", 230)) ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_9998.getter_count (SOURCE_FILE ("graphviz.galgas4", 233)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS__5B_lstring_5D_ temp_15 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 235)) ;
      temp_15.plusPlusAssignOperation (constinArgument_inRootEntityName.getter_nowhere (SOURCE_FILE ("graphviz.galgas4", 235))  COMMA_SOURCE_FILE ("graphviz.galgas4", 235)) ;
      GGS_stringset temp_16 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 236)) ;
      GGS__5B_lstring_5D_ var_accessibleNodeList_10369 = var_entityStrongReferenceGraph_6702.getter_accessibleNodesFrom (temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 234)) ;
      GGS_stringset var_accessibleNodeSet_10496 = GGS_stringset::init_21_lstringArray (var_accessibleNodeList_10369, inCompiler COMMA_HERE) ;
      UpEnumerator__5B_string_5D_ enumerator_10579 (var_nodeList_6623) ;
      while (enumerator_10579.hasCurrentObject ()) {
        GalgasBool test_17 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_17) {
          test_17 = var_accessibleNodeSet_10496.getter_contains (enumerator_10579.current (HERE) COMMA_SOURCE_FILE ("graphviz.galgas4", 240)).operator_not (SOURCE_FILE ("graphviz.galgas4", 240)).boolEnum () ;
          if (GalgasBool::boolTrue == test_17) {
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 241)), enumerator_10579.current (HERE).add_operation (GGS_string (" entity is not reachable via strong reference from "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 241)).add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 241)), fixItArray18  COMMA_SOURCE_FILE ("graphviz.galgas4", 241)) ;
          }
        }
        enumerator_10579.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_undefinedNodeList_9998.getter_count (SOURCE_FILE ("graphviz.galgas4", 246)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      GGS__5B_lstring_5D_ var_unsortedNodeList_10896 ;
      GGS__5B_string_5D_ joker_10887 ; // Joker input parameter
      var_entityStrongReferenceGraph_6702.method_circularities (joker_10887, var_unsortedNodeList_10896 COMMA_SOURCE_FILE ("graphviz.galgas4", 247)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        test_20 = GGS_bool (ComparisonKind::greaterThan, var_unsortedNodeList_10896.getter_count (SOURCE_FILE ("graphviz.galgas4", 248)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          GGS_string var_s_10963 = GGS_string ("for ").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 249)).add_operation (GGS_string (" graph, "), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 249)).add_operation (var_unsortedNodeList_10896.getter_count (SOURCE_FILE ("graphviz.galgas4", 249)).getter_string (SOURCE_FILE ("graphviz.galgas4", 249)), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 249)) ;
          var_s_10963.plusAssignOperation(GGS_string (" entities are involved in a strong reference cycle"), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 250)) ;
          UpEnumerator__5B_lstring_5D_ enumerator_11117 (var_unsortedNodeList_10896) ;
          while (enumerator_11117.hasCurrentObject ()) {
            var_s_10963.plusAssignOperation(GGS_string ("\n -- ").add_operation (enumerator_11117.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 252)), inCompiler  COMMA_SOURCE_FILE ("graphviz.galgas4", 252)) ;
            enumerator_11117.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticWarning (GGS_location::class_func_nowhere (SOURCE_FILE ("graphviz.galgas4", 254)), var_s_10963, fixItArray21  COMMA_SOURCE_FILE ("graphviz.galgas4", 254)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProject_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                   const GGS_string constinArgument_inXcodeProjectString,
                                                   const GGS_stringset constinArgument_inGeneratedFileSet,
                                                   const GGS_string constinArgument_projectName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inXcodeProjectString.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.galgas4", 39)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_string constinArgument_inXcodeProjectString,
                                                           const GGS_stringset constinArgument_inGeneratedFileSet,
                                                           const GGS_string constinArgument_projectName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor var_xcodeProject_1556 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1637 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1658 = GGS_string ("10.10") ;
  {
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 56)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\"")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 57)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 58)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 59)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 60)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_THREADSAFE_STATICS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 61)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 62)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 63)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 64)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 65)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 66)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 67)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 68)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 69)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 70)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 71)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 72)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 73)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 74)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 75)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 76)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_PEDANTIC = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 78)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_SHADOW = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 79)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_SIGN_COMPARE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 80)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 81)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 82)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 83)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 84)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_LABEL = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 85)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VALUE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 86)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 87)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("HEADER_SEARCH_PATHS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 88)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1658, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 89))  COMMA_SOURCE_FILE ("xcode-project.galgas4", 89)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("SDKROOT = ").add_operation (var_SDK_1637, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 90))  COMMA_SOURCE_FILE ("xcode-project.galgas4", 90)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("COPY_PHASE_STRIP = NO")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 91)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("SWIFT_VERSION = 4.2")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 92)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\"")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1556, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 55)) ;
  }
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 96)) ;
  GGS__5B_string_5D_ var_swiftFileRefList_3413 = temp_1 ;
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 97)) ;
  GGS__5B_string_5D_ var_resourceFileRefList_3451 = temp_2 ;
  GGS_stringset var_generatedFileSet_3482 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3482.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 99)) ;
  }
  GGS__5B_string_5D_ var_cppFileRefs_3572 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mFileRefs_3606 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mmFileRefs_3638 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_frameworkFileRefs_3671 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4066 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3482, var_cppFileRefs_3572, var_mFileRefs_3606, var_mmFileRefs_3638, var_swiftFileRefList_3413, var_frameworkFileRefs_3671, var_resourceFileRefList_3451, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 116)) ;
  }
  GGS__5B_string_5D_ var_cppFileRefs_32__4146 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mFileRefs_32__4181 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_mmFileRefs_32__4214 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_frameworkFileRefs_32__4248 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("Info.plist")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1556, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4146, var_mFileRefs_32__4181, var_mmFileRefs_32__4214, var_swiftFileRefList_3413, var_frameworkFileRefs_32__4248, var_resourceFileRefList_3451, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1556, var_groupRef_4066, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 133)) ;
  }
  {
  GGS__5B_string_5D_ temp_4 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 139)) ;
  GGS__5B_string_5D_ temp_5 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 142)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()")  COMMA_SOURCE_FILE ("xcode-project.galgas4", 143)) ;
  GGS__5B_string_5D_ temp_6 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 145)) ;
  GGS__5B__32_string_5D_ temp_7 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 146)) ;
  GGS_string joker_5157 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1556, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3413, temp_4, var_resourceFileRefList_3451, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 147)), joker_5157, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 135)) ;
  }
  GGS_string var_sourceDir_5207 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1556, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 153)), var_sourceDir_5207.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  temp_8.plusPlusAssignOperation (constinArgument_projectName  COMMA_SOURCE_FILE ("xcode-project.galgas4", 161)) ;
  GGS_string var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.galgas4", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5207, GGS_string ("Info.plist"), var_s_5470, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 163)) ;
  }
  var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5207, GGS_string ("MainMenu.xib"), var_s_5470, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 171)) ;
  }
  var_s_5470 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.galgas4", 176))) ;
  GGS_bool joker_5963 ; // Joker input parameter
  var_s_5470.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 178)), joker_5963, inCompiler COMMA_SOURCE_FILE ("xcode-project.galgas4", 177)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (Compiler * /* inCompiler */,
                                                                 const GGS_string & in_PROJECT_5F_NAME
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" propertyAccessControl=\"none\">\n    <dependencies>\n        <deployment version=\"1090\" identifier=\"macosx\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n    </dependencies>\n    <objects>\n        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n            <items>\n                <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"56\">\n                    <menu key=\"submenu\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" systemMenu=\"apple\" id=\"57\">\n                        <items>\n                            <menuItem title=\"About ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"58\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Preferences…\" keyEquivalent=\",\" id=\"129\"/>\n                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Services\" id=\"131\">\n                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Hide ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"h\" id=\"134\">\n                                <connections>\n                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Show All\" id=\"150\">\n                                <connections>\n                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Quit ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"q\" id=\"136\">\n                                <connections>\n                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"File\" id=\"83\">\n                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n                        <items>\n                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n                                <connections>\n                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open…\" keyEquivalent=\"o\" id=\"72\">\n                                <connections>\n                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open Recent\" id=\"124\">\n                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n                                    <items>\n                                        <menuItem title=\"Clear Menu\" id=\"126\">\n                                            <connections>\n                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n                                <connections>\n                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Save…\" keyEquivalent=\"s\" id=\"75\">\n                                <connections>\n                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Revert to Saved\" id=\"112\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Print…\" keyEquivalent=\"p\" id=\"78\">\n                                <connections>\n                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Edit\" id=\"217\">\n                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n                        <items>\n                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n                                <connections>\n                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n                                <connections>\n                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n                                <connections>\n                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n                                <connections>\n                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Delete\" id=\"202\">\n                                <connections>\n                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n                                <connections>\n                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Find\" id=\"218\">\n                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n                                    <items>\n                                        <menuItem title=\"Find…\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find and Replace…\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n                                            <connections>\n                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n                                    <items>\n                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n                                            <connections>\n                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n                                            <connections>\n                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n                                            <connections>\n                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n                                            <connections>\n                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Substitutions\" id=\"348\">\n                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n                                    <items>\n                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n                                            <connections>\n                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n                                            <connections>\n                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Text Replacement\" id=\"462\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Transformations\" id=\"450\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n                                    <items>\n                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Capitalize\" id=\"466\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Speech\" id=\"211\">\n                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n                                    <items>\n                                        <menuItem title=\"Start Speaking\" id=\"196\">\n                                            <connections>\n                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n                                            <connections>\n                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Format\" id=\"375\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n                        <items>\n                            <menuItem title=\"Font\" id=\"377\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n                                    <items>\n                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n                                            <connections>\n                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n                                            <connections>\n                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n                                        <menuItem title=\"Kern\" id=\"397\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"416\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"417\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Tighten\" id=\"418\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Loosen\" id=\"419\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Ligature\" id=\"398\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"412\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"413\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use All\" id=\"414\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Baseline\" id=\"399\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"406\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Superscript\" id=\"407\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Subscript\" id=\"408\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Raise\" id=\"409\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Lower\" id=\"410\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n                                            <connections>\n                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Text\" id=\"496\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n                                    <items>\n                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n                                            <connections>\n                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n                                            <connections>\n                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Justify\" id=\"500\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n                                            <connections>\n                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n                                        <menuItem title=\"Writing Direction\" id=\"503\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n                                                <items>\n                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"510\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"511\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"512\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"515\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"516\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"517\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n                                        <menuItem title=\"Show Ruler\" id=\"505\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"View\" id=\"295\">\n                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n                        <items>\n                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Customize Toolbar…\" id=\"298\">\n                                <connections>\n                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Window\" id=\"19\">\n                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n                        <items>\n                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n                                <connections>\n                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Zoom\" id=\"239\">\n                                <connections>\n                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Bring All to Front\" id=\"5\">\n                                <connections>\n                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Help\" id=\"490\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n                        <items>\n                            <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" Help\" keyEquivalent=\"\?\" id=\"492\">\n                                <connections>\n                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n            </items>\n        </menu>\n        <window identifier=\"PrefWindow\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n            <view key=\"contentView\" id=\"372\">\n                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n                <autoresizingMask key=\"autoresizingMask\"/>\n            </view>\n        </window>\n        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n            <connections>\n                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n            </connections>\n        </customObject>\n        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n    </objects>\n</document>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (Compiler * /* inCompiler */,
                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                   const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                   const GGS_string & in_VERSION_5F_STRING,
                                                                   const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>CFBundleSignature</key>\n <string>\?\?\?\?</string>\n <key>LSMinimumSystemVersion</key>\n <string>10.9</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>EBApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_1016_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_1016 (in_HANDLED_5F_EXTENSION_5F_SET) ;
    while (enumerator_1016.hasCurrentObject ()) {
      result.appendString ("  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n") ;
      enumerator_1016.gotoNextObject () ;
      index_1016_.increment () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_PROJECT_5F_NAME
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/env python\n# -*- coding: UTF-8 -*-\n\n//-----------------------------------------------------------------------------*\n\nimport subprocess, os, sys, atexit\n\n//-----------------------------------------------------------------------------*\n\ndef cleanup () :\n  if buildProcess.poll () == None :\n    buildProcess.kill ()\n    print 'Build process killed'\n\n//-----------------------------------------------------------------------------*\n\n//------------------ Register a function for killing build subprocess\natexit.register (cleanup)\n//------------------ Get compiler as first argument\ncompiler = \"eb\" # Default compiler\nif len (sys.argv) > 1 :\n  compiler = sys.argv [1]\n//------------------ Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n//------------------ Build\nprint \"+ \" + compiler + \" ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"\nbuildProcess = subprocess.Popen ([compiler, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"])\nbuildProcess.wait ()\n//------------------ Xcode build\nif buildProcess.returncode == 0 :\n  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n  buildProcess.wait ()\n//------------------ Result\nif buildProcess.returncode != 0 :\n  sys.exit (buildProcess.returncode)\n\n//-----------------------------------------------------------------------------*\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildAutoLayoutBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                             const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ constinArgument_inBindingSpecificationListMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ enumerator_3509 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_3509.hasCurrentObject ()) {
    GGS__5B_outletBindingSpecificationModel_5D_ temp_0 = GGS__5B_outletBindingSpecificationModel_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 98)) ;
    GGS__5B_outletBindingSpecificationModel_5D_ var_outletBindingSpecificationModelList_3585 = temp_0 ;
    UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ enumerator_3658 (enumerator_3509.current (HERE).readProperty_mOutletClassBindingSpecificationModelList ()) ;
    while (enumerator_3658.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_3658.current (HERE).readProperty_mModelTypeName ().readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_outletBindingSpecificationModelList_3585.plusPlusAssignOperation (GGS_outletBindingSpecificationModel::init_21__21_ (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 102)), enumerator_3658.current (HERE).readProperty_mModelShouldBeWritableProperty (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 101)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4070 ;
        GGS_propertyMap joker_4081_3 ; // Joker input parameter
        GGS_actionMap joker_4081_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4081_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_3658.current (HERE).readProperty_mModelTypeName (), var_classKind_4070, joker_4081_3, joker_4081_2, joker_4081_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 106)) ;
        GGS_typeKind var_typeKind_4108 ;
        switch (var_classKind_4070.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_3658.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 110)) ;
            var_typeKind_4108.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_4292_kind_0 ;
            var_classKind_4070.getAssociatedValuesFor_atomic (extractedValue_4292_kind_0) ;
            var_typeKind_4108 = extractedValue_4292_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_4349__0 ;
            var_classKind_4070.getAssociatedValuesFor_document (extractedValue_4349__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_3658.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 114)) ;
            var_typeKind_4108.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_4474__0 ;
            GGS_bool extractedValue_4474__1 ;
            GGS_bool extractedValue_4474__2 ;
            GGS_bool extractedValue_4474__3 ;
            var_classKind_4070.getAssociatedValuesFor_entity (extractedValue_4474__0, extractedValue_4474__1, extractedValue_4474__2, extractedValue_4474__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_3658.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 116)) ;
            var_typeKind_4108.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_3585.plusPlusAssignOperation (GGS_outletBindingSpecificationModel::init_21__21_ (var_typeKind_4108, enumerator_3658.current (HERE).readProperty_mModelShouldBeWritableProperty (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 118)) ;
      }
      enumerator_3658.gotoNextObject () ;
    }
    GGS__5B_controllerBindingOptionDecorated_5D_ temp_5 = GGS__5B_controllerBindingOptionDecorated_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 121)) ;
    GGS__5B_controllerBindingOptionDecorated_5D_ var_controllerBindingOptionDecoratedList_4756 = temp_5 ;
    UpEnumerator__5B_controllerBindingOption_5D_ enumerator_4831 (enumerator_3509.current (HERE).readProperty_mBindingOptionList ()) ;
    while (enumerator_4831.hasCurrentObject ()) {
      GGS_classKind var_classKind_4934 ;
      GGS_propertyMap joker_4945_3 ; // Joker input parameter
      GGS_actionMap joker_4945_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4945_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4831.current (HERE).readProperty_mOptionTypeName (), var_classKind_4934, joker_4945_3, joker_4945_2, joker_4945_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 123)) ;
      GGS_typeKind var_typeKind_4970 ;
      switch (var_classKind_4934.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_4831.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 127)) ;
          var_typeKind_4970.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5148_kind_0 ;
          var_classKind_4934.getAssociatedValuesFor_atomic (extractedValue_5148_kind_0) ;
          var_typeKind_4970 = extractedValue_5148_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_5201__0 ;
          var_classKind_4934.getAssociatedValuesFor_document (extractedValue_5201__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_4831.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 131)) ;
          var_typeKind_4970.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_5324__0 ;
          GGS_bool extractedValue_5324__1 ;
          GGS_bool extractedValue_5324__2 ;
          GGS_bool extractedValue_5324__3 ;
          var_classKind_4934.getAssociatedValuesFor_entity (extractedValue_5324__0, extractedValue_5324__1, extractedValue_5324__2, extractedValue_5324__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_4831.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 133)) ;
          var_typeKind_4970.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_4756.plusPlusAssignOperation (GGS_controllerBindingOptionDecorated::init_21__21_ (var_typeKind_4970, enumerator_4831.current (HERE).readProperty_mOptionName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 135)) ;
      enumerator_4831.gotoNextObject () ;
    }
    GGS_autoLayoutViewBindingSpecificationMap var_bindingMap_5607 ;
    GGS_lstring var_outletSuperClassName_5635 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mAutoLayoutBindingSpecificationMap ().getter_contains (enumerator_3509.current (HERE).readProperty_mOutletClassName ().readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 140)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_removeKey (enumerator_3509.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_5635, var_bindingMap_5607, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 141)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_5607 = GGS_autoLayoutViewBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6037_8 ; // Joker input parameter
      GGS_bool joker_6037_7 ; // Joker input parameter
      GGS_bool joker_6037_6 ; // Joker input parameter
      GGS_bool joker_6037_5 ; // Joker input parameter
      GGS_bool joker_6037_4 ; // Joker input parameter
      GGS_bool joker_6037_3 ; // Joker input parameter
      GGS__5B_autoLayoutClassParameter_5D_ joker_6037_2 ; // Joker input parameter
      GGS_astAutoLayoutViewFunctionMap joker_6037_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mAutolayoutViewClassMap ().method_searchKey (enumerator_3509.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_5635, joker_6037_8, joker_6037_7, joker_6037_6, joker_6037_5, joker_6037_4, joker_6037_3, joker_6037_2, joker_6037_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 144)) ;
    }
    {
    var_bindingMap_5607.setter_insertKey (enumerator_3509.current (HERE).readProperty_mBindingName (), var_outletBindingSpecificationModelList_3585, var_controllerBindingOptionDecoratedList_4756, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 146)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mAutoLayoutBindingSpecificationMap.setter_insertKey (enumerator_3509.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_5635, var_bindingMap_5607, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 151)) ;
    }
    enumerator_3509.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildBindingSpecificationMap&?'
//
//--------------------------------------------------------------------------------------------------

void routine_buildBindingSpecificationMap_26__3F_ (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                   const GGS__5B_outletClassBindingSpecification_5D_ constinArgument_inBindingSpecificationListMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator__5B_outletClassBindingSpecification_5D_ enumerator_4305 (constinArgument_inBindingSpecificationListMap) ;
  while (enumerator_4305.hasCurrentObject ()) {
    GGS__5B_outletBindingSpecificationModel_5D_ temp_0 = GGS__5B_outletBindingSpecificationModel_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 130)) ;
    GGS__5B_outletBindingSpecificationModel_5D_ var_outletBindingSpecificationModelList_4381 = temp_0 ;
    UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ enumerator_4454 (enumerator_4305.current (HERE).readProperty_mOutletClassBindingSpecificationModelList ()) ;
    while (enumerator_4454.hasCurrentObject ()) {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, enumerator_4454.current (HERE).readProperty_mModelTypeName ().readProperty_string ().objectCompare (GGS_string ("enum"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          var_outletBindingSpecificationModelList_4381.plusPlusAssignOperation (GGS_outletBindingSpecificationModel::init_21__21_ (GGS_typeKind::class_func_enumType (GGS_string::makeEmptyString (), GGS_enumConstantMap::init (inCompiler COMMA_HERE), GGS_enumFuncMap::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 134)), enumerator_4454.current (HERE).readProperty_mModelShouldBeWritableProperty (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 133)) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GGS_classKind var_classKind_4866 ;
        GGS_propertyMap joker_4877_3 ; // Joker input parameter
        GGS_actionMap joker_4877_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4877_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_4454.current (HERE).readProperty_mModelTypeName (), var_classKind_4866, joker_4877_3, joker_4877_2, joker_4877_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 138)) ;
        GGS_typeKind var_typeKind_4904 ;
        switch (var_classKind_4866.enumValue ()) {
        case GGS_classKind::Enumeration::invalid:
          break ;
        case GGS_classKind::Enumeration::enum_prefs:
          {
            GenericArray <FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_4454.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray2  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 142)) ;
            var_typeKind_4904.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_atomic:
          {
            GGS_typeKind extractedValue_5088_kind_0 ;
            var_classKind_4866.getAssociatedValuesFor_atomic (extractedValue_5088_kind_0) ;
            var_typeKind_4904 = extractedValue_5088_kind_0 ;
          }
          break ;
        case GGS_classKind::Enumeration::enum_document:
          {
            GGS_lstring extractedValue_5145__0 ;
            var_classKind_4866.getAssociatedValuesFor_document (extractedValue_5145__0) ;
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_4454.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 146)) ;
            var_typeKind_4904.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_classKind::Enumeration::enum_entity:
          {
            GGS_string extractedValue_5270__0 ;
            GGS_bool extractedValue_5270__1 ;
            GGS_bool extractedValue_5270__2 ;
            GGS_bool extractedValue_5270__3 ;
            var_classKind_4866.getAssociatedValuesFor_entity (extractedValue_5270__0, extractedValue_5270__1, extractedValue_5270__2, extractedValue_5270__3) ;
            GenericArray <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_4454.current (HERE).readProperty_mModelTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray4  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 148)) ;
            var_typeKind_4904.drop () ; // Release error dropped variable
          }
          break ;
        }
        var_outletBindingSpecificationModelList_4381.plusPlusAssignOperation (GGS_outletBindingSpecificationModel::init_21__21_ (var_typeKind_4904, enumerator_4454.current (HERE).readProperty_mModelShouldBeWritableProperty (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 150)) ;
      }
      enumerator_4454.gotoNextObject () ;
    }
    GGS__5B_controllerBindingOptionDecorated_5D_ temp_5 = GGS__5B_controllerBindingOptionDecorated_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 153)) ;
    GGS__5B_controllerBindingOptionDecorated_5D_ var_controllerBindingOptionDecoratedList_5552 = temp_5 ;
    UpEnumerator__5B_controllerBindingOption_5D_ enumerator_5627 (enumerator_4305.current (HERE).readProperty_mBindingOptionList ()) ;
    while (enumerator_5627.hasCurrentObject ()) {
      GGS_classKind var_classKind_5741 ;
      GGS_propertyMap joker_5752_3 ; // Joker input parameter
      GGS_actionMap joker_5752_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5752_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (enumerator_5627.current (HERE).readProperty_mOptionTypeName (), var_classKind_5741, joker_5752_3, joker_5752_2, joker_5752_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 155)) ;
      GGS_typeKind var_typeKind_5777 ;
      switch (var_classKind_5741.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_5627.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray6  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 159)) ;
          var_typeKind_5777.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_5955_kind_0 ;
          var_classKind_5741.getAssociatedValuesFor_atomic (extractedValue_5955_kind_0) ;
          var_typeKind_5777 = extractedValue_5955_kind_0 ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_6008__0 ;
          var_classKind_5741.getAssociatedValuesFor_document (extractedValue_6008__0) ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_5627.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray7  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 163)) ;
          var_typeKind_5777.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_6131__0 ;
          GGS_bool extractedValue_6131__1 ;
          GGS_bool extractedValue_6131__2 ;
          GGS_bool extractedValue_6131__3 ;
          var_classKind_5741.getAssociatedValuesFor_entity (extractedValue_6131__0, extractedValue_6131__1, extractedValue_6131__2, extractedValue_6131__3) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_5627.current (HERE).readProperty_mOptionTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray8  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 165)) ;
          var_typeKind_5777.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_controllerBindingOptionDecoratedList_5552.plusPlusAssignOperation (GGS_controllerBindingOptionDecorated::init_21__21_ (var_typeKind_5777, enumerator_5627.current (HERE).readProperty_mOptionName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 167)) ;
      enumerator_5627.gotoNextObject () ;
    }
    GGS_outletBindingSpecificationMap var_bindingMap_6406 ;
    GGS_lstring var_outletSuperClassName_6434 ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = ioArgument_ioSemanticContext.readProperty_mBindingSpecificationMap ().getter_contains (enumerator_4305.current (HERE).readProperty_mOutletClassName ().readProperty_string () COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 172)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        {
        ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_removeKey (enumerator_4305.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_6434, var_bindingMap_6406, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 173)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      var_bindingMap_6406 = GGS_outletBindingSpecificationMap::init (inCompiler COMMA_HERE) ;
      GGS_bool joker_6808_6 ; // Joker input parameter
      GGS_bool joker_6808_5 ; // Joker input parameter
      GGS_bool joker_6808_4 ; // Joker input parameter
      GGS_bool joker_6808_3 ; // Joker input parameter
      GGS_bool joker_6808_2 ; // Joker input parameter
      GGS_bool joker_6808_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (enumerator_4305.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_6434, joker_6808_6, joker_6808_5, joker_6808_4, joker_6808_3, joker_6808_2, joker_6808_1, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 176)) ;
    }
    {
    var_bindingMap_6406.setter_insertKey (enumerator_4305.current (HERE).readProperty_mBindingName (), var_outletBindingSpecificationModelList_4381, var_controllerBindingOptionDecoratedList_5552, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 178)) ;
    }
    {
    ioArgument_ioSemanticContext.mProperty_mBindingSpecificationMap.setter_insertKey (enumerator_4305.current (HERE).readProperty_mOutletClassName (), var_outletSuperClassName_6434, var_bindingMap_6406, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 183)) ;
    }
    enumerator_4305.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1113 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1113, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1113, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.galgas4", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1365_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1365_rootEntityName_0) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1365_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1113, GGS_lstring::init_21__21_ (extractedValue_1365_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 34)) ;
          }
        }
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      {
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      const GGS_arrayControllerDeclarationAST temp_10 = this ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1113, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.galgas4", 37)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument__5F_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_4129 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_4293 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_4293.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 111)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 111)) ;
  }
  {
  var_controllerActions_4293.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas4", 112)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 112)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  switch (temp_1.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_4484_rootEntityName_0 ;
      temp_1.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4484_rootEntityName_0) ;
      GGS_propertyMap var_rootProperties_4572 ;
      GGS_classKind joker_4563 ; // Joker input parameter
      GGS_actionMap joker_4588_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_4588_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4484_rootEntityName_0, joker_4563, var_rootProperties_4572, joker_4588_2, joker_4588_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 115)) ;
      GGS_propertyKind var_classKind_4656 ;
      const GGS_arrayControllerDeclarationAST temp_2 = this ;
      GGS_actionMap joker_4667_2 ; // Joker input parameter
      GGS_bool joker_4667_1 ; // Joker input parameter
      var_rootProperties_4572.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_classKind_4656, joker_4667_2, joker_4667_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 116)) ;
      switch (var_classKind_4656.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_4717__0 ;
          GGS_propertyAccessibility extractedValue_4717__1 ;
          var_classKind_4656.getAssociatedValuesFor_property (extractedValue_4717__0, extractedValue_4717__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray3  COMMA_SOURCE_FILE ("array-controller.galgas4", 119)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_4815_typeName_0 ;
          GGS_propertyAccessibility extractedValue_4825__1 ;
          GGS_bool extractedValue_4828_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_4837__3 ;
          var_classKind_4656.getAssociatedValuesFor_toMany (extractedValue_4815_typeName_0, extractedValue_4825__1, extractedValue_4828_graphic_2, extractedValue_4837__3) ;
          GGS_propertyKind var_kind_4854 = GGS_propertyKind::class_func_arrayController (extractedValue_4815_typeName_0, extractedValue_4828_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 121)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_4 = this ;
          var_entry_4129.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mControllerName (), var_kind_4854, var_controllerActions_4293, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 125)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_5 = this ;
          const GGS_arrayControllerDeclarationAST temp_6 = this ;
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          var_entry_4129.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_5.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_6.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 129)), temp_7.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 127)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_5310__0 ;
          GGS_propertyAccessibility extractedValue_5310__1 ;
          GGS_bool extractedValue_5310__2 ;
          GGS_toOneOppositeRelationship extractedValue_5310__3 ;
          GGS_bool extractedValue_5310__4 ;
          var_classKind_4656.getAssociatedValuesFor_toOne (extractedValue_5310__0, extractedValue_5310__1, extractedValue_5310__2, extractedValue_5310__3, extractedValue_5310__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 134)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_5418__0 ;
          GGS_bool extractedValue_5418__1 ;
          var_classKind_4656.getAssociatedValuesFor_arrayController (extractedValue_5418__0, extractedValue_5418__1) ;
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.galgas4", 136)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_5529__0 ;
          var_classKind_4656.getAssociatedValuesFor_selectionController (extractedValue_5529__0) ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_4484_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 138)) ;
        }
        break ;
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      GGS_propertyKind var_classKind_5719 ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GGS_actionMap joker_5730_2 ; // Joker input parameter
      GGS_bool joker_5730_1 ; // Joker input parameter
      var_entry_4129.readProperty_mPropertyMap ().method_searchKey (temp_11.readProperty_mToManyPropertyName (), var_classKind_5719, joker_5730_2, joker_5730_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 141)) ;
      switch (var_classKind_5719.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5780__0 ;
          GGS_propertyAccessibility extractedValue_5780__1 ;
          var_classKind_5719.getAssociatedValuesFor_property (extractedValue_5780__0, extractedValue_5780__1) ;
          const GGS_arrayControllerDeclarationAST temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_12.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("array-controller.galgas4", 144)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5888_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5898__1 ;
          GGS_bool extractedValue_5901_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5910__3 ;
          var_classKind_5719.getAssociatedValuesFor_toMany (extractedValue_5888_typeName_0, extractedValue_5898__1, extractedValue_5901_graphic_2, extractedValue_5910__3) ;
          GGS_propertyKind var_kind_5927 = GGS_propertyKind::class_func_arrayController (extractedValue_5888_typeName_0, extractedValue_5901_graphic_2  COMMA_SOURCE_FILE ("array-controller.galgas4", 146)) ;
          {
          const GGS_arrayControllerDeclarationAST temp_14 = this ;
          var_entry_4129.mProperty_mPropertyMap.setter_insertKey (temp_14.readProperty_mControllerName (), var_kind_5927, var_controllerActions_4293, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 150)) ;
          }
          {
          const GGS_arrayControllerDeclarationAST temp_15 = this ;
          const GGS_arrayControllerDeclarationAST temp_16 = this ;
          const GGS_arrayControllerDeclarationAST temp_17 = this ;
          var_entry_4129.mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_15.readProperty_mControllerName ().readProperty_string (), temp_16.readProperty_mToManyPropertyName ().readProperty_string (), temp_17.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 152)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6367__0 ;
          GGS_propertyAccessibility extractedValue_6367__1 ;
          GGS_bool extractedValue_6367__2 ;
          GGS_toOneOppositeRelationship extractedValue_6367__3 ;
          GGS_bool extractedValue_6367__4 ;
          var_classKind_5719.getAssociatedValuesFor_toOne (extractedValue_6367__0, extractedValue_6367__1, extractedValue_6367__2, extractedValue_6367__3, extractedValue_6367__4) ;
          const GGS_arrayControllerDeclarationAST temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_18.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("array-controller.galgas4", 159)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6485__0 ;
          GGS_bool extractedValue_6485__1 ;
          var_classKind_5719.getAssociatedValuesFor_arrayController (extractedValue_6485__0, extractedValue_6485__1) ;
          const GGS_arrayControllerDeclarationAST temp_20 = this ;
          GenericArray <FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray21  COMMA_SOURCE_FILE ("array-controller.galgas4", 161)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6606__0 ;
          var_classKind_5719.getAssociatedValuesFor_selectionController (extractedValue_6606__0) ;
          const GGS_arrayControllerDeclarationAST temp_22 = this ;
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (temp_22.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray23  COMMA_SOURCE_FILE ("array-controller.galgas4", 163)) ;
        }
        break ;
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_4129, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 167)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_7187 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_7270_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_7270_rootEntityName_0) ;
      GGS_classKind joker_7361 ; // Joker input parameter
      GGS_actionMap joker_7403_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7403_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7270_rootEntityName_0, joker_7361, var_boundModelPropertyMap_7187, joker_7403_2, joker_7403_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 183)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7519 ; // Joker input parameter
      GGS_actionMap joker_7561_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7561_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7519, var_boundModelPropertyMap_7187, joker_7561_2, joker_7561_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 190)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7656 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7682_2 ; // Joker input parameter
  GGS_bool joker_7682_1 ; // Joker input parameter
  var_boundModelPropertyMap_7187.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7656, joker_7682_2, joker_7682_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 197)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7809 ;
  GGS_bool var_graphic_7846 ;
  GGS_string var_elementTypeName_7868 ;
  switch (var_boundModelClassKind_7656.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7931__0 ;
      GGS_propertyAccessibility extractedValue_7931__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_property (extractedValue_7931__0, extractedValue_7931__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.galgas4", 208)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_8096_typeName_0 ;
      GGS_propertyAccessibility extractedValue_8106_accessibility_1 ;
      GGS_bool extractedValue_8121_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_8132__3 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toMany (extractedValue_8096_typeName_0, extractedValue_8106_accessibility_1, extractedValue_8121_isGraphic_2, extractedValue_8132__3) ;
      var_elementTypeName_7868 = extractedValue_8096_typeName_0.readProperty_string () ;
      var_graphic_7846 = extractedValue_8121_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const GalgasBool test_6 = extractedValue_8106_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.galgas4", 214)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.galgas4", 215)) ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.galgas4", 216)) ;
      }
      var_arrayControllerModelKind_7809 = temp_5 ;
      GGS_classKind joker_8364 ; // Joker input parameter
      GGS_propertyMap joker_8368_3 ; // Joker input parameter
      GGS_actionMap joker_8368_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8368_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_8096_typeName_0, joker_8364, joker_8368_3, joker_8368_2, joker_8368_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 218)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8388__0 ;
      GGS_propertyAccessibility extractedValue_8388__1 ;
      GGS_bool extractedValue_8388__2 ;
      GGS_toOneOppositeRelationship extractedValue_8388__3 ;
      GGS_bool extractedValue_8388__4 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_toOne (extractedValue_8388__0, extractedValue_8388__1, extractedValue_8388__2, extractedValue_8388__3, extractedValue_8388__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.galgas4", 220)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8563__0 ;
      GGS_bool extractedValue_8563__1 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_arrayController (extractedValue_8563__0, extractedValue_8563__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.galgas4", 224)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8741__0 ;
      var_boundModelClassKind_7656.getAssociatedValuesFor_selectionController (extractedValue_8741__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.galgas4", 228)) ;
      var_graphic_7846.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7809.drop () ; // Release error dropped variable
      var_elementTypeName_7868.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 236)), var_arrayControllerModelKind_7809, var_elementTypeName_7868, var_graphic_7846, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 233)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7868, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 242)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument__5F_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument__5F_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 261)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 262)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 262)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 263)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 264)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 266)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 266)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 267)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 268)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 268)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 269)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 282)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 283)), inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas4", 283)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (Compiler * inCompiler,
                                                                                                       const GGS_string & in_OWNER_5F_NAME,
                                                                                                       const GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\nimport CanariGeometry\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const GalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const GalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const GalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const GalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const GalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const GalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : CanariAffinity) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : CanariAffinity) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_arrayControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    select\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func select (object inObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    add\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  const GalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: .cu (X), yBy: .cu (Y), userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx - 1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : CanariLength) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : CanariLength) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument__5F_inOutputDirectory */,
                                                                   const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                   GGS_stringset & /* ioArgument__5F_ioUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@arrayControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                   const GGS_generationStruct /* constinArgument__5F_inGenerationStruct */,
                                                                   const GGS_stringset /* constinArgument__5F_inUsedProtocolSet */,
                                                                   GGS_stringset & /* ioArgument__5F_ioGeneratedFileSet */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13456 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.galgas4", 340))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 350)), var_s_13456, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 348)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument__5F_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument__5F_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.galgas4", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12207 ;
  GGS_string var__5F_swiftTypeStringForTransientFunctionArgument_12230 ;
  GGS_string var__5F_protocolTypeName_12293 ;
  GGS_string var__5F_defaultValueAsString_12329 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const GalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12207, var__5F_swiftTypeStringForTransientFunctionArgument_12230, var__5F_protocolTypeName_12293, var__5F_defaultValueAsString_12329, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 290)) ;
  switch (var_kind_12207.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12386_type_0 ;
      GGS_propertyAccessibility extractedValue_12392__1 ;
      var_kind_12207.getAssociatedValuesFor_property (extractedValue_12386_type_0, extractedValue_12392__1) ;
      outArgument_outType = extractedValue_12386_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12432__0 ;
      GGS_propertyAccessibility extractedValue_12432__1 ;
      GGS_bool extractedValue_12432__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12432__3 ;
      var_kind_12207.getAssociatedValuesFor_toMany (extractedValue_12432__0, extractedValue_12432__1, extractedValue_12432__2, extractedValue_12432__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 303)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12546__0 ;
      GGS_propertyAccessibility extractedValue_12546__1 ;
      GGS_bool extractedValue_12546__2 ;
      GGS_toOneOppositeRelationship extractedValue_12546__3 ;
      GGS_bool extractedValue_12546__4 ;
      var_kind_12207.getAssociatedValuesFor_toOne (extractedValue_12546__0, extractedValue_12546__1, extractedValue_12546__2, extractedValue_12546__3, extractedValue_12546__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 305)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12670__0 ;
      GGS_bool extractedValue_12670__1 ;
      var_kind_12207.getAssociatedValuesFor_arrayController (extractedValue_12670__0, extractedValue_12670__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 307)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_12797__0 ;
      var_kind_12207.getAssociatedValuesFor_selectionController (extractedValue_12797__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 309)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const GalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 312)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 314)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_13978 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_13978, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 329)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 339)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 339)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 340)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_13978, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15078 ;
  GGS_typeKind var_outLeftType_15103 ;
  GGS_location var_outLeftLocation_15125 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15078, var_outLeftType_15103, var_outLeftLocation_15125, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 357)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_15103.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 367)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 367)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15125, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 368)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15548 ;
  GGS_typeKind var_outRightType_15574 ;
  GGS_location var_outRightLocation_15597 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15548, var_outRightType_15574, var_outRightLocation_15597, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 370)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_15574.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 380)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 380)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15597, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 381)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 383)) ;
  outArgument_outErrorLocation = var_outRightLocation_15597 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15078, var_rightExpression_15548, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16751 ;
  GGS_typeKind var_outLeftType_16776 ;
  GGS_location var_outLeftLocation_16798 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16751, var_outLeftType_16776, var_outLeftLocation_16798, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 400)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_outLeftType_16776.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 410)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 410)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16798, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 411)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17221 ;
  GGS_typeKind var_outRightType_17247 ;
  GGS_location var_outRightLocation_17270 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17221, var_outRightType_17247, var_outRightLocation_17270, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas4", 413)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_outRightType_17247.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas4", 423)).operator_not (SOURCE_FILE ("multiple-binding.galgas4", 423)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17270, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.galgas4", 424)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.galgas4", 426)) ;
  outArgument_outErrorLocation = var_outRightLocation_17270 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16751, var_rightExpression_17221, inCompiler COMMA_HERE) ;
}

