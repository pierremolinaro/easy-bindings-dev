#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------

cMapElement_actionMap::cMapElement_actionMap (const GGS_actionMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_actionMap::cMapElement_actionMap (const GGS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_actionMap::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap::GGS_actionMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap::GGS_actionMap (const GGS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap & GGS_actionMap::operator = (const GGS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_ GGS_actionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_actionMap * p = (cMapElement_actionMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_actionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_actionMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::class_func_mapWithMapToOverride (const GGS_actionMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::enterElement (const GGS_actionMap_2E_element & inValue,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = nullptr ;
  macroMyNew (p, cMapElement_actionMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::addAssign_operation (const GGS_lstring & inKey,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = nullptr ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::add_operation (const GGS_actionMap & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_actionMap result = *this ;
  cEnumerator_actionMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::setter_insertKey (GGS_lstring inKey,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = nullptr ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::method_searchKey (GGS_lstring inKey,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_actionMap_searchKey
                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
  }else{
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_actionMap * GGS_actionMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                          const GGS_string & inKey
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_actionMap::cEnumerator_actionMap (const GGS_actionMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GGS_actionMap_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actionMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  const GGS_actionMap * p = (const GGS_actionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actionFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration::objectCompare (const GGS_actionFileGeneration & inOperand) const {
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

GGS_actionFileGeneration::GGS_actionFileGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::
init_21__21_ (const GGS_string & in_mClassName,
              const GGS_string & in_mActionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_actionFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_actionFileGeneration (inCompiler COMMA_THERE)) ;
  object->actionFileGeneration_init_21__21_ (in_mClassName, in_mActionName, inCompiler) ;
  const GGS_actionFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::
actionFileGeneration_init_21__21_ (const GGS_string & in_mClassName,
                                   const GGS_string & in_mActionName,
                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration::GGS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::class_func_new (const GGS_string & in_mClassName,
                                                                   const GGS_string & in_mActionName,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_actionFileGeneration (in_mClassName, in_mActionName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mActionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mActionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mActionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GGS_string & in_mClassName,
                                                      const GGS_string & in_mActionName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@actionFileGeneration:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_actionFileGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actionFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mActionName.printNonNullClassInstanceProperties ("mActionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @actionFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration result ;
  const GGS_actionFileGeneration * p = (const GGS_actionFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration_2E_weak::objectCompare (const GGS_actionFileGeneration_2E_weak & inOperand) const {
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

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak & GGS_actionFileGeneration_2E_weak::operator = (const GGS_actionFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (const GGS_actionFileGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration_2E_weak::bang_actionFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actionFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actionFileGeneration) ;
      result = GGS_actionFileGeneration ((cPtr_actionFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actionFileGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ("actionFileGeneration.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  const GGS_actionFileGeneration_2E_weak * p = (const GGS_actionFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum multipleBindingComparisonAST
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST::GGS_multipleBindingComparisonAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_lower (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_lower ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_greater (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_greater ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lower == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greater == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingComparisonAST::description (String & ioString,
                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @multipleBindingComparisonAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_multipleBindingComparisonAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @multipleBindingComparisonAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_multipleBindingComparisonAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_multipleBindingComparisonAST result ;
  const GGS_multipleBindingComparisonAST * p = (const GGS_multipleBindingComparisonAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingComparisonAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingComparisonAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionAST::GGS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST::GGS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  const GGS_abstractBooleanMultipleBindingExpressionAST * p = (const GGS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak & GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_abstractBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (const GGS_abstractBooleanMultipleBindingExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::bang_abstractBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
      result = GGS_abstractBooleanMultipleBindingExpressionAST ((cPtr_abstractBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ("abstractBooleanMultipleBindingExpressionAST.weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalIntMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_literalIntMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_literalIntMultipleBindingExpressionAST_2E_weak::GGS_literalIntMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak & GGS_literalIntMultipleBindingExpressionAST_2E_weak::operator = (const GGS_literalIntMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak::GGS_literalIntMultipleBindingExpressionAST_2E_weak (const GGS_literalIntMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak GGS_literalIntMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST_2E_weak::bang_literalIntMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalIntMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalIntMultipleBindingExpressionAST) ;
      result = GGS_literalIntMultipleBindingExpressionAST ((cPtr_literalIntMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @literalIntMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ("literalIntMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_literalIntMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalIntMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalIntMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST_2E_weak GGS_literalIntMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_literalIntMultipleBindingExpressionAST_2E_weak result ;
  const GGS_literalIntMultipleBindingExpressionAST_2E_weak * p = (const GGS_literalIntMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalIntMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalIntMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionAST::GGS_negateBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::
init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_negateBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_negateBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->negateBooleanMultipleBindingExpressionAST_init_21_ (in_mBinding, inCompiler) ;
  const GGS_negateBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::
negateBooleanMultipleBindingExpressionAST_init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                    Compiler * /* inCompiler */) {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST::GGS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (in_mBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_negateBooleanMultipleBindingExpressionAST::setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mBinding,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mBinding () {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionAST:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  const GGS_negateBooleanMultipleBindingExpressionAST * p = (const GGS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak & GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_negateBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (const GGS_negateBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::bang_negateBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
      result = GGS_negateBooleanMultipleBindingExpressionAST ((cPtr_negateBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ("negateBooleanMultipleBindingExpressionAST.weak",
                                                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST_2E_weak GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionAST::objectCompare (const GGS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionAST::GGS_comparisonMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::
init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                  const GGS_multipleBindingComparisonAST & in_mOperator,
                  const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_comparisonMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_comparisonMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->comparisonMultipleBindingExpressionAST_init_21__21__21_ (in_mLeftBinding, in_mOperator, in_mRightBinding, inCompiler) ;
  const GGS_comparisonMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::
comparisonMultipleBindingExpressionAST_init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                         const GGS_multipleBindingComparisonAST & in_mOperator,
                                                         const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                         Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST::GGS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                                       const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (in_mLeftBinding, in_mOperator, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST result ;
  const GGS_comparisonMultipleBindingExpressionAST * p = (const GGS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_comparisonMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionAST_2E_weak::GGS_comparisonMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak & GGS_comparisonMultipleBindingExpressionAST_2E_weak::operator = (const GGS_comparisonMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak::GGS_comparisonMultipleBindingExpressionAST_2E_weak (const GGS_comparisonMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak GGS_comparisonMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST_2E_weak::bang_comparisonMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionAST) ;
      result = GGS_comparisonMultipleBindingExpressionAST ((cPtr_comparisonMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ("comparisonMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST_2E_weak GGS_comparisonMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionAST_2E_weak result ;
  const GGS_comparisonMultipleBindingExpressionAST_2E_weak * p = (const GGS_comparisonMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionAST::objectCompare (const GGS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionAST::GGS_andBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_andBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->andBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_andBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::
andBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                     const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                     Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST::GGS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@andBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  const GGS_andBooleanMultipleBindingExpressionAST * p = (const GGS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_andBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionAST_2E_weak::GGS_andBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak & GGS_andBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_andBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak::GGS_andBooleanMultipleBindingExpressionAST_2E_weak (const GGS_andBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak GGS_andBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST_2E_weak::bang_andBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
      result = GGS_andBooleanMultipleBindingExpressionAST ((cPtr_andBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ("andBooleanMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST_2E_weak GGS_andBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_andBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_andBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionAST::objectCompare (const GGS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionAST::GGS_orBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_orBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_orBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->orBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_orBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::
orBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                    const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                    Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST::GGS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                                     const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@orBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  const GGS_orBooleanMultipleBindingExpressionAST * p = (const GGS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_orBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionAST_2E_weak::GGS_orBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak & GGS_orBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_orBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak::GGS_orBooleanMultipleBindingExpressionAST_2E_weak (const GGS_orBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak GGS_orBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST_2E_weak::bang_orBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
      result = GGS_orBooleanMultipleBindingExpressionAST ((cPtr_orBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ("orBooleanMultipleBindingExpressionAST.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST_2E_weak GGS_orBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_orBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_orBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionAST::GGS_xorBooleanMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_xorBooleanMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_xorBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->xorBooleanMultipleBindingExpressionAST_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_xorBooleanMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::
xorBooleanMultipleBindingExpressionAST_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                     const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                     Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST::GGS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                                       const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionAST::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionAST () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionAST::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GGS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GGS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@xorBooleanMultipleBindingExpressionAST:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  const GGS_xorBooleanMultipleBindingExpressionAST * p = (const GGS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak & GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::operator = (const GGS_xorBooleanMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (const GGS_xorBooleanMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::bang_xorBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
      result = GGS_xorBooleanMultipleBindingExpressionAST ((cPtr_xorBooleanMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ("xorBooleanMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST_2E_weak GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionAST_2E_weak result ;
  const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak * p = (const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyInMultipleBindingExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

GGS_observablePropertyInMultipleBindingExpressionAST::GGS_observablePropertyInMultipleBindingExpressionAST (void) :
GGS_abstractBooleanMultipleBindingExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST::
init_21_ (const GGS_observablePropertyAST & in_mProperty,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_observablePropertyInMultipleBindingExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_observablePropertyInMultipleBindingExpressionAST (inCompiler COMMA_THERE)) ;
  object->observablePropertyInMultipleBindingExpressionAST_init_21_ (in_mProperty, inCompiler) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::
observablePropertyInMultipleBindingExpressionAST_init_21_ (const GGS_observablePropertyAST & in_mProperty,
                                                           Compiler * /* inCompiler */) {
  mProperty_mProperty = in_mProperty ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST::GGS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST::class_func_new (const GGS_observablePropertyAST & in_mProperty,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (in_mProperty,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyInMultipleBindingExpressionAST::readProperty_mProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_observablePropertyAST () ;
  }else{
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    return p->mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyInMultipleBindingExpressionAST::setProperty_mProperty (const GGS_observablePropertyAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    p->mProperty_mProperty = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyInMultipleBindingExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GGS_observablePropertyAST & in_mProperty,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (inCompiler COMMA_THERE),
mProperty_mProperty () {
  mProperty_mProperty = in_mProperty ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyInMultipleBindingExpressionAST:") ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyInMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mProperty.printNonNullClassInstanceProperties ("mProperty") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyInMultipleBindingExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  const GGS_observablePropertyInMultipleBindingExpressionAST * p = (const GGS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::objectCompare (const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & inOperand) const {
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

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak & GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::operator = (const GGS_observablePropertyInMultipleBindingExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (const GGS_observablePropertyInMultipleBindingExpressionAST & inSource) :
GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::bang_observablePropertyInMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
      result = GGS_observablePropertyInMultipleBindingExpressionAST ((cPtr_observablePropertyInMultipleBindingExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyInMultipleBindingExpressionAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ("observablePropertyInMultipleBindingExpressionAST.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak result ;
  const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak * p = (const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_abstractBooleanMultipleBindingExpressionForGeneration ((cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ("abstractBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @observablePropertyAsBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::
init_21_ (const GGS_string & in_mObservedModelString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->observablePropertyAsBooleanMultipleBindingExpressionForGeneration_init_21_ (in_mObservedModelString, inCompiler) ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::
observablePropertyAsBooleanMultipleBindingExpressionForGeneration_init_21_ (const GGS_string & in_mObservedModelString,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mObservedModelString = in_mObservedModelString ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::class_func_new (const GGS_string & in_mObservedModelString,
                                                                                                                                                             Compiler * inCompiler
                                                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (in_mObservedModelString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::readProperty_mObservedModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mObservedModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setProperty_mObservedModelString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mObservedModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mObservedModelString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GGS_string & in_mObservedModelString,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mObservedModelString () {
  mProperty_mObservedModelString = in_mObservedModelString ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModelString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mObservedModelString.printNonNullClassInstanceProperties ("mObservedModelString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ((cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                                 & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @booleanMultipleBindingLiteralIntForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

GGS_booleanMultipleBindingLiteralIntForGeneration::GGS_booleanMultipleBindingLiteralIntForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration::
init_21_ (const GGS_uint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_booleanMultipleBindingLiteralIntForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_booleanMultipleBindingLiteralIntForGeneration (inCompiler COMMA_THERE)) ;
  object->booleanMultipleBindingLiteralIntForGeneration_init_21_ (in_mValue, inCompiler) ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_booleanMultipleBindingLiteralIntForGeneration::
booleanMultipleBindingLiteralIntForGeneration_init_21_ (const GGS_uint & in_mValue,
                                                        Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration::GGS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration::class_func_new (const GGS_uint & in_mValue,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_booleanMultipleBindingLiteralIntForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_booleanMultipleBindingLiteralIntForGeneration::setProperty_mValue (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GGS_uint & in_mValue,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@booleanMultipleBindingLiteralIntForGeneration:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_booleanMultipleBindingLiteralIntForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @booleanMultipleBindingLiteralIntForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration * p = (const GGS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::objectCompare (const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & inOperand) const {
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

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak & GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::operator = (const GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (const GGS_booleanMultipleBindingLiteralIntForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::bang_booleanMultipleBindingLiteralIntForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
      result = GGS_booleanMultipleBindingLiteralIntForGeneration ((cPtr_booleanMultipleBindingLiteralIntForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @booleanMultipleBindingLiteralIntForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ("booleanMultipleBindingLiteralIntForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak result ;
  const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak * p = (const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @negateBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionForGeneration::GGS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::
init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->negateBooleanMultipleBindingExpressionForGeneration_init_21_ (in_mBinding, inCompiler) ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::
negateBooleanMultipleBindingExpressionForGeneration_init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                              Compiler * /* inCompiler */) {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration::GGS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (in_mBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::readProperty_mBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_negateBooleanMultipleBindingExpressionForGeneration::setProperty_mBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mBinding () {
  mProperty_mBinding = in_mBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_negateBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mBinding.printNonNullClassInstanceProperties ("mBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GGS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_negateBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_negateBooleanMultipleBindingExpressionForGeneration ((cPtr_negateBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @negateBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ("negateBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionForGeneration::GGS_orBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_orBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_orBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->orBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionForGeneration::
orBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                              Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration::GGS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                                         const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@orBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                                                       & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration * p = (const GGS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_orBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_orBooleanMultipleBindingExpressionForGeneration ((cPtr_orBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ("orBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionForGeneration::GGS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->xorBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::
xorBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                               Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration::GGS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                                           const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@xorBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GGS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_xorBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_xorBooleanMultipleBindingExpressionForGeneration ((cPtr_xorBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ("xorBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionForGeneration::GGS_andBooleanMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::
init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_andBooleanMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_andBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->andBooleanMultipleBindingExpressionForGeneration_init_21__21_ (in_mLeftBinding, in_mRightBinding, inCompiler) ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionForGeneration::
andBooleanMultipleBindingExpressionForGeneration_init_21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                               Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration::GGS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                                           const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (in_mLeftBinding, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andBooleanMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@andBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration * p = (const GGS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak & GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (const GGS_andBooleanMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
      result = GGS_andBooleanMultipleBindingExpressionForGeneration ((cPtr_andBooleanMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ("andBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionForGeneration::GGS_comparisonMultipleBindingExpressionForGeneration (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::
init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                  const GGS_multipleBindingComparisonAST & in_mOperator,
                  const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_comparisonMultipleBindingExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonMultipleBindingExpressionForGeneration_init_21__21__21_ (in_mLeftBinding, in_mOperator, in_mRightBinding, inCompiler) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionForGeneration::
comparisonMultipleBindingExpressionForGeneration_init_21__21__21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                   const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration::GGS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                                           const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                                                           const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (in_mLeftBinding, in_mOperator, in_mRightBinding,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mLeftBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mLeftBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mLeftBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingComparisonAST GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingComparisonAST () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mOperator (const GGS_multipleBindingComparisonAST & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::readProperty_mRightBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractBooleanMultipleBindingExpressionForGeneration () ;
  }else{
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    return p->mProperty_mRightBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonMultipleBindingExpressionForGeneration::setProperty_mRightBinding (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GGS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftBinding (),
mProperty_mOperator (),
mProperty_mRightBinding () {
  mProperty_mLeftBinding = in_mLeftBinding ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mRightBinding = in_mRightBinding ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonMultipleBindingExpressionForGeneration:") ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftBinding.printNonNullClassInstanceProperties ("mLeftBinding") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mRightBinding.printNonNullClassInstanceProperties ("mRightBinding") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  const GGS_comparisonMultipleBindingExpressionForGeneration * p = (const GGS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (void) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak & GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::operator = (const GGS_comparisonMultipleBindingExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (const GGS_comparisonMultipleBindingExpressionForGeneration & inSource) :
GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::bang_comparisonMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
      result = GGS_comparisonMultipleBindingExpressionForGeneration ((cPtr_comparisonMultipleBindingExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonMultipleBindingExpressionForGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ("comparisonMultipleBindingExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak result ;
  const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak * p = (const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GGS_bool constin_inPreferences,
                                                              const GGS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GGS_semanticContext constin_inSemanticContext,
                                                              const GGS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              const GGS_propertyMap constin_inPreferencesObservablePropertyMap,
                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GGS_typeKind & out_outType,
                                                              GGS_location & out_outErrorLocation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnableExpression.drop () ;
  out_outType.drop () ;
  out_outErrorLocation.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    inObject->method_analyzeExpressionForMultipleBinding (constin_inPreferences, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, constin_inPreferencesObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_expressionString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST::GGS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (const GGS_lstring & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_rootToManyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_selfToManyRelationship ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::method_extractRootToManyRelationship (GGS_lstring & outAssociatedValue_rootEntityName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootToManyRelationship) {
    outAssociatedValue_rootEntityName.drop () ;
    String s ;
    s.appendCString ("method @arrayControllerBoundModelAST.rootToManyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_rootEntityName = ptr->mProperty_rootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ GGS_arrayControllerBoundModelAST::getter_getRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootToManyRelationship) {
    const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::getAssociatedValuesFor_rootToManyRelationship (GGS_lstring & out_rootEntityName) const {
  const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_rootEntityName = ptr->mProperty_rootEntityName ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @arrayControllerBoundModelAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerBoundModelAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerBoundModelAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBoundModelAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBoundModelAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  const GGS_arrayControllerBoundModelAST * p = (const GGS_arrayControllerBoundModelAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBoundModelAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerDeclarationAST_2E_weak::objectCompare (const GGS_arrayControllerDeclarationAST_2E_weak & inOperand) const {
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

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak & GGS_arrayControllerDeclarationAST_2E_weak::operator = (const GGS_arrayControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (const GGS_arrayControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak GGS_arrayControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::bang_arrayControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerDeclarationAST) ;
      result = GGS_arrayControllerDeclarationAST ((cPtr_arrayControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ("arrayControllerDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak GGS_arrayControllerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST_2E_weak result ;
  const GGS_arrayControllerDeclarationAST_2E_weak * p = (const GGS_arrayControllerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration::objectCompare (const GGS_arrayControllerPropertyGeneration & inOperand) const {
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

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::
init_21__21__21_ (const GGS_string & in_mPropertyName,
                  const GGS_string & in_mModelString,
                  const GGS_string & in_mOwnerName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->arrayControllerPropertyGeneration_init_21__21__21_ (in_mPropertyName, in_mModelString, in_mOwnerName, inCompiler) ;
  const GGS_arrayControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerPropertyGeneration::
arrayControllerPropertyGeneration_init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                    const GGS_string & in_mModelString,
                                                    const GGS_string & in_mOwnerName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                             const GGS_string & in_mModelString,
                                                                                             const GGS_string & in_mOwnerName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_arrayControllerPropertyGeneration (in_mPropertyName, in_mModelString, in_mOwnerName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mModelString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GGS_string & in_mPropertyName,
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

const C_galgas_type_descriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                                                         & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration result ;
  const GGS_arrayControllerPropertyGeneration * p = (const GGS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration_2E_weak::objectCompare (const GGS_arrayControllerPropertyGeneration_2E_weak & inOperand) const {
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

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak & GGS_arrayControllerPropertyGeneration_2E_weak::operator = (const GGS_arrayControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (const GGS_arrayControllerPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak GGS_arrayControllerPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::bang_arrayControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerPropertyGeneration) ;
      result = GGS_arrayControllerPropertyGeneration ((cPtr_arrayControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerPropertyGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ("arrayControllerPropertyGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak GGS_arrayControllerPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration_2E_weak result ;
  const GGS_arrayControllerPropertyGeneration_2E_weak * p = (const GGS_arrayControllerPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerModelKind
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind::GGS_arrayControllerModelKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerModelKind::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @arrayControllerModelKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerModelKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerModelKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  const GGS_arrayControllerModelKind * p = (const GGS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerGeneration_2E_weak::objectCompare (const GGS_arrayControllerGeneration_2E_weak & inOperand) const {
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

GGS_arrayControllerGeneration_2E_weak::GGS_arrayControllerGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak & GGS_arrayControllerGeneration_2E_weak::operator = (const GGS_arrayControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak::GGS_arrayControllerGeneration_2E_weak (const GGS_arrayControllerGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak GGS_arrayControllerGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration_2E_weak::bang_arrayControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerGeneration) ;
      result = GGS_arrayControllerGeneration ((cPtr_arrayControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @arrayControllerGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ("arrayControllerGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration_2E_weak GGS_arrayControllerGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_arrayControllerGeneration_2E_weak result ;
  const GGS_arrayControllerGeneration_2E_weak * p = (const GGS_arrayControllerGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                              const GGS_lstring & in_mPropertyName,
                                                                              const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                              const GGS_lstring & in_mSortPropertyName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                                                                                        const GGS_lstring & in_mPropertyName,
                                                                                                                                        const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                        const GGS_lstring & in_mSortPropertyName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEditable" ":") ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyName" ":") ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mColumnParameterListAST" ":") ;
  mObject.mProperty_mColumnParameterListAST.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSortPropertyName" ":") ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::enterElement (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inValue,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                                                   const GGS_lstring & inOperand1,
                                                                                                                                   const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                                                   const GGS_lstring & inOperand3
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GGS_bool & in_mEditable,
                                                                                     const GGS_lstring & in_mPropertyName,
                                                                                     const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                     const GGS_lstring & in_mSortPropertyName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable,
                                                                                     in_mPropertyName,
                                                                                     in_mColumnParameterListAST,
                                                                                     in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::addAssign_operation (const GGS_bool & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                               const GGS_lstring & inOperand3
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (const GGS_bool inOperand0,
                                                                         const GGS_lstring inOperand1,
                                                                         const GGS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                         const GGS_lstring inOperand3,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                                const GGS_lstring inOperand1,
                                                                                const GGS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                                const GGS_lstring inOperand3,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                                GGS_lstring & outOperand1,
                                                                                GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                                GGS_lstring & outOperand3,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
      outOperand0 = p->mObject.mProperty_mEditable ;
      outOperand1 = p->mObject.mProperty_mPropertyName ;
      outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
      outOperand3 = p->mObject.mProperty_mSortPropertyName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                           GGS_lstring & outOperand1,
                                                                           GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                           GGS_lstring & outOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GGS_bool & outOperand0,
                                                                          GGS_lstring & outOperand1,
                                                                          GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                          GGS_lstring & outOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GGS_bool & outOperand0,
                                                                        GGS_lstring & outOperand1,
                                                                        GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                        GGS_lstring & outOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GGS_bool & outOperand0,
                                                                       GGS_lstring & outOperand1,
                                                                       GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                       GGS_lstring & outOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result = GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result = GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result = GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::plusAssign_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GGS_bool inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                    GGS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnParameterListAST = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GGS_uint & inIndex,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnParameterListAST ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerBoundColumnListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const GGS_autoLayoutTableViewControllerBoundColumnListAST * p = (const GGS_autoLayoutTableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                           const GGS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                                                                                  const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerAttributListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeName" ":") ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributeValue" ":") ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::enterElement (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inValue,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_abstractDefaultValue & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mAttributeName,
                                                                                  const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName,
                                                                                  in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::addAssign_operation (const GGS_lstring & inOperand0,
                                                                            const GGS_abstractDefaultValue & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_abstractDefaultValue inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_abstractDefaultValue inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_abstractDefaultValue & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mAttributeValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_abstractDefaultValue & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_abstractDefaultValue & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_abstractDefaultValue & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_abstractDefaultValue & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result = GGS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result = GGS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result = GGS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::plusAssign_operation (const GGS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GGS_abstractDefaultValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerAttributListAST::cEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element cEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerAttributListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  const GGS_autoLayoutTableViewControllerAttributListAST * p = (const GGS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & inOperand) const {
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

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak & GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::operator = (const GGS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::bang_autoLayoutTableViewControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @autoLayoutTableViewControllerDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ("autoLayoutTableViewControllerDeclarationAST.weak",
                                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak result ;
  const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak * p = (const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                                                         const GGS_string & in_mModelString,
                                                                                                                         const GGS_string & in_mOwnerName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration (in_mPropertyName, in_mModelString, in_mOwnerName,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerPropertyGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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
//
//     @autoLayoutTableViewControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak & GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::operator = (const GGS_autoLayoutTableViewControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::bang_autoLayoutTableViewControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @autoLayoutTableViewControllerPropertyGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ("autoLayoutTableViewControllerPropertyGeneration.weak",
                                                                                                               & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak result ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak * p = (const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autoLayoutTableViewControllerModelKind
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind::GGS_autoLayoutTableViewControllerModelKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = Enumeration::enum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = Enumeration::enum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerModelKind::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @autoLayoutTableViewControllerModelKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerModelKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ("autoLayoutTableViewControllerModelKind",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerModelKind GGS_autoLayoutTableViewControllerModelKind::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerModelKind result ;
  const GGS_autoLayoutTableViewControllerModelKind * p = (const GGS_autoLayoutTableViewControllerModelKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_bool & in_mEditable,
                                                                                        const GGS_string & in_mSortPropertyName,
                                                                                        const GGS_string & in_mDisplayedPropertyName,
                                                                                        const GGS_string & in_mColumnObjectTypeName,
                                                                                        const GGS_string & in_mRunAction,
                                                                                        const GGS__32_stringlist & in_mActualParameterList
                                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_bool & in_mEditable,
                                                                                                                                                            const GGS_string & in_mSortPropertyName,
                                                                                                                                                            const GGS_string & in_mDisplayedPropertyName,
                                                                                                                                                            const GGS_string & in_mColumnObjectTypeName,
                                                                                                                                                            const GGS_string & in_mRunAction,
                                                                                                                                                            const GGS__32_stringlist & in_mActualParameterList
                                                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mSortPropertyName, in_mDisplayedPropertyName, in_mColumnObjectTypeName, in_mRunAction, in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mSortPropertyName, inElement.mProperty_mDisplayedPropertyName, inElement.mProperty_mColumnObjectTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (mObject.mProperty_mEditable, mObject.mProperty_mSortPropertyName, mObject.mProperty_mDisplayedPropertyName, mObject.mProperty_mColumnObjectTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mActualParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEditable" ":") ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSortPropertyName" ":") ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDisplayedPropertyName" ":") ;
  mObject.mProperty_mDisplayedPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mColumnObjectTypeName" ":") ;
  mObject.mProperty_mColumnObjectTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRunAction" ":") ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualParameterList" ":") ;
  mObject.mProperty_mActualParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::enterElement (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inValue,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                                                                       const GGS_string & inOperand1,
                                                                                                                                                       const GGS_string & inOperand2,
                                                                                                                                                       const GGS_string & inOperand3,
                                                                                                                                                       const GGS_string & inOperand4,
                                                                                                                                                       const GGS__32_stringlist & inOperand5
                                                                                                                                                       COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                               const GGS_bool & in_mEditable,
                                                                                               const GGS_string & in_mSortPropertyName,
                                                                                               const GGS_string & in_mDisplayedPropertyName,
                                                                                               const GGS_string & in_mColumnObjectTypeName,
                                                                                               const GGS_string & in_mRunAction,
                                                                                               const GGS__32_stringlist & in_mActualParameterList
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (in_mEditable,
                                                                                               in_mSortPropertyName,
                                                                                               in_mDisplayedPropertyName,
                                                                                               in_mColumnObjectTypeName,
                                                                                               in_mRunAction,
                                                                                               in_mActualParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::addAssign_operation (const GGS_bool & inOperand0,
                                                                                         const GGS_string & inOperand1,
                                                                                         const GGS_string & inOperand2,
                                                                                         const GGS_string & inOperand3,
                                                                                         const GGS_string & inOperand4,
                                                                                         const GGS__32_stringlist & inOperand5
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_append (const GGS_bool inOperand0,
                                                                                   const GGS_string inOperand1,
                                                                                   const GGS_string inOperand2,
                                                                                   const GGS_string inOperand3,
                                                                                   const GGS_string inOperand4,
                                                                                   const GGS__32_stringlist inOperand5,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                                          const GGS_string inOperand1,
                                                                                          const GGS_string inOperand2,
                                                                                          const GGS_string inOperand3,
                                                                                          const GGS_string inOperand4,
                                                                                          const GGS__32_stringlist inOperand5,
                                                                                          const GGS_uint inInsertionIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                                          GGS_string & outOperand1,
                                                                                          GGS_string & outOperand2,
                                                                                          GGS_string & outOperand3,
                                                                                          GGS_string & outOperand4,
                                                                                          GGS__32_stringlist & outOperand5,
                                                                                          const GGS_uint inRemoveIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEditable ;
      outOperand1 = p->mObject.mProperty_mSortPropertyName ;
      outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
      outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
      outOperand4 = p->mObject.mProperty_mRunAction ;
      outOperand5 = p->mObject.mProperty_mActualParameterList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popFirst (GGS_bool & outOperand0,
                                                                                     GGS_string & outOperand1,
                                                                                     GGS_string & outOperand2,
                                                                                     GGS_string & outOperand3,
                                                                                     GGS_string & outOperand4,
                                                                                     GGS__32_stringlist & outOperand5,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popLast (GGS_bool & outOperand0,
                                                                                    GGS_string & outOperand1,
                                                                                    GGS_string & outOperand2,
                                                                                    GGS_string & outOperand3,
                                                                                    GGS_string & outOperand4,
                                                                                    GGS__32_stringlist & outOperand5,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_first (GGS_bool & outOperand0,
                                                                                  GGS_string & outOperand1,
                                                                                  GGS_string & outOperand2,
                                                                                  GGS_string & outOperand3,
                                                                                  GGS_string & outOperand4,
                                                                                  GGS__32_stringlist & outOperand5,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_last (GGS_bool & outOperand0,
                                                                                 GGS_string & outOperand1,
                                                                                 GGS_string & outOperand2,
                                                                                 GGS_string & outOperand3,
                                                                                 GGS_string & outOperand4,
                                                                                 GGS__32_stringlist & outOperand5,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSortPropertyName ;
    outOperand2 = p->mObject.mProperty_mDisplayedPropertyName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                                            Compiler * /* inCompiler */
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMEditableAtIndex (GGS_bool inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mEditableAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMSortPropertyNameAtIndex (GGS_string inOperand,
                                                                                                        GGS_uint inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mSortPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMDisplayedPropertyNameAtIndex (GGS_string inOperand,
                                                                                                             GGS_uint inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDisplayedPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mDisplayedPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mDisplayedPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnObjectTypeNameAtIndex (GGS_string inOperand,
                                                                                                            GGS_uint inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnObjectTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnObjectTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnObjectTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GGS_string inOperand,
                                                                                                 GGS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunAction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMActualParameterListAtIndex (GGS__32_stringlist inOperand,
                                                                                                           GGS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mActualParameterListAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GGS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mActualParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mDisplayedPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mDisplayedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mActualParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerBoundColumnListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ("autoLayoutTableViewControllerBoundColumnListForGeneration",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerSortedColumnListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration : public cCollectionElement {
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_string & in_mColumnName,
                                                                                         const GGS_propertyKind & in_mSortPropertyKind,
                                                                                         const GGS_string & in_mObservablePropertyForSorting
                                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_string & in_mColumnName,
                                                                                                                                                              const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                              const GGS_string & in_mObservablePropertyForSorting
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mColumnName" ":") ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSortPropertyKind" ":") ;
  mObject.mProperty_mSortPropertyKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObservablePropertyForSorting" ":") ;
  mObject.mProperty_mObservablePropertyForSorting.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::enterElement (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inValue,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                                         const GGS_propertyKind & inOperand1,
                                                                                                                                                         const GGS_string & inOperand2
                                                                                                                                                         COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                const GGS_string & in_mColumnName,
                                                                                                const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                const GGS_string & in_mObservablePropertyForSorting
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                                in_mSortPropertyKind,
                                                                                                in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                                          const GGS_propertyKind & inOperand1,
                                                                                          const GGS_string & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_append (const GGS_string inOperand0,
                                                                                    const GGS_propertyKind inOperand1,
                                                                                    const GGS_string inOperand2,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                           const GGS_propertyKind inOperand1,
                                                                                           const GGS_string inOperand2,
                                                                                           const GGS_uint inInsertionIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                           GGS_propertyKind & outOperand1,
                                                                                           GGS_string & outOperand2,
                                                                                           const GGS_uint inRemoveIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
      outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                                      GGS_propertyKind & outOperand1,
                                                                                      GGS_string & outOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                                     GGS_propertyKind & outOperand1,
                                                                                     GGS_string & outOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_first (GGS_string & outOperand0,
                                                                                   GGS_propertyKind & outOperand1,
                                                                                   GGS_string & outOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_last (GGS_string & outOperand0,
                                                                                  GGS_propertyKind & outOperand1,
                                                                                  GGS_string & outOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::add_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                                                              Compiler * /* inCompiler */
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::plusAssign_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMColumnNameAtIndex (GGS_string inOperand,
                                                                                                   GGS_uint inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMSortPropertyKindAtIndex (GGS_propertyKind inOperand,
                                                                                                         GGS_uint inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GGS_propertyKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMObservablePropertyForSortingAtIndex (GGS_string inOperand,
                                                                                                                     GGS_uint inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservablePropertyForSorting = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mObservablePropertyForSorting ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerSortedColumnListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ("autoLayoutTableViewControllerSortedColumnListForGeneration",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerGeneration_2E_weak::objectCompare (const GGS_autoLayoutTableViewControllerGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutTableViewControllerGeneration_2E_weak::GGS_autoLayoutTableViewControllerGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration_2E_weak & GGS_autoLayoutTableViewControllerGeneration_2E_weak::operator = (const GGS_autoLayoutTableViewControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration GGS_autoLayoutTableViewControllerGeneration_2E_weak::bang_autoLayoutTableViewControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//     @autoLayoutTableViewControllerGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ("autoLayoutTableViewControllerGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerGeneration_2E_weak GGS_autoLayoutTableViewControllerGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerGeneration_2E_weak result ;
  const GGS_autoLayoutTableViewControllerGeneration_2E_weak * p = (const GGS_autoLayoutTableViewControllerGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectionControllerDeclarationAST_2E_weak::objectCompare (const GGS_selectionControllerDeclarationAST_2E_weak & inOperand) const {
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

GGS_selectionControllerDeclarationAST_2E_weak::GGS_selectionControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST_2E_weak & GGS_selectionControllerDeclarationAST_2E_weak::operator = (const GGS_selectionControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST_2E_weak::GGS_selectionControllerDeclarationAST_2E_weak (const GGS_selectionControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST_2E_weak GGS_selectionControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST_2E_weak::bang_selectionControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerDeclarationAST) ;
      result = GGS_selectionControllerDeclarationAST ((cPtr_selectionControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerDeclarationAST.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ("selectionControllerDeclarationAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST_2E_weak GGS_selectionControllerDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectionControllerDeclarationAST_2E_weak result ;
  const GGS_selectionControllerDeclarationAST_2E_weak * p = (const GGS_selectionControllerDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const C_galgas_type_descriptor * cPtr_selectionControllerPropertyGeneration::classDescriptor (void) const {
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
//
//     @selectionControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ("selectionControllerPropertyGeneration",
                                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerPropertyGeneration::staticTypeDescriptor (void) const {
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
//
//     @selectionControllerPropertyGeneration.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ("selectionControllerPropertyGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//
//Class for element of '@selectionControllerForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_selectionControllerForGeneration : public cCollectionElement {
  public: GGS_selectionControllerForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_selectionControllerForGeneration (const GGS_string & in_mOwnerName,
                                                               const GGS_string & in_mSelectionControllerName,
                                                               const GGS_string & in_mBoundControllerName,
                                                               const GGS_string & in_mBoundControllerPropertyName,
                                                               const GGS_string & in_mBaseTypeName,
                                                               const GGS_string & in_mSelectionTypeName,
                                                               const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                               const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_selectionControllerForGeneration (const GGS_selectionControllerForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GGS_string & in_mOwnerName,
                                                                                                          const GGS_string & in_mSelectionControllerName,
                                                                                                          const GGS_string & in_mBoundControllerName,
                                                                                                          const GGS_string & in_mBoundControllerPropertyName,
                                                                                                          const GGS_string & in_mBaseTypeName,
                                                                                                          const GGS_string & in_mSelectionTypeName,
                                                                                                          const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                          const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GGS_selectionControllerForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mSelectionControllerName, inElement.mProperty_mBoundControllerName, inElement.mProperty_mBoundControllerPropertyName, inElement.mProperty_mBaseTypeName, inElement.mProperty_mSelectionTypeName, inElement.mProperty_mSelectionObservablePropertyMap, inElement.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_selectionControllerForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_selectionControllerForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_selectionControllerForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mSelectionControllerName, mObject.mProperty_mBoundControllerName, mObject.mProperty_mBoundControllerPropertyName, mObject.mProperty_mBaseTypeName, mObject.mProperty_mSelectionTypeName, mObject.mProperty_mSelectionObservablePropertyMap, mObject.mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_selectionControllerForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOwnerName" ":") ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectionControllerName" ":") ;
  mObject.mProperty_mSelectionControllerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBoundControllerName" ":") ;
  mObject.mProperty_mBoundControllerName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBoundControllerPropertyName" ":") ;
  mObject.mProperty_mBoundControllerPropertyName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBaseTypeName" ":") ;
  mObject.mProperty_mBaseTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectionTypeName" ":") ;
  mObject.mProperty_mSelectionTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSelectionObservablePropertyMap" ":") ;
  mObject.mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyGenerationList" ":") ;
  mObject.mProperty_mPropertyGenerationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_selectionControllerForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_selectionControllerForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::enterElement (const GGS_selectionControllerForGeneration_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                     const GGS_string & inOperand1,
                                                                                                     const GGS_string & inOperand2,
                                                                                                     const GGS_string & inOperand3,
                                                                                                     const GGS_string & inOperand4,
                                                                                                     const GGS_string & inOperand5,
                                                                                                     const GGS_propertyMap & inOperand6,
                                                                                                     const GGS_propertyGenerationList & inOperand7
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GGS_selectionControllerForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_selectionControllerForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_string & in_mOwnerName,
                                                                      const GGS_string & in_mSelectionControllerName,
                                                                      const GGS_string & in_mBoundControllerName,
                                                                      const GGS_string & in_mBoundControllerPropertyName,
                                                                      const GGS_string & in_mBaseTypeName,
                                                                      const GGS_string & in_mSelectionTypeName,
                                                                      const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                      const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_selectionControllerForGeneration (in_mOwnerName,
                                                                      in_mSelectionControllerName,
                                                                      in_mBoundControllerName,
                                                                      in_mBoundControllerPropertyName,
                                                                      in_mBaseTypeName,
                                                                      in_mSelectionTypeName,
                                                                      in_mSelectionObservablePropertyMap,
                                                                      in_mPropertyGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::addAssign_operation (const GGS_string & inOperand0,
                                                                const GGS_string & inOperand1,
                                                                const GGS_string & inOperand2,
                                                                const GGS_string & inOperand3,
                                                                const GGS_string & inOperand4,
                                                                const GGS_string & inOperand5,
                                                                const GGS_propertyMap & inOperand6,
                                                                const GGS_propertyGenerationList & inOperand7
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_append (const GGS_string inOperand0,
                                                          const GGS_string inOperand1,
                                                          const GGS_string inOperand2,
                                                          const GGS_string inOperand3,
                                                          const GGS_string inOperand4,
                                                          const GGS_string inOperand5,
                                                          const GGS_propertyMap inOperand6,
                                                          const GGS_propertyGenerationList inOperand7,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                 const GGS_string inOperand1,
                                                                 const GGS_string inOperand2,
                                                                 const GGS_string inOperand3,
                                                                 const GGS_string inOperand4,
                                                                 const GGS_string inOperand5,
                                                                 const GGS_propertyMap inOperand6,
                                                                 const GGS_propertyGenerationList inOperand7,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                 GGS_string & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 GGS_string & outOperand3,
                                                                 GGS_string & outOperand4,
                                                                 GGS_string & outOperand5,
                                                                 GGS_propertyMap & outOperand6,
                                                                 GGS_propertyGenerationList & outOperand7,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  outOperand5.drop () ;
  outOperand6.drop () ;
  outOperand7.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
      outOperand2 = p->mObject.mProperty_mBoundControllerName ;
      outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
      outOperand4 = p->mObject.mProperty_mBaseTypeName ;
      outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
      outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                            GGS_string & outOperand1,
                                                            GGS_string & outOperand2,
                                                            GGS_string & outOperand3,
                                                            GGS_string & outOperand4,
                                                            GGS_string & outOperand5,
                                                            GGS_propertyMap & outOperand6,
                                                            GGS_propertyGenerationList & outOperand7,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_popLast (GGS_string & outOperand0,
                                                           GGS_string & outOperand1,
                                                           GGS_string & outOperand2,
                                                           GGS_string & outOperand3,
                                                           GGS_string & outOperand4,
                                                           GGS_string & outOperand5,
                                                           GGS_propertyMap & outOperand6,
                                                           GGS_propertyGenerationList & outOperand7,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::method_first (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_string & outOperand2,
                                                         GGS_string & outOperand3,
                                                         GGS_string & outOperand4,
                                                         GGS_string & outOperand5,
                                                         GGS_propertyMap & outOperand6,
                                                         GGS_propertyGenerationList & outOperand7,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::method_last (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_string & outOperand2,
                                                        GGS_string & outOperand3,
                                                        GGS_string & outOperand4,
                                                        GGS_string & outOperand5,
                                                        GGS_propertyMap & outOperand6,
                                                        GGS_propertyGenerationList & outOperand7,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mBaseTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand6 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    outOperand7 = p->mObject.mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::add_operation (const GGS_selectionControllerForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result = GGS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result = GGS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result = GGS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::plusAssign_operation (const GGS_selectionControllerForGeneration inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMOwnerNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOwnerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMSelectionControllerNameAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionControllerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMBoundControllerNameAtIndex (GGS_string inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundControllerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMBoundControllerPropertyNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundControllerPropertyName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMBaseTypeNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBaseTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mBaseTypeNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBaseTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMSelectionTypeNameAtIndex (GGS_string inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMSelectionObservablePropertyMapAtIndex (GGS_propertyMap inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectionObservablePropertyMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_propertyMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::setter_setMPropertyGenerationListAtIndex (GGS_propertyGenerationList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyGenerationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_selectionControllerForGeneration::getter_mPropertyGenerationListAtIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GGS_propertyGenerationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mPropertyGenerationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_selectionControllerForGeneration::cEnumerator_selectionControllerForGeneration (const GGS_selectionControllerForGeneration & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element cEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mBaseTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap cEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionObservablePropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList cEnumerator_selectionControllerForGeneration::current_mPropertyGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mPropertyGenerationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration result ;
  const GGS_selectionControllerForGeneration * p = (const GGS_selectionControllerForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDefaultValue_2E_weak::objectCompare (const GGS_abstractDefaultValue_2E_weak & inOperand) const {
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

GGS_abstractDefaultValue_2E_weak::GGS_abstractDefaultValue_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak & GGS_abstractDefaultValue_2E_weak::operator = (const GGS_abstractDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak::GGS_abstractDefaultValue_2E_weak (const GGS_abstractDefaultValue & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak GGS_abstractDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_abstractDefaultValue_2E_weak::bang_abstractDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDefaultValue) ;
      result = GGS_abstractDefaultValue ((cPtr_abstractDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ("abstractDefaultValue.weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak GGS_abstractDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDefaultValue_2E_weak result ;
  const GGS_abstractDefaultValue_2E_weak * p = (const GGS_abstractDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolAsDefaultValue_2E_weak::objectCompare (const GGS_boolAsDefaultValue_2E_weak & inOperand) const {
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

GGS_boolAsDefaultValue_2E_weak::GGS_boolAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak & GGS_boolAsDefaultValue_2E_weak::operator = (const GGS_boolAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak::GGS_boolAsDefaultValue_2E_weak (const GGS_boolAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak GGS_boolAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue_2E_weak::bang_boolAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolAsDefaultValue) ;
      result = GGS_boolAsDefaultValue ((cPtr_boolAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ("boolAsDefaultValue.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boolAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak GGS_boolAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_boolAsDefaultValue_2E_weak result ;
  const GGS_boolAsDefaultValue_2E_weak * p = (const GGS_boolAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doubleAsDefaultValue_2E_weak::objectCompare (const GGS_doubleAsDefaultValue_2E_weak & inOperand) const {
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

GGS_doubleAsDefaultValue_2E_weak::GGS_doubleAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak & GGS_doubleAsDefaultValue_2E_weak::operator = (const GGS_doubleAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak::GGS_doubleAsDefaultValue_2E_weak (const GGS_doubleAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak GGS_doubleAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_doubleAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue_2E_weak::bang_doubleAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_doubleAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doubleAsDefaultValue) ;
      result = GGS_doubleAsDefaultValue ((cPtr_doubleAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @doubleAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ("doubleAsDefaultValue.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_doubleAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_doubleAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_doubleAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak GGS_doubleAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_doubleAsDefaultValue_2E_weak result ;
  const GGS_doubleAsDefaultValue_2E_weak * p = (const GGS_doubleAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_doubleAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_integerAsDefaultValue GGS_integerAsDefaultValue::class_func_new (const GGS_luint & in_mValue,
                                                                     const GGS_bool & in_mNegative,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_integerAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (in_mValue, in_mNegative,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
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
//
//     @integerAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_integerAsDefaultValue::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_integerAsDefaultValue_2E_weak::objectCompare (const GGS_integerAsDefaultValue_2E_weak & inOperand) const {
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

GGS_integerAsDefaultValue_2E_weak::GGS_integerAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak & GGS_integerAsDefaultValue_2E_weak::operator = (const GGS_integerAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak::GGS_integerAsDefaultValue_2E_weak (const GGS_integerAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak GGS_integerAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue GGS_integerAsDefaultValue_2E_weak::bang_integerAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerAsDefaultValue) ;
      result = GGS_integerAsDefaultValue ((cPtr_integerAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @integerAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ("integerAsDefaultValue.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_integerAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak GGS_integerAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_integerAsDefaultValue_2E_weak result ;
  const GGS_integerAsDefaultValue_2E_weak * p = (const GGS_integerAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringAsDefaultValue_2E_weak::objectCompare (const GGS_stringAsDefaultValue_2E_weak & inOperand) const {
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

GGS_stringAsDefaultValue_2E_weak::GGS_stringAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak & GGS_stringAsDefaultValue_2E_weak::operator = (const GGS_stringAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak::GGS_stringAsDefaultValue_2E_weak (const GGS_stringAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak GGS_stringAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_stringAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue_2E_weak::bang_stringAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_stringAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringAsDefaultValue) ;
      result = GGS_stringAsDefaultValue ((cPtr_stringAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @stringAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ("stringAsDefaultValue.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_stringAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak GGS_stringAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue_2E_weak result ;
  const GGS_stringAsDefaultValue_2E_weak * p = (const GGS_stringAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_identifierAsDefaultValue_2E_weak::objectCompare (const GGS_identifierAsDefaultValue_2E_weak & inOperand) const {
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

GGS_identifierAsDefaultValue_2E_weak::GGS_identifierAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak & GGS_identifierAsDefaultValue_2E_weak::operator = (const GGS_identifierAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak::GGS_identifierAsDefaultValue_2E_weak (const GGS_identifierAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak GGS_identifierAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_identifierAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue_2E_weak::bang_identifierAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_identifierAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_identifierAsDefaultValue) ;
      result = GGS_identifierAsDefaultValue ((cPtr_identifierAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @identifierAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ("identifierAsDefaultValue.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_identifierAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_identifierAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_identifierAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak GGS_identifierAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue_2E_weak result ;
  const GGS_identifierAsDefaultValue_2E_weak * p = (const GGS_identifierAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_identifierAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsAsDefaultValue_2E_weak::objectCompare (const GGS_prefsAsDefaultValue_2E_weak & inOperand) const {
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

GGS_prefsAsDefaultValue_2E_weak::GGS_prefsAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak & GGS_prefsAsDefaultValue_2E_weak::operator = (const GGS_prefsAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak::GGS_prefsAsDefaultValue_2E_weak (const GGS_prefsAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak GGS_prefsAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefsAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue_2E_weak::bang_prefsAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefsAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsAsDefaultValue) ;
      result = GGS_prefsAsDefaultValue ((cPtr_prefsAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefsAsDefaultValue.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ("prefsAsDefaultValue.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_prefsAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak GGS_prefsAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue_2E_weak result ;
  const GGS_prefsAsDefaultValue_2E_weak * p = (const GGS_prefsAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeDefaultValueType (cPtr_abstractDefaultValue * inObject,
                                                  const GGS_typeKindList constin_inAttributeActualTypeList,
                                                  const GGS_propertyMap constin_inPreferencesPropertyMap,
                                                  GGS_string & out_outSwiftDefaultValueAsString,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outSwiftDefaultValueAsString.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    inObject->method_analyzeDefaultValueType (constin_inAttributeActualTypeList, constin_inPreferencesPropertyMap, out_outSwiftDefaultValueAsString, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring /* constinArgument_inNode */,
                                                                    GGS_declarationPrecedenceGraph & /* ioArgument_ioGraph */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (cPtr_abstractDefaultValue * inObject,
                                                      const GGS_lstring constin_inNode,
                                                      GGS_declarationPrecedenceGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    inObject->method_enterDefaultValuePrecedence  (constin_inNode, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind typeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_typeName (const GGS_typeKind & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
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
      GGS_string extractedValue_755_typeName_0 ;
      GGS_enumConstantMap extractedValue_766__1 ;
      GGS_enumFuncMap extractedValue_766__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_755_typeName_0, extractedValue_766__1, extractedValue_766__2) ;
      result_result = extractedValue_755_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_812_typeName_0 ;
      GGS_bool extractedValue_822__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_812_typeName_0, extractedValue_822__1) ;
      result_result = extractedValue_812_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_867_typeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_867_typeName_0) ;
      result_result = extractedValue_867_typeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_937_typeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_937_typeName_0) ;
      result_result = extractedValue_937_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind isComparable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isComparable (const GGS_typeKind & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
  case GGS_typeKind::Enumeration::enum_integerType:
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
  case GGS_typeKind::Enumeration::enum_doubleType:
  case GGS_typeKind::Enumeration::enum_stringType:
  case GGS_typeKind::Enumeration::enum_dateType:
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
  case GGS_typeKind::Enumeration::enum_colorType:
  case GGS_typeKind::Enumeration::enum_bezierPathType:
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_1359__0 ;
      GGS_enumConstantMap extractedValue_1359__1 ;
      GGS_enumFuncMap extractedValue_1359__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_1359__0, extractedValue_1359__1, extractedValue_1359__2) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_1406__0 ;
      GGS_bool extractedValue_1406__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_1406__0, extractedValue_1406__1) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_1451__0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_1451__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_1514__0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_1514__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind isGraphic'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isGraphic (const GGS_typeKind & inObject,
                                    Compiler *
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
  case GGS_typeKind::Enumeration::enum_integerType:
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
  case GGS_typeKind::Enumeration::enum_doubleType:
  case GGS_typeKind::Enumeration::enum_stringType:
  case GGS_typeKind::Enumeration::enum_dateType:
  case GGS_typeKind::Enumeration::enum_dataType:
  case GGS_typeKind::Enumeration::enum_bezierPathType:
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_1934__0 ;
      GGS_enumConstantMap extractedValue_1934__1 ;
      GGS_enumFuncMap extractedValue_1934__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_1934__0, extractedValue_1934__1, extractedValue_1934__2) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_1980__0 ;
      GGS_bool extractedValue_1983_isGraphic_1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_1980__0, extractedValue_1983_isGraphic_1) ;
      result_outResult = extractedValue_1983_isGraphic_1 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_2040__0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_2040__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_2103__0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_2103__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Class for element of '@typeKindList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_typeKindList : public cCollectionElement {
  public: GGS_typeKindList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_typeKindList (const GGS_typeKind & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GGS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_typeKindList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_typeKindList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_typeKindList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_typeKindList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::enterElement (const GGS_typeKindList_2E_element & inValue,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeKindList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::class_func_listWithValue (const GGS_typeKind & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  GGS_typeKindList result ;
  if (inOperand0.isValid ()) {
    result = GGS_typeKindList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_typeKindList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_typeKind & in_mType
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::addAssign_operation (const GGS_typeKind & inOperand0
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_append (const GGS_typeKind inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_insertAtIndex (const GGS_typeKind inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_removeAtIndex (GGS_typeKind & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typeKindList) ;
      outOperand0 = p->mObject.mProperty_mType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_popFirst (GGS_typeKind & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_popLast (GGS_typeKind & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::method_first (GGS_typeKind & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::method_last (GGS_typeKind & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::add_operation (const GGS_typeKindList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result = GGS_typeKindList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result = GGS_typeKindList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result = GGS_typeKindList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::plusAssign_operation (const GGS_typeKindList inOperand,
                                             Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_setMTypeAtIndex (GGS_typeKind inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKindList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  GGS_typeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_typeKindList::cEnumerator_typeKindList (const GGS_typeKindList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject.mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @typeKindList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKindList result ;
  const GGS_typeKindList * p = (const GGS_typeKindList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind typeName'
//
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
      GGS_typeKind extractedValue_2466_type_0 ;
      GGS_propertyAccessibility extractedValue_2472__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2466_type_0, extractedValue_2472__1) ;
      result_result = extensionGetter_typeName (extractedValue_2466_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 90)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2519_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2530__1 ;
      GGS_bool extractedValue_2530__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2530__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2519_typeName_0, extractedValue_2530__1, extractedValue_2530__2, extractedValue_2530__3) ;
      result_result = extractedValue_2519_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_2571_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2582__1 ;
      GGS_bool extractedValue_2582__2 ;
      GGS_toOneOppositeRelationship extractedValue_2582__3 ;
      GGS_bool extractedValue_2582__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_2571_typeName_0, extractedValue_2582__1, extractedValue_2582__2, extractedValue_2582__3, extractedValue_2582__4) ;
      result_result = extractedValue_2571_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_2633_typeName_0 ;
      GGS_bool extractedValue_2643__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_2633_typeName_0, extractedValue_2643__1) ;
      result_result = extractedValue_2633_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_2698_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_2698_typeName_0) ;
      result_result = extractedValue_2698_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind swiftTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_propertyKind & inObject,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_2920_type_0 ;
      GGS_propertyAccessibility extractedValue_2926__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2920_type_0, extractedValue_2926__1) ;
      result_result = extensionGetter_swiftTypeName (extractedValue_2920_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 107)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2978_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2989__1 ;
      GGS_bool extractedValue_2989__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2989__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2978_typeName_0, extractedValue_2989__1, extractedValue_2989__2, extractedValue_2989__3) ;
      result_result = extractedValue_2978_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3030_typeName_0 ;
      GGS_propertyAccessibility extractedValue_3041__1 ;
      GGS_bool extractedValue_3041__2 ;
      GGS_toOneOppositeRelationship extractedValue_3041__3 ;
      GGS_bool extractedValue_3041__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_3030_typeName_0, extractedValue_3041__1, extractedValue_3041__2, extractedValue_3041__3, extractedValue_3041__4) ;
      result_result = extractedValue_3030_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3092_typeName_0 ;
      GGS_bool extractedValue_3102__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_3092_typeName_0, extractedValue_3102__1) ;
      result_result = extractedValue_3092_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3157_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_3157_typeName_0) ;
      result_result = extractedValue_3157_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKind swiftTypeName'
//
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_swiftTypeName (const GGS_typeKind & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_typeKind::Enumeration::invalid:
    break ;
  case GGS_typeKind::Enumeration::enum_integerType:
    {
      result_outResult = GGS_string ("Int") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
    {
      result_outResult = GGS_string ("UInt32") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_stringType:
    {
      result_outResult = GGS_string ("String") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_boolType:
    {
      result_outResult = GGS_string ("Bool") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dateType:
    {
      result_outResult = GGS_string ("Date") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_dataType:
    {
      result_outResult = GGS_string ("Data") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_doubleType:
    {
      result_outResult = GGS_string ("Double") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_fontType:
    {
      result_outResult = GGS_string ("NSFont") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_colorType:
    {
      result_outResult = GGS_string ("NSColor") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathType:
    {
      result_outResult = GGS_string ("NSBezierPath") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
    {
      result_outResult = GGS_string ("BezierPathArray") ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_entityType:
    {
      GGS_string extractedValue_3858_entityName_0 ;
      GGS_bool extractedValue_3870__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_3858_entityName_0, extractedValue_3870__1) ;
      result_outResult = extractedValue_3858_entityName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_3923_enumTypeName_0 ;
      GGS_enumConstantMap extractedValue_3938__1 ;
      GGS_enumFuncMap extractedValue_3938__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_3923_enumTypeName_0, extractedValue_3938__1, extractedValue_3938__2) ;
      result_outResult = extractedValue_3923_enumTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_3994_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_3994_classTypeName_0) ;
      result_outResult = extractedValue_3994_classTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_4081_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_4081_classTypeName_0) ;
      result_outResult = extractedValue_4081_classTypeName_0 ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isTransient'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isTransient (const GGS_propertyKind & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_4308__0 ;
      GGS_propertyAccessibility extractedValue_4311_accessibility_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4308__0, extractedValue_4311_accessibility_1) ;
      result_result = extractedValue_4311_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 145)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_4378__0 ;
      GGS_propertyAccessibility extractedValue_4381_accessibility_1 ;
      GGS_bool extractedValue_4397__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_4397__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_4378__0, extractedValue_4381_accessibility_1, extractedValue_4397__2, extractedValue_4397__3) ;
      result_result = extractedValue_4381_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 146)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_4451__0 ;
      GGS_propertyAccessibility extractedValue_4454_accessibility_1 ;
      GGS_bool extractedValue_4470__2 ;
      GGS_toOneOppositeRelationship extractedValue_4470__3 ;
      GGS_bool extractedValue_4470__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_4451__0, extractedValue_4454_accessibility_1, extractedValue_4470__2, extractedValue_4470__3, extractedValue_4470__4) ;
      result_result = extractedValue_4454_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 147)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4535__0 ;
      GGS_bool extractedValue_4535__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_4535__0, extractedValue_4535__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4583__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_4583__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isComparable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isComparable (const GGS_propertyKind & inObject,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_4788_type_0 ;
      GGS_propertyAccessibility extractedValue_4794__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4788_type_0, extractedValue_4794__1) ;
      result_result = extensionGetter_isComparable (extractedValue_4788_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 157)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_4842__0 ;
      GGS_propertyAccessibility extractedValue_4842__1 ;
      GGS_bool extractedValue_4842__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_4842__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_4842__0, extractedValue_4842__1, extractedValue_4842__2, extractedValue_4842__3) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_4877__0 ;
      GGS_propertyAccessibility extractedValue_4877__1 ;
      GGS_bool extractedValue_4877__2 ;
      GGS_toOneOppositeRelationship extractedValue_4877__3 ;
      GGS_bool extractedValue_4877__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_4877__0, extractedValue_4877__1, extractedValue_4877__2, extractedValue_4877__3, extractedValue_4877__4) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4922__0 ;
      GGS_bool extractedValue_4922__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_4922__0, extractedValue_4922__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4970__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_4970__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isEntityType'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isEntityType (const GGS_propertyKind & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_5176__0 ;
      GGS_propertyAccessibility extractedValue_5176__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_5176__0, extractedValue_5176__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5212__0 ;
      GGS_propertyAccessibility extractedValue_5212__1 ;
      GGS_bool extractedValue_5212__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5212__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_5212__0, extractedValue_5212__1, extractedValue_5212__2, extractedValue_5212__3) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5246__0 ;
      GGS_propertyAccessibility extractedValue_5246__1 ;
      GGS_bool extractedValue_5246__2 ;
      GGS_toOneOppositeRelationship extractedValue_5246__3 ;
      GGS_bool extractedValue_5246__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_5246__0, extractedValue_5246__1, extractedValue_5246__2, extractedValue_5246__3, extractedValue_5246__4) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_5290__0 ;
      GGS_bool extractedValue_5290__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_5290__0, extractedValue_5290__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_5338__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_5338__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@propertyKind isEnumType'
//
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isEnumType (const GGS_propertyKind & inObject,
                                     Compiler *
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_5541_type_0 ;
      GGS_propertyAccessibility extractedValue_5547__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_5541_type_0, extractedValue_5547__1) ;
      result_result = extractedValue_5541_type_0.getter_isEnumType (SOURCE_FILE ("unified-type.ggs", 181)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5593__0 ;
      GGS_propertyAccessibility extractedValue_5593__1 ;
      GGS_bool extractedValue_5593__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5593__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_5593__0, extractedValue_5593__1, extractedValue_5593__2, extractedValue_5593__3) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5628__0 ;
      GGS_propertyAccessibility extractedValue_5628__1 ;
      GGS_bool extractedValue_5628__2 ;
      GGS_toOneOppositeRelationship extractedValue_5628__3 ;
      GGS_bool extractedValue_5628__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_5628__0, extractedValue_5628__1, extractedValue_5628__2, extractedValue_5628__3, extractedValue_5628__4) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_5673__0 ;
      GGS_bool extractedValue_5673__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_5673__0, extractedValue_5673__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_5721__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_5721__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum classKind
//--------------------------------------------------------------------------------------------------

GGS_classKind::GGS_classKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_prefs (UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_prefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_atomic (const GGS_typeKind & inAssociatedValue0
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_atomic ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_atomic (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_document (const GGS_lstring & inAssociatedValue0
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_document ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_document (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_entity (const GGS_string & inAssociatedValue0,
                                                const GGS_bool & inAssociatedValue1,
                                                const GGS_bool & inAssociatedValue2,
                                                const GGS_bool & inAssociatedValue3
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_entity ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_entity (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractAtomic (GGS_typeKind & outAssociatedValue_kind,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_atomic) {
    outAssociatedValue_kind.drop () ;
    String s ;
    s.appendCString ("method @classKind.atomic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_kind = ptr->mProperty_kind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractDocument (GGS_lstring & outAssociatedValue_rootEntityName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_document) {
    outAssociatedValue_rootEntityName.drop () ;
    String s ;
    s.appendCString ("method @classKind.document invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_rootEntityName = ptr->mProperty_rootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractEntity (GGS_string & outAssociatedValue_superEntityName,
                                          GGS_bool & outAssociatedValue_isGraphic,
                                          GGS_bool & outAssociatedValue_isAbstract,
                                          GGS_bool & outAssociatedValue_handlingOpposite,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entity) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_isGraphic.drop () ;
    outAssociatedValue_isAbstract.drop () ;
    outAssociatedValue_handlingOpposite.drop () ;
    String s ;
    s.appendCString ("method @classKind.entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_isGraphic = ptr->mProperty_isGraphic ;
    outAssociatedValue_isAbstract = ptr->mProperty_isAbstract ;
    outAssociatedValue_handlingOpposite = ptr->mProperty_handlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_ GGS_classKind::getter_getAtomic (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_atomic_3F_ result ;
  if (mEnum == Enumeration::enum_atomic) {
    const auto ptr = (const GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_atomic (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_atomic (GGS_typeKind & out_kind) const {
  const auto ptr = (const GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
  out_kind = ptr->mProperty_kind ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_ GGS_classKind::getter_getDocument (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_document_3F_ result ;
  if (mEnum == Enumeration::enum_document) {
    const auto ptr = (const GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_document (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_document (GGS_lstring & out_rootEntityName) const {
  const auto ptr = (const GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
  out_rootEntityName = ptr->mProperty_rootEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_ GGS_classKind::getter_getEntity (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_entity_3F_ result ;
  if (mEnum == Enumeration::enum_entity) {
    const auto ptr = (const GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_entity (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_entity (GGS_string & out_superEntityName,
                                                   GGS_bool & out_isGraphic,
                                                   GGS_bool & out_isAbstract,
                                                   GGS_bool & out_handlingOpposite) const {
  const auto ptr = (const GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_isGraphic = ptr->mProperty_isGraphic ;
  out_isAbstract = ptr->mProperty_isAbstract ;
  out_handlingOpposite = ptr->mProperty_handlingOpposite ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_classKind [5] = {
  "(not built)",
  "prefs",
  "atomic",
  "document",
  "entity"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isPrefs (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefs == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isAtomic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_atomic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isDocument (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_document == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @classKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_classKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @classKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ("classKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_classKind result ;
  const GGS_classKind * p = (const GGS_classKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_prefKeyDefinitionCode (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_prefKeyDefinitionCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_declarationInSelectionControllerCode (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_declarationInSelectionControllerCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_bindPropertyInSelectionController (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                        const GGS_bool in_inPreferences,
                                                        const GGS_bool in_inGenerationDirectAccess,
                                                        const GGS_stringset in_inOverriddenTransients,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_propertyDeclarationCode (in_inPreferences, in_inGenerationDirectAccess, in_inOverriddenTransients, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
                                                  const GGS_bool in_inPreferences,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_configurationCode (in_inPreferences, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_initCode (const cPtr_propertyGeneration * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_initCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_setupRelationshipFromDictionaryCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_objectAccessibilityCodeForSaveOperation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_populateExplorerWindowCode (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_populateExplorerWindowCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_resetToManyRelationships (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_resetToManyRelationships (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyAccessibility
//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility::GGS_propertyAccessibility (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_stored (UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_stored ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_computed (UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_computed ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_transient (const GGS_bool & inAssociatedValue0
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_transient ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyAccessibility_2E_transient (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::method_extractTransient (GGS_bool & outAssociatedValue_isAbstract,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_transient) {
    outAssociatedValue_isAbstract.drop () ;
    String s ;
    s.appendCString ("method @propertyAccessibility.transient invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isAbstract = ptr->mProperty_isAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_ GGS_propertyAccessibility::getter_getTransient (UNUSED_LOCATION_ARGS) const {
  GGS_propertyAccessibility_2E_transient_3F_ result ;
  if (mEnum == Enumeration::enum_transient) {
    const auto ptr = (const GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyAccessibility_2E_transient (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::getAssociatedValuesFor_transient (GGS_bool & out_isAbstract) const {
  const auto ptr = (const GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
  out_isAbstract = ptr->mProperty_isAbstract ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyAccessibility [4] = {
  "(not built)",
  "stored",
  "computed",
  "transient"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stored == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isComputed (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computed == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transient == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyAccessibility: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyAccessibility [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @propertyAccessibility generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  const GGS_propertyAccessibility * p = (const GGS_propertyAccessibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@transientExternTypeList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientExternTypeList : public cCollectionElement {
  public: GGS_transientExternTypeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                      const GGS_bool & in_mIsClass
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                                                        const GGS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_transientExternTypeList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsClass" ":") ;
  mObject.mProperty_mIsClass.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_transientExternTypeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_transientExternTypeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::enterElement (const GGS_transientExternTypeList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_transientExternTypeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_transientExternTypeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_string & in_mTypeName,
                                                             const GGS_bool & in_mIsClass
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName,
                                                             in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::addAssign_operation (const GGS_string & inOperand0,
                                                       const GGS_bool & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_append (const GGS_string inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_insertAtIndex (const GGS_string inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_removeAtIndex (GGS_string & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mIsClass ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popFirst (GGS_string & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popLast (GGS_string & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_first (GGS_string & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_last (GGS_string & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::add_operation (const GGS_transientExternTypeList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::plusAssign_operation (const GGS_transientExternTypeList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientExternTypeList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMIsClassAtIndex (GGS_bool inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsClass = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientExternTypeList::getter_mIsClassAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mIsClass ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_transientExternTypeList::cEnumerator_transientExternTypeList (const GGS_transientExternTypeList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element cEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool cEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}




//--------------------------------------------------------------------------------------------------
//
//     @transientExternTypeList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  const GGS_transientExternTypeList * p = (const GGS_transientExternTypeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientExternTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractFileGeneration * inObject,
                                       const GGS_string constin_inOutputDirectory,
                                       const GGS_generationStruct constin_inGenerationStruct,
                                       GGS_stringset & io_ioGeneratedFileSet,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    inObject->method_generateCode (constin_inOutputDirectory, constin_inGenerationStruct, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@fileGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public: GGS_fileGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fileGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileGeneration" ":") ;
  mObject.mProperty_mFileGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_fileGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_fileGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::enterElement (const GGS_fileGenerationList_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::class_func_listWithValue (const GGS_abstractFileGeneration & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_fileGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_fileGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractFileGeneration & in_mFileGeneration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::addAssign_operation (const GGS_abstractFileGeneration & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_append (const GGS_abstractFileGeneration inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_insertAtIndex (const GGS_abstractFileGeneration inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_removeAtIndex (GGS_abstractFileGeneration & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
      outOperand0 = p->mObject.mProperty_mFileGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popFirst (GGS_abstractFileGeneration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popLast (GGS_abstractFileGeneration & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_first (GGS_abstractFileGeneration & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_last (GGS_abstractFileGeneration & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::add_operation (const GGS_fileGenerationList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::plusAssign_operation (const GGS_fileGenerationList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_setMFileGenerationAtIndex (GGS_abstractFileGeneration inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_fileGenerationList::getter_mFileGenerationAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  GGS_abstractFileGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    result = p->mObject.mProperty_mFileGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_fileGenerationList::cEnumerator_fileGenerationList (const GGS_fileGenerationList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element cEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration cEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @fileGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  const GGS_fileGenerationList * p = (const GGS_fileGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
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

GGS_generationStruct::~ GGS_generationStruct (void) {
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
GGS_validationStubRoutineListForGeneration temp_0 = GGS_validationStubRoutineListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 31)) ;
  mProperty_mValidationStubRoutineListForGeneration = temp_0 ;
GGS_fileGenerationList temp_1 = GGS_fileGenerationList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 32)) ;
  mProperty_mFileGenerationList = temp_1 ;
GGS_entityListForGeneratingEBManagedObjectContext temp_2 = GGS_entityListForGeneratingEBManagedObjectContext::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 33)) ;
  mProperty_mEntityListForGeneration = temp_2 ;
  mProperty_mGenerateEBManagedXibDocumentSwift = GGS_bool (false) ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (false) ;
GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 36)) ;
  mProperty_mNeededOutletClasses = temp_3 ;
GGS_mainXibDescriptorList temp_4 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 37)) ;
  mProperty_mMainXibDescriptorList = temp_4 ;
GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 39)) ;
  mProperty_mToOneClassImplementations = temp_5 ;
GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 40)) ;
  mProperty_mToManyClassImplementations = temp_6 ;
GGS_selectionControllerForGeneration temp_7 = GGS_selectionControllerForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 42)) ;
  mProperty_mSelectionControllerListForGeneration = temp_7 ;
GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 43)) ;
  mProperty_mPropertyClassList = temp_8 ;
GGS_transientExternTypeList temp_9 = GGS_transientExternTypeList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 44)) ;
  mProperty_mTransientPropertyTypeList = temp_9 ;
GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 46)) ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = temp_10 ;
GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 47)) ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = temp_11 ;
GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 48)) ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = temp_12 ;
GGS_stringset temp_13 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 49)) ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = temp_13 ;
GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 50)) ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = temp_14 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_validationStubRoutineListForGeneration & inOperand0,
                                            const GGS_fileGenerationList & inOperand1,
                                            const GGS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                            const GGS_bool & inOperand3,
                                            const GGS_bool & inOperand4,
                                            const GGS_stringset & inOperand5,
                                            const GGS_mainXibDescriptorList & inOperand6,
                                            const GGS_stringset & inOperand7,
                                            const GGS_stringset & inOperand8,
                                            const GGS_selectionControllerForGeneration & inOperand9,
                                            const GGS_stringlist & inOperand10,
                                            const GGS_transientExternTypeList & inOperand11,
                                            const GGS_stringset & inOperand12,
                                            const GGS_stringset & inOperand13,
                                            const GGS_stringset & inOperand14,
                                            const GGS_stringset & inOperand15,
                                            const GGS_stringset & inOperand16) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mEntityListForGeneration (inOperand2),
mProperty_mGenerateEBManagedXibDocumentSwift (inOperand3),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inOperand4),
mProperty_mNeededOutletClasses (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mToOneClassImplementations (inOperand7),
mProperty_mToManyClassImplementations (inOperand8),
mProperty_mSelectionControllerListForGeneration (inOperand9),
mProperty_mPropertyClassList (inOperand10),
mProperty_mTransientPropertyTypeList (inOperand11),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inOperand12),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inOperand13),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inOperand14),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inOperand15),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inOperand16) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::class_func_new (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StoredArrayOf_5F_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
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
    mProperty_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
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
//
//     @generationStruct generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_generationStruct result ;
  const GGS_generationStruct * p = (const GGS_generationStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GGS_XCodeGroupList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                             const GGS_string & in_mGroupName,
                                             const GGS_string & in_mGroupPath,
                                             const GGS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                                                      const GGS_string & in_mGroupName,
                                                                      const GGS_string & in_mGroupPath,
                                                                      const GGS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupReference" ":") ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupName" ":") ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupPath" ":") ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mChildrenRefs" ":") ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::enterElement (const GGS_XCodeGroupList_2E_element & inValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssign_operation (const GGS_string & inOperand0,
                                              const GGS_string & inOperand1,
                                              const GGS_string & inOperand2,
                                              const GGS_stringlist & inOperand3
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_insertAtIndex (const GGS_string inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               const GGS_stringlist inOperand3,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
      outOperand0 = p->mObject.mProperty_mGroupReference ;
      outOperand1 = p->mObject.mProperty_mGroupName ;
      outOperand2 = p->mObject.mProperty_mGroupPath ;
      outOperand3 = p->mObject.mProperty_mChildrenRefs ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssign_operation (const GGS_XCodeGroupList inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  const GGS_XCodeGroupList * p = (const GGS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

