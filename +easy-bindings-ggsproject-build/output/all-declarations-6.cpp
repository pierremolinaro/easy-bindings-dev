#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-6.h"

//--------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEntityName.printNonNullClassInstanceProperties ("mEntityName") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mPropertyGenerationList.printNonNullClassInstanceProperties ("mPropertyGenerationList") ;
    mProperty_mSignatureSet.printNonNullClassInstanceProperties ("mSignatureSet") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mOverridenTransients.printNonNullClassInstanceProperties ("mOverridenTransients") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mHasSubEntity.printNonNullClassInstanceProperties ("mHasSubEntity") ;
    mProperty_mCanCopyAndPaste_5F_option.printNonNullClassInstanceProperties ("mCanCopyAndPaste_option") ;
    mProperty_mCannotBeDeleted_5F_option.printNonNullClassInstanceProperties ("mCannotBeDeleted_option") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_entityForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHandlingOpposite.objectCompare (p->mProperty_mHandlingOpposite) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOverridenTransients.objectCompare (p->mProperty_mOverridenTransients) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasSubEntity.objectCompare (p->mProperty_mHasSubEntity) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCanCopyAndPaste_5F_option.objectCompare (p->mProperty_mCanCopyAndPaste_5F_option) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCannotBeDeleted_5F_option.objectCompare (p->mProperty_mCannotBeDeleted_5F_option) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_entityForGeneration::objectCompare (const GALGAS_entityForGeneration & inOperand) const {
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

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mEntityName,
                                                      const GALGAS_string & in_mSuperEntityName,
                                                      const GALGAS_bool & in_mHandlingOpposite,
                                                      const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                      const GALGAS_stringset & in_mSignatureSet,
                                                      const GALGAS_bool & in_mIsGraphicEntity,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_stringset & in_mOverridenTransients,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                      const GALGAS_bool & in_mHasSubEntity,
                                                      const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                      const GALGAS_bool & in_mCannotBeDeleted_5F_option,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_entityForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_entityForGeneration (inCompiler COMMA_THERE)) ;
  object->entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mEntityName, in_mSuperEntityName, in_mHandlingOpposite, in_mPropertyGenerationList, in_mSignatureSet, in_mIsGraphicEntity, in_mIsAbstract, in_mOverridenTransients, in_mExternSwiftDelegateList, in_mHasSubEntity, in_mCanCopyAndPaste_5F_option, in_mCannotBeDeleted_5F_option, inCompiler) ;
  const GALGAS_entityForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::
entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mEntityName,
                                                                          const GALGAS_string & in_mSuperEntityName,
                                                                          const GALGAS_bool & in_mHandlingOpposite,
                                                                          const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                                          const GALGAS_stringset & in_mSignatureSet,
                                                                          const GALGAS_bool & in_mIsGraphicEntity,
                                                                          const GALGAS_bool & in_mIsAbstract,
                                                                          const GALGAS_stringset & in_mOverridenTransients,
                                                                          const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                          const GALGAS_bool & in_mHasSubEntity,
                                                                          const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                                          const GALGAS_bool & in_mCannotBeDeleted_5F_option,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::class_func_new (const GALGAS_string & in_mEntityName,
                                                                       const GALGAS_string & in_mSuperEntityName,
                                                                       const GALGAS_bool & in_mHandlingOpposite,
                                                                       const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                                       const GALGAS_stringset & in_mSignatureSet,
                                                                       const GALGAS_bool & in_mIsGraphicEntity,
                                                                       const GALGAS_bool & in_mIsAbstract,
                                                                       const GALGAS_stringset & in_mOverridenTransients,
                                                                       const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                       const GALGAS_bool & in_mHasSubEntity,
                                                                       const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                                       const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (in_mEntityName, in_mSuperEntityName, in_mHandlingOpposite, in_mPropertyGenerationList, in_mSignatureSet, in_mIsGraphicEntity, in_mIsAbstract, in_mOverridenTransients, in_mExternSwiftDelegateList, in_mHasSubEntity, in_mCanCopyAndPaste_5F_option, in_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_bool & in_mHandlingOpposite,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_stringset & in_mOverridenTransients,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GALGAS_bool & in_mHasSubEntity,
                                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@entityForGeneration:") ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @entityForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                                                           & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
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

ComparisonResult cPtr_autoLayoutDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletLinkerList.objectCompare (p->mProperty_mOutletLinkerList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutDocumentDeclarationAST::objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::
init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                          const GALGAS_lstring & in_mRootEntityName,
                                          const GALGAS_lstring & in_mMainViewName,
                                          const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                          const GALGAS_lstringlist & in_mActionDeclarationList,
                                          const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                          const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                          const GALGAS_string & in_mCustomSuperClassName,
                                          const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mMainViewName, in_mOutletDeclarationList, in_mActionDeclarationList, in_mArrayControllerBindingListAST, in_mViewDeclarationList, in_mCustomSuperClassName, in_mOutletLinkerList, inCompiler) ;
  const GALGAS_autoLayoutDocumentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::
autoLayoutDocumentDeclarationAST_init_21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                                           const GALGAS_lstring & in_mRootEntityName,
                                                                           const GALGAS_lstring & in_mMainViewName,
                                                                           const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                           const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                           const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                           const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                           const GALGAS_string & in_mCustomSuperClassName,
                                                                           const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList,
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

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                                 const GALGAS_lstring & in_mRootEntityName,
                                                                                                 const GALGAS_lstring & in_mMainViewName,
                                                                                                 const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                                                 const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                                                 const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                                                 const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                                                                 const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (in_mClassName, in_mRootEntityName, in_mMainViewName, in_mOutletDeclarationList, in_mActionDeclarationList, in_mArrayControllerBindingListAST, in_mViewDeclarationList, in_mCustomSuperClassName, in_mOutletLinkerList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_arrayControllerBindingListAST () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mMainViewName,
                                                                              const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                              const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  const GALGAS_autoLayoutDocumentDeclarationAST * p = (const GALGAS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
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

ComparisonResult cPtr_autoLayoutDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutOutletMap.objectCompare (p->mProperty_mAutoLayoutOutletMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplicitViewFunctionGenerationList.objectCompare (p->mProperty_mImplicitViewFunctionGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConfiguratorMap.objectCompare (p->mProperty_mConfiguratorMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletLinkerGenerationList.objectCompare (p->mProperty_mOutletLinkerGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutDocumentFileGeneration::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const {
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

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mDocumentName,
                                                                      const GALGAS_string & in_mRootEntityName,
                                                                      const GALGAS_string & in_mMainViewName,
                                                                      const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                      const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                      const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                      const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                      const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                      const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                      const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                      const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                      const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                      const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                      const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                      const GALGAS_string & in_mCustomSuperClassName,
                                                                      const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDocumentFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDocumentFileGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mDocumentName, in_mRootEntityName, in_mMainViewName, in_mDocumentPropertyGenearionList, in_mOutletMap, in_mAutoLayoutOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewDeclarationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mCustomSuperClassName, in_mOutletLinkerGenerationList, inCompiler) ;
  const GALGAS_autoLayoutDocumentFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::
autoLayoutDocumentFileGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mDocumentName,
                                                                                                       const GALGAS_string & in_mRootEntityName,
                                                                                                       const GALGAS_string & in_mMainViewName,
                                                                                                       const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                                                       const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                                                       const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                                       const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                                                       const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                       const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                                                       const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                                       const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                                       const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                                                       const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                                       const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                                       const GALGAS_string & in_mCustomSuperClassName,
                                                                                                       const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList,
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

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::class_func_new (const GALGAS_string & in_mDocumentName,
                                                                                                 const GALGAS_string & in_mRootEntityName,
                                                                                                 const GALGAS_string & in_mMainViewName,
                                                                                                 const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                                                 const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                                                 const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                                 const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                                                 const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                 const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                                                 const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                                 const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                                                 const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                                 const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                                 const GALGAS_string & in_mCustomSuperClassName,
                                                                                                 const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (in_mDocumentName, in_mRootEntityName, in_mMainViewName, in_mDocumentPropertyGenearionList, in_mOutletMap, in_mAutoLayoutOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewDeclarationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mCustomSuperClassName, in_mOutletLinkerGenerationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                              const GALGAS_string & in_mRootEntityName,
                                                                              const GALGAS_string & in_mMainViewName,
                                                                              const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                              const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                              const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                              const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                              const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
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

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  const GALGAS_autoLayoutDocumentFileGeneration * p = (const GALGAS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDeclaration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDeclaration.printNonNullClassInstanceProperties ("mDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_prefsDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDeclaration.objectCompare (p->mProperty_mDeclaration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_prefsDeclarationAST::objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const {
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

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::
init_21__21_ (const GALGAS_lstring & in_mClassName,
              const GALGAS_prefDeclaration & in_mDeclaration,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_prefsDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_prefsDeclarationAST (inCompiler COMMA_THERE)) ;
  object->prefsDeclarationAST_init_21__21_ (in_mClassName, in_mDeclaration, inCompiler) ;
  const GALGAS_prefsDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::
prefsDeclarationAST_init_21__21_ (const GALGAS_lstring & in_mClassName,
                                  const GALGAS_prefDeclaration & in_mDeclaration,
                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                       const GALGAS_prefDeclaration & in_mDeclaration
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (in_mClassName, in_mDeclaration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDeclaration = in_mDeclaration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @prefsDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  const GALGAS_prefsDeclarationAST * p = (const GALGAS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@entityStrongReferenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph::GALGAS_entityStrongReferenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GALGAS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GALGAS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                        GALGAS_string inArgument_0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_topologicalSort (GALGAS_stringlist & outSortedList,
                                                                GALGAS_lstringlist & outSortedKeyList,
                                                                GALGAS_stringlist & outUnsortedList,
                                                                GALGAS_lstringlist & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GALGAS_stringlist & outSortedList,
                                                                          GALGAS_lstringlist & outSortedKeyList,
                                                                          GALGAS_stringlist & outUnsortedList,
                                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_circularities (GALGAS_stringlist & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GALGAS_stringlist & outInfoList,
                                                                     GALGAS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GALGAS_stringlist & outInfoList,
                                                                       GALGAS_lstringlist & outKeyList
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                               const GALGAS_stringset & inKeysToExclude,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                  const GALGAS_stringset & inNodesToExclude,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_entityStrongReferenceGraph resultingGraph ;
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
//
//     @entityStrongReferenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityStrongReferenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityStrongReferenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityStrongReferenceGraph result ;
  const GALGAS_entityStrongReferenceGraph * p = (const GALGAS_entityStrongReferenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityStrongReferenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityStrongReferenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
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

ComparisonResult cPtr_autoLayoutViewClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (p->mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutViewClassDeclarationAST::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                              const GALGAS_bool & in_mUserDefined,
                                              const GALGAS_lstring & in_mSuperClassName,
                                              const GALGAS_bool & in_mHasRunAction,
                                              const GALGAS_bool & in_mHasEnabled,
                                              const GALGAS_bool & in_mHandlesTableValueBinding,
                                              const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                              const GALGAS_bool & in_mHasHidden,
                                              const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                              const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutViewClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutViewClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap, inCompiler) ;
  const GALGAS_autoLayoutViewClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::
autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                                const GALGAS_bool & in_mHasRunAction,
                                                                                const GALGAS_bool & in_mHasEnabled,
                                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GALGAS_bool & in_mHasHidden,
                                                                                const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
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

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                                   const GALGAS_bool & in_mUserDefined,
                                                                                                   const GALGAS_lstring & in_mSuperClassName,
                                                                                                   const GALGAS_bool & in_mHasRunAction,
                                                                                                   const GALGAS_bool & in_mHasEnabled,
                                                                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                                   const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                                   const GALGAS_bool & in_mHasHidden,
                                                                                                   const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutViewClassDeclarationAST (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mUserDefined (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mSuperClassName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mHasRunAction (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mHasEnabled (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesTableValueBinding (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mHandlesGraphicControllerBinding (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mHasHidden (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutClassParameterList () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mParameterList (const GALGAS_autoLayoutClassParameterList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setProperty_mAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                                const GALGAS_bool & in_mHasRunAction,
                                                                                const GALGAS_bool & in_mHasEnabled,
                                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GALGAS_bool & in_mHasHidden,
                                                                                const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutViewClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  const GALGAS_autoLayoutViewClassDeclarationAST * p = (const GALGAS_autoLayoutViewClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedHorizontalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astComputedHorizontalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astComputedHorizontalViewDeclaration::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const {
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

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::
init_21__21__21_ (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                  const GALGAS_astViewInstructionList & in_mInstructionList,
                  const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_astComputedHorizontalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedHorizontalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->astComputedHorizontalViewDeclaration_init_21__21__21_ (in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GALGAS_astComputedHorizontalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::
astComputedHorizontalViewDeclaration_init_21__21__21_ (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                       const GALGAS_astViewInstructionList & in_mInstructionList,
                                                       const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::class_func_new (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                         const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                                         const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  macroMyNew (result.mObjectPtr, cPtr_astComputedHorizontalViewDeclaration (in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                      const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

void cPtr_astComputedHorizontalViewDeclaration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedHorizontalViewDeclaration:") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astComputedHorizontalViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                                                            & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  const GALGAS_astComputedHorizontalViewDeclaration * p = (const GALGAS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astLocalViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astLocalViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astLocalViewInstruction * p = (const cPtr_astLocalViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocalView.objectCompare (p->mProperty_mLocalView) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astLocalViewInstruction::objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const {
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

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::
init_21_ (const GALGAS_lstring & in_mLocalView,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_astLocalViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astLocalViewInstruction (inCompiler COMMA_THERE)) ;
  object->astLocalViewInstruction_init_21_ (in_mLocalView, inCompiler) ;
  const GALGAS_astLocalViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::
astLocalViewInstruction_init_21_ (const GALGAS_lstring & in_mLocalView,
                                  Compiler * /* inCompiler */) {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::class_func_new (const GALGAS_lstring & in_mLocalView
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astLocalViewInstruction (in_mLocalView COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astLocalViewInstruction::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mLocalView () {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@astLocalViewInstruction:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astLocalViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  const GALGAS_astLocalViewInstruction * p = (const GALGAS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astLocalViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedViewInstruction reference class
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

ComparisonResult cPtr_astComputedViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableValueBinding.objectCompare (p->mProperty_mTableValueBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRunActionDescriptor.objectCompare (p->mProperty_mRunActionDescriptor) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (p->mProperty_mEnabledBindingDescriptor) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (p->mProperty_mHiddenBindingDescriptor) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGraphicController.objectCompare (p->mProperty_mGraphicController) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegularBindingList.objectCompare (p->mProperty_mRegularBindingList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletIsArray.objectCompare (p->mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astComputedViewInstruction::objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const {
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

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                      const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                      const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                      const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                      const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                      const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                      const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                      const GALGAS_graphicController & in_mGraphicController,
                                                      const GALGAS_regularBindingList & in_mRegularBindingList,
                                                      const GALGAS_lstring & in_mConfiguratorName,
                                                      const GALGAS_lstring & in_mOutletName,
                                                      const GALGAS_bool & in_mOutletIsArray,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_astComputedViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astComputedViewInstruction (inCompiler COMMA_THERE)) ;
  object->astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mTableValueBinding, in_mRunActionDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mGraphicController, in_mRegularBindingList, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GALGAS_astComputedViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedViewInstruction::
astComputedViewInstruction_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                 const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                 const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                 const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                                 const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                                 const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                 const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                 const GALGAS_graphicController & in_mGraphicController,
                                                                                 const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                 const GALGAS_lstring & in_mConfiguratorName,
                                                                                 const GALGAS_lstring & in_mOutletName,
                                                                                 const GALGAS_bool & in_mOutletIsArray,
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

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::class_func_new (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                     const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                     const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                     const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                                     const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                                     const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                     const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                     const GALGAS_graphicController & in_mGraphicController,
                                                                                     const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                     const GALGAS_lstring & in_mConfiguratorName,
                                                                                     const GALGAS_lstring & in_mOutletName,
                                                                                     const GALGAS_bool & in_mOutletIsArray
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astComputedViewInstruction (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mTableValueBinding, in_mRunActionDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mGraphicController, in_mRegularBindingList, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewInstructionParameterList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_astComputedViewInstruction::readProperty_mTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableValueBinding () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_astComputedViewInstruction::readProperty_mRunActionDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_runActionDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRunActionDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mEnabledBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mEnabledBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mHiddenBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mHiddenBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_astComputedViewInstruction::readProperty_mGraphicController (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_graphicController () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mGraphicController ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_regularBindingList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRegularBindingList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astComputedViewInstruction::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                  const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                  const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GALGAS_graphicController & in_mGraphicController,
                                                                  const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                  const GALGAS_lstring & in_mConfiguratorName,
                                                                  const GALGAS_lstring & in_mOutletName,
                                                                  const GALGAS_bool & in_mOutletIsArray
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
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

const C_galgas_type_descriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
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

acPtr_class * cPtr_astComputedViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astComputedViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                                                  & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  const GALGAS_astComputedViewInstruction * p = (const GALGAS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
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

ComparisonResult cPtr_computedHorizontalViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_computedHorizontalViewGeneration::objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const {
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

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::
init_21__21__21_ (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                  const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                  const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_computedHorizontalViewGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedHorizontalViewGeneration (inCompiler COMMA_THERE)) ;
  object->computedHorizontalViewGeneration_init_21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GALGAS_computedHorizontalViewGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedHorizontalViewGeneration::
computedHorizontalViewGeneration_init_21__21__21_ (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                   const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                   const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::class_func_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                                 const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                                 const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedHorizontalViewGeneration (in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_computedHorizontalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_computedHorizontalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                              const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedHorizontalViewGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  const GALGAS_computedHorizontalViewGeneration * p = (const GALGAS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @hStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_hStackViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_hStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_hStackViewInstructionGeneration::objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const {
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

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::
init_21__21__21__21_ (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                      const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                      const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                      const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_hStackViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_hStackViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->hStackViewInstructionGeneration_init_21__21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GALGAS_hStackViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_hStackViewInstructionGeneration::
hStackViewInstructionGeneration_init_21__21__21__21_ (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                      const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                      const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                      const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::class_func_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                                               const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                                               const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                               const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_hStackViewInstructionGeneration (in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_hStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_hStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

void cPtr_hStackViewInstructionGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@hStackViewInstructionGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @hStackViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ("hStackViewInstructionGeneration",
                                                                                       & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_hStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_hStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_hStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  const GALGAS_hStackViewInstructionGeneration * p = (const GALGAS_hStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_hStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutComputedViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mRunBindingGeneration (),
mProperty_mTableViewBindingGeneration (),
mProperty_mEBViewGraphicControllerBindingGeneration (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutComputedViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mRunBindingGeneration.printNonNullClassInstanceProperties ("mRunBindingGeneration") ;
    mProperty_mTableViewBindingGeneration.printNonNullClassInstanceProperties ("mTableViewBindingGeneration") ;
    mProperty_mEBViewGraphicControllerBindingGeneration.printNonNullClassInstanceProperties ("mEBViewGraphicControllerBindingGeneration") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_autoLayoutComputedViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRunBindingGeneration.objectCompare (p->mProperty_mRunBindingGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewBindingGeneration.objectCompare (p->mProperty_mTableViewBindingGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEBViewGraphicControllerBindingGeneration.objectCompare (p->mProperty_mEBViewGraphicControllerBindingGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletIsArray.objectCompare (p->mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
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

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                  const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                  const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                  const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                  const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                  const GALGAS_string & in_mTableViewBindingGeneration,
                                                  const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                  const GALGAS_string & in_mConfiguratorName,
                                                  const GALGAS_string & in_mOutletName,
                                                  const GALGAS_bool & in_mOutletIsArray,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutComputedViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutComputedViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mRunBindingGeneration, in_mTableViewBindingGeneration, in_mEBViewGraphicControllerBindingGeneration, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::
autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                              const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                              const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                              const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                              const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                              const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                              const GALGAS_string & in_mTableViewBindingGeneration,
                                                                                              const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                              const GALGAS_string & in_mConfiguratorName,
                                                                                              const GALGAS_string & in_mOutletName,
                                                                                              const GALGAS_bool & in_mOutletIsArray,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mRunBindingGeneration = in_mRunBindingGeneration ;
  mProperty_mTableViewBindingGeneration = in_mTableViewBindingGeneration ;
  mProperty_mEBViewGraphicControllerBindingGeneration = in_mEBViewGraphicControllerBindingGeneration ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::class_func_new (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                                                       const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                                       const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                                       const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                                       const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                                       const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                                                       const GALGAS_string & in_mTableViewBindingGeneration,
                                                                                                                       const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                                                       const GALGAS_string & in_mConfiguratorName,
                                                                                                                       const GALGAS_string & in_mOutletName,
                                                                                                                       const GALGAS_bool & in_mOutletIsArray
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutComputedViewInstructionGeneration (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mRunBindingGeneration, in_mTableViewBindingGeneration, in_mEBViewGraphicControllerBindingGeneration, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationParameterList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutRegularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRunBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autolayoutRunBindingForGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRunBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mTableViewBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mTableViewBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mEBViewGraphicControllerBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewGraphicControllerBindingGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mEBViewGraphicControllerBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                    const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                    const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                    const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                                    const GALGAS_string & in_mTableViewBindingGeneration,
                                                                                                    const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                                    const GALGAS_string & in_mConfiguratorName,
                                                                                                    const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_bool & in_mOutletIsArray
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mAutoLayoutViewClassName (),
mProperty_mParameterList (),
mProperty_mFunctionCallList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mRunBindingGeneration (),
mProperty_mTableViewBindingGeneration (),
mProperty_mEBViewGraphicControllerBindingGeneration (),
mProperty_mConfiguratorName (),
mProperty_mOutletName (),
mProperty_mOutletIsArray () {
  mProperty_mAutoLayoutViewClassName = in_mAutoLayoutViewClassName ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mRunBindingGeneration = in_mRunBindingGeneration ;
  mProperty_mTableViewBindingGeneration = in_mTableViewBindingGeneration ;
  mProperty_mEBViewGraphicControllerBindingGeneration = in_mEBViewGraphicControllerBindingGeneration ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mOutletName = in_mOutletName ;
  mProperty_mOutletIsArray = in_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

void cPtr_autoLayoutComputedViewInstructionGeneration::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutComputedViewInstructionGeneration:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRunBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEBViewGraphicControllerBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mRunBindingGeneration, mProperty_mTableViewBindingGeneration, mProperty_mEBViewGraphicControllerBindingGeneration, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutComputedViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration * p = (const GALGAS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outletClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outletClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outletClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outletClassDeclarationAST::objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const {
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

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_bool & in_mUserDefined,
                                      const GALGAS_lstring & in_mSuperClassName,
                                      const GALGAS_bool & in_mHasRunAction,
                                      const GALGAS_bool & in_mHasEnabled,
                                      const GALGAS_bool & in_mHandlesTableValueBinding,
                                      const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                      const GALGAS_bool & in_mHasHidden,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_outletClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_outletClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, inCompiler) ;
  const GALGAS_outletClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::
outletClassDeclarationAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_bool & in_mUserDefined,
                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                const GALGAS_bool & in_mHasRunAction,
                                                                const GALGAS_bool & in_mHasEnabled,
                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GALGAS_bool & in_mHasHidden,
                                                                Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                   const GALGAS_bool & in_mUserDefined,
                                                                                   const GALGAS_lstring & in_mSuperClassName,
                                                                                   const GALGAS_bool & in_mHasRunAction,
                                                                                   const GALGAS_bool & in_mHasEnabled,
                                                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                   const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                   const GALGAS_bool & in_mHasHidden
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_outletClassDeclarationAST (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mUserDefined (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mSuperClassName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mHasRunAction (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mHasEnabled (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mHandlesTableValueBinding (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mHandlesGraphicControllerBinding (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setProperty_mHasHidden (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outletClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

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
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outletClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

void cPtr_outletClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@outletClassDeclarationAST:") ;
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
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outletClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  const GALGAS_outletClassDeclarationAST * p = (const GALGAS_outletClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRootEntityName (),
mProperty_mComputedPropertyTypeName (),
mProperty_mComputedPropertyName (),
mProperty_mDependencyList () {
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

ComparisonResult cPtr_computedPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mComputedPropertyTypeName.objectCompare (p->mProperty_mComputedPropertyTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mComputedPropertyName.objectCompare (p->mProperty_mComputedPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_computedPropertyDeclarationAST::objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const {
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

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::
init_21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                          const GALGAS_lstring & in_mRootEntityName,
                          const GALGAS_lstring & in_mComputedPropertyTypeName,
                          const GALGAS_lstring & in_mComputedPropertyName,
                          const GALGAS_observablePropertyList & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->computedPropertyDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList, inCompiler) ;
  const GALGAS_computedPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyDeclarationAST::
computedPropertyDeclarationAST_init_21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                         const GALGAS_lstring & in_mRootEntityName,
                                                         const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                         const GALGAS_lstring & in_mComputedPropertyName,
                                                         const GALGAS_observablePropertyList & in_mDependencyList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mComputedPropertyTypeName = in_mComputedPropertyTypeName ;
  mProperty_mComputedPropertyName = in_mComputedPropertyName ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                             const GALGAS_lstring & in_mRootEntityName,
                                                                                             const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                                                             const GALGAS_lstring & in_mComputedPropertyName,
                                                                                             const GALGAS_observablePropertyList & in_mDependencyList
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (in_mClassName, in_mRootEntityName, in_mComputedPropertyTypeName, in_mComputedPropertyName, in_mDependencyList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setProperty_mRootEntityName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setProperty_mComputedPropertyTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setProperty_mComputedPropertyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_computedPropertyDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_observablePropertyList () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setProperty_mDependencyList (const GALGAS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                          const GALGAS_lstring & in_mRootEntityName,
                                                                          const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                                          const GALGAS_lstring & in_mComputedPropertyName,
                                                                          const GALGAS_observablePropertyList & in_mDependencyList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  const GALGAS_computedPropertyDeclarationAST * p = (const GALGAS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedPropertyDeclarationAST *> (p)) {
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

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mType (),
mProperty_mDependencyList (),
mProperty_mGenerate () {
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

ComparisonResult cPtr_computedPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_computedPropertyGeneration::objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const {
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

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::
init_21__21__21__21__21_ (const GALGAS_string & in_mPropertyName,
                          const GALGAS_string & in_mClassName,
                          const GALGAS_typeKind & in_mType,
                          const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                          const GALGAS_bool & in_mGenerate,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->computedPropertyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate, inCompiler) ;
  const GALGAS_computedPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedPropertyGeneration::
computedPropertyGeneration_init_21__21__21__21__21_ (const GALGAS_string & in_mPropertyName,
                                                     const GALGAS_string & in_mClassName,
                                                     const GALGAS_typeKind & in_mType,
                                                     const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                     const GALGAS_bool & in_mGenerate,
                                                     Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mType = in_mType ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mGenerate = in_mGenerate ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                                     const GALGAS_string & in_mClassName,
                                                                                     const GALGAS_typeKind & in_mType,
                                                                                     const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                                     const GALGAS_bool & in_mGenerate
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computedPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setProperty_mClassName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computedPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setProperty_mType (const GALGAS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computedPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setProperty_mDependencyList (const GALGAS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_computedPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setProperty_mGenerate (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_string & in_mClassName,
                                                                  const GALGAS_typeKind & in_mType,
                                                                  const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  const GALGAS_bool & in_mGenerate
                                                                  COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_computedPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  const GALGAS_computedPropertyGeneration * p = (const GALGAS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_computedPropertyGeneration_2D_weak::objectCompare (const GALGAS_computedPropertyGeneration_2D_weak & inOperand) const {
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

GALGAS_computedPropertyGeneration_2D_weak::GALGAS_computedPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak & GALGAS_computedPropertyGeneration_2D_weak::operator = (const GALGAS_computedPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak::GALGAS_computedPropertyGeneration_2D_weak (const GALGAS_computedPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak GALGAS_computedPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration_2D_weak::bang_computedPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyGeneration) ;
      result = GALGAS_computedPropertyGeneration ((cPtr_computedPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2D_weak ("computedPropertyGeneration-weak",
                                                                                          & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration_2D_weak GALGAS_computedPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration_2D_weak result ;
  const GALGAS_computedPropertyGeneration_2D_weak * p = (const GALGAS_computedPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @transientDeclarationAST reference class
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

ComparisonResult cPtr_transientDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTransientTypeName.objectCompare (p->mProperty_mTransientTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsOverriding.objectCompare (p->mProperty_mIsOverriding) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_transientDeclarationAST::objectCompare (const GALGAS_transientDeclarationAST & inOperand) const {
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

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::
init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                              const GALGAS_lstring & in_mRootEntityName,
                              const GALGAS_lstring & in_mTransientTypeName,
                              const GALGAS_lstring & in_mTransientName,
                              const GALGAS_observablePropertyList & in_mDependencyList,
                              const GALGAS_bool & in_mIsOverriding,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_transientDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_transientDeclarationAST (inCompiler COMMA_THERE)) ;
  object->transientDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding, inCompiler) ;
  const GALGAS_transientDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientDeclarationAST::
transientDeclarationAST_init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mRootEntityName,
                                                      const GALGAS_lstring & in_mTransientTypeName,
                                                      const GALGAS_lstring & in_mTransientName,
                                                      const GALGAS_observablePropertyList & in_mDependencyList,
                                                      const GALGAS_bool & in_mIsOverriding,
                                                      Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mTransientTypeName = in_mTransientTypeName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mDependencyList = in_mDependencyList ;
  mProperty_mIsOverriding = in_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                               const GALGAS_lstring & in_mRootEntityName,
                                                                               const GALGAS_lstring & in_mTransientTypeName,
                                                                               const GALGAS_lstring & in_mTransientName,
                                                                               const GALGAS_observablePropertyList & in_mDependencyList,
                                                                               const GALGAS_bool & in_mIsOverriding
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (in_mClassName, in_mRootEntityName, in_mTransientTypeName, in_mTransientName, in_mDependencyList, in_mIsOverriding COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setProperty_mRootEntityName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mTransientTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setProperty_mTransientTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_transientDeclarationAST::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setProperty_mTransientName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_transientDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_observablePropertyList () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setProperty_mDependencyList (const GALGAS_observablePropertyList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientDeclarationAST::readProperty_mIsOverriding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    return p->mProperty_mIsOverriding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientDeclarationAST::setProperty_mIsOverriding (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientDeclarationAST * p = (cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    p->mProperty_mIsOverriding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mTransientTypeName,
                                                            const GALGAS_lstring & in_mTransientName,
                                                            const GALGAS_observablePropertyList & in_mDependencyList,
                                                            const GALGAS_bool & in_mIsOverriding
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_transientDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_transientDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mIsOverriding COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @transientDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  const GALGAS_transientDeclarationAST * p = (const GALGAS_transientDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @proxyDeclarationAST reference class
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

ComparisonResult cPtr_proxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_proxyDeclarationAST * p = (const cPtr_proxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mProxyTypeName.objectCompare (p->mProperty_mProxyTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mProxyName.objectCompare (p->mProperty_mProxyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_proxyDeclarationAST::objectCompare (const GALGAS_proxyDeclarationAST & inOperand) const {
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

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::
init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                              const GALGAS_proxyKind & in_mProxyKind,
                              const GALGAS_lstring & in_mProxyTypeName,
                              const GALGAS_lstring & in_mProxyName,
                              const GALGAS_lstring & in_mToOneRelationshipName,
                              const GALGAS_lstring & in_mPropertyName,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_proxyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_proxyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->proxyDeclarationAST_init_21__21__21__21__21__21_ (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName, inCompiler) ;
  const GALGAS_proxyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_proxyDeclarationAST::
proxyDeclarationAST_init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                  const GALGAS_proxyKind & in_mProxyKind,
                                                  const GALGAS_lstring & in_mProxyTypeName,
                                                  const GALGAS_lstring & in_mProxyName,
                                                  const GALGAS_lstring & in_mToOneRelationshipName,
                                                  const GALGAS_lstring & in_mPropertyName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mProxyTypeName = in_mProxyTypeName ;
  mProperty_mProxyName = in_mProxyName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST::GALGAS_proxyDeclarationAST (const cPtr_proxyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_proxyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                       const GALGAS_proxyKind & in_mProxyKind,
                                                                       const GALGAS_lstring & in_mProxyTypeName,
                                                                       const GALGAS_lstring & in_mProxyName,
                                                                       const GALGAS_lstring & in_mToOneRelationshipName,
                                                                       const GALGAS_lstring & in_mPropertyName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_proxyDeclarationAST (in_mClassName, in_mProxyKind, in_mProxyTypeName, in_mProxyName, in_mToOneRelationshipName, in_mPropertyName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyDeclarationAST::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_proxyKind () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setProperty_mProxyKind (const GALGAS_proxyKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mProxyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setProperty_mProxyTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mProxyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mProxyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setProperty_mProxyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mProxyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setProperty_mToOneRelationshipName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_proxyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_proxyDeclarationAST::setProperty_mPropertyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_proxyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @proxyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_proxyDeclarationAST::cPtr_proxyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_proxyKind & in_mProxyKind,
                                                    const GALGAS_lstring & in_mProxyTypeName,
                                                    const GALGAS_lstring & in_mProxyName,
                                                    const GALGAS_lstring & in_mToOneRelationshipName,
                                                    const GALGAS_lstring & in_mPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_proxyDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_proxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_proxyDeclarationAST (mProperty_mClassName, mProperty_mProxyKind, mProperty_mProxyTypeName, mProperty_mProxyName, mProperty_mToOneRelationshipName, mProperty_mPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @proxyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST ("proxyDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_proxyDeclarationAST GALGAS_proxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_proxyDeclarationAST result ;
  const GALGAS_proxyDeclarationAST * p = (const GALGAS_proxyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_proxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mGenerateResetMethod (),
mProperty_mGenerateDirectRead (),
mProperty_mGenerateDirectAccess () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyTypeName.printNonNullClassInstanceProperties ("mPropertyTypeName") ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
    mProperty_mDefaultValue.printNonNullClassInstanceProperties ("mDefaultValue") ;
    mProperty_mGenerateResetMethod.printNonNullClassInstanceProperties ("mGenerateResetMethod") ;
    mProperty_mGenerateDirectRead.printNonNullClassInstanceProperties ("mGenerateDirectRead") ;
    mProperty_mGenerateDirectAccess.printNonNullClassInstanceProperties ("mGenerateDirectAccess") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_atomicPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyTypeName.objectCompare (p->mProperty_mPropertyTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDefaultValue.objectCompare (p->mProperty_mDefaultValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateResetMethod.objectCompare (p->mProperty_mGenerateResetMethod) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateDirectRead.objectCompare (p->mProperty_mGenerateDirectRead) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateDirectAccess.objectCompare (p->mProperty_mGenerateDirectAccess) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_atomicPropertyDeclarationAST::objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const {
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

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::
init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                  const GALGAS_lstring & in_mPropertyTypeName,
                                  const GALGAS_lstring & in_mPropertyName,
                                  const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                  const GALGAS_bool & in_mGenerateResetMethod,
                                  const GALGAS_bool & in_mGenerateDirectRead,
                                  const GALGAS_bool & in_mGenerateDirectAccess,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_atomicPropertyDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicPropertyDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicPropertyDeclarationAST_init_21__21__21__21__21__21__21_ (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mGenerateResetMethod, in_mGenerateDirectRead, in_mGenerateDirectAccess, inCompiler) ;
  const GALGAS_atomicPropertyDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::
atomicPropertyDeclarationAST_init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                               const GALGAS_lstring & in_mPropertyTypeName,
                                                               const GALGAS_lstring & in_mPropertyName,
                                                               const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                               const GALGAS_bool & in_mGenerateResetMethod,
                                                               const GALGAS_bool & in_mGenerateDirectRead,
                                                               const GALGAS_bool & in_mGenerateDirectAccess,
                                                               Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_mGenerateResetMethod = in_mGenerateResetMethod ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                         const GALGAS_lstring & in_mPropertyTypeName,
                                                                                         const GALGAS_lstring & in_mPropertyName,
                                                                                         const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                                         const GALGAS_bool & in_mGenerateResetMethod,
                                                                                         const GALGAS_bool & in_mGenerateDirectRead,
                                                                                         const GALGAS_bool & in_mGenerateDirectAccess
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (in_mClassName, in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue, in_mGenerateResetMethod, in_mGenerateDirectRead, in_mGenerateDirectAccess COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::readProperty_mPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setProperty_mPropertyTypeName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setProperty_mPropertyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::readProperty_mDefaultValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractDefaultValue () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mDefaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setProperty_mDefaultValue (const GALGAS_abstractDefaultValue & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mDefaultValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::readProperty_mGenerateResetMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateResetMethod ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyDeclarationAST::setProperty_mGenerateResetMethod (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    p->mProperty_mGenerateResetMethod = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                                      const GALGAS_lstring & in_mPropertyName,
                                                                      const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GALGAS_bool & in_mGenerateResetMethod,
                                                                      const GALGAS_bool & in_mGenerateDirectRead,
                                                                      const GALGAS_bool & in_mGenerateDirectAccess
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue (),
mProperty_mGenerateResetMethod (),
mProperty_mGenerateDirectRead (),
mProperty_mGenerateDirectAccess () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mDefaultValue = in_mDefaultValue ;
  mProperty_mGenerateResetMethod = in_mGenerateResetMethod ;
  mProperty_mGenerateDirectRead = in_mGenerateDirectRead ;
  mProperty_mGenerateDirectAccess = in_mGenerateDirectAccess ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
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
  mProperty_mGenerateResetMethod.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mGenerateResetMethod, mProperty_mGenerateDirectRead, mProperty_mGenerateDirectAccess COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @atomicPropertyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  const GALGAS_atomicPropertyDeclarationAST * p = (const GALGAS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toOneRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToOneRelationshipName (),
mProperty_mOpposite (),
mProperty_mUsedForSignature (),
mProperty_mWeak () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toOneRelationshipAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDestinationEntityName.printNonNullClassInstanceProperties ("mDestinationEntityName") ;
    mProperty_mToOneRelationshipName.printNonNullClassInstanceProperties ("mToOneRelationshipName") ;
    mProperty_mOpposite.printNonNullClassInstanceProperties ("mOpposite") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mWeak.printNonNullClassInstanceProperties ("mWeak") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_toOneRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mWeak.objectCompare (p->mProperty_mWeak) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_toOneRelationshipAST::objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const {
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

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::
init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                              const GALGAS_lstring & in_mDestinationEntityName,
                              const GALGAS_lstring & in_mToOneRelationshipName,
                              const GALGAS_toOneOppositeRelationship & in_mOpposite,
                              const GALGAS_bool & in_mUsedForSignature,
                              const GALGAS_bool & in_mWeak,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_toOneRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toOneRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toOneRelationshipAST_init_21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mOpposite, in_mUsedForSignature, in_mWeak, inCompiler) ;
  const GALGAS_toOneRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::
toOneRelationshipAST_init_21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                   const GALGAS_lstring & in_mDestinationEntityName,
                                                   const GALGAS_lstring & in_mToOneRelationshipName,
                                                   const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                   const GALGAS_bool & in_mUsedForSignature,
                                                   const GALGAS_bool & in_mWeak,
                                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mWeak = in_mWeak ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                         const GALGAS_lstring & in_mDestinationEntityName,
                                                                         const GALGAS_lstring & in_mToOneRelationshipName,
                                                                         const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                                         const GALGAS_bool & in_mUsedForSignature,
                                                                         const GALGAS_bool & in_mWeak
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (in_mClassName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mOpposite, in_mUsedForSignature, in_mWeak COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setProperty_mDestinationEntityName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toOneRelationshipAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setProperty_mToOneRelationshipName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneRelationshipAST::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setProperty_mOpposite (const GALGAS_toOneOppositeRelationship & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setProperty_mUsedForSignature (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneRelationshipAST::readProperty_mWeak (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mWeak ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_toOneRelationshipAST::setProperty_mWeak (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mWeak = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOneRelationshipAST class
//--------------------------------------------------------------------------------------------------

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                      const GALGAS_bool & in_mUsedForSignature,
                                                      const GALGAS_bool & in_mWeak
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (),
mProperty_mToOneRelationshipName (),
mProperty_mOpposite (),
mProperty_mUsedForSignature (),
mProperty_mWeak () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mWeak = in_mWeak ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

void cPtr_toOneRelationshipAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@toOneRelationshipAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWeak.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOpposite, mProperty_mUsedForSignature, mProperty_mWeak COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @toOneRelationshipAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  const GALGAS_toOneRelationshipAST * p = (const GALGAS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toOnePropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toOnePropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mRelationshipType.printNonNullClassInstanceProperties ("mRelationshipType") ;
    mProperty_mOpposite.printNonNullClassInstanceProperties ("mOpposite") ;
    mProperty_mDestinationEntityObservablePropertyMap.printNonNullClassInstanceProperties ("mDestinationEntityObservablePropertyMap") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mStrongRef.printNonNullClassInstanceProperties ("mStrongRef") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_toOnePropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOpposite.objectCompare (p->mProperty_mOpposite) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mStrongRef.objectCompare (p->mProperty_mStrongRef) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_toOnePropertyGeneration::objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const {
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

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::
init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mPropertyName,
                                  const GALGAS_string & in_mClassName,
                                  const GALGAS_propertyKind & in_mRelationshipType,
                                  const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                  const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                  const GALGAS_bool & in_mUsedForSignature,
                                  const GALGAS_bool & in_mStrongRef,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_toOnePropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_toOnePropertyGeneration (inCompiler COMMA_THERE)) ;
  object->toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mRelationshipType, in_mOpposite, in_mDestinationEntityObservablePropertyMap, in_mUsedForSignature, in_mStrongRef, inCompiler) ;
  const GALGAS_toOnePropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::
toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (const GALGAS_string & in_mPropertyName,
                                                          const GALGAS_string & in_mClassName,
                                                          const GALGAS_propertyKind & in_mRelationshipType,
                                                          const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                          const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                          const GALGAS_bool & in_mUsedForSignature,
                                                          const GALGAS_bool & in_mStrongRef,
                                                          Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::class_func_new (const GALGAS_string & in_mPropertyName,
                                                                               const GALGAS_string & in_mClassName,
                                                                               const GALGAS_propertyKind & in_mRelationshipType,
                                                                               const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                                               const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                               const GALGAS_bool & in_mUsedForSignature,
                                                                               const GALGAS_bool & in_mStrongRef
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (in_mPropertyName, in_mClassName, in_mRelationshipType, in_mOpposite, in_mDestinationEntityObservablePropertyMap, in_mUsedForSignature, in_mStrongRef COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toOnePropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::readProperty_mRelationshipType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyKind () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOnePropertyGeneration::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::readProperty_mDestinationEntityObservablePropertyMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyMap () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOnePropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOnePropertyGeneration::readProperty_mStrongRef (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mStrongRef ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOnePropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_toOneOppositeRelationship & in_mOpposite,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GALGAS_bool & in_mUsedForSignature,
                                                            const GALGAS_bool & in_mStrongRef
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@toOnePropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStrongRef.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOpposite, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mUsedForSignature, mProperty_mStrongRef COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @toOnePropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                                               & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  const GALGAS_toOnePropertyGeneration * p = (const GALGAS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyRelationshipAST reference class
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

ComparisonResult cPtr_toManyRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mToManyRelationshipName.objectCompare (p->mProperty_mToManyRelationshipName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCustomStore.objectCompare (p->mProperty_mCustomStore) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateDirectAccess.objectCompare (p->mProperty_mGenerateDirectAccess) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mGenerateDirectRead.objectCompare (p->mProperty_mGenerateDirectRead) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_toManyRelationshipAST::objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const {
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

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                      const GALGAS_lstring & in_mDestinationEntityName,
                                      const GALGAS_lstring & in_mToManyRelationshipName,
                                      const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                      const GALGAS_bool & in_mCustomStore,
                                      const GALGAS_bool & in_mUsedForSignature,
                                      const GALGAS_bool & in_mGenerateDirectAccess,
                                      const GALGAS_bool & in_mGenerateDirectRead,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_toManyRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toManyRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead, inCompiler) ;
  const GALGAS_toManyRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::
toManyRelationshipAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mDestinationEntityName,
                                                            const GALGAS_lstring & in_mToManyRelationshipName,
                                                            const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                                            const GALGAS_bool & in_mCustomStore,
                                                            const GALGAS_bool & in_mUsedForSignature,
                                                            const GALGAS_bool & in_mGenerateDirectAccess,
                                                            const GALGAS_bool & in_mGenerateDirectRead,
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

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                           const GALGAS_lstring & in_mDestinationEntityName,
                                                                           const GALGAS_lstring & in_mToManyRelationshipName,
                                                                           const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                                                           const GALGAS_bool & in_mCustomStore,
                                                                           const GALGAS_bool & in_mUsedForSignature,
                                                                           const GALGAS_bool & in_mGenerateDirectAccess,
                                                                           const GALGAS_bool & in_mGenerateDirectRead
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (in_mClassName, in_mDestinationEntityName, in_mToManyRelationshipName, in_mOption, in_mCustomStore, in_mUsedForSignature, in_mGenerateDirectAccess, in_mGenerateDirectRead COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_toManyRelationshipAST::readProperty_mToManyRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mToManyRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipAST::readProperty_mOption (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_toManyRelationshipOptionAST () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mOption ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mCustomStore (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mCustomStore ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mGenerateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipAST::readProperty_mGenerateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    return p->mProperty_mGenerateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyRelationshipAST class
//--------------------------------------------------------------------------------------------------

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_toManyRelationshipOptionAST & in_mOption,
                                                        const GALGAS_bool & in_mCustomStore,
                                                        const GALGAS_bool & in_mUsedForSignature,
                                                        const GALGAS_bool & in_mGenerateDirectAccess,
                                                        const GALGAS_bool & in_mGenerateDirectRead
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
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

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption, mProperty_mCustomStore, mProperty_mUsedForSignature, mProperty_mGenerateDirectAccess, mProperty_mGenerateDirectRead COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @toManyRelationshipAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  const GALGAS_toManyRelationshipAST * p = (const GALGAS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalIntMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalIntMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_literalIntMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_literalIntMultipleBindingExpressionAST * p = (const cPtr_literalIntMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_literalIntMultipleBindingExpressionAST::objectCompare (const GALGAS_literalIntMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::
init_21_ (const GALGAS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalIntMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalIntMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalIntMultipleBindingExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_literalIntMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::
literalIntMultipleBindingExpressionAST_init_21_ (const GALGAS_luint & in_mValue,
                                                 Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST::GALGAS_literalIntMultipleBindingExpressionAST (const cPtr_literalIntMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalIntMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::class_func_new (const GALGAS_luint & in_mValue
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_literalIntMultipleBindingExpressionAST (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_literalIntMultipleBindingExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_literalIntMultipleBindingExpressionAST::setProperty_mValue (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalIntMultipleBindingExpressionAST) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalIntMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalIntMultipleBindingExpressionAST::cPtr_literalIntMultipleBindingExpressionAST (const GALGAS_luint & in_mValue
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalIntMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

void cPtr_literalIntMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@literalIntMultipleBindingExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalIntMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalIntMultipleBindingExpressionAST (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @literalIntMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ("literalIntMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalIntMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalIntMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalIntMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_literalIntMultipleBindingExpressionAST GALGAS_literalIntMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_literalIntMultipleBindingExpressionAST result ;
  const GALGAS_literalIntMultipleBindingExpressionAST * p = (const GALGAS_literalIntMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_literalIntMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
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

ComparisonResult cPtr_arrayControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_arrayControllerDeclarationAST * p = (const cPtr_arrayControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModel.objectCompare (p->mProperty_mModel) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_arrayControllerDeclarationAST::objectCompare (const GALGAS_arrayControllerDeclarationAST & inOperand) const {
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

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::
init_21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                      const GALGAS_lstring & in_mControllerName,
                      const GALGAS_arrayControllerBoundModelAST & in_mModel,
                      const GALGAS_lstring & in_mToManyPropertyName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayControllerDeclarationAST_init_21__21__21__21_ (in_mClassName, in_mControllerName, in_mModel, in_mToManyPropertyName, inCompiler) ;
  const GALGAS_arrayControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::
arrayControllerDeclarationAST_init_21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_lstring & in_mControllerName,
                                                    const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                                    const GALGAS_lstring & in_mToManyPropertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST::GALGAS_arrayControllerDeclarationAST (const cPtr_arrayControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                           const GALGAS_lstring & in_mControllerName,
                                                                                           const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                                                                           const GALGAS_lstring & in_mToManyPropertyName
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclarationAST (in_mClassName, in_mControllerName, in_mModel, in_mToManyPropertyName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setProperty_mControllerName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerDeclarationAST::readProperty_mModel (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_arrayControllerBoundModelAST () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mModel ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setProperty_mModel (const GALGAS_arrayControllerBoundModelAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mModel = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerDeclarationAST::setProperty_mToManyPropertyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclarationAST) ;
    p->mProperty_mToManyPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerDeclarationAST::cPtr_arrayControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                        const GALGAS_lstring & in_mControllerName,
                                                                        const GALGAS_arrayControllerBoundModelAST & in_mModel,
                                                                        const GALGAS_lstring & in_mToManyPropertyName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mControllerName (),
mProperty_mModel (),
mProperty_mToManyPropertyName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModel = in_mModel ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_arrayControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mModel, mProperty_mToManyPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ("arrayControllerDeclarationAST",
                                                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerDeclarationAST GALGAS_arrayControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationAST result ;
  const GALGAS_arrayControllerDeclarationAST * p = (const GALGAS_arrayControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelTypeName (),
mProperty_mArrayControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mModelTypeName.printNonNullClassInstanceProperties ("mModelTypeName") ;
    mProperty_mArrayControllerModelKind.printNonNullClassInstanceProperties ("mArrayControllerModelKind") ;
    mProperty_mElementTypeName.printNonNullClassInstanceProperties ("mElementTypeName") ;
    mProperty_mElementTypeIsGraphic.printNonNullClassInstanceProperties ("mElementTypeIsGraphic") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_arrayControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_arrayControllerGeneration * p = (const cPtr_arrayControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mArrayControllerModelKind.objectCompare (p->mProperty_mArrayControllerModelKind) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_arrayControllerGeneration::objectCompare (const GALGAS_arrayControllerGeneration & inOperand) const {
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

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::
init_21__21__21__21__21__21_ (const GALGAS_string & in_mOwnerName,
                              const GALGAS_lstring & in_mControllerName,
                              const GALGAS_string & in_mModelTypeName,
                              const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                              const GALGAS_string & in_mElementTypeName,
                              const GALGAS_bool & in_mElementTypeIsGraphic,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerGeneration (inCompiler COMMA_THERE)) ;
  object->arrayControllerGeneration_init_21__21__21__21__21__21_ (in_mOwnerName, in_mControllerName, in_mModelTypeName, in_mArrayControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, inCompiler) ;
  const GALGAS_arrayControllerGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::
arrayControllerGeneration_init_21__21__21__21__21__21_ (const GALGAS_string & in_mOwnerName,
                                                        const GALGAS_lstring & in_mControllerName,
                                                        const GALGAS_string & in_mModelTypeName,
                                                        const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                        const GALGAS_string & in_mElementTypeName,
                                                        const GALGAS_bool & in_mElementTypeIsGraphic,
                                                        Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mArrayControllerModelKind = in_mArrayControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration::GALGAS_arrayControllerGeneration (const cPtr_arrayControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::class_func_new (const GALGAS_string & in_mOwnerName,
                                                                                   const GALGAS_lstring & in_mControllerName,
                                                                                   const GALGAS_string & in_mModelTypeName,
                                                                                   const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                                   const GALGAS_string & in_mElementTypeName,
                                                                                   const GALGAS_bool & in_mElementTypeIsGraphic
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayControllerGeneration (in_mOwnerName, in_mControllerName, in_mModelTypeName, in_mArrayControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mOwnerName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerGeneration::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mControllerName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mControllerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mModelTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mModelTypeName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mModelTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerGeneration::readProperty_mArrayControllerModelKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_arrayControllerModelKind () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mArrayControllerModelKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mArrayControllerModelKind (const GALGAS_arrayControllerModelKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mArrayControllerModelKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerGeneration::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mElementTypeName (const GALGAS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerGeneration::setProperty_mElementTypeIsGraphic (const GALGAS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerGeneration) ;
    p->mProperty_mElementTypeIsGraphic = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerGeneration::cPtr_arrayControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_lstring & in_mControllerName,
                                                                const GALGAS_string & in_mModelTypeName,
                                                                const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                const GALGAS_string & in_mElementTypeName,
                                                                const GALGAS_bool & in_mElementTypeIsGraphic
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mModelTypeName (),
mProperty_mArrayControllerModelKind (),
mProperty_mElementTypeName (),
mProperty_mElementTypeIsGraphic () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mModelTypeName = in_mModelTypeName ;
  mProperty_mArrayControllerModelKind = in_mArrayControllerModelKind ;
  mProperty_mElementTypeName = in_mElementTypeName ;
  mProperty_mElementTypeIsGraphic = in_mElementTypeIsGraphic ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

void cPtr_arrayControllerGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mArrayControllerModelKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeIsGraphic.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelTypeName, mProperty_mArrayControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration ("arrayControllerGeneration",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerGeneration GALGAS_arrayControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerGeneration result ;
  const GALGAS_arrayControllerGeneration * p = (const GALGAS_arrayControllerGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_arrayControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerDeclarationAST reference class
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

ComparisonResult cPtr_autoLayoutTableViewControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutTableViewControllerDeclarationAST * p = (const cPtr_autoLayoutTableViewControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIsRoot.objectCompare (p->mProperty_mIsRoot) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mToManyPropertyName.objectCompare (p->mProperty_mToManyPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListAST.objectCompare (p->mProperty_mTableViewControllerBoundColumnListAST) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewControllerAttributListAST.objectCompare (p->mProperty_mTableViewControllerAttributListAST) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutTableViewControllerDeclarationAST::objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerDeclarationAST::GALGAS_autoLayoutTableViewControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::
init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                  const GALGAS_lstring & in_mControllerName,
                                  const GALGAS_bool & in_mIsRoot,
                                  const GALGAS_lstring & in_mRootEntityName,
                                  const GALGAS_lstring & in_mToManyPropertyName,
                                  const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                  const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST, inCompiler) ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::
autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mControllerName,
                                                                              const GALGAS_bool & in_mIsRoot,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mToManyPropertyName,
                                                                              const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                              const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
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

GALGAS_autoLayoutTableViewControllerDeclarationAST::GALGAS_autoLayoutTableViewControllerDeclarationAST (const cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                                                       const GALGAS_lstring & in_mControllerName,
                                                                                                                       const GALGAS_bool & in_mIsRoot,
                                                                                                                       const GALGAS_lstring & in_mRootEntityName,
                                                                                                                       const GALGAS_lstring & in_mToManyPropertyName,
                                                                                                                       const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                                       const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerDeclarationAST (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mIsRoot (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mIsRoot ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerBoundColumnListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerBoundColumnListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerAttributListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerAttributListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerAttributListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                                    const GALGAS_lstring & in_mControllerName,
                                                                                                    const GALGAS_bool & in_mIsRoot,
                                                                                                    const GALGAS_lstring & in_mRootEntityName,
                                                                                                    const GALGAS_lstring & in_mToManyPropertyName,
                                                                                                    const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                    const GALGAS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutTableViewControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ("autoLayoutTableViewControllerDeclarationAST",
                                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST * p = (const GALGAS_autoLayoutTableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerDeclarationAST *> (p)) {
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

ComparisonResult cPtr_autoLayoutTableViewControllerGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutTableViewControllerGeneration * p = (const cPtr_autoLayoutTableViewControllerGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewControllerBoundColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerBoundColumnListForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewControllerSortedColumnListForGeneration.objectCompare (p->mProperty_mTableViewControllerSortedColumnListForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelTypeName.objectCompare (p->mProperty_mModelTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewControllerModelKind.objectCompare (p->mProperty_mTableViewControllerModelKind) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElementTypeIsGraphic.objectCompare (p->mProperty_mElementTypeIsGraphic) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAttributeListForGeneration.objectCompare (p->mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutTableViewControllerGeneration::objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerGeneration::GALGAS_autoLayoutTableViewControllerGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration::
init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mOwnerName,
                                              const GALGAS_lstring & in_mControllerName,
                                              const GALGAS_string & in_mModelString,
                                              const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                              const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                              const GALGAS_string & in_mModelTypeName,
                                              const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                              const GALGAS_string & in_mElementTypeName,
                                              const GALGAS_bool & in_mElementTypeIsGraphic,
                                              const GALGAS__32_stringlist & in_mAttributeListForGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration, inCompiler) ;
  const GALGAS_autoLayoutTableViewControllerGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::
autoLayoutTableViewControllerGeneration_init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_string & in_mOwnerName,
                                                                                      const GALGAS_lstring & in_mControllerName,
                                                                                      const GALGAS_string & in_mModelString,
                                                                                      const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                      const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                      const GALGAS_string & in_mModelTypeName,
                                                                                      const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                      const GALGAS_string & in_mElementTypeName,
                                                                                      const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                                      const GALGAS__32_stringlist & in_mAttributeListForGeneration,
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

GALGAS_autoLayoutTableViewControllerGeneration::GALGAS_autoLayoutTableViewControllerGeneration (const cPtr_autoLayoutTableViewControllerGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration::class_func_new (const GALGAS_string & in_mOwnerName,
                                                                                                               const GALGAS_lstring & in_mControllerName,
                                                                                                               const GALGAS_string & in_mModelString,
                                                                                                               const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                                               const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                                               const GALGAS_string & in_mModelTypeName,
                                                                                                               const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                                               const GALGAS_string & in_mElementTypeName,
                                                                                                               const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                                                               const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerGeneration (in_mOwnerName, in_mControllerName, in_mModelString, in_mTableViewControllerBoundColumnListForGeneration, in_mTableViewControllerSortedColumnListForGeneration, in_mModelTypeName, in_mTableViewControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerBoundColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerBoundColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerSortedColumnListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerSortedColumnListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mModelTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mModelTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mTableViewControllerModelKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutTableViewControllerModelKind () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mTableViewControllerModelKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mElementTypeIsGraphic (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mElementTypeIsGraphic ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerGeneration::readProperty_mAttributeListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS__32_stringlist () ;
  }else{
    cPtr_autoLayoutTableViewControllerGeneration * p = (cPtr_autoLayoutTableViewControllerGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerGeneration) ;
    return p->mProperty_mAttributeListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerGeneration::cPtr_autoLayoutTableViewControllerGeneration (const GALGAS_string & in_mOwnerName,
                                                                                            const GALGAS_lstring & in_mControllerName,
                                                                                            const GALGAS_string & in_mModelString,
                                                                                            const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_mTableViewControllerBoundColumnListForGeneration,
                                                                                            const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_mTableViewControllerSortedColumnListForGeneration,
                                                                                            const GALGAS_string & in_mModelTypeName,
                                                                                            const GALGAS_autoLayoutTableViewControllerModelKind & in_mTableViewControllerModelKind,
                                                                                            const GALGAS_string & in_mElementTypeName,
                                                                                            const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                                            const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
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

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutTableViewControllerGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerGeneration (mProperty_mOwnerName, mProperty_mControllerName, mProperty_mModelString, mProperty_mTableViewControllerBoundColumnListForGeneration, mProperty_mTableViewControllerSortedColumnListForGeneration, mProperty_mModelTypeName, mProperty_mTableViewControllerModelKind, mProperty_mElementTypeName, mProperty_mElementTypeIsGraphic, mProperty_mAttributeListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ("autoLayoutTableViewControllerGeneration",
                                                                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  const GALGAS_autoLayoutTableViewControllerGeneration * p = (const GALGAS_autoLayoutTableViewControllerGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectionControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSelectionControllerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName (),
mProperty_mSelectionEntityName () {
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

ComparisonResult cPtr_selectionControllerDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_selectionControllerDeclarationAST * p = (const cPtr_selectionControllerDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelectionControllerName.objectCompare (p->mProperty_mSelectionControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelectionEntityName.objectCompare (p->mProperty_mSelectionEntityName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_selectionControllerDeclarationAST::objectCompare (const GALGAS_selectionControllerDeclarationAST & inOperand) const {
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

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::
init_21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                          const GALGAS_lstring & in_mSelectionControllerName,
                          const GALGAS_lstring & in_mModelControllerName,
                          const GALGAS_lstring & in_mModelControllerPropertyName,
                          const GALGAS_lstring & in_mSelectionEntityName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_selectionControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_selectionControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->selectionControllerDeclarationAST_init_21__21__21__21__21_ (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName, inCompiler) ;
  const GALGAS_selectionControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::
selectionControllerDeclarationAST_init_21__21__21__21__21_ (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mSelectionControllerName,
                                                            const GALGAS_lstring & in_mModelControllerName,
                                                            const GALGAS_lstring & in_mModelControllerPropertyName,
                                                            const GALGAS_lstring & in_mSelectionEntityName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  mProperty_mModelControllerName = in_mModelControllerName ;
  mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  mProperty_mSelectionEntityName = in_mSelectionEntityName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST::GALGAS_selectionControllerDeclarationAST (const cPtr_selectionControllerDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::class_func_new (const GALGAS_lstring & in_mClassName,
                                                                                                   const GALGAS_lstring & in_mSelectionControllerName,
                                                                                                   const GALGAS_lstring & in_mModelControllerName,
                                                                                                   const GALGAS_lstring & in_mModelControllerPropertyName,
                                                                                                   const GALGAS_lstring & in_mSelectionEntityName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclarationAST (in_mClassName, in_mSelectionControllerName, in_mModelControllerName, in_mModelControllerPropertyName, in_mSelectionEntityName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mSelectionControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mModelControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mModelControllerPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_selectionControllerDeclarationAST::readProperty_mSelectionEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclarationAST) ;
    return p->mProperty_mSelectionEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerDeclarationAST::cPtr_selectionControllerDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_lstring & in_mSelectionControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerName,
                                                                                const GALGAS_lstring & in_mModelControllerPropertyName,
                                                                                const GALGAS_lstring & in_mSelectionEntityName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
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

const C_galgas_type_descriptor * cPtr_selectionControllerDeclarationAST::classDescriptor (void) const {
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

acPtr_class * cPtr_selectionControllerDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectionControllerDeclarationAST (mProperty_mClassName, mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName, mProperty_mSelectionEntityName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ("selectionControllerDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST result ;
  const GALGAS_selectionControllerDeclarationAST * p = (const GALGAS_selectionControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_boolAsDefaultValue::objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const {
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

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::
init_21_ (const GALGAS_lbool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_boolAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->boolAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_boolAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::
boolAsDefaultValue_init_21_ (const GALGAS_lbool & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::class_func_new (const GALGAS_lbool & in_mValue
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lbool GALGAS_boolAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lbool () ;
  }else{
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boolAsDefaultValue::setProperty_mValue (const GALGAS_lbool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@boolAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @boolAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                                                          & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  const GALGAS_boolAsDefaultValue * p = (const GALGAS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @stringAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_stringAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_stringAsDefaultValue * p = (const cPtr_stringAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_stringAsDefaultValue::objectCompare (const GALGAS_stringAsDefaultValue & inOperand) const {
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

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::
init_21_ (const GALGAS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_stringAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_stringAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->stringAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_stringAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::
stringAsDefaultValue_init_21_ (const GALGAS_lstring & in_mValue,
                               Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue::GALGAS_stringAsDefaultValue (const cPtr_stringAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::class_func_new (const GALGAS_lstring & in_mValue
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_stringAsDefaultValue (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_stringAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_stringAsDefaultValue::setProperty_mValue (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_stringAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @stringAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_stringAsDefaultValue::cPtr_stringAsDefaultValue (const GALGAS_lstring & in_mValue
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

void cPtr_stringAsDefaultValue::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@stringAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @stringAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue ("stringAsDefaultValue",
                                                                            & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue result ;
  const GALGAS_stringAsDefaultValue * p = (const GALGAS_stringAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_stringAsDefaultValue *> (p)) {
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

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_identifierAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_identifierAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_identifierAsDefaultValue * p = (const cPtr_identifierAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_identifierAsDefaultValue::objectCompare (const GALGAS_identifierAsDefaultValue & inOperand) const {
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

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::
init_21_ (const GALGAS_lstring & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_identifierAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_identifierAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->identifierAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GALGAS_identifierAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::
identifierAsDefaultValue_init_21_ (const GALGAS_lstring & in_mValue,
                                   Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue::GALGAS_identifierAsDefaultValue (const cPtr_identifierAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_identifierAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::class_func_new (const GALGAS_lstring & in_mValue
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_identifierAsDefaultValue (in_mValue COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_identifierAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_identifierAsDefaultValue::setProperty_mValue (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_identifierAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @identifierAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_identifierAsDefaultValue::cPtr_identifierAsDefaultValue (const GALGAS_lstring & in_mValue
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_identifierAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

void cPtr_identifierAsDefaultValue::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@identifierAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_identifierAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_identifierAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @identifierAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue ("identifierAsDefaultValue",
                                                                                & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_identifierAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue result ;
  const GALGAS_identifierAsDefaultValue * p = (const GALGAS_identifierAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_identifierAsDefaultValue *> (p)) {
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

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mPrefPropertyName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mPrefPropertyName.printNonNullClassInstanceProperties ("mPrefPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_prefsAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_prefsAsDefaultValue * p = (const cPtr_prefsAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPrefPropertyName.objectCompare (p->mProperty_mPrefPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_prefsAsDefaultValue::objectCompare (const GALGAS_prefsAsDefaultValue & inOperand) const {
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

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::
init_21_ (const GALGAS_lstring & in_mPrefPropertyName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_prefsAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_prefsAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->prefsAsDefaultValue_init_21_ (in_mPrefPropertyName, inCompiler) ;
  const GALGAS_prefsAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::
prefsAsDefaultValue_init_21_ (const GALGAS_lstring & in_mPrefPropertyName,
                              Compiler * /* inCompiler */) {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue::GALGAS_prefsAsDefaultValue (const cPtr_prefsAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::class_func_new (const GALGAS_lstring & in_mPrefPropertyName
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_prefsAsDefaultValue (in_mPrefPropertyName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_prefsAsDefaultValue::readProperty_mPrefPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    return p->mProperty_mPrefPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefsAsDefaultValue::setProperty_mPrefPropertyName (const GALGAS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsAsDefaultValue) ;
    p->mProperty_mPrefPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_prefsAsDefaultValue::cPtr_prefsAsDefaultValue (const GALGAS_lstring & in_mPrefPropertyName
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mPrefPropertyName () {
  mProperty_mPrefPropertyName = in_mPrefPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

void cPtr_prefsAsDefaultValue::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@prefsAsDefaultValue:") ;
  mProperty_mPrefPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsAsDefaultValue (mProperty_mPrefPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @prefsAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue ("prefsAsDefaultValue",
                                                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue result ;
  const GALGAS_prefsAsDefaultValue * p = (const GALGAS_prefsAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefsAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (void) :
mProperty_lkey (),
mProperty_mKind (),
mProperty_mActionMap (),
mProperty_mIsOverriding () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::~ GALGAS_propertyMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_propertyKind & in_mKind,
                                                                                   const GALGAS_actionMap & in_mActionMap,
                                                                                   const GALGAS_bool & in_mIsOverriding,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element::GALGAS_propertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_propertyKind & inOperand1,
                                                              const GALGAS_actionMap & inOperand2,
                                                              const GALGAS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mActionMap (inOperand2),
mProperty_mIsOverriding (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_propertyKind & in_mKind,
                                                                             const GALGAS_actionMap & in_mActionMap,
                                                                             const GALGAS_bool & in_mIsOverriding,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mIsOverriding = in_mIsOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyMap_2D_element::objectCompare (const GALGAS_propertyMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mActionMap.objectCompare (inOperand.mProperty_mActionMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIsOverriding.objectCompare (inOperand.mProperty_mIsOverriding) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mKind.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mIsOverriding.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyMap_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyMap-element:") ;
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
//
//     @propertyMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2D_element ("propertyMap-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element GALGAS_propertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap_2D_element result ;
  const GALGAS_propertyMap_2D_element * p = (const GALGAS_propertyMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
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

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::init (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::setInitializedProperties (Compiler * inCompiler) {
  mProperty_mSequenceNumber = GALGAS_uint (uint32_t (0U)) ;
  mProperty_mMainGroupReference = GALGAS_string::makeEmptyString () ;
GALGAS_stringlist temp_0 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 364)) ;
  mProperty_mMainGroupChildrenRefs = temp_0 ;
  mProperty_mProjectObjectReference = GALGAS_string::makeEmptyString () ;
GALGAS_XCodeGroupList temp_1 = GALGAS_XCodeGroupList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 366)) ;
  mProperty_mGroupList = temp_1 ;
GALGAS_XCodeToolTargetList temp_2 = GALGAS_XCodeToolTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 367)) ;
  mProperty_mToolTargetList = temp_2 ;
GALGAS_XCodeAppTargetList temp_3 = GALGAS_XCodeAppTargetList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 368)) ;
  mProperty_mAppTargetList = temp_3 ;
GALGAS__32_stringlist temp_4 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 369)) ;
  mProperty_mCppFileList = temp_4 ;
GALGAS__32_stringlist temp_5 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 370)) ;
  mProperty_m_5F_M_5F_FileList = temp_5 ;
GALGAS__32_stringlist temp_6 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 371)) ;
  mProperty_m_5F_MM_5F_FileList = temp_6 ;
GALGAS__32_stringlist temp_7 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 372)) ;
  mProperty_m_5F_SwiftFileList = temp_7 ;
GALGAS__32_stringlist temp_8 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 373)) ;
  mProperty_mFrameworkFileList = temp_8 ;
GALGAS__32_stringlist temp_9 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 374)) ;
  mProperty_mHeaderFileList = temp_9 ;
GALGAS_BuildFileList temp_10 = GALGAS_BuildFileList::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 375)) ;
  mProperty_mBuildFileList = temp_10 ;
  mProperty_mDefaultConfigurationRef = GALGAS_string::makeEmptyString () ;
GALGAS_stringlist temp_11 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 378)) ;
  mProperty_mDefaultConfigurationSettingList = temp_11 ;
  mProperty_mProjectBuildConfigurationRef = GALGAS_string::makeEmptyString () ;
GALGAS__32_stringlist temp_12 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 381)) ;
  mProperty_mInfoPlistFileList = temp_12 ;
GALGAS__32_stringlist temp_13 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 382)) ;
  mProperty_mXIB_5F_fileList = temp_13 ;
GALGAS__32_stringlist temp_14 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 383)) ;
  mProperty_mTIFF_5F_fileList = temp_14 ;
GALGAS__32_stringlist temp_15 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 384)) ;
  mProperty_mICNS_5F_fileList = temp_15 ;
}

//--------------------------------------------------------------------------------------------------

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

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::class_func_new (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSequenceNumber.objectCompare (inOperand.mProperty_mSequenceNumber) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMainGroupReference.objectCompare (inOperand.mProperty_mMainGroupReference) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMainGroupChildrenRefs.objectCompare (inOperand.mProperty_mMainGroupChildrenRefs) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProjectObjectReference.objectCompare (inOperand.mProperty_mProjectObjectReference) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGroupList.objectCompare (inOperand.mProperty_mGroupList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mToolTargetList.objectCompare (inOperand.mProperty_mToolTargetList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAppTargetList.objectCompare (inOperand.mProperty_mAppTargetList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCppFileList.objectCompare (inOperand.mProperty_mCppFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_m_5F_M_5F_FileList.objectCompare (inOperand.mProperty_m_5F_M_5F_FileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_m_5F_MM_5F_FileList.objectCompare (inOperand.mProperty_m_5F_MM_5F_FileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_m_5F_SwiftFileList.objectCompare (inOperand.mProperty_m_5F_SwiftFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFrameworkFileList.objectCompare (inOperand.mProperty_mFrameworkFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHeaderFileList.objectCompare (inOperand.mProperty_mHeaderFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBuildFileList.objectCompare (inOperand.mProperty_mBuildFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefaultConfigurationRef.objectCompare (inOperand.mProperty_mDefaultConfigurationRef) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDefaultConfigurationSettingList.objectCompare (inOperand.mProperty_mDefaultConfigurationSettingList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mProjectBuildConfigurationRef.objectCompare (inOperand.mProperty_mProjectBuildConfigurationRef) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInfoPlistFileList.objectCompare (inOperand.mProperty_mInfoPlistFileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mXIB_5F_fileList.objectCompare (inOperand.mProperty_mXIB_5F_fileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTIFF_5F_fileList.objectCompare (inOperand.mProperty_mTIFF_5F_fileList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mICNS_5F_fileList.objectCompare (inOperand.mProperty_mICNS_5F_fileList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mProperty_mSequenceNumber.isValid () && mProperty_mMainGroupReference.isValid () && mProperty_mMainGroupChildrenRefs.isValid () && mProperty_mProjectObjectReference.isValid () && mProperty_mGroupList.isValid () && mProperty_mToolTargetList.isValid () && mProperty_mAppTargetList.isValid () && mProperty_mCppFileList.isValid () && mProperty_m_5F_M_5F_FileList.isValid () && mProperty_m_5F_MM_5F_FileList.isValid () && mProperty_m_5F_SwiftFileList.isValid () && mProperty_mFrameworkFileList.isValid () && mProperty_mHeaderFileList.isValid () && mProperty_mBuildFileList.isValid () && mProperty_mDefaultConfigurationRef.isValid () && mProperty_mDefaultConfigurationSettingList.isValid () && mProperty_mProjectBuildConfigurationRef.isValid () && mProperty_mInfoPlistFileList.isValid () && mProperty_mXIB_5F_fileList.isValid () && mProperty_mTIFF_5F_fileList.isValid () && mProperty_mICNS_5F_fileList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XcodeProjectDescriptor::drop (void) {
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

void GALGAS_XcodeProjectDescriptor::description (String & ioString,
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
//
//     @XcodeProjectDescriptor generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
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

void extensionSetter_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 15)) ;
  }
  {
  ioObject.mProperty_mTIFF_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 16)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addInfoPlistFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 24)) ;
  }
  {
  ioObject.mProperty_mInfoPlistFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 25)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addXIBFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 33)) ;
  }
  {
  ioObject.mProperty_mXIB_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 34)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addFrameworkFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 42)) ;
  }
  {
  ioObject.mProperty_mFrameworkFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inFileName,
                               GALGAS_string & outArgument_outFileRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 51)) ;
  }
  {
  ioObject.mProperty_m_5F_M_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 52)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSwiftFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSwiftFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outFileRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 60)) ;
  }
  {
  ioObject.mProperty_m_5F_SwiftFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 61)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addMMFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 69)) ;
  }
  {
  ioObject.mProperty_m_5F_MM_5F_FileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 70)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addCppFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 78)) ;
  }
  {
  ioObject.mProperty_mCppFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 79)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addHeaderFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 87)) ;
  }
  {
  ioObject.mProperty_mHeaderFileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 88)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addBuildFile'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                   const GALGAS_string constinArgument_inFileReference,
                                   const GALGAS_string constinArgument_inFileName,
                                   GALGAS_string & outArgument_outBuildRef,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 97)) ;
  }
  {
  ioObject.mProperty_mBuildFileList.setter_append (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 98)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addToolTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    GALGAS_string & outArgument_outTargetRef,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 111)) ;
  }
  GALGAS_string var_buildPhaseRef_4477 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_4477, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 112)) ;
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 113)) ;
  }
  GALGAS_string var_buildConfigurationListRef_4574 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_4574, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 114)) ;
  }
  GALGAS_string var_buildConfigurationRef_4637 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_4637, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 115)) ;
  }
  GALGAS_string var_frameworkBuildRef_4696 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 116)) ;
  }
  {
  ioObject.mProperty_mToolTargetList.setter_append (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_4477, var_buildConfigurationListRef_4574, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_4637, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef_4696, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 117)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addAppTarget'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
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
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 146)) ;
  }
  GALGAS_string var_buildPhaseRef_5838 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildPhaseRef_5838, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 147)) ;
  }
  GALGAS_string var_targetRef_5889 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_targetRef_5889, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 148)) ;
  }
  GALGAS_string var_buildConfigurationListRef_5936 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationListRef_5936, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 149)) ;
  }
  GALGAS_string var_buildConfigurationRef_5999 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_buildConfigurationRef_5999, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 150)) ;
  }
  GALGAS_string var_frameworkBuildRef_6058 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_frameworkBuildRef_6058, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 151)) ;
  }
  GALGAS_string var_resourceBuildRef_6113 ;
  {
  extensionSetter_getReferenceKey (ioObject, var_resourceBuildRef_6113, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 152)) ;
  }
  GALGAS__32_stringlist temp_0 = GALGAS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 153)) ;
  GALGAS__32_stringlist var_dependentTargets_6150 = temp_0 ;
  cEnumerator_stringlist enumerator_6179 (constinArgument_inDependentTargetRefList, EnumerationOrder::up) ;
  while (enumerator_6179.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef_6253 ;
    {
    extensionSetter_getReferenceKey (ioObject, var_dependencyBuildRef_6253, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 155)) ;
    }
    {
    var_dependentTargets_6150.setter_append (var_dependencyBuildRef_6253, enumerator_6179.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 156)) ;
    }
    enumerator_6179.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs_6353 = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6413 (constinArgument_inProductCopyList, EnumerationOrder::up) ;
  while (enumerator_6413.hasCurrentObject ()) {
    GALGAS_string var_buildRef_6520 ;
    {
    extensionSetter_addBuildFile (ioObject, enumerator_6413.current_mValue_30_ (HERE), enumerator_6413.current_mValue_31_ (HERE), var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 160)) ;
    }
    {
    var_resourceFileBuildRefs_6353.setter_append (var_buildRef_6520, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 161)) ;
    }
    enumerator_6413.gotoNextObject () ;
  }
  {
  ioObject.mProperty_mAppTargetList.setter_append (var_targetRef_5889, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef_5838, var_buildConfigurationListRef_5936, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef_5999, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef_6058, var_dependentTargets_6150, var_resourceBuildRef_6113, var_resourceFileBuildRefs_6353, constinArgument_inInfoPList, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 163)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                               const GALGAS_string constinArgument_inGroupName,
                               const GALGAS_string constinArgument_inGroupPath,
                               const GALGAS_stringlist constinArgument_inChildrenRefs,
                               GALGAS_string & outArgument_outGroupRef,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 190)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 193)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 196)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 198)) ;
  }
  {
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 199)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addGroupWithFiles'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
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
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mDefaultConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 216)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mProjectBuildConfigurationRef ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 219)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_XcodeProjectDescriptor temp_5 = ioObject ;
    test_4 = GALGAS_bool (ComparisonKind::equal, temp_5.readProperty_mMainGroupReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      extensionSetter_getReferenceKey (ioObject, ioObject.mProperty_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 222)) ;
      }
    }
  }
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 224)) ;
  }
  GALGAS_stringlist temp_6 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 226)) ;
  GALGAS_stringlist var_childrenRefs_8856 = temp_6 ;
  cEnumerator_stringset enumerator_8881 (constinArgument_inFileNames, EnumerationOrder::up) ;
  while (enumerator_8881.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 228)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_cppFileRef_8998 ;
        {
        extensionSetter_addCppFile (ioObject, enumerator_8881.current_key (HERE), var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 229)) ;
        }
        {
        var_childrenRefs_8856.setter_append (var_cppFileRef_8998, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 230)) ;
        }
        GALGAS_string var_buildRef_9134 ;
        {
        extensionSetter_addBuildFile (ioObject, var_cppFileRef_8998, enumerator_8881.current_key (HERE), var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 231)) ;
        }
        {
        ioArgument_ioCppFileBuildRefs.setter_append (var_buildRef_9134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 232)) ;
        }
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 233)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_headerFileRef_9289 ;
          {
          extensionSetter_addHeaderFile (ioObject, enumerator_8881.current_key (HERE), var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 234)) ;
          }
          {
          var_childrenRefs_8856.setter_append (var_headerFileRef_9289, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 235)) ;
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 236)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            GALGAS_string var_m_5F_FileRef_9443 ;
            {
            extensionSetter_addMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 237)) ;
            }
            GALGAS_string var_buildRef_9536 ;
            {
            extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_9443, enumerator_8881.current_key (HERE), var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 238)) ;
            }
            {
            var_childrenRefs_8856.setter_append (var_m_5F_FileRef_9443, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 239)) ;
            }
            {
            ioArgument_ioMFileBuildRefs.setter_append (var_buildRef_9536, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 240)) ;
            }
          }
        }
        if (kBoolFalse == test_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 241)).objectCompare (GALGAS_string ("swift"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              GALGAS_string var_swift_5F_FileRef_9732 ;
              {
              extensionSetter_addSwiftFile (ioObject, enumerator_8881.current_key (HERE), var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 242)) ;
              }
              GALGAS_string var_buildRef_9833 ;
              {
              extensionSetter_addBuildFile (ioObject, var_swift_5F_FileRef_9732, enumerator_8881.current_key (HERE), var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 243)) ;
              }
              {
              var_childrenRefs_8856.setter_append (var_swift_5F_FileRef_9732, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 244)) ;
              }
              {
              ioArgument_ioSwiftFileBuildRefs.setter_append (var_buildRef_9833, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 245)) ;
              }
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 246)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
              if (kBoolTrue == test_11) {
                GALGAS_string var_m_5F_FileRef_10031 ;
                {
                extensionSetter_addMMFile (ioObject, enumerator_8881.current_key (HERE), var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 247)) ;
                }
                GALGAS_string var_buildRef_10124 ;
                {
                extensionSetter_addBuildFile (ioObject, var_m_5F_FileRef_10031, enumerator_8881.current_key (HERE), var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 248)) ;
                }
                {
                var_childrenRefs_8856.setter_append (var_m_5F_FileRef_10031, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 249)) ;
                }
                {
                ioArgument_ioMMFileBuildRefs.setter_append (var_buildRef_10124, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 250)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 251)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  GALGAS_string var_framework_5F_FileRef_10329 ;
                  {
                  extensionSetter_addFrameworkFile (ioObject, enumerator_8881.current_key (HERE), var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 252)) ;
                  }
                  GALGAS_string var_buildRef_10438 ;
                  {
                  extensionSetter_addBuildFile (ioObject, var_framework_5F_FileRef_10329, enumerator_8881.current_key (HERE), var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 253)) ;
                  }
                  {
                  var_childrenRefs_8856.setter_append (var_framework_5F_FileRef_10329, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 254)) ;
                  }
                  {
                  ioArgument_ioFrameWorkFileBuildRefs.setter_append (var_buildRef_10438, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 255)) ;
                  }
                }
              }
              if (kBoolFalse == test_12) {
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  test_13 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 256)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    GALGAS_string var_resource_5F_FileRef_10654 ;
                    {
                    extensionSetter_addInfoPlistFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 257)) ;
                    }
                    {
                    var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10654, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 258)) ;
                    }
                  }
                }
                if (kBoolFalse == test_13) {
                  enumGalgasBool test_14 = kBoolTrue ;
                  if (kBoolTrue == test_14) {
                    test_14 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 259)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                    if (kBoolTrue == test_14) {
                      GALGAS_string var_resource_5F_FileRef_10818 ;
                      {
                      extensionSetter_addXIBFile (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 260)) ;
                      }
                      {
                      var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_10818, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 261)) ;
                      }
                      GALGAS_string var_buildRef_10972 ;
                      {
                      extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_10818, enumerator_8881.current_key (HERE), var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 262)) ;
                      }
                      {
                      ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_10972, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 263)) ;
                      }
                    }
                  }
                  if (kBoolFalse == test_14) {
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 264)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                      if (kBoolTrue == test_15) {
                        GALGAS_string var_resource_5F_FileRef_11134 ;
                        {
                        extensionSetter_addTIFF_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 265)) ;
                        }
                        {
                        var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11134, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 266)) ;
                        }
                        GALGAS_string var_buildRef_11288 ;
                        {
                        extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11134, enumerator_8881.current_key (HERE), var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 267)) ;
                        }
                        {
                        ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11288, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 268)) ;
                        }
                      }
                    }
                    if (kBoolFalse == test_15) {
                      enumGalgasBool test_16 = kBoolTrue ;
                      if (kBoolTrue == test_16) {
                        test_16 = GALGAS_bool (ComparisonKind::equal, enumerator_8881.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 269)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                        if (kBoolTrue == test_16) {
                          GALGAS_string var_resource_5F_FileRef_11450 ;
                          {
                          extensionSetter_addICNS_5F_file (ioObject, enumerator_8881.current_key (HERE), var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 270)) ;
                          }
                          {
                          var_childrenRefs_8856.setter_append (var_resource_5F_FileRef_11450, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 271)) ;
                          }
                          GALGAS_string var_buildRef_11604 ;
                          {
                          extensionSetter_addBuildFile (ioObject, var_resource_5F_FileRef_11450, enumerator_8881.current_key (HERE), var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 272)) ;
                          }
                          {
                          ioArgument_ioResourceFileBuildRefs.setter_append (var_buildRef_11604, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 273)) ;
                          }
                        }
                      }
                      if (kBoolFalse == test_16) {
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_8881.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)), fixItArray17  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 275)) ;
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
  ioObject.mProperty_mGroupList.setter_append (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs_8856, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 278)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor placeGroupAsMainGroup'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                            const GALGAS_string constinArgument_inGroupRef,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mMainGroupChildrenRefs.setter_append (constinArgument_inGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 285)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                        const GALGAS_stringlist constinArgument_inSettingList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mProperty_mDefaultConfigurationSettingList.plusAssign_operation(constinArgument_inSettingList, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 292)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor getReferenceKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                      GALGAS_string & outArgument_outRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_XcodeProjectDescriptor temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mProjectObjectReference ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_XcodeProjectDescriptor temp_2 = ioObject ;
      ioObject.mProperty_mProjectObjectReference = temp_2.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)).getter_rightSubString (GALGAS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 352)) ;
      ioObject.mProperty_mSequenceNumber.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 353)) ;
    }
  }
  const GALGAS_XcodeProjectDescriptor temp_3 = ioObject ;
  outArgument_outRef = temp_3.readProperty_mSequenceNumber ().getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)).getter_rightSubString (GALGAS_uint (uint32_t (24U)) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 355)) ;
  ioObject.mProperty_mSequenceNumber.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 356)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor generateAtPath'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                     const GALGAS_string constinArgument_inPath,
                                     const GALGAS_string constinArgument_inCacheFilePath,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_XcodeProjectDescriptor temp_0 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_1 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_2 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_3 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_4 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_5 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_6 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_7 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_8 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_9 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_10 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_11 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_12 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_13 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_14 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_15 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_16 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_17 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_18 = inObject ;
  const GALGAS_XcodeProjectDescriptor temp_19 = inObject ;
  GALGAS_string var_contents_17330 = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, temp_0.readProperty_mProjectObjectReference (), temp_1.readProperty_mMainGroupReference (), temp_2.readProperty_mGroupList (), temp_3.readProperty_mMainGroupChildrenRefs (), temp_4.readProperty_mToolTargetList (), temp_5.readProperty_mAppTargetList (), temp_6.readProperty_mCppFileList (), temp_7.readProperty_m_5F_M_5F_FileList (), temp_8.readProperty_m_5F_MM_5F_FileList (), temp_9.readProperty_m_5F_SwiftFileList (), temp_10.readProperty_mFrameworkFileList (), temp_11.readProperty_mHeaderFileList (), temp_12.readProperty_mInfoPlistFileList (), temp_13.readProperty_mTIFF_5F_fileList (), temp_14.readProperty_mICNS_5F_fileList (), temp_15.readProperty_mXIB_5F_fileList (), temp_16.readProperty_mBuildFileList (), temp_17.readProperty_mDefaultConfigurationRef (), temp_18.readProperty_mDefaultConfigurationSettingList (), temp_19.readProperty_mProjectBuildConfigurationRef () COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 421))) ;
  GALGAS_string var_projectCoreFile_17974 = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 443)) ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    GALGAS_bool test_21 = var_projectCoreFile_17974.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)) ;
    if (kBoolTrue != test_21.boolEnum ()) {
      test_21 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)) ;
    }
    GALGAS_bool test_22 = test_21 ;
    if (kBoolTrue != test_22.boolEnum ()) {
      test_22 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_string::class_func_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 444)).objectCompare (var_contents_17330)) ;
    }
    test_20 = test_22.boolEnum () ;
    if (kBoolTrue == test_20) {
      GALGAS_bool joker_18234 ; // Joker input parameter
      var_contents_17330.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_18234, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 445)) ;
      var_contents_17330.method_makeDirectoryAndWriteToFile (var_projectCoreFile_17974, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 446)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::init_21__21_ (const GALGAS_lstring & in_mValue_30_,
                                                                                   const GALGAS_lstring & in_mValue_31_,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::class_func_new (const GALGAS_lstring & in_mValue0,
                                                                                     const GALGAS_lstring & in_mValue1,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (void) :
mProperty_mPropertyDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::~ GALGAS_declarationListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::init_21_ (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyDeclaration = in_mPropertyDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element::GALGAS_declarationListAST_2D_element (const GALGAS_abstractDeclarationAST & inOperand0) :
mProperty_mPropertyDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::class_func_new (const GALGAS_abstractDeclarationAST & in_mPropertyDeclaration,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyDeclaration = in_mPropertyDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_declarationListAST_2D_element::objectCompare (const GALGAS_declarationListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyDeclaration.objectCompare (inOperand.mProperty_mPropertyDeclaration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_declarationListAST_2D_element::isValid (void) const {
  return mProperty_mPropertyDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::drop (void) {
  mProperty_mPropertyDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_declarationListAST_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @declarationListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_declarationListAST_2D_element ("declarationListAST-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_declarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_declarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_declarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_declarationListAST_2D_element GALGAS_declarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_declarationListAST_2D_element result ;
  const GALGAS_declarationListAST_2D_element * p = (const GALGAS_declarationListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_declarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (void) :
mProperty_mExternSwiftDelegateName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element::~ GALGAS_externSwiftDelegateList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::init_21_ (const GALGAS_lstring & in_mExternSwiftDelegateName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftDelegateName = in_mExternSwiftDelegateName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element::GALGAS_externSwiftDelegateList_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_mExternSwiftDelegateName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::class_func_new (const GALGAS_lstring & in_mExternSwiftDelegateName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftDelegateName = in_mExternSwiftDelegateName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externSwiftDelegateList_2D_element::objectCompare (const GALGAS_externSwiftDelegateList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExternSwiftDelegateName.objectCompare (inOperand.mProperty_mExternSwiftDelegateName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externSwiftDelegateList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftDelegateName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList_2D_element::drop (void) {
  mProperty_mExternSwiftDelegateName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftDelegateList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftDelegateList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externSwiftDelegateList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ("externSwiftDelegateList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externSwiftDelegateList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externSwiftDelegateList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftDelegateList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList_2D_element GALGAS_externSwiftDelegateList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftDelegateList_2D_element result ;
  const GALGAS_externSwiftDelegateList_2D_element * p = (const GALGAS_externSwiftDelegateList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externSwiftDelegateList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (void) :
mProperty_mExternSwiftFunctionName (),
mProperty_mCallerName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element::~ GALGAS_externSwiftFunctionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::init_21__21_ (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                                                   const GALGAS_lstring & in_mCallerName,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftFunctionName = in_mExternSwiftFunctionName ;
  result.mProperty_mCallerName = in_mCallerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mExternSwiftFunctionName (inOperand0),
mProperty_mCallerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::class_func_new (const GALGAS_lstring & in_mExternSwiftFunctionName,
                                                                                                     const GALGAS_lstring & in_mCallerName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftFunctionName = in_mExternSwiftFunctionName ;
  result.mProperty_mCallerName = in_mCallerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externSwiftFunctionList_2D_element::objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mExternSwiftFunctionName.objectCompare (inOperand.mProperty_mExternSwiftFunctionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mCallerName.objectCompare (inOperand.mProperty_mCallerName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externSwiftFunctionList_2D_element::isValid (void) const {
  return mProperty_mExternSwiftFunctionName.isValid () && mProperty_mCallerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList_2D_element::drop (void) {
  mProperty_mExternSwiftFunctionName.drop () ;
  mProperty_mCallerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externSwiftFunctionList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftFunctionList-element:") ;
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
//
//     @externSwiftFunctionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ("externSwiftFunctionList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externSwiftFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  const GALGAS_externSwiftFunctionList_2D_element * p = (const GALGAS_externSwiftFunctionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externSwiftFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element::~ GALGAS_externFunctionMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externFunctionMap_2D_element::objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_externFunctionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_externFunctionMap_2D_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionMap_2D_element ("externFunctionMap-element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  const GALGAS_externFunctionMap_2D_element * p = (const GALGAS_externFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element::GALGAS_enumerationFunctionListAST_2D_element (void) :
mProperty_mEnumName (),
mProperty_mFunctionName (),
mProperty_mAssociationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element::~ GALGAS_enumerationFunctionListAST_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element GALGAS_enumerationFunctionListAST_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mEnumName,
                                                                                                             const GALGAS_lstring & in_mFunctionName,
                                                                                                             const GALGAS__32_lstringlist & in_mAssociationList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationFunctionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumName = in_mEnumName ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mAssociationList = in_mAssociationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element::GALGAS_enumerationFunctionListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS__32_lstringlist & inOperand2) :
mProperty_mEnumName (inOperand0),
mProperty_mFunctionName (inOperand1),
mProperty_mAssociationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element GALGAS_enumerationFunctionListAST_2D_element::class_func_new (const GALGAS_lstring & in_mEnumName,
                                                                                                           const GALGAS_lstring & in_mFunctionName,
                                                                                                           const GALGAS__32_lstringlist & in_mAssociationList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumerationFunctionListAST_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumName = in_mEnumName ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mAssociationList = in_mAssociationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumerationFunctionListAST_2D_element::objectCompare (const GALGAS_enumerationFunctionListAST_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEnumName.objectCompare (inOperand.mProperty_mEnumName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociationList.objectCompare (inOperand.mProperty_mAssociationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_enumerationFunctionListAST_2D_element::isValid (void) const {
  return mProperty_mEnumName.isValid () && mProperty_mFunctionName.isValid () && mProperty_mAssociationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST_2D_element::drop (void) {
  mProperty_mEnumName.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mAssociationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumerationFunctionListAST_2D_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationFunctionListAST-element:") ;
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
//
//     @enumerationFunctionListAST-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2D_element ("enumerationFunctionListAST-element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationFunctionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationFunctionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationFunctionListAST_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationFunctionListAST_2D_element GALGAS_enumerationFunctionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumerationFunctionListAST_2D_element result ;
  const GALGAS_enumerationFunctionListAST_2D_element * p = (const GALGAS_enumerationFunctionListAST_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationFunctionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_uint & in_mIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_uint & in_mIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
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

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumConstantMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantMap-element:") ;
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
//
//     @enumConstantMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element::GALGAS_enumFuncMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAssociationSortedList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element::~ GALGAS_enumFuncMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element GALGAS_enumFuncMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                           const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFuncMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAssociationSortedList = in_mAssociationSortedList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element::GALGAS_enumFuncMap_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_enumFunAssociationSortedList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mAssociationSortedList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element GALGAS_enumFuncMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                             const GALGAS_enumFunAssociationSortedList & in_mAssociationSortedList,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFuncMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAssociationSortedList = in_mAssociationSortedList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumFuncMap_2D_element::objectCompare (const GALGAS_enumFuncMap_2D_element & inOperand) const {
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

bool GALGAS_enumFuncMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAssociationSortedList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAssociationSortedList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFuncMap_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFuncMap-element:") ;
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
//
//     @enumFuncMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFuncMap_2D_element ("enumFuncMap-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFuncMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFuncMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFuncMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap_2D_element GALGAS_enumFuncMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumFuncMap_2D_element result ;
  const GALGAS_enumFuncMap_2D_element * p = (const GALGAS_enumFuncMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumFuncMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element::GALGAS_astAutoLayoutOutletLinkerList_2D_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element::~ GALGAS_astAutoLayoutOutletLinkerList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element GALGAS_astAutoLayoutOutletLinkerList_2D_element::init_21__21_ (const GALGAS_lstring & in_mLinkerName,
                                                                                                               const GALGAS_lstringlist & in_mOutletNameList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutOutletLinkerList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameList = in_mOutletNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element::GALGAS_astAutoLayoutOutletLinkerList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element GALGAS_astAutoLayoutOutletLinkerList_2D_element::class_func_new (const GALGAS_lstring & in_mLinkerName,
                                                                                                                 const GALGAS_lstringlist & in_mOutletNameList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutOutletLinkerList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameList = in_mOutletNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAutoLayoutOutletLinkerList_2D_element::objectCompare (const GALGAS_astAutoLayoutOutletLinkerList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLinkerName.objectCompare (inOperand.mProperty_mLinkerName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletNameList.objectCompare (inOperand.mProperty_mOutletNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutOutletLinkerList_2D_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList_2D_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutOutletLinkerList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutOutletLinkerList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLinkerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletNameList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutOutletLinkerList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2D_element ("astAutoLayoutOutletLinkerList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutOutletLinkerList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutOutletLinkerList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutOutletLinkerList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList_2D_element GALGAS_astAutoLayoutOutletLinkerList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutOutletLinkerList_2D_element result ;
  const GALGAS_astAutoLayoutOutletLinkerList_2D_element * p = (const GALGAS_astAutoLayoutOutletLinkerList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutOutletLinkerList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element::GALGAS_autoLayoutClassParameterList_2D_element (void) :
mProperty_mParameterName (),
mProperty_mParameterType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element::~ GALGAS_autoLayoutClassParameterList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element GALGAS_autoLayoutClassParameterList_2D_element::init_21__21_ (const GALGAS_lstring & in_mParameterName,
                                                                                                             const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element::GALGAS_autoLayoutClassParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_autoLayoutClassParameterType & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element GALGAS_autoLayoutClassParameterList_2D_element::class_func_new (const GALGAS_lstring & in_mParameterName,
                                                                                                               const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutClassParameterList_2D_element::objectCompare (const GALGAS_autoLayoutClassParameterList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterType.objectCompare (inOperand.mProperty_mParameterType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterList_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutClassParameterList-element:") ;
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
//
//     @autoLayoutClassParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2D_element ("autoLayoutClassParameterList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutClassParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutClassParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutClassParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element GALGAS_autoLayoutClassParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList_2D_element result ;
  const GALGAS_autoLayoutClassParameterList_2D_element * p = (const GALGAS_autoLayoutClassParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutClassParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element::GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) :
mProperty_lkey (),
mProperty_mFomalParameterList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element::~ GALGAS_astAutoLayoutViewFunctionMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element GALGAS_astAutoLayoutViewFunctionMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                             const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFomalParameterList = in_mFomalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element::GALGAS_astAutoLayoutViewFunctionMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_autoLayoutClassParameterList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFomalParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element GALGAS_astAutoLayoutViewFunctionMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                               const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFomalParameterList = in_mFomalParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAutoLayoutViewFunctionMap_2D_element::objectCompare (const GALGAS_astAutoLayoutViewFunctionMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFomalParameterList.objectCompare (inOperand.mProperty_mFomalParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewFunctionMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFomalParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFomalParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewFunctionMap-element:") ;
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
//
//     @astAutoLayoutViewFunctionMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2D_element ("astAutoLayoutViewFunctionMap-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element GALGAS_astAutoLayoutViewFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap_2D_element result ;
  const GALGAS_astAutoLayoutViewFunctionMap_2D_element * p = (const GALGAS_astAutoLayoutViewFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap_2D_element::GALGAS_autolayoutViewClassMap_2D_element (void) :
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

GALGAS_autolayoutViewClassMap_2D_element::~ GALGAS_autolayoutViewClassMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autolayoutViewClassMap_2D_element GALGAS_autolayoutViewClassMap_2D_element::init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                                 const GALGAS_lstring & in_mSuperClassName,
                                                                                                                                 const GALGAS_bool & in_mHandlesRunAction,
                                                                                                                                 const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                                                                 const GALGAS_bool & in_mHandleEnabledBinding,
                                                                                                                                 const GALGAS_bool & in_mHandleHiddenBinding,
                                                                                                                                 const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                                                                                                 const GALGAS_bool & in_mUserDefined,
                                                                                                                                 const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                                                                 const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap_2D_element result ;
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

void GALGAS_autolayoutViewClassMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap_2D_element::GALGAS_autolayoutViewClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_bool & inOperand3,
                                                                                    const GALGAS_bool & inOperand4,
                                                                                    const GALGAS_bool & inOperand5,
                                                                                    const GALGAS_bool & inOperand6,
                                                                                    const GALGAS_bool & inOperand7,
                                                                                    const GALGAS_autoLayoutClassParameterList & inOperand8,
                                                                                    const GALGAS_astAutoLayoutViewFunctionMap & inOperand9) :
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

GALGAS_autolayoutViewClassMap_2D_element GALGAS_autolayoutViewClassMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                   const GALGAS_lstring & in_mSuperClassName,
                                                                                                   const GALGAS_bool & in_mHandlesRunAction,
                                                                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                                   const GALGAS_bool & in_mHandleEnabledBinding,
                                                                                                   const GALGAS_bool & in_mHandleHiddenBinding,
                                                                                                   const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                                                                   const GALGAS_bool & in_mUserDefined,
                                                                                                   const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                                   const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap_2D_element result ;
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

ComparisonResult GALGAS_autolayoutViewClassMap_2D_element::objectCompare (const GALGAS_autolayoutViewClassMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSuperClassName.objectCompare (inOperand.mProperty_mSuperClassName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandlesRunAction.objectCompare (inOperand.mProperty_mHandlesRunAction) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (inOperand.mProperty_mHandlesTableValueBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleEnabledBinding.objectCompare (inOperand.mProperty_mHandleEnabledBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleHiddenBinding.objectCompare (inOperand.mProperty_mHandleHiddenBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (inOperand.mProperty_mHandleGraphicControllerBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUserDefined.objectCompare (inOperand.mProperty_mUserDefined) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (inOperand.mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutViewClassMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () && mProperty_mParameterList.isValid () && mProperty_mAutoLayoutViewFunctionMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autolayoutViewClassMap_2D_element::drop (void) {
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

void GALGAS_autolayoutViewClassMap_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutViewClassMap-element:") ;
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
//
//     @autolayoutViewClassMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap_2D_element ("autolayoutViewClassMap-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autolayoutViewClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autolayoutViewClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autolayoutViewClassMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autolayoutViewClassMap_2D_element GALGAS_autolayoutViewClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutViewClassMap_2D_element result ;
  const GALGAS_autolayoutViewClassMap_2D_element * p = (const GALGAS_autolayoutViewClassMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autolayoutViewClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) :
mProperty_mOutletClassName (),
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::~ GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                                                   const GALGAS_lstring & in_mBindingName,
                                                                                                                                                   const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                                   const GALGAS_controllerBindingOptionList & in_mBindingOptionList,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletClassName = in_mOutletClassName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mOutletClassBindingSpecificationModelList = in_mOutletClassBindingSpecificationModelList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3) :
mProperty_mOutletClassName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mOutletClassBindingSpecificationModelList (inOperand2),
mProperty_mBindingOptionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::class_func_new (const GALGAS_lstring & in_mOutletClassName,
                                                                                                                                             const GALGAS_lstring & in_mBindingName,
                                                                                                                                             const GALGAS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                             const GALGAS_controllerBindingOptionList & in_mBindingOptionList,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletClassName = in_mOutletClassName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mOutletClassBindingSpecificationModelList = in_mOutletClassBindingSpecificationModelList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletClassName.objectCompare (inOperand.mProperty_mOutletClassName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingOptionList.objectCompare (inOperand.mProperty_mBindingOptionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::isValid (void) const {
  return mProperty_mOutletClassName.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mOutletClassBindingSpecificationModelList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewClassBindingSpecificationList-element:") ;
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
//
//     @autoLayoutViewClassBindingSpecificationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element ("autoLayoutViewClassBindingSpecificationList-element",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element result ;
  const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element * p = (const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewClassBindingSpecificationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassBindingSpecificationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element::GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletSuperClassName (),
mProperty_mBindingMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element::~ GALGAS_autoLayoutBindingSpecificationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element GALGAS_autoLayoutBindingSpecificationMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                           const GALGAS_lstring & in_mOutletSuperClassName,
                                                                                                                           const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletSuperClassName = in_mOutletSuperClassName ;
  result.mProperty_mBindingMap = in_mBindingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element::GALGAS_autoLayoutBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_autoLayoutViewBindingSpecificationMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletSuperClassName (inOperand1),
mProperty_mBindingMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element GALGAS_autoLayoutBindingSpecificationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                         const GALGAS_lstring & in_mOutletSuperClassName,
                                                                                                                         const GALGAS_autoLayoutViewBindingSpecificationMap & in_mBindingMap,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletSuperClassName = in_mOutletSuperClassName ;
  result.mProperty_mBindingMap = in_mBindingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutBindingSpecificationMap_2D_element::objectCompare (const GALGAS_autoLayoutBindingSpecificationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletSuperClassName.objectCompare (inOperand.mProperty_mOutletSuperClassName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingMap.objectCompare (inOperand.mProperty_mBindingMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutBindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletSuperClassName.drop () ;
  mProperty_mBindingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutBindingSpecificationMap_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutBindingSpecificationMap-element:") ;
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
//
//     @autoLayoutBindingSpecificationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2D_element ("autoLayoutBindingSpecificationMap-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutBindingSpecificationMap_2D_element GALGAS_autoLayoutBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutBindingSpecificationMap_2D_element result ;
  const GALGAS_autoLayoutBindingSpecificationMap_2D_element * p = (const GALGAS_autoLayoutBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (void) :
mProperty_lkey (),
mProperty_mOutletBindingSpecificationModelList (),
mProperty_mControllerBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::~ GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                                                   const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                                                   const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletBindingSpecificationModelList = in_mOutletBindingSpecificationModelList ;
  result.mProperty_mControllerBindingOptionList = in_mControllerBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletBindingSpecificationModelList (inOperand1),
mProperty_mControllerBindingOptionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                                                 const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                                                 const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletBindingSpecificationModelList = in_mOutletBindingSpecificationModelList ;
  result.mProperty_mControllerBindingOptionList = in_mControllerBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::objectCompare (const GALGAS_autoLayoutViewBindingSpecificationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (inOperand.mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mControllerBindingOptionList.objectCompare (inOperand.mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletBindingSpecificationModelList.drop () ;
  mProperty_mControllerBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewBindingSpecificationMap-element:") ;
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
//
//     @autoLayoutViewBindingSpecificationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2D_element ("autoLayoutViewBindingSpecificationMap-element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element GALGAS_autoLayoutViewBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap_2D_element result ;
  const GALGAS_autoLayoutViewBindingSpecificationMap_2D_element * p = (const GALGAS_autoLayoutViewBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element::GALGAS_astViewDeclarationList_2D_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element::~ GALGAS_astViewDeclarationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element GALGAS_astViewDeclarationList_2D_element::init_21__21_ (const GALGAS_lstring & in_mViewName,
                                                                                                 const GALGAS_astAbstractViewDeclaration & in_mView,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element::GALGAS_astViewDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_astAbstractViewDeclaration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element GALGAS_astViewDeclarationList_2D_element::class_func_new (const GALGAS_lstring & in_mViewName,
                                                                                                   const GALGAS_astAbstractViewDeclaration & in_mView,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astViewDeclarationList_2D_element::objectCompare (const GALGAS_astViewDeclarationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mViewName.objectCompare (inOperand.mProperty_mViewName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mView.objectCompare (inOperand.mProperty_mView) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astViewDeclarationList_2D_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList_2D_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astViewDeclarationList-element:") ;
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
//
//     @astViewDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2D_element ("astViewDeclarationList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element GALGAS_astViewDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList_2D_element result ;
  const GALGAS_astViewDeclarationList_2D_element * p = (const GALGAS_astViewDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astViewDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element::GALGAS_astNewStackViewDeclarationList_2D_element (void) :
mProperty_mInstanciedStackViewName (),
mProperty_mTypeStackViewName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element::~ GALGAS_astNewStackViewDeclarationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element GALGAS_astNewStackViewDeclarationList_2D_element::init_21__21_ (const GALGAS_lstring & in_mInstanciedStackViewName,
                                                                                                                 const GALGAS_lstring & in_mTypeStackViewName,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astNewStackViewDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstanciedStackViewName = in_mInstanciedStackViewName ;
  result.mProperty_mTypeStackViewName = in_mTypeStackViewName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element::GALGAS_astNewStackViewDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1) :
mProperty_mInstanciedStackViewName (inOperand0),
mProperty_mTypeStackViewName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element GALGAS_astNewStackViewDeclarationList_2D_element::class_func_new (const GALGAS_lstring & in_mInstanciedStackViewName,
                                                                                                                   const GALGAS_lstring & in_mTypeStackViewName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astNewStackViewDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstanciedStackViewName = in_mInstanciedStackViewName ;
  result.mProperty_mTypeStackViewName = in_mTypeStackViewName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astNewStackViewDeclarationList_2D_element::objectCompare (const GALGAS_astNewStackViewDeclarationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstanciedStackViewName.objectCompare (inOperand.mProperty_mInstanciedStackViewName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTypeStackViewName.objectCompare (inOperand.mProperty_mTypeStackViewName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astNewStackViewDeclarationList_2D_element::isValid (void) const {
  return mProperty_mInstanciedStackViewName.isValid () && mProperty_mTypeStackViewName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList_2D_element::drop (void) {
  mProperty_mInstanciedStackViewName.drop () ;
  mProperty_mTypeStackViewName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astNewStackViewDeclarationList-element:") ;
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
//
//     @astNewStackViewDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2D_element ("astNewStackViewDeclarationList-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astNewStackViewDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astNewStackViewDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astNewStackViewDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element GALGAS_astNewStackViewDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astNewStackViewDeclarationList_2D_element result ;
  const GALGAS_astNewStackViewDeclarationList_2D_element * p = (const GALGAS_astNewStackViewDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astNewStackViewDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astNewStackViewDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element::GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element::~ GALGAS_astAutoLayoutViewFunctionCallList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element GALGAS_astAutoLayoutViewFunctionCallList_2D_element::init_21__21_ (const GALGAS_lstring & in_mFunctionName,
                                                                                                                       const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element::GALGAS_astAutoLayoutViewFunctionCallList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element GALGAS_astAutoLayoutViewFunctionCallList_2D_element::class_func_new (const GALGAS_lstring & in_mFunctionName,
                                                                                                                         const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAutoLayoutViewFunctionCallList_2D_element::objectCompare (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterList.objectCompare (inOperand.mProperty_mParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewFunctionCallList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList_2D_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewFunctionCallList-element:") ;
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
//
//     @astAutoLayoutViewFunctionCallList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2D_element ("astAutoLayoutViewFunctionCallList-element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionCallList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionCallList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionCallList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element GALGAS_astAutoLayoutViewFunctionCallList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList_2D_element result ;
  const GALGAS_astAutoLayoutViewFunctionCallList_2D_element * p = (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionCallList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionCallList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (void) :
mProperty_mParameterName (),
mProperty_mParameterType (),
mProperty_mParameter () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::~ GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::init_21__21__21_ (const GALGAS_lstring & in_mParameterName,
                                                                                                                                           const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                                           const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  result.mProperty_mParameter = in_mParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                                          const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterType (inOperand1),
mProperty_mParameter (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::class_func_new (const GALGAS_lstring & in_mParameterName,
                                                                                                                                         const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                                         const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  result.mProperty_mParameter = in_mParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::objectCompare (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterType.objectCompare (inOperand.mProperty_mParameterType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameter.objectCompare (inOperand.mProperty_mParameter) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterType.isValid () && mProperty_mParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterType.drop () ;
  mProperty_mParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterList-element:") ;
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
//
//     @astAutoLayoutViewInstructionParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2D_element ("astAutoLayoutViewInstructionParameterList-element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewInstructionParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element GALGAS_astAutoLayoutViewInstructionParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList_2D_element result ;
  const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element * p = (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element::GALGAS_autoLayoutViewDeclarationMap_2D_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element::~ GALGAS_autoLayoutViewDeclarationMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element GALGAS_autoLayoutViewDeclarationMap_2D_element::init_21_ (const GALGAS_lstring & in_lkey,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element::GALGAS_autoLayoutViewDeclarationMap_2D_element (const GALGAS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element GALGAS_autoLayoutViewDeclarationMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewDeclarationMap_2D_element::objectCompare (const GALGAS_autoLayoutViewDeclarationMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewDeclarationMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewDeclarationMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewDeclarationMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2D_element ("autoLayoutViewDeclarationMap-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewDeclarationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewDeclarationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewDeclarationMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element GALGAS_autoLayoutViewDeclarationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap_2D_element result ;
  const GALGAS_autoLayoutViewDeclarationMap_2D_element * p = (const GALGAS_autoLayoutViewDeclarationMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewDeclarationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element::GALGAS_autoLayoutConfiguratorMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAutoLayoutOutletTypeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element::~ GALGAS_autoLayoutConfiguratorMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element GALGAS_autoLayoutConfiguratorMap_2D_element::init_21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                       const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element::GALGAS_autoLayoutConfiguratorMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mAutoLayoutOutletTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element GALGAS_autoLayoutConfiguratorMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutConfiguratorMap_2D_element::objectCompare (const GALGAS_autoLayoutConfiguratorMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAutoLayoutOutletTypeName.objectCompare (inOperand.mProperty_mAutoLayoutOutletTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutConfiguratorMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAutoLayoutOutletTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAutoLayoutOutletTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutConfiguratorMap-element:") ;
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
//
//     @autoLayoutConfiguratorMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2D_element ("autoLayoutConfiguratorMap-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutConfiguratorMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutConfiguratorMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutConfiguratorMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element GALGAS_autoLayoutConfiguratorMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap_2D_element result ;
  const GALGAS_autoLayoutConfiguratorMap_2D_element * p = (const GALGAS_autoLayoutConfiguratorMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutConfiguratorMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutConfiguratorMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element::GALGAS_autoLayoutOutletMap_2D_element (void) :
mProperty_lkey (),
mProperty_mAutoLayoutOutletTypeName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element::~ GALGAS_autoLayoutOutletMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element GALGAS_autoLayoutOutletMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                               const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                                                               const GALGAS_bool & in_mOutletIsArray,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  result.mProperty_mOutletIsArray = in_mOutletIsArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element::GALGAS_autoLayoutOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mAutoLayoutOutletTypeName (inOperand1),
mProperty_mOutletIsArray (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element GALGAS_autoLayoutOutletMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                             const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                                                             const GALGAS_bool & in_mOutletIsArray,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  result.mProperty_mOutletIsArray = in_mOutletIsArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutOutletMap_2D_element::objectCompare (const GALGAS_autoLayoutOutletMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAutoLayoutOutletTypeName.objectCompare (inOperand.mProperty_mAutoLayoutOutletTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletIsArray.objectCompare (inOperand.mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutOutletMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAutoLayoutOutletTypeName.isValid () && mProperty_mOutletIsArray.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAutoLayoutOutletTypeName.drop () ;
  mProperty_mOutletIsArray.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutOutletMap-element:") ;
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
//
//     @autoLayoutOutletMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2D_element ("autoLayoutOutletMap-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutOutletMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutOutletMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutOutletMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element GALGAS_autoLayoutOutletMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap_2D_element result ;
  const GALGAS_autoLayoutOutletMap_2D_element * p = (const GALGAS_autoLayoutOutletMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutOutletMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
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

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::init_21__21__21__21__21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                         const GALGAS_lstring & in_mSuperClassName,
                                                                                                         const GALGAS_bool & in_mHandlesRunAction,
                                                                                                         const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                                         const GALGAS_bool & in_mHandleEnabledBinding,
                                                                                                         const GALGAS_bool & in_mHandleHiddenBinding,
                                                                                                         const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                                                                         const GALGAS_bool & in_mUserDefined,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
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

void GALGAS_outletClassMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_bool & inOperand3,
                                                                    const GALGAS_bool & inOperand4,
                                                                    const GALGAS_bool & inOperand5,
                                                                    const GALGAS_bool & inOperand6,
                                                                    const GALGAS_bool & inOperand7) :
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

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                   const GALGAS_lstring & in_mSuperClassName,
                                                                                   const GALGAS_bool & in_mHandlesRunAction,
                                                                                   const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                   const GALGAS_bool & in_mHandleEnabledBinding,
                                                                                   const GALGAS_bool & in_mHandleHiddenBinding,
                                                                                   const GALGAS_bool & in_mHandleGraphicControllerBinding,
                                                                                   const GALGAS_bool & in_mUserDefined,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
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

ComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSuperClassName.objectCompare (inOperand.mProperty_mSuperClassName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandlesRunAction.objectCompare (inOperand.mProperty_mHandlesRunAction) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (inOperand.mProperty_mHandlesTableValueBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleEnabledBinding.objectCompare (inOperand.mProperty_mHandleEnabledBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleHiddenBinding.objectCompare (inOperand.mProperty_mHandleHiddenBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mHandleGraphicControllerBinding.objectCompare (inOperand.mProperty_mHandleGraphicControllerBinding) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mUserDefined.objectCompare (inOperand.mProperty_mUserDefined) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassMap_2D_element::drop (void) {
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

void GALGAS_outletClassMap_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassMap-element:") ;
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
//
//     @outletClassMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  const GALGAS_outletClassMap_2D_element * p = (const GALGAS_outletClassMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mProperty_mOptionName (),
mProperty_mOptionTypeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::init_21__21_ (const GALGAS_lstring & in_mOptionName,
                                                                                                           const GALGAS_lstring & in_mOptionTypeName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::class_func_new (const GALGAS_lstring & in_mOptionName,
                                                                                                             const GALGAS_lstring & in_mOptionTypeName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionName.objectCompare (inOperand.mProperty_mOptionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOptionTypeName.objectCompare (inOperand.mProperty_mOptionTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList_2D_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controllerBindingOptionList-element:") ;
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
//
//     @controllerBindingOptionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  const GALGAS_controllerBindingOptionList_2D_element * p = (const GALGAS_controllerBindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controllerBindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mProperty_mModelTypeName (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::init_21__21_ (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                                     const GALGAS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mProperty_mModelTypeName (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::class_func_new (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                                       const GALGAS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelTypeName.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassBindingSpecificationModelList-element:") ;
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
//
//     @outletClassBindingSpecificationModelList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationModelList_2D_element * p = (const GALGAS_outletClassBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

