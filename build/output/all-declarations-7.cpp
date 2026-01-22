#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// @toOneRelationshipAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneRelationshipAST::objectCompare (const GGS_toOneRelationshipAST & inOperand) const {
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

GGS_toOneRelationshipAST::GGS_toOneRelationshipAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST::
init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                              const GGS_lstring & in_mDestinationEntityName,
                              const GGS_lstring & in_mToOneRelationshipName,
                              const GGS_toOneOppositeRelationship & in_mOpposite,
                              const GGS_bool & in_mUsedForSignature,
                              const GGS_bool & in_mWeak,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_toOneRelationshipAST * object = nullptr ;
  macroMyNew (object, cPtr_toOneRelationshipAST (inCompiler COMMA_THERE)) ;
  object->toOneRelationshipAST_init_21__21__21__21__21__21_ (in_mClassName, in_mDestinationEntityName, in_mToOneRelationshipName, in_mOpposite, in_mUsedForSignature, in_mWeak, inCompiler) ;
  const GGS_toOneRelationshipAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOneRelationshipAST::
toOneRelationshipAST_init_21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                   const GGS_lstring & in_mDestinationEntityName,
                                                   const GGS_lstring & in_mToOneRelationshipName,
                                                   const GGS_toOneOppositeRelationship & in_mOpposite,
                                                   const GGS_bool & in_mUsedForSignature,
                                                   const GGS_bool & in_mWeak,
                                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mDestinationEntityName = in_mDestinationEntityName ;
  mProperty_mToOneRelationshipName = in_mToOneRelationshipName ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mWeak = in_mWeak ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST::GGS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toOneRelationshipAST::readProperty_mDestinationEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mDestinationEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mDestinationEntityName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mDestinationEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_toOneRelationshipAST::readProperty_mToOneRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mToOneRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mToOneRelationshipName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mToOneRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneRelationshipAST::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mOpposite (const GGS_toOneOppositeRelationship & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mOpposite = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneRelationshipAST::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mUsedForSignature (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneRelationshipAST::readProperty_mWeak (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    return p->mProperty_mWeak ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneRelationshipAST::setProperty_mWeak (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    p->mProperty_mWeak = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOneRelationshipAST class
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

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GGS_lstring & in_mClassName,
                                                      const GGS_lstring & in_mDestinationEntityName,
                                                      const GGS_lstring & in_mToOneRelationshipName,
                                                      const GGS_toOneOppositeRelationship & in_mOpposite,
                                                      const GGS_bool & in_mUsedForSignature,
                                                      const GGS_bool & in_mWeak,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
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

acPtr_class * cPtr_toOneRelationshipAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOpposite, mProperty_mUsedForSignature, mProperty_mWeak, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @toOneRelationshipAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_toOneRelationshipAST result ;
  const GGS_toOneRelationshipAST * p = (const GGS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedHorizontalViewDeclaration::objectCompare (const GGS_astComputedHorizontalViewDeclaration & inOperand) const {
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

GGS_astComputedHorizontalViewDeclaration::GGS_astComputedHorizontalViewDeclaration (void) :
GGS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration::
init_21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                  const GGS_astViewInstructionList & in_mInstructionList,
                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_astComputedHorizontalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedHorizontalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->astComputedHorizontalViewDeclaration_init_21__21__21_ (in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_astComputedHorizontalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedHorizontalViewDeclaration::
astComputedHorizontalViewDeclaration_init_21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                       const GGS_astViewInstructionList & in_mInstructionList,
                                                       const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration::GGS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GGS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedHorizontalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astComputedHorizontalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astComputedHorizontalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GGS_astViewInstructionList & in_mInstructionList,
                                                                                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
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

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @astComputedHorizontalViewDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                                                         & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astComputedHorizontalViewDeclaration result ;
  const GGS_astComputedHorizontalViewDeclaration * p = (const GGS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedVerticalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedVerticalViewDeclaration::objectCompare (const GGS_astComputedVerticalViewDeclaration & inOperand) const {
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

GGS_astComputedVerticalViewDeclaration::GGS_astComputedVerticalViewDeclaration (void) :
GGS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration::
init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                          const GGS_lstring & in_mConfiguratorName,
                          const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                          const GGS_astViewInstructionList & in_mInstructionList,
                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_astComputedVerticalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedVerticalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_astComputedVerticalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::
astComputedVerticalViewDeclaration_init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                             const GGS_lstring & in_mConfiguratorName,
                                                             const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                             const GGS_astViewInstructionList & in_mInstructionList,
                                                             const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                             Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration::GGS_astComputedVerticalViewDeclaration (const cPtr_astComputedVerticalViewDeclaration * inSourcePtr) :
GGS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedVerticalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astComputedVerticalViewDeclaration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astComputedVerticalViewDeclaration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedVerticalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astComputedVerticalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astComputedVerticalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedVerticalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                                                  const GGS_lstring & in_mConfiguratorName,
                                                                                  const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                  const GGS_astViewInstructionList & in_mInstructionList,
                                                                                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astComputedVerticalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

void cPtr_astComputedVerticalViewDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedVerticalViewDeclaration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedVerticalViewDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedVerticalViewDeclaration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedVerticalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astComputedVerticalViewDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ("astComputedVerticalViewDeclaration",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedVerticalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedVerticalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedVerticalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedVerticalViewDeclaration result ;
  const GGS_astComputedVerticalViewDeclaration * p = (const GGS_astComputedVerticalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedVerticalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astVStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astVStackViewInstructionDeclaration::objectCompare (const GGS_astVStackViewInstructionDeclaration & inOperand) const {
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

GGS_astVStackViewInstructionDeclaration::GGS_astVStackViewInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration::
init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                              const GGS_lstring & in_mConfiguratorName,
                              const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                              const GGS_astViewInstructionList & in_mInstructionList,
                              const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                              const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_astVStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astVStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFunctionCallList, in_mInstructionList, in_mOptionalHiddenBinding, in_mAstNewStackViewDeclarationList, inCompiler) ;
  const GGS_astVStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::
astVStackViewInstructionDeclaration_init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                                  const GGS_lstring & in_mConfiguratorName,
                                                                  const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GGS_astViewInstructionList & in_mInstructionList,
                                                                  const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                  const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration::GGS_astVStackViewInstructionDeclaration (const cPtr_astVStackViewInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astVStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astVStackViewInstructionDeclaration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astVStackViewInstructionDeclaration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astVStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astVStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_astVStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_optionalHiddenBinding () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astVStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astVStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (const GGS_bool & in_mHasVerticalScroller,
                                                                                    const GGS_lstring & in_mConfiguratorName,
                                                                                    const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astVStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

void cPtr_astVStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astVStackViewInstructionDeclaration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalHiddenBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAstNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astVStackViewInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astVStackViewInstructionDeclaration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astVStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astVStackViewInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ("astVStackViewInstructionDeclaration",
                                                                                        & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astVStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astVStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astVStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration result ;
  const GGS_astVStackViewInstructionDeclaration * p = (const GGS_astVStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astVStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astLocalViewInstruction::objectCompare (const GGS_astLocalViewInstruction & inOperand) const {
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

GGS_astLocalViewInstruction::GGS_astLocalViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction::
init_21_ (const GGS_lstring & in_mLocalView,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_astLocalViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astLocalViewInstruction (inCompiler COMMA_THERE)) ;
  object->astLocalViewInstruction_init_21_ (in_mLocalView, inCompiler) ;
  const GGS_astLocalViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astLocalViewInstruction::
astLocalViewInstruction_init_21_ (const GGS_lstring & in_mLocalView,
                                  Compiler * /* inCompiler */) {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction::GGS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_astLocalViewInstruction::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GGS_lstring & in_mLocalView,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@astLocalViewInstruction:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astLocalViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astLocalViewInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_astLocalViewInstruction result ;
  const GGS_astLocalViewInstruction * p = (const GGS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astLocalViewInstruction *> (p)) {
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
                                                      const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                      const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                      const GGS_tableValueBinding & in_mTableValueBinding,
                                                      const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                      const GGS_graphicController & in_mGraphicController,
                                                      const GGS_regularBindingList & in_mRegularBindingList,
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
                                                                                 const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                 const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                 const GGS_tableValueBinding & in_mTableValueBinding,
                                                                                 const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                                                 const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                 const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                 const GGS_graphicController & in_mGraphicController,
                                                                                 const GGS_regularBindingList & in_mRegularBindingList,
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

GGS_astAutoLayoutViewInstructionParameterList GGS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewInstructionParameterList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
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

GGS_regularBindingList GGS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingList () ;
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
                                                                  const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                  const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GGS_tableValueBinding & in_mTableValueBinding,
                                                                  const GGS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GGS_graphicController & in_mGraphicController,
                                                                  const GGS_regularBindingList & in_mRegularBindingList,
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

acPtr_class * cPtr_astComputedViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedViewInstruction result ;
  const GGS_astComputedViewInstruction * p = (const GGS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedViewInstruction *> (p)) {
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
init_21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                  const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                  const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
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
computedHorizontalViewGeneration_init_21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                   const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                   const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
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

GGS_astNewStackViewDeclarationList GGS_computedHorizontalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
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

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
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

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

AC_GALGAS_root * GGS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration result ;
  const GGS_computedHorizontalViewGeneration * p = (const GGS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedVerticalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedVerticalViewGeneration::objectCompare (const GGS_computedVerticalViewGeneration & inOperand) const {
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

GGS_computedVerticalViewGeneration::GGS_computedVerticalViewGeneration (void) :
GGS_abstractViewGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration::
init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                          const GGS_lstring & in_mConfiguratorName,
                          const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                          const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_computedVerticalViewGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computedVerticalViewGeneration (inCompiler COMMA_THERE)) ;
  object->computedVerticalViewGeneration_init_21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_computedVerticalViewGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computedVerticalViewGeneration::
computedVerticalViewGeneration_init_21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                         const GGS_lstring & in_mConfiguratorName,
                                                         const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                         const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                         const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                         Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration::GGS_computedVerticalViewGeneration (const cPtr_computedVerticalViewGeneration * inSourcePtr) :
GGS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedVerticalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedVerticalViewGeneration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_computedVerticalViewGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_computedVerticalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_computedVerticalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_computedVerticalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedVerticalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedVerticalViewGeneration::cPtr_computedVerticalViewGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computedVerticalViewGeneration::cPtr_computedVerticalViewGeneration (const GGS_bool & in_mHasVerticalScroller,
                                                                          const GGS_lstring & in_mConfiguratorName,
                                                                          const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                          const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                          const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_computedVerticalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

void cPtr_computedVerticalViewGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@computedVerticalViewGeneration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedVerticalViewGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedVerticalViewGeneration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedVerticalViewGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computedVerticalViewGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration ("computedVerticalViewGeneration",
                                                                                   & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedVerticalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedVerticalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedVerticalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration result ;
  const GGS_computedVerticalViewGeneration * p = (const GGS_computedVerticalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedVerticalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @hStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_hStackViewInstructionGeneration::objectCompare (const GGS_hStackViewInstructionGeneration & inOperand) const {
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

GGS_hStackViewInstructionGeneration::GGS_hStackViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration::
init_21__21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                      const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                      const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_hStackViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_hStackViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->hStackViewInstructionGeneration_init_21__21__21__21_ (in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_hStackViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_hStackViewInstructionGeneration::
hStackViewInstructionGeneration_init_21__21__21__21_ (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                      const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                      const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                      const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                      Compiler * /* inCompiler */) {
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration::GGS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_hStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_hStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_hStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_hStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @hStackViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ("hStackViewInstructionGeneration",
                                                                                    & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_hStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_hStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_hStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration result ;
  const GGS_hStackViewInstructionGeneration * p = (const GGS_hStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_hStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @vStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_vStackViewInstructionGeneration::objectCompare (const GGS_vStackViewInstructionGeneration & inOperand) const {
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

GGS_vStackViewInstructionGeneration::GGS_vStackViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration::
init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                              const GGS_lstring & in_mConfiguratorName,
                              const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                              const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_vStackViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_vStackViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->vStackViewInstructionGeneration_init_21__21__21__21__21__21_ (in_mHasVerticalScroller, in_mConfiguratorName, in_mFuncCallList, in_mInstructionList, in_mMultipleBindingGenerationList, in_mNewStackViewDeclarationList, inCompiler) ;
  const GGS_vStackViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_vStackViewInstructionGeneration::
vStackViewInstructionGeneration_init_21__21__21__21__21__21_ (const GGS_bool & in_mHasVerticalScroller,
                                                              const GGS_lstring & in_mConfiguratorName,
                                                              const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                              const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                              const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                              Compiler * /* inCompiler */) {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration::GGS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_vStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_vStackViewInstructionGeneration::readProperty_mHasVerticalScroller (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mHasVerticalScroller ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_vStackViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_vStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_vStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_vStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_vStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @vStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (const GGS_bool & in_mHasVerticalScroller,
                                                                            const GGS_lstring & in_mConfiguratorName,
                                                                            const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GGS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GGS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mHasVerticalScroller (),
mProperty_mConfiguratorName (),
mProperty_mFuncCallList (),
mProperty_mInstructionList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mNewStackViewDeclarationList () {
  mProperty_mHasVerticalScroller = in_mHasVerticalScroller ;
  mProperty_mConfiguratorName = in_mConfiguratorName ;
  mProperty_mFuncCallList = in_mFuncCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_vStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

void cPtr_vStackViewInstructionGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@vStackViewInstructionGeneration:") ;
  mProperty_mHasVerticalScroller.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
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

acPtr_class * cPtr_vStackViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_vStackViewInstructionGeneration (mProperty_mHasVerticalScroller, mProperty_mConfiguratorName, mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_vStackViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mHasVerticalScroller.printNonNullClassInstanceProperties ("mHasVerticalScroller") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @vStackViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ("vStackViewInstructionGeneration",
                                                                                    & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_vStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_vStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_vStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration result ;
  const GGS_vStackViewInstructionGeneration * p = (const GGS_vStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_vStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutComputedViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
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

GGS_autoLayoutComputedViewInstructionGeneration::GGS_autoLayoutComputedViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration::
init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                  const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                  const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                  const GGS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                  const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                  const GGS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                  const GGS_string & in_mTableViewBindingGeneration,
                                                  const GGS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                  const GGS_string & in_mConfiguratorName,
                                                  const GGS_string & in_mOutletName,
                                                  const GGS_bool & in_mOutletIsArray,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutComputedViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutComputedViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (in_mAutoLayoutViewClassName, in_mParameterList, in_mFunctionCallList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mRunBindingGeneration, in_mTableViewBindingGeneration, in_mEBViewGraphicControllerBindingGeneration, in_mConfiguratorName, in_mOutletName, in_mOutletIsArray, inCompiler) ;
  const GGS_autoLayoutComputedViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutComputedViewInstructionGeneration::
autoLayoutComputedViewInstructionGeneration_init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                                                              const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                              const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                              const GGS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                              const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                              const GGS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                              const GGS_string & in_mTableViewBindingGeneration,
                                                                                              const GGS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                              const GGS_string & in_mConfiguratorName,
                                                                                              const GGS_string & in_mOutletName,
                                                                                              const GGS_bool & in_mOutletIsArray,
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

GGS_autoLayoutComputedViewInstructionGeneration::GGS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationParameterList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutRegularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mRunBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autolayoutRunBindingForGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRunBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mTableViewBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mTableViewBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mEBViewGraphicControllerBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutViewGraphicControllerBindingGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mEBViewGraphicControllerBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
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

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GGS_lstring & in_mAutoLayoutViewClassName,
                                                                                                    const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                    const GGS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                    const GGS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                    const GGS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                    const GGS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                                    const GGS_string & in_mTableViewBindingGeneration,
                                                                                                    const GGS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                                    const GGS_string & in_mConfiguratorName,
                                                                                                    const GGS_string & in_mOutletName,
                                                                                                    const GGS_bool & in_mOutletIsArray,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
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

const GALGAS_TypeDescriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mRunBindingGeneration, mProperty_mTableViewBindingGeneration, mProperty_mEBViewGraphicControllerBindingGeneration, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @autoLayoutComputedViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                                                & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  const GGS_autoLayoutComputedViewInstructionGeneration * p = (const GGS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumerationDeclarationAST::objectCompare (const GGS_enumerationDeclarationAST & inOperand) const {
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

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::
init_21__21__21_ (const GGS_lstring & in_mClassName,
                  const GGS_lstringlist & in_mEnumConstantNameList,
                  const GGS_bool & in_mCaseIterable,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_enumerationDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumerationDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumerationDeclarationAST_init_21__21__21_ (in_mClassName, in_mEnumConstantNameList, in_mCaseIterable, inCompiler) ;
  const GGS_enumerationDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::
enumerationDeclarationAST_init_21__21__21_ (const GGS_lstring & in_mClassName,
                                            const GGS_lstringlist & in_mEnumConstantNameList,
                                            const GGS_bool & in_mCaseIterable,
                                            Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mEnumConstantNameList = in_mEnumConstantNameList ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST::GGS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumerationDeclarationAST::readProperty_mEnumConstantNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumConstantNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumerationDeclarationAST::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mEnumConstantNameList (),
mProperty_mCaseIterable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_lstringlist & in_mEnumConstantNameList,
                                                                const GGS_bool & in_mCaseIterable,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mEnumConstantNameList (),
mProperty_mCaseIterable () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mEnumConstantNameList = in_mEnumConstantNameList ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@enumerationDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList, mProperty_mCaseIterable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumerationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumConstantNameList.printNonNullClassInstanceProperties ("mEnumConstantNameList") ;
    mProperty_mCaseIterable.printNonNullClassInstanceProperties ("mCaseIterable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumerationDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST result ;
  const GGS_enumerationDeclarationAST * p = (const GGS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
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
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList_2E_element ("regularBindingList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularBindingList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ("toManyRelationshipOptionAST.hasOpposite",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST_2E_hasOpposite::staticTypeDescriptor (void) const {
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
//Optional @toManyRelationshipOptionAST_2E_hasOpposite_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ("toManyRelationshipOptionAST.hasOpposite?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ("toManyRelationshipOptionAST.hasDependance",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST_2E_hasDependance::staticTypeDescriptor (void) const {
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
//Optional @toManyRelationshipOptionAST_2E_hasDependance_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ("toManyRelationshipOptionAST.hasDependance?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::staticTypeDescriptor (void) const {
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

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element & GGS_toManyPropertyGenerationList_2E_element::operator = (const GGS_toManyPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element GGS_toManyPropertyGenerationList_2E_element::init_21_ (const GGS_toManyPropertyGeneration & in_mProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ("toManyPropertyGenerationList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element GGS_toManyPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList_2E_element result ;
  const GGS_toManyPropertyGenerationList_2E_element * p = (const GGS_toManyPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text ("mainXibElement.text",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement_2E_text::staticTypeDescriptor (void) const {
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
//Optional @mainXibElement_2E_text_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text_3F_ ("mainXibElement.text?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement_2E_text_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet ("mainXibElement.outlet",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement_2E_outlet::staticTypeDescriptor (void) const {
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
//Optional @mainXibElement_2E_outlet_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet_3F_ ("mainXibElement.outlet?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement_2E_outlet_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ("autoLayoutTableViewControllerBoundColumnListAST.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ("autoLayoutTableViewControllerAttributListAST.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerAttributListAST_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2E_element ("simpleStoredPropertyList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleStoredPropertyList_2E_element::staticTypeDescriptor (void) const {
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

AC_GALGAS_root * GGS_autoLayoutViewClassBindingSpecificationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassBindingSpecificationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element GGS_autoLayoutViewClassBindingSpecificationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList_2E_element result ;
  const GGS_autoLayoutViewClassBindingSpecificationList_2E_element * p = (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassBindingSpecificationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassBindingSpecificationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_autoLayoutBindingSpecificationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutBindingSpecificationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element GGS_autoLayoutBindingSpecificationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap_2E_element result ;
  const GGS_autoLayoutBindingSpecificationMap_2E_element * p = (const GGS_autoLayoutBindingSpecificationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutBindingSpecificationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ result ;
  const GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ * p = (const GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_autoLayoutViewBindingSpecificationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewBindingSpecificationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element GGS_autoLayoutViewBindingSpecificationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element result ;
  const GGS_autoLayoutViewBindingSpecificationMap_2E_element * p = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewBindingSpecificationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (void) :
mProperty_mPropertyDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_declarationListAST_2E_element & inSource) :
mProperty_mPropertyDeclaration (inSource.mProperty_mPropertyDeclaration) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element & GGS_declarationListAST_2E_element::operator = (const GGS_declarationListAST_2E_element & inSource) {
  mProperty_mPropertyDeclaration = inSource.mProperty_mPropertyDeclaration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::init_21_ (const GGS_abstractDeclarationAST & in_mPropertyDeclaration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyDeclaration = in_mPropertyDeclaration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element::GGS_declarationListAST_2E_element (const GGS_abstractDeclarationAST & inOperand0) :
mProperty_mPropertyDeclaration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_declarationListAST_2E_element::isValid (void) const {
  return mProperty_mPropertyDeclaration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::drop (void) {
  mProperty_mPropertyDeclaration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @declarationListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @declarationListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST_2E_element ("declarationListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element GGS_declarationListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_declarationListAST_2E_element result ;
  const GGS_declarationListAST_2E_element * p = (const GGS_declarationListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element ("outletClassMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @outletClassMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ("outletClassMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_externSwiftDelegateList_2E_element::GGS_externSwiftDelegateList_2E_element (void) :
mProperty_mExternSwiftDelegateName () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element::GGS_externSwiftDelegateList_2E_element (const GGS_externSwiftDelegateList_2E_element & inSource) :
mProperty_mExternSwiftDelegateName (inSource.mProperty_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element & GGS_externSwiftDelegateList_2E_element::operator = (const GGS_externSwiftDelegateList_2E_element & inSource) {
  mProperty_mExternSwiftDelegateName = inSource.mProperty_mExternSwiftDelegateName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element GGS_externSwiftDelegateList_2E_element::init_21_ (const GGS_lstring & in_mExternSwiftDelegateName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftDelegateList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftDelegateName = in_mExternSwiftDelegateName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element::GGS_externSwiftDelegateList_2E_element (const GGS_lstring & inOperand0) :
mProperty_mExternSwiftDelegateName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externSwiftDelegateList_2E_element::isValid (void) const {
  return mProperty_mExternSwiftDelegateName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::drop (void) {
  mProperty_mExternSwiftDelegateName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftDelegateList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternSwiftDelegateName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externSwiftDelegateList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ("externSwiftDelegateList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externSwiftDelegateList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftDelegateList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftDelegateList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element GGS_externSwiftDelegateList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externSwiftDelegateList_2E_element result ;
  const GGS_externSwiftDelegateList_2E_element * p = (const GGS_externSwiftDelegateList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftDelegateList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::GGS_astAutoLayoutOutletLinkerList_2E_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameList () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) :
mProperty_mLinkerName (inSource.mProperty_mLinkerName),
mProperty_mOutletNameList (inSource.mProperty_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element & GGS_astAutoLayoutOutletLinkerList_2E_element::operator = (const GGS_astAutoLayoutOutletLinkerList_2E_element & inSource) {
  mProperty_mLinkerName = inSource.mProperty_mLinkerName ;
  mProperty_mOutletNameList = inSource.mProperty_mOutletNameList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element GGS_astAutoLayoutOutletLinkerList_2E_element::init_21__21_ (const GGS_lstring & in_mLinkerName,
                                                                                                         const GGS_lstringlist & in_mOutletNameList,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameList = in_mOutletNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element::GGS_astAutoLayoutOutletLinkerList_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_lstringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutOutletLinkerList_2E_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutOutletLinkerList.element:") ;
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
//     @astAutoLayoutOutletLinkerList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ("astAutoLayoutOutletLinkerList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutOutletLinkerList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutOutletLinkerList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutOutletLinkerList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element GGS_astAutoLayoutOutletLinkerList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList_2E_element result ;
  const GGS_astAutoLayoutOutletLinkerList_2E_element * p = (const GGS_astAutoLayoutOutletLinkerList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutOutletLinkerList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_autoLayoutClassParameterType_2E_typeEnum::GGS_autoLayoutClassParameterType_2E_typeEnum (void) :
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum::GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) :
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum & GGS_autoLayoutClassParameterType_2E_typeEnum::operator = (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) {
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum GGS_autoLayoutClassParameterType_2E_typeEnum::init_21_ (const GGS_lstring & in_name,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum::GGS_autoLayoutClassParameterType_2E_typeEnum (const GGS_lstring & inOperand0) :
mProperty_name (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType_2E_typeEnum::objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterType_2E_typeEnum::isValid (void) const {
  return mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::drop (void) {
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutClassParameterType.typeEnum:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutClassParameterType.typeEnum generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ("autoLayoutClassParameterType.typeEnum",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterType_2E_typeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType_2E_typeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType_2E_typeEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum GGS_autoLayoutClassParameterType_2E_typeEnum::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum result ;
  const GGS_autoLayoutClassParameterType_2E_typeEnum * p = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType_2E_typeEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType.typeEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutClassParameterType_2E_typeEnum_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (const GGS_autoLayoutClassParameterType_2E_typeEnum & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::init_nil (void) {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::isValid (void) const {
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

bool GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutClassParameterType_2E_typeEnum () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::objectCompare (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ & inOperand) const {
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

void GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::description (String & ioString,
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
//     @autoLayoutClassParameterType.typeEnum? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ("autoLayoutClassParameterType.typeEnum?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType_2E_typeEnum_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType_2E_typeEnum_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ * p = (const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType.typeEnum?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

AC_GALGAS_root * GGS_autoLayoutClassParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element GGS_autoLayoutClassParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList_2E_element result ;
  const GGS_autoLayoutClassParameterList_2E_element * p = (const GGS_autoLayoutClassParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element GGS_astAutoLayoutViewFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap_2E_element result ;
  const GGS_astAutoLayoutViewFunctionMap_2E_element * p = (const GGS_astAutoLayoutViewFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ result ;
  const GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ * p = (const GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_autolayoutViewClassMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutViewClassMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element GGS_autolayoutViewClassMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap_2E_element result ;
  const GGS_autolayoutViewClassMap_2E_element * p = (const GGS_autolayoutViewClassMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutViewClassMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

AC_GALGAS_root * GGS_autolayoutViewClassMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutViewClassMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_ GGS_autolayoutViewClassMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap_2E_element_3F_ result ;
  const GGS_autolayoutViewClassMap_2E_element_3F_ * p = (const GGS_autolayoutViewClassMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutViewClassMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ("observablePropertyAST.rootProperty",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_rootProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ("observablePropertyAST.rootProperty?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ("observablePropertyAST.rootPropertyWithOption",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyWithOption::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_rootPropertyWithOption_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ("observablePropertyAST.rootPropertyWithOption?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ("observablePropertyAST.rootPropertyRelationship",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyRelationship::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_rootPropertyRelationship_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ("observablePropertyAST.rootPropertyRelationship?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ("observablePropertyAST.rootPropertyNone",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyNone::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_rootPropertyNone_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ("observablePropertyAST.rootPropertyNone?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_rootPropertyNone_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ("observablePropertyAST.selfProperty",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ("observablePropertyAST.selfProperty?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ("observablePropertyAST.selfPropertyWithOption",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyWithOption::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfPropertyWithOption_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ("observablePropertyAST.selfPropertyWithOption?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ("observablePropertyAST.selfPropertyArray",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyArray::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfPropertyArray_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ("observablePropertyAST.selfPropertyArray?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyArray_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ("observablePropertyAST.selfPropertyObject",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyObject::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfPropertyObject_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ("observablePropertyAST.selfPropertyObject?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyObject_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ("observablePropertyAST.selfPropertyNone",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyNone::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfPropertyNone_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ("observablePropertyAST.selfPropertyNone?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfPropertyNone_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ("observablePropertyAST.prefsProperty",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_prefsProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_prefsProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ("observablePropertyAST.prefsProperty?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_prefsProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ("observablePropertyAST.prefsPropertyWithOption",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_prefsPropertyWithOption::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_prefsPropertyWithOption_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ("observablePropertyAST.prefsPropertyWithOption?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ("observablePropertyAST.selfControllerProperty",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfControllerProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ("observablePropertyAST.selfControllerProperty?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ("observablePropertyAST.selfControllerSecondaryProperty",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfControllerSecondaryProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ("observablePropertyAST.selfControllerSecondaryProperty?",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ("observablePropertyAST.selfControllerAllProperties",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerAllProperties::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfControllerAllProperties_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ("observablePropertyAST.selfControllerAllProperties?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ("observablePropertyAST.selfControllerOneProperty",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerOneProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_selfControllerOneProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ("observablePropertyAST.selfControllerOneProperty?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ("observablePropertyAST.superProperty",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_superProperty::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_superProperty_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ("observablePropertyAST.superProperty?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_superProperty_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ("observablePropertyAST.superPropertyWithDefaultValue",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::staticTypeDescriptor (void) const {
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
//Optional @observablePropertyAST_2E_superPropertyWithDefaultValue_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ("observablePropertyAST.superPropertyWithDefaultValue?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::staticTypeDescriptor (void) const {
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

