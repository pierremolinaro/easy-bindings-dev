#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

cMapElement_decoratedOutletMap::cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_string & in_mOutletTypeName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletTypeName (in_mOutletTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_decoratedOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_decoratedOutletMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_decoratedOutletMap (mProperty_lkey, mProperty_mOutletTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_decoratedOutletMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletTypeName" ":") ;
  mProperty_mOutletTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_decoratedOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_decoratedOutletMap * operand = (cMapElement_decoratedOutletMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletTypeName.objectCompare (operand->mProperty_mOutletTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap & GALGAS_decoratedOutletMap::operator = (const GALGAS_decoratedOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::class_func_mapWithMapToOverride (const GALGAS_decoratedOutletMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_string & inArgument0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = nullptr ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@decoratedOutletMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::add_operation (const GALGAS_decoratedOutletMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result = *this ;
  cEnumerator_decoratedOutletMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOutletTypeName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = nullptr ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_decoratedOutletMap_searchKey = "the '%K' outlet is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_string & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_decoratedOutletMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_decoratedOutletMap::getter_mOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    result = p->mProperty_mOutletTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::setter_setMOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_decoratedOutletMap * p = (cMapElement_decoratedOutletMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    p->mProperty_mOutletTypeName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_decoratedOutletMap * GALGAS_decoratedOutletMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * result = (cMapElement_decoratedOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_decoratedOutletMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_decoratedOutletMap::cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap_2D_element cEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return GALGAS_decoratedOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletTypeName) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return p->mProperty_mOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_decoratedOutletMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_string & outArgument0) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @decoratedOutletMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  const GALGAS_decoratedOutletMap * p = (const GALGAS_decoratedOutletMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_decoratedOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutOutletMap::cMapElement_autoLayoutOutletMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_string & in_mAutoLayoutOutletTypeName,
                                                                  const GALGAS_bool & in_mOutletIsArray
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAutoLayoutOutletTypeName (in_mAutoLayoutOutletTypeName),
mProperty_mOutletIsArray (in_mOutletIsArray) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutOutletMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_autoLayoutOutletMap (mProperty_lkey, mProperty_mAutoLayoutOutletTypeName, mProperty_mOutletIsArray COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutOutletMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAutoLayoutOutletTypeName" ":") ;
  mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletIsArray" ":") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_autoLayoutOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutOutletMap * operand = (cMapElement_autoLayoutOutletMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutOutletTypeName.objectCompare (operand->mProperty_mAutoLayoutOutletTypeName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletIsArray.objectCompare (operand->mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap::GALGAS_autoLayoutOutletMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap::GALGAS_autoLayoutOutletMap (const GALGAS_autoLayoutOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap & GALGAS_autoLayoutOutletMap::operator = (const GALGAS_autoLayoutOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutOutletMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutOutletMap::class_func_mapWithMapToOverride (const GALGAS_autoLayoutOutletMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutOutletMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_string & inArgument0,
                                                      const GALGAS_bool & inArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutOutletMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutOutletMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutOutletMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutOutletMap::add_operation (const GALGAS_autoLayoutOutletMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutOutletMap result = *this ;
  cEnumerator_autoLayoutOutletMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAutoLayoutOutletTypeName (HERE), enumerator.current_mOutletIsArray (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_string inArgument0,
                                                   GALGAS_bool inArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutOutletMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutOutletMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutOutletMap_searchKey = "there is no '%K' outlet" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_string & outArgument0,
                                                   GALGAS_bool & outArgument1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_autoLayoutOutletMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    outArgument0 = p->mProperty_mAutoLayoutOutletTypeName ;
    outArgument1 = p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutOutletMap::getter_mAutoLayoutOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    result = p->mProperty_mAutoLayoutOutletTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutOutletMap::getter_mOutletIsArrayForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) attributes ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    result = p->mProperty_mOutletIsArray ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap::setter_setMAutoLayoutOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                            GALGAS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutOutletMap * p = (cMapElement_autoLayoutOutletMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    p->mProperty_mAutoLayoutOutletTypeName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletMap::setter_setMOutletIsArrayForKey (GALGAS_bool inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutOutletMap * p = (cMapElement_autoLayoutOutletMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    p->mProperty_mOutletIsArray = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutOutletMap * GALGAS_autoLayoutOutletMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutOutletMap * result = (cMapElement_autoLayoutOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutOutletMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutOutletMap::cEnumerator_autoLayoutOutletMap (const GALGAS_autoLayoutOutletMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap_2D_element cEnumerator_autoLayoutOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
  return GALGAS_autoLayoutOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mAutoLayoutOutletTypeName, p->mProperty_mOutletIsArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutOutletMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
  return p->mProperty_mAutoLayoutOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutOutletMap::current_mOutletIsArray (LOCATION_ARGS) const {
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
  return p->mProperty_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutOutletMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_string & outArgument0,
                                                     GALGAS_bool & outArgument1) const {
  const cMapElement_autoLayoutOutletMap * p = (const cMapElement_autoLayoutOutletMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutOutletMap) ;
    outArgument0 = p->mProperty_mAutoLayoutOutletTypeName ;
    outArgument1 = p->mProperty_mOutletIsArray ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutOutletMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap ("autoLayoutOutletMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutOutletMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutOutletMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletMap result ;
  const GALGAS_autoLayoutOutletMap * p = (const GALGAS_autoLayoutOutletMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actionBindingListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actionBindingListForGeneration : public cCollectionElement {
  public: GALGAS_actionBindingListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mTargetName,
                                                             const GALGAS_string & in_mActionName,
                                                             const GALGAS_string & in_mTargetTypeName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                                                                      const GALGAS_string & in_mTargetName,
                                                                                                      const GALGAS_string & in_mActionName,
                                                                                                      const GALGAS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actionBindingListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletName" ":") ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActionName" ":") ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetTypeName" ":") ;
  mObject.mProperty_mTargetTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_actionBindingListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionBindingListForGeneration * operand = (cCollectionElement_actionBindingListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionBindingListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                       const GALGAS_string & inOperand1,
                                                                                                       const GALGAS_string & inOperand2,
                                                                                                       const GALGAS_string & inOperand3
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mOutletName,
                                                                       const GALGAS_string & in_mTargetName,
                                                                       const GALGAS_string & in_mActionName,
                                                                       const GALGAS_string & in_mTargetTypeName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_actionBindingListForGeneration (in_mOutletName,
                                                                    in_mTargetName,
                                                                    in_mActionName,
                                                                    in_mTargetTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1,
                                                                 const GALGAS_string & inOperand2,
                                                                 const GALGAS_string & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                           const GALGAS_string inOperand1,
                                                           const GALGAS_string inOperand2,
                                                           const GALGAS_string inOperand3,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_string inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mOutletName ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mActionName ;
        outOperand3 = p->mObject.mProperty_mTargetTypeName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             GALGAS_string & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::add_operation (const GALGAS_actionBindingListForGeneration & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMActionNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMTargetTypeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetTypeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_actionBindingListForGeneration::cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element cEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetTypeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @actionBindingListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  const GALGAS_actionBindingListForGeneration * p = (const GALGAS_actionBindingListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actionBindingListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@regularBindingsGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_regularBindingsGenerationList : public cCollectionElement {
  public: GALGAS_regularBindingsGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                            const GALGAS_string & in_mBindingName,
                                                            const GALGAS_boundObjectList & in_mBoundObjectList,
                                                            const GALGAS_string & in_mBindingOptionsString
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GALGAS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_regularBindingsGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletName" ":") ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingName" ":") ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBoundObjectList" ":") ;
  mObject.mProperty_mBoundObjectList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingOptionsString" ":") ;
  mObject.mProperty_mBindingOptionsString.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_regularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingsGenerationList * operand = (cCollectionElement_regularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                     const GALGAS_string & inOperand1,
                                                                                                     const GALGAS_boundObjectList & inOperand2,
                                                                                                     const GALGAS_string & inOperand3
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_regularBindingsGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectList,
                                                                   in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_boundObjectList & inOperand2,
                                                                const GALGAS_string & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_append (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_boundObjectList inOperand2,
                                                          const GALGAS_string inOperand3,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_boundObjectList inOperand2,
                                                                 const GALGAS_string inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_boundObjectList & outOperand2,
                                                                 GALGAS_string & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
        outOperand0 = p->mObject.mProperty_mOutletName ;
        outOperand1 = p->mObject.mProperty_mBindingName ;
        outOperand2 = p->mObject.mProperty_mBoundObjectList ;
        outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_boundObjectList & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_boundObjectList & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_boundObjectList & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_boundObjectList & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GALGAS_boundObjectList inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_boundObjectList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GALGAS_string inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionsString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingOptionsString ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_regularBindingsGenerationList::cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element cEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList cEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//--------------------------------------------------------------------------------------------------
//
//     @regularBindingsGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  const GALGAS_regularBindingsGenerationList * p = (const GALGAS_regularBindingsGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_regularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@multipleBindingGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_multipleBindingGenerationList : public cCollectionElement {
  public: GALGAS_multipleBindingGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                            const GALGAS_string & in_mBindingName,
                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_multipleBindingGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletName" ":") ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingName" ":") ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBoundObjectExpression" ":") ;
  mObject.mProperty_mBoundObjectExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_multipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_multipleBindingGenerationList * operand = (cCollectionElement_multipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_multipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_multipleBindingGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                     const GALGAS_string & inOperand1,
                                                                                                     const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_multipleBindingGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_append (const GALGAS_string inOperand0,
                                                          const GALGAS_string inOperand1,
                                                          const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
        outOperand0 = p->mObject.mProperty_mOutletName ;
        outOperand1 = p->mObject.mProperty_mBindingName ;
        outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::add_operation (const GALGAS_multipleBindingGenerationList & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_multipleBindingGenerationList::cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element cEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @multipleBindingGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  const GALGAS_multipleBindingGenerationList * p = (const GALGAS_multipleBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_multipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewBindingGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewBindingGenerationList : public cCollectionElement {
  public: GALGAS_tableViewBindingGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                             const GALGAS_string & in_mTableValueBindingControllerName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                      const GALGAS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewBindingGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTableValueBindingOutletName" ":") ;
  mObject.mProperty_mTableValueBindingOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTableValueBindingControllerName" ":") ;
  mObject.mProperty_mTableValueBindingControllerName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_tableViewBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewBindingGenerationList * operand = (cCollectionElement_tableViewBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                       const GALGAS_string & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mTableValueBindingOutletName,
                                                                       const GALGAS_string & in_mTableValueBindingControllerName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (in_mTableValueBindingOutletName,
                                                                    in_mTableValueBindingControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_append (const GALGAS_string inOperand0,
                                                           const GALGAS_string inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
        outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
        outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_setMTableValueBindingOutletNameAtIndex (GALGAS_string inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_setMTableValueBindingControllerNameAtIndex (GALGAS_string inOperand,
                                                                                               GALGAS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingControllerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_tableViewBindingGenerationList::cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element cEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingOutletName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingControllerName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @tableViewBindingGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  const GALGAS_tableViewBindingGenerationList * p = (const GALGAS_tableViewBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tableViewBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ebViewGraphicControllerBindingGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ebViewGraphicControllerBindingGenerationList : public cCollectionElement {
  public: GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                           const GALGAS_string & in_mArrayControllerControllerName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                  const GALGAS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ebViewGraphicControllerBindingGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEBViewOutletName" ":") ;
  mObject.mProperty_mEBViewOutletName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mArrayControllerControllerName" ":") ;
  mObject.mProperty_mArrayControllerControllerName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_ebViewGraphicControllerBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * operand = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                   const GALGAS_string & inOperand1
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mEBViewOutletName,
                                                                                     const GALGAS_string & in_mArrayControllerControllerName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName,
                                                                                  in_mArrayControllerControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_append (const GALGAS_string inOperand0,
                                                                         const GALGAS_string inOperand1,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_string inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_string & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
        outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
        outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_setMEBViewOutletNameAtIndex (GALGAS_string inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEBViewOutletName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mEBViewOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mEBViewOutletName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_setMArrayControllerControllerNameAtIndex (GALGAS_string inOperand,
                                                                                                           GALGAS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArrayControllerControllerName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mArrayControllerControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mArrayControllerControllerName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ebViewGraphicControllerBindingGenerationList::cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element cEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mEBViewOutletName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mArrayControllerControllerName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ebViewGraphicControllerBindingGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@viewGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_viewGenerationList : public cCollectionElement {
  public: GALGAS_viewGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_viewGenerationList (const GALGAS_string & in_mViewName,
                                                 const GALGAS_abstractViewGeneration & in_mView
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_viewGenerationList (const GALGAS_viewGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GALGAS_string & in_mViewName,
                                                                              const GALGAS_abstractViewGeneration & in_mView
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GALGAS_viewGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_viewGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_viewGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_viewGenerationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_viewGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mViewName" ":") ;
  mObject.mProperty_mViewName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mView" ":") ;
  mObject.mProperty_mView.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_viewGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_viewGenerationList * operand = (cCollectionElement_viewGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_viewGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList::GALGAS_viewGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList::GALGAS_viewGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_viewGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                               const GALGAS_abstractViewGeneration & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_viewGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_viewGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mViewName,
                                                           const GALGAS_abstractViewGeneration & in_mView
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_viewGenerationList (in_mViewName,
                                                        in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_abstractViewGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_viewGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_append (const GALGAS_string inOperand0,
                                               const GALGAS_abstractViewGeneration inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_viewGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_abstractViewGeneration inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_viewGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_abstractViewGeneration & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
        outOperand0 = p->mObject.mProperty_mViewName ;
        outOperand1 = p->mObject.mProperty_mView ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_abstractViewGeneration & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_abstractViewGeneration & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_abstractViewGeneration & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_abstractViewGeneration & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::add_operation (const GALGAS_viewGenerationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::plusAssign_operation (const GALGAS_viewGenerationList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_setMViewNameAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mViewName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_viewGenerationList::getter_mViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    result = p->mObject.mProperty_mViewName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_setMViewAtIndex (GALGAS_abstractViewGeneration inOperand,
                                                        GALGAS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mView = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration GALGAS_viewGenerationList::getter_mViewAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  GALGAS_abstractViewGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    result = p->mObject.mProperty_mView ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_viewGenerationList::cEnumerator_viewGenerationList (const GALGAS_viewGenerationList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element cEnumerator_viewGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_viewGenerationList::current_mViewName (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject.mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration cEnumerator_viewGenerationList::current_mView (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject.mProperty_mView ;
}




//--------------------------------------------------------------------------------------------------
//
//     @viewGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList ("viewGenerationList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_viewGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_viewGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_viewGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList result ;
  const GALGAS_viewGenerationList * p = (const GALGAS_viewGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_viewGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@implicitViewFunctionGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_implicitViewFunctionGenerationList : public cCollectionElement {
  public: GALGAS_implicitViewFunctionGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_implicitViewFunctionGenerationList (const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_implicitViewFunctionGenerationList (const GALGAS_implicitViewFunctionGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_implicitViewFunctionGenerationList::cCollectionElement_implicitViewFunctionGenerationList (const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_implicitViewFunctionGenerationList::cCollectionElement_implicitViewFunctionGenerationList (const GALGAS_implicitViewFunctionGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_implicitViewFunctionGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_implicitViewFunctionGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_implicitViewFunctionGenerationList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_implicitViewFunctionGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_implicitViewFunctionGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_implicitViewFunctionGenerationList * operand = (cCollectionElement_implicitViewFunctionGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_implicitViewFunctionGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList::GALGAS_implicitViewFunctionGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList::GALGAS_implicitViewFunctionGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_implicitViewFunctionGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::class_func_listWithValue (const GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_implicitViewFunctionGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_implicitViewFunctionGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_implicitViewFunctionGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_implicitViewFunctionGenerationList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::addAssign_operation (const GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_implicitViewFunctionGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_append (const GALGAS_abstractViewInstructionGeneration inOperand0,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_implicitViewFunctionGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_insertAtIndex (const GALGAS_abstractViewInstructionGeneration inOperand0,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_implicitViewFunctionGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_removeAtIndex (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_popFirst (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_popLast (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::method_first (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::method_last (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::add_operation (const GALGAS_implicitViewFunctionGenerationList & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_implicitViewFunctionGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_implicitViewFunctionGenerationList result = GALGAS_implicitViewFunctionGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_implicitViewFunctionGenerationList result = GALGAS_implicitViewFunctionGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_implicitViewFunctionGenerationList result = GALGAS_implicitViewFunctionGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::plusAssign_operation (const GALGAS_implicitViewFunctionGenerationList inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList::setter_setMInstructionAtIndex (GALGAS_abstractViewInstructionGeneration inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_implicitViewFunctionGenerationList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_implicitViewFunctionGenerationList * p = (cCollectionElement_implicitViewFunctionGenerationList *) attributes.ptr () ;
  GALGAS_abstractViewInstructionGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_implicitViewFunctionGenerationList::cEnumerator_implicitViewFunctionGenerationList (const GALGAS_implicitViewFunctionGenerationList & inEnumeratedObject,
                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element cEnumerator_implicitViewFunctionGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_implicitViewFunctionGenerationList * p = (const cCollectionElement_implicitViewFunctionGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration cEnumerator_implicitViewFunctionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_implicitViewFunctionGenerationList * p = (const cCollectionElement_implicitViewFunctionGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_implicitViewFunctionGenerationList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @implicitViewFunctionGenerationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ("implicitViewFunctionGenerationList",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitViewFunctionGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitViewFunctionGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitViewFunctionGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_implicitViewFunctionGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList result ;
  const GALGAS_implicitViewFunctionGenerationList * p = (const GALGAS_implicitViewFunctionGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitViewFunctionGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutConfiguratorMap::cMapElement_autoLayoutConfiguratorMap (const GALGAS_lstring & inKey,
                                                                              const GALGAS_string & in_mAutoLayoutOutletTypeName
                                                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mAutoLayoutOutletTypeName (in_mAutoLayoutOutletTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutConfiguratorMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutConfiguratorMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_autoLayoutConfiguratorMap (mProperty_lkey, mProperty_mAutoLayoutOutletTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutConfiguratorMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAutoLayoutOutletTypeName" ":") ;
  mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_autoLayoutConfiguratorMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutConfiguratorMap * operand = (cMapElement_autoLayoutConfiguratorMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutOutletTypeName.objectCompare (operand->mProperty_mAutoLayoutOutletTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap::GALGAS_autoLayoutConfiguratorMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap::GALGAS_autoLayoutConfiguratorMap (const GALGAS_autoLayoutConfiguratorMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap & GALGAS_autoLayoutConfiguratorMap::operator = (const GALGAS_autoLayoutConfiguratorMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutConfiguratorMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutConfiguratorMap::class_func_mapWithMapToOverride (const GALGAS_autoLayoutConfiguratorMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutConfiguratorMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutConfiguratorMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                            const GALGAS_string & inArgument0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutConfiguratorMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutConfiguratorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutConfiguratorMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutConfiguratorMap::add_operation (const GALGAS_autoLayoutConfiguratorMap & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutConfiguratorMap result = *this ;
  cEnumerator_autoLayoutConfiguratorMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mAutoLayoutOutletTypeName (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap::setter_insertKey (GALGAS_lstring inKey,
                                                         GALGAS_string inArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutConfiguratorMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutConfiguratorMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' configurator is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutConfiguratorMap_searchKey = "there is no '%K' configurator" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap::method_searchKey (GALGAS_lstring inKey,
                                                         GALGAS_string & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutConfiguratorMap * p = (const cMapElement_autoLayoutConfiguratorMap *) performSearch (inKey,
                                                                                                                   inCompiler,
                                                                                                                   kSearchErrorMessage_autoLayoutConfiguratorMap_searchKey
                                                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
    outArgument0 = p->mProperty_mAutoLayoutOutletTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutConfiguratorMap::getter_mAutoLayoutOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutConfiguratorMap * p = (const cMapElement_autoLayoutConfiguratorMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
    result = p->mProperty_mAutoLayoutOutletTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutConfiguratorMap::setter_setMAutoLayoutOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutConfiguratorMap * p = (cMapElement_autoLayoutConfiguratorMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
    p->mProperty_mAutoLayoutOutletTypeName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutConfiguratorMap * GALGAS_autoLayoutConfiguratorMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                             const GALGAS_string & inKey
                                                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutConfiguratorMap * result = (cMapElement_autoLayoutConfiguratorMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutConfiguratorMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutConfiguratorMap::cEnumerator_autoLayoutConfiguratorMap (const GALGAS_autoLayoutConfiguratorMap & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap_2D_element cEnumerator_autoLayoutConfiguratorMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutConfiguratorMap * p = (const cMapElement_autoLayoutConfiguratorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
  return GALGAS_autoLayoutConfiguratorMap_2D_element (p->mProperty_lkey, p->mProperty_mAutoLayoutOutletTypeName) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutConfiguratorMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutConfiguratorMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_autoLayoutConfiguratorMap * p = (const cMapElement_autoLayoutConfiguratorMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
  return p->mProperty_mAutoLayoutOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutConfiguratorMap::optional_searchKey (const GALGAS_string & inKey,
                                                           GALGAS_string & outArgument0) const {
  const cMapElement_autoLayoutConfiguratorMap * p = (const cMapElement_autoLayoutConfiguratorMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutConfiguratorMap) ;
    outArgument0 = p->mProperty_mAutoLayoutOutletTypeName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutConfiguratorMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ("autoLayoutConfiguratorMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutConfiguratorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutConfiguratorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutConfiguratorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutConfiguratorMap::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutConfiguratorMap result ;
  const GALGAS_autoLayoutConfiguratorMap * p = (const GALGAS_autoLayoutConfiguratorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutConfiguratorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutConfiguratorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutDocumentFileGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutDocumentFileGeneration_2D_weak::GALGAS_autoLayoutDocumentFileGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak & GALGAS_autoLayoutDocumentFileGeneration_2D_weak::operator = (const GALGAS_autoLayoutDocumentFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak::GALGAS_autoLayoutDocumentFileGeneration_2D_weak (const GALGAS_autoLayoutDocumentFileGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak GALGAS_autoLayoutDocumentFileGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration_2D_weak::bang_autoLayoutDocumentFileGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentFileGeneration) ;
      result = GALGAS_autoLayoutDocumentFileGeneration ((cPtr_autoLayoutDocumentFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentFileGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ("autoLayoutDocumentFileGeneration-weak",
                                                                                                & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration_2D_weak GALGAS_autoLayoutDocumentFileGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration_2D_weak result ;
  const GALGAS_autoLayoutDocumentFileGeneration_2D_weak * p = (const GALGAS_autoLayoutDocumentFileGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mainXibDescriptorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibDescriptorList : public cCollectionElement {
  public: GALGAS_mainXibDescriptorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibLineDescriptorList & in_mLine
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibDescriptorList::cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibLineDescriptorList & in_mLine
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLine) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibDescriptorList::cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLine) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mainXibDescriptorList (mObject.mProperty_mLine COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mainXibDescriptorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLine" ":") ;
  mObject.mProperty_mLine.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_mainXibDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibDescriptorList * operand = (cCollectionElement_mainXibDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList::GALGAS_mainXibDescriptorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList::GALGAS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::class_func_listWithValue (const GALGAS_mainXibLineDescriptorList & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mainXibDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_mainXibLineDescriptorList & in_mLine
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_mainXibDescriptorList (in_mLine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::addAssign_operation (const GALGAS_mainXibLineDescriptorList & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_append (const GALGAS_mainXibLineDescriptorList inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_insertAtIndex (const GALGAS_mainXibLineDescriptorList inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mainXibDescriptorList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_removeAtIndex (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
        outOperand0 = p->mObject.mProperty_mLine ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_popFirst (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_popLast (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::method_first (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::method_last (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::add_operation (const GALGAS_mainXibDescriptorList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::plusAssign_operation (const GALGAS_mainXibDescriptorList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_setMLineAtIndex (GALGAS_mainXibLineDescriptorList inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLine = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList::getter_mLineAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibLineDescriptorList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    result = p->mObject.mProperty_mLine ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mainXibDescriptorList::cEnumerator_mainXibDescriptorList (const GALGAS_mainXibDescriptorList & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element cEnumerator_mainXibDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibDescriptorList * p = (const cCollectionElement_mainXibDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList cEnumerator_mainXibDescriptorList::current_mLine (LOCATION_ARGS) const {
  const cCollectionElement_mainXibDescriptorList * p = (const cCollectionElement_mainXibDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
  return p->mObject.mProperty_mLine ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mainXibDescriptorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ("mainXibDescriptorList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList result ;
  const GALGAS_mainXibDescriptorList * p = (const GALGAS_mainXibDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mainXibDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefsDeclarationAST_2D_weak::objectCompare (const GALGAS_prefsDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_prefsDeclarationAST_2D_weak::GALGAS_prefsDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak & GALGAS_prefsDeclarationAST_2D_weak::operator = (const GALGAS_prefsDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak::GALGAS_prefsDeclarationAST_2D_weak (const GALGAS_prefsDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak GALGAS_prefsDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST_2D_weak::bang_prefsDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefsDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsDeclarationAST) ;
      result = GALGAS_prefsDeclarationAST ((cPtr_prefsDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefsDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ("prefsDeclarationAST-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST_2D_weak GALGAS_prefsDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST_2D_weak result ;
  const GALGAS_prefsDeclarationAST_2D_weak * p = (const GALGAS_prefsDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefsDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @preferencesForGeneration reference class
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

ComparisonResult cPtr_preferencesForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyListForGeneration.objectCompare (p->mProperty_mPropertyListForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMainXibDescriptorList.objectCompare (p->mProperty_mMainXibDescriptorList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mActionBindingListForGeneration.objectCompare (p->mProperty_mActionBindingListForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mViewGenerationList.objectCompare (p->mProperty_mViewGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mImplicitViewFunctionGenerationList.objectCompare (p->mProperty_mImplicitViewFunctionGenerationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mConfiguratorMap.objectCompare (p->mProperty_mConfiguratorMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAutoLayoutOutletMap.objectCompare (p->mProperty_mAutoLayoutOutletMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
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

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::init_28__2C__2C__2C__2C__2C__2C__2C__2C__2C__2C__2C__2C__29_ (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                                                                                                                  const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                                                                                                  const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                                                  const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                                                  const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                                                                                                  const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                                                                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                                                                                                  const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                                                                  const GALGAS_viewGenerationList & in_mViewGenerationList,
                                                                                                                                  const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                                                                  const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                                                                  const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  cPtr_preferencesForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_preferencesForGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mPropertyListForGeneration = in_mPropertyListForGeneration ;
  object->mProperty_mMainXibDescriptorList = in_mMainXibDescriptorList ;
  object->mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  object->mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  object->mProperty_mActionBindingListForGeneration = in_mActionBindingListForGeneration ;
  object->mProperty_mOutletMap = in_mOutletMap ;
  object->mProperty_mExternSwiftFunctionList = in_mExternSwiftFunctionList ;
  object->mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  object->mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  object->mProperty_mViewGenerationList = in_mViewGenerationList ;
  object->mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  object->mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  object->mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
  const GALGAS_preferencesForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::class_func_new (const GALGAS_propertyGenerationList & inAttribute_mPropertyListForGeneration,
                                                                                 const GALGAS_mainXibDescriptorList & inAttribute_mMainXibDescriptorList,
                                                                                 const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                 const GALGAS_multipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                 const GALGAS_actionBindingListForGeneration & inAttribute_mActionBindingListForGeneration,
                                                                                 const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                 const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                                 const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList,
                                                                                 const GALGAS_viewGenerationList & inAttribute_mViewGenerationList,
                                                                                 const GALGAS_implicitViewFunctionGenerationList & inAttribute_mImplicitViewFunctionGenerationList,
                                                                                 const GALGAS_autoLayoutConfiguratorMap & inAttribute_mConfiguratorMap,
                                                                                 const GALGAS_autoLayoutOutletMap & inAttribute_mAutoLayoutOutletMap
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inAttribute_mPropertyListForGeneration.isValid () && inAttribute_mMainXibDescriptorList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mActionBindingListForGeneration.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mViewGenerationList.isValid () && inAttribute_mImplicitViewFunctionGenerationList.isValid () && inAttribute_mConfiguratorMap.isValid () && inAttribute_mAutoLayoutOutletMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_preferencesForGeneration (inAttribute_mPropertyListForGeneration, inAttribute_mMainXibDescriptorList, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mActionBindingListForGeneration, inAttribute_mOutletMap, inAttribute_mExternSwiftFunctionList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mViewGenerationList, inAttribute_mImplicitViewFunctionGenerationList, inAttribute_mConfiguratorMap, inAttribute_mAutoLayoutOutletMap COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_preferencesForGeneration::readProperty_mPropertyListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mPropertyListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::readProperty_mMainXibDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_mainXibDescriptorList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMainXibDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::readProperty_mActionBindingListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mActionBindingListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::readProperty_mExternSwiftFunctionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externSwiftFunctionList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mExternSwiftFunctionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_preferencesForGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_preferencesForGeneration::readProperty_mViewGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_viewGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mViewGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_preferencesForGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_preferencesForGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_preferencesForGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @preferencesForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                                              const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                              const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                              const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                              const GALGAS_viewGenerationList & in_mViewGenerationList,
                                                              const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                              const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                              const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mPropertyListForGeneration (in_mPropertyListForGeneration),
mProperty_mMainXibDescriptorList (in_mMainXibDescriptorList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mActionBindingListForGeneration (in_mActionBindingListForGeneration),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList),
mProperty_mViewGenerationList (in_mViewGenerationList),
mProperty_mImplicitViewFunctionGenerationList (in_mImplicitViewFunctionGenerationList),
mProperty_mConfiguratorMap (in_mConfiguratorMap),
mProperty_mAutoLayoutOutletMap (in_mAutoLayoutOutletMap) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_preferencesForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mMainXibDescriptorList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewGenerationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mAutoLayoutOutletMap COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @preferencesForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                                                & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  const GALGAS_preferencesForGeneration * p = (const GALGAS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_preferencesForGeneration_2D_weak::objectCompare (const GALGAS_preferencesForGeneration_2D_weak & inOperand) const {
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

GALGAS_preferencesForGeneration_2D_weak::GALGAS_preferencesForGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration_2D_weak & GALGAS_preferencesForGeneration_2D_weak::operator = (const GALGAS_preferencesForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration_2D_weak::GALGAS_preferencesForGeneration_2D_weak (const GALGAS_preferencesForGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration_2D_weak GALGAS_preferencesForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_preferencesForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration_2D_weak::bang_preferencesForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_preferencesForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_preferencesForGeneration) ;
      result = GALGAS_preferencesForGeneration ((cPtr_preferencesForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @preferencesForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2D_weak ("preferencesForGeneration-weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_preferencesForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration_2D_weak GALGAS_preferencesForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration_2D_weak result ;
  const GALGAS_preferencesForGeneration_2D_weak * p = (const GALGAS_preferencesForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_preferencesForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutClassParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutClassParameterList : public cCollectionElement {
  public: GALGAS_autoLayoutClassParameterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutClassParameterList (const GALGAS_lstring & in_mParameterName,
                                                           const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                  const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutClassParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutClassParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutClassParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutClassParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterName" ":") ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterType" ":") ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_autoLayoutClassParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutClassParameterList * operand = (cCollectionElement_autoLayoutClassParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutClassParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList::GALGAS_autoLayoutClassParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList::GALGAS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutClassParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                   const GALGAS_autoLayoutClassParameterType & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutClassParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutClassParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mParameterName,
                                                                     const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (in_mParameterName,
                                                                  in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_autoLayoutClassParameterType & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_append (const GALGAS_lstring inOperand0,
                                                         const GALGAS_autoLayoutClassParameterType inOperand1,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mParameterType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_autoLayoutClassParameterType & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_autoLayoutClassParameterType & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_autoLayoutClassParameterType & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_autoLayoutClassParameterType & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::add_operation (const GALGAS_autoLayoutClassParameterList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::plusAssign_operation (const GALGAS_autoLayoutClassParameterList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutClassParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_setMParameterTypeAtIndex (GALGAS_autoLayoutClassParameterType inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  GALGAS_autoLayoutClassParameterType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutClassParameterList::cEnumerator_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element cEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType cEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutClassParameterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ("autoLayoutClassParameterList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutClassParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutClassParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutClassParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList result ;
  const GALGAS_autoLayoutClassParameterList * p = (const GALGAS_autoLayoutClassParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutClassParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak & GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutViewClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (const GALGAS_autoLayoutViewClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::bang_autoLayoutViewClassDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutViewClassDeclarationAST) ;
      result = GALGAS_autoLayoutViewClassDeclarationAST ((cPtr_autoLayoutViewClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewClassDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ("autoLayoutViewClassDeclarationAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST_2D_weak GALGAS_autoLayoutViewClassDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum::cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum (const GALGAS_lstring inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum * ptr = dynamic_cast<const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType::GALGAS_autoLayoutClassParameterType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeString (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeStringArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeStringArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeInt (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeInt ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeBool (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeView (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_menuItem (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_menuItem ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_entity (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_entity ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::class_func_typeEnum (const GALGAS_lstring & inAssociatedValue0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_typeEnum ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterType::method_typeEnum (GALGAS_lstring & outAssociatedValue0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_typeEnum) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @autoLayoutClassParameterType typeEnum invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum * ptr = (const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeString () const {
  const bool ok = mEnum == kEnum_typeString ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeStringArray () const {
  const bool ok = mEnum == kEnum_typeStringArray ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeInt () const {
  const bool ok = mEnum == kEnum_typeInt ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeBool () const {
  const bool ok = mEnum == kEnum_typeBool ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeView () const {
  const bool ok = mEnum == kEnum_typeView ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_menuItem () const {
  const bool ok = mEnum == kEnum_menuItem ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_entity () const {
  const bool ok = mEnum == kEnum_entity ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutClassParameterType::optional_typeEnum (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_typeEnum ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutClassParameterType [9] = {
  "(not built)",
  "typeString",
  "typeStringArray",
  "typeInt",
  "typeBool",
  "typeView",
  "menuItem",
  "entity",
  "typeEnum"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeStringArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeStringArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeInt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeInt == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeView (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeView == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeEnum (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeEnum == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterType::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autoLayoutClassParameterType: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutClassParameterType [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutClassParameterType::objectCompare (const GALGAS_autoLayoutClassParameterType & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutClassParameterType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ("autoLayoutClassParameterType",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutClassParameterType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutClassParameterType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutClassParameterType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  const GALGAS_autoLayoutClassParameterType * p = (const GALGAS_autoLayoutClassParameterType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutClassParameterType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@autoLayoutClassParameterType string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_autoLayoutClassParameterType & inObject,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutClassParameterType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_autoLayoutClassParameterType::kNotBuilt:
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeString:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeStringArray:
    {
      result_result = GALGAS_string ("String array") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeInt:
    {
      result_result = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeBool:
    {
      result_result = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeView:
    {
      result_result = GALGAS_string ("a view") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_menuItem:
    {
      result_result = GALGAS_string ("a menu item") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_entity:
    {
      result_result = GALGAS_string ("an entity name") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeEnum:
    {
      const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum * extractPtr_1542 = (const cEnumAssociatedValues_autoLayoutClassParameterType_typeEnum *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_1509_name = extractPtr_1542->mAssociatedValue0 ;
      result_result = GALGAS_string ("the ").add_operation (extractedValue_1509_name.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 41)).add_operation (GALGAS_string (" enum type"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 41)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Class for element of '@outletClassBindingSpecificationModelList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletClassBindingSpecificationModelList : public cCollectionElement {
  public: GALGAS_outletClassBindingSpecificationModelList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                       const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                          const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelTypeName, in_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelTypeName, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletClassBindingSpecificationModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletClassBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationModelList (mObject.mProperty_mModelTypeName, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_outletClassBindingSpecificationModelList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModelTypeName" ":") ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModelShouldBeWritableProperty" ":") ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_outletClassBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationModelList * operand = (cCollectionElement_outletClassBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                           const GALGAS_bool & inOperand1
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lstring & in_mModelTypeName,
                                                                                 const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (in_mModelTypeName,
                                                                              in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                           const GALGAS_bool & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_append (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_bool inOperand1,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                            const GALGAS_bool inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                            GALGAS_bool & outOperand1,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
        outOperand0 = p->mObject.mProperty_mModelTypeName ;
        outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                      GALGAS_bool & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::method_first (GALGAS_lstring & outOperand0,
                                                                    GALGAS_bool & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::method_last (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_setMModelTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GALGAS_bool inOperand,
                                                                                                       GALGAS_uint inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelShouldBeWritableProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_outletClassBindingSpecificationModelList::cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element cEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @outletClassBindingSpecificationModelList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ("outletClassBindingSpecificationModelList",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList result ;
  const GALGAS_outletClassBindingSpecificationModelList * p = (const GALGAS_outletClassBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@controllerBindingOptionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controllerBindingOptionList : public cCollectionElement {
  public: GALGAS_controllerBindingOptionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                          const GALGAS_lstring & in_mOptionTypeName
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                                                const GALGAS_lstring & in_mOptionTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controllerBindingOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controllerBindingOptionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_controllerBindingOptionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionName" ":") ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionTypeName" ":") ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_controllerBindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionList * operand = (cCollectionElement_controllerBindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                 const GALGAS_lstring & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controllerBindingOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mOptionName,
                                                                    const GALGAS_lstring & in_mOptionTypeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionList (in_mOptionName,
                                                                 in_mOptionTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
        outOperand0 = p->mObject.mProperty_mOptionName ;
        outOperand1 = p->mObject.mProperty_mOptionTypeName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_setMOptionNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_setMOptionTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_controllerBindingOptionList::cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element cEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionTypeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @controllerBindingOptionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ("controllerBindingOptionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controllerBindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList result ;
  const GALGAS_controllerBindingOptionList * p = (const GALGAS_controllerBindingOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controllerBindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewBindingSpecificationMap::cMapElement_autoLayoutViewBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutViewBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutViewBindingSpecificationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_autoLayoutViewBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutViewBindingSpecificationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOutletBindingSpecificationModelList" ":") ;
  mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mControllerBindingOptionList" ":") ;
  mProperty_mControllerBindingOptionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_autoLayoutViewBindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutViewBindingSpecificationMap * operand = (cMapElement_autoLayoutViewBindingSpecificationMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (operand->mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mControllerBindingOptionList.objectCompare (operand->mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap::GALGAS_autoLayoutViewBindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap::GALGAS_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap & GALGAS_autoLayoutViewBindingSpecificationMap::operator = (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::class_func_mapWithMapToOverride (const GALGAS_autoLayoutViewBindingSpecificationMap & inMapToOverride
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_outletBindingSpecificationModelList & inArgument0,
                                                                        const GALGAS_controllerBindingOptionDecoratedList & inArgument1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutViewBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutViewBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::add_operation (const GALGAS_autoLayoutViewBindingSpecificationMap & inOperand,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewBindingSpecificationMap result = *this ;
  cEnumerator_autoLayoutViewBindingSpecificationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mOutletBindingSpecificationModelList (HERE), enumerator.current_mControllerBindingOptionList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_outletBindingSpecificationModelList inArgument0,
                                                                     GALGAS_controllerBindingOptionDecoratedList inArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_autoLayoutViewBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                                     GALGAS_controllerBindingOptionDecoratedList & outArgument1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_autoLayoutViewBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GALGAS_string & inKey,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationModelList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    result = p->mProperty_mOutletBindingSpecificationModelList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_autoLayoutViewBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GALGAS_string & inKey,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    result = p->mProperty_mControllerBindingOptionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GALGAS_outletBindingSpecificationModelList inAttributeValue,
                                                                                                         GALGAS_string inKey,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutViewBindingSpecificationMap * p = (cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    p->mProperty_mOutletBindingSpecificationModelList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GALGAS_controllerBindingOptionDecoratedList inAttributeValue,
                                                                                                 GALGAS_string inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutViewBindingSpecificationMap * p = (cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    p->mProperty_mControllerBindingOptionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewBindingSpecificationMap * GALGAS_autoLayoutViewBindingSpecificationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * result = (cMapElement_autoLayoutViewBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewBindingSpecificationMap::cEnumerator_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject,
                                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element cEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList cEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList cEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewBindingSpecificationMap::optional_searchKey (const GALGAS_string & inKey,
                                                                       GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                                       GALGAS_controllerBindingOptionDecoratedList & outArgument1) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewBindingSpecificationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ("autoLayoutViewBindingSpecificationMap",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  const GALGAS_autoLayoutViewBindingSpecificationMap * p = (const GALGAS_autoLayoutViewBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@outletBindingSpecificationModelList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletBindingSpecificationModelList : public cCollectionElement {
  public: GALGAS_outletBindingSpecificationModelList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                  const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                                                                const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelType, in_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelType, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletBindingSpecificationModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletBindingSpecificationModelList (mObject.mProperty_mModelType, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_outletBindingSpecificationModelList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModelType" ":") ;
  mObject.mProperty_mModelType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mModelShouldBeWritableProperty" ":") ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_outletBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingSpecificationModelList * operand = (cCollectionElement_outletBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationModelList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::class_func_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                 const GALGAS_bool & inOperand1
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletBindingSpecificationModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_typeKind & in_mModelType,
                                                                            const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (in_mModelType,
                                                                         in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                      const GALGAS_bool & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_append (const GALGAS_typeKind inOperand0,
                                                                const GALGAS_bool inOperand1,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
        outOperand0 = p->mObject.mProperty_mModelType ;
        outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::method_first (GALGAS_typeKind & outOperand0,
                                                               GALGAS_bool & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::method_last (GALGAS_typeKind & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_setMModelTypeAtIndex (GALGAS_typeKind inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList::getter_mModelTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GALGAS_bool inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelShouldBeWritableProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_outletBindingSpecificationModelList::cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element cEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//--------------------------------------------------------------------------------------------------
//
//     @outletBindingSpecificationModelList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ("outletBindingSpecificationModelList",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList result ;
  const GALGAS_outletBindingSpecificationModelList * p = (const GALGAS_outletBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@controllerBindingOptionDecoratedList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_controllerBindingOptionDecoratedList : public cCollectionElement {
  public: GALGAS_controllerBindingOptionDecoratedList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                   const GALGAS_lstring & in_mOptionName
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                                                                  const GALGAS_lstring & in_mOptionName
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionType, in_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionType, inElement.mProperty_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_controllerBindingOptionDecoratedList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controllerBindingOptionDecoratedList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionDecoratedList (mObject.mProperty_mOptionType, mObject.mProperty_mOptionName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_controllerBindingOptionDecoratedList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionType" ":") ;
  mObject.mProperty_mOptionType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionName" ":") ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_controllerBindingOptionDecoratedList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionDecoratedList * operand = (cCollectionElement_controllerBindingOptionDecoratedList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionDecoratedList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::class_func_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                   const GALGAS_lstring & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_typeKind & in_mOptionType,
                                                                             const GALGAS_lstring & in_mOptionName
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = nullptr ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (in_mOptionType,
                                                                          in_mOptionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                       const GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_append (const GALGAS_typeKind inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                        const GALGAS_lstring inOperand1,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
        outOperand0 = p->mObject.mProperty_mOptionType ;
        outOperand1 = p->mObject.mProperty_mOptionName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::method_first (GALGAS_typeKind & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::method_last (GALGAS_typeKind & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_setMOptionTypeAtIndex (GALGAS_typeKind inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList::getter_mOptionTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_setMOptionNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_controllerBindingOptionDecoratedList::cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList_2D_element cEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @controllerBindingOptionDecoratedList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ("controllerBindingOptionDecoratedList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList result ;
  const GALGAS_controllerBindingOptionDecoratedList * p = (const GALGAS_controllerBindingOptionDecoratedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astAbstractViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewDeclaration::cPtr_astAbstractViewDeclaration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_astAbstractViewDeclaration::objectCompare (const GALGAS_astAbstractViewDeclaration & inOperand) const {
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

GALGAS_astAbstractViewDeclaration::GALGAS_astAbstractViewDeclaration (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astAbstractViewDeclaration GALGAS_astAbstractViewDeclaration::init_28__29_ (Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cPtr_astAbstractViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE)) ;
  const GALGAS_astAbstractViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration::GALGAS_astAbstractViewDeclaration (const cPtr_astAbstractViewDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewDeclaration::cPtr_astAbstractViewDeclaration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @astAbstractViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ("astAbstractViewDeclaration",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration GALGAS_astAbstractViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewDeclaration result ;
  const GALGAS_astAbstractViewDeclaration * p = (const GALGAS_astAbstractViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAbstractViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAbstractViewDeclaration_2D_weak::objectCompare (const GALGAS_astAbstractViewDeclaration_2D_weak & inOperand) const {
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

GALGAS_astAbstractViewDeclaration_2D_weak::GALGAS_astAbstractViewDeclaration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration_2D_weak & GALGAS_astAbstractViewDeclaration_2D_weak::operator = (const GALGAS_astAbstractViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration_2D_weak::GALGAS_astAbstractViewDeclaration_2D_weak (const GALGAS_astAbstractViewDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration_2D_weak GALGAS_astAbstractViewDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astAbstractViewDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration GALGAS_astAbstractViewDeclaration_2D_weak::bang_astAbstractViewDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astAbstractViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astAbstractViewDeclaration) ;
      result = GALGAS_astAbstractViewDeclaration ((cPtr_astAbstractViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAbstractViewDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak ("astAbstractViewDeclaration-weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration_2D_weak GALGAS_astAbstractViewDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewDeclaration_2D_weak result ;
  const GALGAS_astAbstractViewDeclaration_2D_weak * p = (const GALGAS_astAbstractViewDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAbstractViewDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutViewFunctionCallList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewFunctionCallList : public cCollectionElement {
  public: GALGAS_astAutoLayoutViewFunctionCallList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_lstring & in_mFunctionName,
                                                                const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_lstring & in_mFunctionName,
                                                                                                            const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewFunctionCallList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewFunctionCallList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewFunctionCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutViewFunctionCallList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionName" ":") ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterList" ":") ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_astAutoLayoutViewFunctionCallList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutViewFunctionCallList * operand = (cCollectionElement_astAutoLayoutViewFunctionCallList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList::GALGAS_astAutoLayoutViewFunctionCallList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList::GALGAS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutViewFunctionCallList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                             const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astAutoLayoutViewFunctionCallList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mFunctionName,
                                                                          const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (in_mFunctionName,
                                                                       in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_append (const GALGAS_lstring inOperand0,
                                                              const GALGAS_astAutoLayoutViewInstructionParameterList inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_astAutoLayoutViewInstructionParameterList inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
        outOperand0 = p->mObject.mProperty_mFunctionName ;
        outOperand1 = p->mObject.mProperty_mParameterList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::add_operation (const GALGAS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::plusAssign_operation (const GALGAS_astAutoLayoutViewFunctionCallList inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_setMFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astAutoLayoutViewFunctionCallList::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_setMParameterListAtIndex (GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewFunctionCallList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewFunctionCallList::cEnumerator_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList & inEnumeratedObject,
                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element cEnumerator_astAutoLayoutViewFunctionCallList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewFunctionCallList::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject.mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cEnumerator_astAutoLayoutViewFunctionCallList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject.mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutViewFunctionCallList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ("astAutoLayoutViewFunctionCallList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionCallList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionCallList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  const GALGAS_astAutoLayoutViewFunctionCallList * p = (const GALGAS_astAutoLayoutViewFunctionCallList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astViewInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astViewInstructionList : public cCollectionElement {
  public: GALGAS_astViewInstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_astViewInstructionList (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astViewInstructionList (const GALGAS_astViewInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GALGAS_astViewInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astViewInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astViewInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_astViewInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astViewInstructionList * operand = (cCollectionElement_astViewInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astViewInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList::GALGAS_astViewInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList::GALGAS_astViewInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astViewInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::class_func_listWithValue (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astViewInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astViewInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astViewInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::addAssign_operation (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astViewInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_append (const GALGAS_astAbstractViewInstructionDeclaration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astViewInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_insertAtIndex (const GALGAS_astAbstractViewInstructionDeclaration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_astViewInstructionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_removeAtIndex (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_popFirst (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_popLast (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::method_first (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::method_last (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::add_operation (const GALGAS_astViewInstructionList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::plusAssign_operation (const GALGAS_astViewInstructionList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_setMInstructionAtIndex (GALGAS_astAbstractViewInstructionDeclaration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astViewInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  GALGAS_astAbstractViewInstructionDeclaration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astViewInstructionList::cEnumerator_astViewInstructionList (const GALGAS_astViewInstructionList & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element cEnumerator_astViewInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_astViewInstructionList * p = (const cCollectionElement_astViewInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration cEnumerator_astViewInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_astViewInstructionList * p = (const cCollectionElement_astViewInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astViewInstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList ("astViewInstructionList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList result ;
  const GALGAS_astViewInstructionList * p = (const GALGAS_astViewInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astViewInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astNewStackViewDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astNewStackViewDeclarationList : public cCollectionElement {
  public: GALGAS_astNewStackViewDeclarationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_astNewStackViewDeclarationList (const GALGAS_lstring & in_mInstanciedStackViewName,
                                                             const GALGAS_lstring & in_mTypeStackViewName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astNewStackViewDeclarationList (const GALGAS_astNewStackViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astNewStackViewDeclarationList::cCollectionElement_astNewStackViewDeclarationList (const GALGAS_lstring & in_mInstanciedStackViewName,
                                                                                                      const GALGAS_lstring & in_mTypeStackViewName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstanciedStackViewName, in_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astNewStackViewDeclarationList::cCollectionElement_astNewStackViewDeclarationList (const GALGAS_astNewStackViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstanciedStackViewName, inElement.mProperty_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astNewStackViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astNewStackViewDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astNewStackViewDeclarationList (mObject.mProperty_mInstanciedStackViewName, mObject.mProperty_mTypeStackViewName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astNewStackViewDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstanciedStackViewName" ":") ;
  mObject.mProperty_mInstanciedStackViewName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeStackViewName" ":") ;
  mObject.mProperty_mTypeStackViewName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_astNewStackViewDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astNewStackViewDeclarationList * operand = (cCollectionElement_astNewStackViewDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astNewStackViewDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList::GALGAS_astNewStackViewDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList::GALGAS_astNewStackViewDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astNewStackViewDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                       const GALGAS_lstring & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_astNewStackViewDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astNewStackViewDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astNewStackViewDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mInstanciedStackViewName,
                                                                       const GALGAS_lstring & in_mTypeStackViewName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_astNewStackViewDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astNewStackViewDeclarationList (in_mInstanciedStackViewName,
                                                                    in_mTypeStackViewName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astNewStackViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_append (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astNewStackViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_astNewStackViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mInstanciedStackViewName ;
        outOperand1 = p->mObject.mProperty_mTypeStackViewName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mInstanciedStackViewName ;
    outOperand1 = p->mObject.mProperty_mTypeStackViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mInstanciedStackViewName ;
    outOperand1 = p->mObject.mProperty_mTypeStackViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mInstanciedStackViewName ;
    outOperand1 = p->mObject.mProperty_mTypeStackViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mInstanciedStackViewName ;
    outOperand1 = p->mObject.mProperty_mTypeStackViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::add_operation (const GALGAS_astNewStackViewDeclarationList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astNewStackViewDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astNewStackViewDeclarationList result = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astNewStackViewDeclarationList result = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astNewStackViewDeclarationList result = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::plusAssign_operation (const GALGAS_astNewStackViewDeclarationList inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_setMInstanciedStackViewNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstanciedStackViewName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astNewStackViewDeclarationList::getter_mInstanciedStackViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    result = p->mObject.mProperty_mInstanciedStackViewName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astNewStackViewDeclarationList::setter_setMTypeStackViewNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeStackViewName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astNewStackViewDeclarationList::getter_mTypeStackViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    result = p->mObject.mProperty_mTypeStackViewName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astNewStackViewDeclarationList::cEnumerator_astNewStackViewDeclarationList (const GALGAS_astNewStackViewDeclarationList & inEnumeratedObject,
                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList_2D_element cEnumerator_astNewStackViewDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astNewStackViewDeclarationList * p = (const cCollectionElement_astNewStackViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astNewStackViewDeclarationList::current_mInstanciedStackViewName (LOCATION_ARGS) const {
  const cCollectionElement_astNewStackViewDeclarationList * p = (const cCollectionElement_astNewStackViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
  return p->mObject.mProperty_mInstanciedStackViewName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astNewStackViewDeclarationList::current_mTypeStackViewName (LOCATION_ARGS) const {
  const cCollectionElement_astNewStackViewDeclarationList * p = (const cCollectionElement_astNewStackViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
  return p->mObject.mProperty_mTypeStackViewName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astNewStackViewDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ("astNewStackViewDeclarationList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astNewStackViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astNewStackViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astNewStackViewDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astNewStackViewDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astNewStackViewDeclarationList result ;
  const GALGAS_astNewStackViewDeclarationList * p = (const GALGAS_astNewStackViewDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astNewStackViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astNewStackViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astComputedHorizontalViewDeclaration_2D_weak::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak & inOperand) const {
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

GALGAS_astComputedHorizontalViewDeclaration_2D_weak::GALGAS_astComputedHorizontalViewDeclaration_2D_weak (void) :
GALGAS_astAbstractViewDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak & GALGAS_astComputedHorizontalViewDeclaration_2D_weak::operator = (const GALGAS_astComputedHorizontalViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak::GALGAS_astComputedHorizontalViewDeclaration_2D_weak (const GALGAS_astComputedHorizontalViewDeclaration & inSource) :
GALGAS_astAbstractViewDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak GALGAS_astComputedHorizontalViewDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration_2D_weak::bang_astComputedHorizontalViewDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedHorizontalViewDeclaration) ;
      result = GALGAS_astComputedHorizontalViewDeclaration ((cPtr_astComputedHorizontalViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astComputedHorizontalViewDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ("astComputedHorizontalViewDeclaration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration_2D_weak GALGAS_astComputedHorizontalViewDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration_2D_weak result ;
  const GALGAS_astComputedHorizontalViewDeclaration_2D_weak * p = (const GALGAS_astComputedHorizontalViewDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedVerticalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedVerticalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astComputedVerticalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astComputedVerticalViewDeclaration * p = (const cPtr_astComputedVerticalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
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


ComparisonResult GALGAS_astComputedVerticalViewDeclaration::objectCompare (const GALGAS_astComputedVerticalViewDeclaration & inOperand) const {
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

GALGAS_astComputedVerticalViewDeclaration::GALGAS_astComputedVerticalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::init_28__2C__2C__29_ (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                              const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                                              const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cPtr_astComputedVerticalViewDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astComputedVerticalViewDeclaration (inCompiler COMMA_THERE)) ;
  object->mProperty_mFunctionCallList = in_mFunctionCallList ;
  object->mProperty_mInstructionList = in_mInstructionList ;
  object->mProperty_mNewStackViewDeclarationList = in_mNewStackViewDeclarationList ;
  const GALGAS_astComputedVerticalViewDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration::GALGAS_astComputedVerticalViewDeclaration (const cPtr_astComputedVerticalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedVerticalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::class_func_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                     const GALGAS_astViewInstructionList & inAttribute_mInstructionList,
                                                                                                     const GALGAS_astNewStackViewDeclarationList & inAttribute_mNewStackViewDeclarationList
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedVerticalViewDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList, inAttribute_mNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedVerticalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedVerticalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astComputedVerticalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedVerticalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                  const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                  const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mNewStackViewDeclarationList (in_mNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedVerticalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

void cPtr_astComputedVerticalViewDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@astComputedVerticalViewDeclaration:") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedVerticalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedVerticalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astComputedVerticalViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ("astComputedVerticalViewDeclaration",
                                                                                          & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedVerticalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedVerticalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedVerticalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration result ;
  const GALGAS_astComputedVerticalViewDeclaration * p = (const GALGAS_astComputedVerticalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedVerticalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astComputedVerticalViewDeclaration_2D_weak::objectCompare (const GALGAS_astComputedVerticalViewDeclaration_2D_weak & inOperand) const {
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

GALGAS_astComputedVerticalViewDeclaration_2D_weak::GALGAS_astComputedVerticalViewDeclaration_2D_weak (void) :
GALGAS_astAbstractViewDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration_2D_weak & GALGAS_astComputedVerticalViewDeclaration_2D_weak::operator = (const GALGAS_astComputedVerticalViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration_2D_weak::GALGAS_astComputedVerticalViewDeclaration_2D_weak (const GALGAS_astComputedVerticalViewDeclaration & inSource) :
GALGAS_astAbstractViewDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration_2D_weak GALGAS_astComputedVerticalViewDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration_2D_weak::bang_astComputedVerticalViewDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedVerticalViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedVerticalViewDeclaration) ;
      result = GALGAS_astComputedVerticalViewDeclaration ((cPtr_astComputedVerticalViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astComputedVerticalViewDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2D_weak ("astComputedVerticalViewDeclaration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedVerticalViewDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedVerticalViewDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedVerticalViewDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration_2D_weak GALGAS_astComputedVerticalViewDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration_2D_weak result ;
  const GALGAS_astComputedVerticalViewDeclaration_2D_weak * p = (const GALGAS_astComputedVerticalViewDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedVerticalViewDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astAbstractViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewInstructionDeclaration::cPtr_astAbstractViewInstructionDeclaration (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_astAbstractViewInstructionDeclaration::objectCompare (const GALGAS_astAbstractViewInstructionDeclaration & inOperand) const {
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

GALGAS_astAbstractViewInstructionDeclaration::GALGAS_astAbstractViewInstructionDeclaration (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astAbstractViewInstructionDeclaration GALGAS_astAbstractViewInstructionDeclaration::init_28__29_ (Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_astAbstractViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  const GALGAS_astAbstractViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration::GALGAS_astAbstractViewInstructionDeclaration (const cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewInstructionDeclaration::cPtr_astAbstractViewInstructionDeclaration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @astAbstractViewInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ("astAbstractViewInstructionDeclaration",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astAbstractViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewInstructionDeclaration result ;
  const GALGAS_astAbstractViewInstructionDeclaration * p = (const GALGAS_astAbstractViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAbstractViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAbstractViewInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astAbstractViewInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astAbstractViewInstructionDeclaration_2D_weak::GALGAS_astAbstractViewInstructionDeclaration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration_2D_weak & GALGAS_astAbstractViewInstructionDeclaration_2D_weak::operator = (const GALGAS_astAbstractViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration_2D_weak::GALGAS_astAbstractViewInstructionDeclaration_2D_weak (const GALGAS_astAbstractViewInstructionDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration_2D_weak GALGAS_astAbstractViewInstructionDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astAbstractViewInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astAbstractViewInstructionDeclaration_2D_weak::bang_astAbstractViewInstructionDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astAbstractViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astAbstractViewInstructionDeclaration) ;
      result = GALGAS_astAbstractViewInstructionDeclaration ((cPtr_astAbstractViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAbstractViewInstructionDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak ("astAbstractViewInstructionDeclaration-weak",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration_2D_weak GALGAS_astAbstractViewInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewInstructionDeclaration_2D_weak result ;
  const GALGAS_astAbstractViewInstructionDeclaration_2D_weak * p = (const GALGAS_astAbstractViewInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAbstractViewInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astSeparatorInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astSeparatorInstructionDeclaration::cPtr_astSeparatorInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astSeparatorInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astSeparatorInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astSeparatorInstructionDeclaration * p = (const cPtr_astSeparatorInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astSeparatorInstructionDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_horizontal.objectCompare (p->mProperty_horizontal) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astSeparatorInstructionDeclaration::objectCompare (const GALGAS_astSeparatorInstructionDeclaration & inOperand) const {
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

GALGAS_astSeparatorInstructionDeclaration::GALGAS_astSeparatorInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astSeparatorInstructionDeclaration GALGAS_astSeparatorInstructionDeclaration::init_28_horizontal_29_ (const GALGAS_bool & in_horizontal,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  cPtr_astSeparatorInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astSeparatorInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->mProperty_horizontal = in_horizontal ;
  const GALGAS_astSeparatorInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration::GALGAS_astSeparatorInstructionDeclaration (const cPtr_astSeparatorInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSeparatorInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration GALGAS_astSeparatorInstructionDeclaration::class_func_new (const GALGAS_bool & inAttribute_horizontal
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_astSeparatorInstructionDeclaration result ;
  if (inAttribute_horizontal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astSeparatorInstructionDeclaration (inAttribute_horizontal COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astSeparatorInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_astSeparatorInstructionDeclaration * p = (cPtr_astSeparatorInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astSeparatorInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astSeparatorInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astSeparatorInstructionDeclaration::cPtr_astSeparatorInstructionDeclaration (const GALGAS_bool & in_horizontal
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_horizontal (in_horizontal) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astSeparatorInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;
}

void cPtr_astSeparatorInstructionDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@astSeparatorInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astSeparatorInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astSeparatorInstructionDeclaration (mProperty_horizontal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astSeparatorInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ("astSeparatorInstructionDeclaration",
                                                                                          & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astSeparatorInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astSeparatorInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astSeparatorInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration GALGAS_astSeparatorInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astSeparatorInstructionDeclaration result ;
  const GALGAS_astSeparatorInstructionDeclaration * p = (const GALGAS_astSeparatorInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astSeparatorInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSeparatorInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astSeparatorInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astSeparatorInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astSeparatorInstructionDeclaration_2D_weak::GALGAS_astSeparatorInstructionDeclaration_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration_2D_weak & GALGAS_astSeparatorInstructionDeclaration_2D_weak::operator = (const GALGAS_astSeparatorInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration_2D_weak::GALGAS_astSeparatorInstructionDeclaration_2D_weak (const GALGAS_astSeparatorInstructionDeclaration & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration_2D_weak GALGAS_astSeparatorInstructionDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astSeparatorInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration GALGAS_astSeparatorInstructionDeclaration_2D_weak::bang_astSeparatorInstructionDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astSeparatorInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSeparatorInstructionDeclaration) ;
      result = GALGAS_astSeparatorInstructionDeclaration ((cPtr_astSeparatorInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astSeparatorInstructionDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2D_weak ("astSeparatorInstructionDeclaration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astSeparatorInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astSeparatorInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astSeparatorInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSeparatorInstructionDeclaration_2D_weak GALGAS_astSeparatorInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astSeparatorInstructionDeclaration_2D_weak result ;
  const GALGAS_astSeparatorInstructionDeclaration_2D_weak * p = (const GALGAS_astSeparatorInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astSeparatorInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSeparatorInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astDividerInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astDividerInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astDividerInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astDividerInstructionDeclaration * p = (const cPtr_astDividerInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astDividerInstructionDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_horizontal.objectCompare (p->mProperty_horizontal) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astDividerInstructionDeclaration::objectCompare (const GALGAS_astDividerInstructionDeclaration & inOperand) const {
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

GALGAS_astDividerInstructionDeclaration::GALGAS_astDividerInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astDividerInstructionDeclaration GALGAS_astDividerInstructionDeclaration::init_28_horizontal_29_ (const GALGAS_bool & in_horizontal,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_astDividerInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astDividerInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->mProperty_horizontal = in_horizontal ;
  const GALGAS_astDividerInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration::GALGAS_astDividerInstructionDeclaration (const cPtr_astDividerInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDividerInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration GALGAS_astDividerInstructionDeclaration::class_func_new (const GALGAS_bool & inAttribute_horizontal
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_astDividerInstructionDeclaration result ;
  if (inAttribute_horizontal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astDividerInstructionDeclaration (inAttribute_horizontal COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astDividerInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_astDividerInstructionDeclaration * p = (cPtr_astDividerInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDividerInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astDividerInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (const GALGAS_bool & in_horizontal
                                                                              COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_horizontal (in_horizontal) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astDividerInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

void cPtr_astDividerInstructionDeclaration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@astDividerInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astDividerInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astDividerInstructionDeclaration (mProperty_horizontal COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astDividerInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ("astDividerInstructionDeclaration",
                                                                                        & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astDividerInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astDividerInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDividerInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration GALGAS_astDividerInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astDividerInstructionDeclaration result ;
  const GALGAS_astDividerInstructionDeclaration * p = (const GALGAS_astDividerInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astDividerInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astDividerInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astDividerInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astDividerInstructionDeclaration_2D_weak::GALGAS_astDividerInstructionDeclaration_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration_2D_weak & GALGAS_astDividerInstructionDeclaration_2D_weak::operator = (const GALGAS_astDividerInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration_2D_weak::GALGAS_astDividerInstructionDeclaration_2D_weak (const GALGAS_astDividerInstructionDeclaration & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration_2D_weak GALGAS_astDividerInstructionDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astDividerInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration GALGAS_astDividerInstructionDeclaration_2D_weak::bang_astDividerInstructionDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astDividerInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astDividerInstructionDeclaration) ;
      result = GALGAS_astDividerInstructionDeclaration ((cPtr_astDividerInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astDividerInstructionDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2D_weak ("astDividerInstructionDeclaration-weak",
                                                                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astDividerInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astDividerInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDividerInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astDividerInstructionDeclaration_2D_weak GALGAS_astDividerInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astDividerInstructionDeclaration_2D_weak result ;
  const GALGAS_astDividerInstructionDeclaration_2D_weak * p = (const GALGAS_astDividerInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astDividerInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_optionalHiddenBinding_binding::cEnumAssociatedValues_optionalHiddenBinding_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST inAssociatedValue0
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_optionalHiddenBinding_binding::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_optionalHiddenBinding_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_optionalHiddenBinding_binding * ptr = dynamic_cast<const cEnumAssociatedValues_optionalHiddenBinding_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding::GALGAS_optionalHiddenBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding GALGAS_optionalHiddenBinding::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_optionalHiddenBinding result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding GALGAS_optionalHiddenBinding::class_func_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_optionalHiddenBinding result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_binding ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_optionalHiddenBinding_binding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalHiddenBinding::method_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_binding) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @optionalHiddenBinding binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_optionalHiddenBinding_binding * ptr = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalHiddenBinding::optional_noBinding () const {
  const bool ok = mEnum == kEnum_noBinding ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_optionalHiddenBinding::optional_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_binding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_optionalHiddenBinding_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionalHiddenBinding [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalHiddenBinding::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_optionalHiddenBinding::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_optionalHiddenBinding::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @optionalHiddenBinding: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionalHiddenBinding [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_optionalHiddenBinding::objectCompare (const GALGAS_optionalHiddenBinding & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @optionalHiddenBinding generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ("optionalHiddenBinding",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionalHiddenBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionalHiddenBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionalHiddenBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding GALGAS_optionalHiddenBinding::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionalHiddenBinding result ;
  const GALGAS_optionalHiddenBinding * p = (const GALGAS_optionalHiddenBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_optionalHiddenBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalHiddenBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astHStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astHStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astHStackViewInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astHStackViewInstructionDeclaration * p = (const cPtr_astHStackViewInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOptionalHiddenBinding.objectCompare (p->mProperty_mOptionalHiddenBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAstNewStackViewDeclarationList.objectCompare (p->mProperty_mAstNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astHStackViewInstructionDeclaration::objectCompare (const GALGAS_astHStackViewInstructionDeclaration & inOperand) const {
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

GALGAS_astHStackViewInstructionDeclaration::GALGAS_astHStackViewInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::init_28__2C__2C__2C__29_ (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                                                    const GALGAS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_astHStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astHStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->mProperty_mFunctionCallList = in_mFunctionCallList ;
  object->mProperty_mInstructionList = in_mInstructionList ;
  object->mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  object->mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
  const GALGAS_astHStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration::GALGAS_astHStackViewInstructionDeclaration (const cPtr_astHStackViewInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::class_func_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                       const GALGAS_astViewInstructionList & inAttribute_mInstructionList,
                                                                                                       const GALGAS_optionalHiddenBinding & inAttribute_mOptionalHiddenBinding,
                                                                                                       const GALGAS_astNewStackViewDeclarationList & inAttribute_mAstNewStackViewDeclarationList
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mOptionalHiddenBinding.isValid () && inAttribute_mAstNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astHStackViewInstructionDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList, inAttribute_mOptionalHiddenBinding, inAttribute_mAstNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astHStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astHStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding GALGAS_astHStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_optionalHiddenBinding () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astHStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astHStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GALGAS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mOptionalHiddenBinding (in_mOptionalHiddenBinding),
mProperty_mAstNewStackViewDeclarationList (in_mAstNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astHStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

void cPtr_astHStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astHStackViewInstructionDeclaration:") ;
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

acPtr_class * cPtr_astHStackViewInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astHStackViewInstructionDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astHStackViewInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ("astHStackViewInstructionDeclaration",
                                                                                           & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration result ;
  const GALGAS_astHStackViewInstructionDeclaration * p = (const GALGAS_astHStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astHStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astHStackViewInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astHStackViewInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astHStackViewInstructionDeclaration_2D_weak::GALGAS_astHStackViewInstructionDeclaration_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration_2D_weak & GALGAS_astHStackViewInstructionDeclaration_2D_weak::operator = (const GALGAS_astHStackViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration_2D_weak::GALGAS_astHStackViewInstructionDeclaration_2D_weak (const GALGAS_astHStackViewInstructionDeclaration & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration_2D_weak GALGAS_astHStackViewInstructionDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration_2D_weak::bang_astHStackViewInstructionDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astHStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astHStackViewInstructionDeclaration) ;
      result = GALGAS_astHStackViewInstructionDeclaration ((cPtr_astHStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astHStackViewInstructionDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2D_weak ("astHStackViewInstructionDeclaration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHStackViewInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHStackViewInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHStackViewInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration_2D_weak GALGAS_astHStackViewInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration_2D_weak result ;
  const GALGAS_astHStackViewInstructionDeclaration_2D_weak * p = (const GALGAS_astHStackViewInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astHStackViewInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astVStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astVStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astVStackViewInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_astVStackViewInstructionDeclaration * p = (const cPtr_astVStackViewInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOptionalHiddenBinding.objectCompare (p->mProperty_mOptionalHiddenBinding) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAstNewStackViewDeclarationList.objectCompare (p->mProperty_mAstNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astVStackViewInstructionDeclaration::objectCompare (const GALGAS_astVStackViewInstructionDeclaration & inOperand) const {
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

GALGAS_astVStackViewInstructionDeclaration::GALGAS_astVStackViewInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::init_28__2C__2C__2C__29_ (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                                                    const GALGAS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_astVStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astVStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->mProperty_mFunctionCallList = in_mFunctionCallList ;
  object->mProperty_mInstructionList = in_mInstructionList ;
  object->mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  object->mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
  const GALGAS_astVStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration::GALGAS_astVStackViewInstructionDeclaration (const cPtr_astVStackViewInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astVStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::class_func_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                       const GALGAS_astViewInstructionList & inAttribute_mInstructionList,
                                                                                                       const GALGAS_optionalHiddenBinding & inAttribute_mOptionalHiddenBinding,
                                                                                                       const GALGAS_astNewStackViewDeclarationList & inAttribute_mAstNewStackViewDeclarationList
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mOptionalHiddenBinding.isValid () && inAttribute_mAstNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astVStackViewInstructionDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList, inAttribute_mOptionalHiddenBinding, inAttribute_mAstNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astVStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astVStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_optionalHiddenBinding GALGAS_astVStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_optionalHiddenBinding () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astVStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astVStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                    const GALGAS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GALGAS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mOptionalHiddenBinding (in_mOptionalHiddenBinding),
mProperty_mAstNewStackViewDeclarationList (in_mAstNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astVStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

void cPtr_astVStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astVStackViewInstructionDeclaration:") ;
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

acPtr_class * cPtr_astVStackViewInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astVStackViewInstructionDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astVStackViewInstructionDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ("astVStackViewInstructionDeclaration",
                                                                                           & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astVStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astVStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astVStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration result ;
  const GALGAS_astVStackViewInstructionDeclaration * p = (const GALGAS_astVStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astVStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astVStackViewInstructionDeclaration_2D_weak::objectCompare (const GALGAS_astVStackViewInstructionDeclaration_2D_weak & inOperand) const {
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

GALGAS_astVStackViewInstructionDeclaration_2D_weak::GALGAS_astVStackViewInstructionDeclaration_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration_2D_weak & GALGAS_astVStackViewInstructionDeclaration_2D_weak::operator = (const GALGAS_astVStackViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration_2D_weak::GALGAS_astVStackViewInstructionDeclaration_2D_weak (const GALGAS_astVStackViewInstructionDeclaration & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration_2D_weak GALGAS_astVStackViewInstructionDeclaration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration_2D_weak::bang_astVStackViewInstructionDeclaration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astVStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astVStackViewInstructionDeclaration) ;
      result = GALGAS_astVStackViewInstructionDeclaration ((cPtr_astVStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astVStackViewInstructionDeclaration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2D_weak ("astVStackViewInstructionDeclaration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astVStackViewInstructionDeclaration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astVStackViewInstructionDeclaration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astVStackViewInstructionDeclaration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration_2D_weak GALGAS_astVStackViewInstructionDeclaration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration_2D_weak result ;
  const GALGAS_astVStackViewInstructionDeclaration_2D_weak * p = (const GALGAS_astVStackViewInstructionDeclaration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astVStackViewInstructionDeclaration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astSpaceViewInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_astSpaceViewInstruction::cPtr_astSpaceViewInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astSpaceViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_astSpaceViewInstruction::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return ComparisonResult::operandEqual ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_astSpaceViewInstruction::objectCompare (const GALGAS_astSpaceViewInstruction & inOperand) const {
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

GALGAS_astSpaceViewInstruction::GALGAS_astSpaceViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::init_28__29_ (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cPtr_astSpaceViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astSpaceViewInstruction (inCompiler COMMA_THERE)) ;
  const GALGAS_astSpaceViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction::GALGAS_astSpaceViewInstruction (const cPtr_astSpaceViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSpaceViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::class_func_new (LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astSpaceViewInstruction (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astSpaceViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astSpaceViewInstruction::cPtr_astSpaceViewInstruction (LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astSpaceViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

void cPtr_astSpaceViewInstruction::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@astSpaceViewInstruction]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astSpaceViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astSpaceViewInstruction (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astSpaceViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ("astSpaceViewInstruction",
                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astSpaceViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astSpaceViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astSpaceViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction result ;
  const GALGAS_astSpaceViewInstruction * p = (const GALGAS_astSpaceViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astSpaceViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astSpaceViewInstruction_2D_weak::objectCompare (const GALGAS_astSpaceViewInstruction_2D_weak & inOperand) const {
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

GALGAS_astSpaceViewInstruction_2D_weak::GALGAS_astSpaceViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction_2D_weak & GALGAS_astSpaceViewInstruction_2D_weak::operator = (const GALGAS_astSpaceViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction_2D_weak::GALGAS_astSpaceViewInstruction_2D_weak (const GALGAS_astSpaceViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction_2D_weak GALGAS_astSpaceViewInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction_2D_weak::bang_astSpaceViewInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astSpaceViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSpaceViewInstruction) ;
      result = GALGAS_astSpaceViewInstruction ((cPtr_astSpaceViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astSpaceViewInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2D_weak ("astSpaceViewInstruction-weak",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astSpaceViewInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astSpaceViewInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astSpaceViewInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction_2D_weak GALGAS_astSpaceViewInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction_2D_weak result ;
  const GALGAS_astSpaceViewInstruction_2D_weak * p = (const GALGAS_astSpaceViewInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astSpaceViewInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astLocalViewInstruction_2D_weak::objectCompare (const GALGAS_astLocalViewInstruction_2D_weak & inOperand) const {
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

GALGAS_astLocalViewInstruction_2D_weak::GALGAS_astLocalViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak & GALGAS_astLocalViewInstruction_2D_weak::operator = (const GALGAS_astLocalViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak::GALGAS_astLocalViewInstruction_2D_weak (const GALGAS_astLocalViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak GALGAS_astLocalViewInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction_2D_weak::bang_astLocalViewInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astLocalViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astLocalViewInstruction) ;
      result = GALGAS_astLocalViewInstruction ((cPtr_astLocalViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astLocalViewInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ("astLocalViewInstruction-weak",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction_2D_weak GALGAS_astLocalViewInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction_2D_weak result ;
  const GALGAS_astLocalViewInstruction_2D_weak * p = (const GALGAS_astLocalViewInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astLocalViewInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutViewInstructionParameterList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewInstructionParameterList : public cCollectionElement {
  public: GALGAS_astAutoLayoutViewInstructionParameterList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                        const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                        const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                                            const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                            const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType, inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewInstructionParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewInstructionParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewInstructionParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutViewInstructionParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterName" ":") ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterType" ":") ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameter" ":") ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_astAutoLayoutViewInstructionParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * operand = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList::GALGAS_astAutoLayoutViewInstructionParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList::GALGAS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutViewInstructionParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                             const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                                             const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_astAutoLayoutViewInstructionParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_lstring & in_mParameterName,
                                                                                  const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                  const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (in_mParameterName,
                                                                               in_mParameterType,
                                                                               in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                            const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_append (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                      const GALGAS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                             const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                             const GALGAS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                             GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                             GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mParameterType ;
        outOperand2 = p->mObject.mProperty_mParameter ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                        GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                        GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                       GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                       GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_first (GALGAS_lstring & outOperand0,
                                                                     GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                     GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_last (GALGAS_lstring & outOperand0,
                                                                    GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                    GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::add_operation (const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::plusAssign_operation (const GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterTypeAtIndex (GALGAS_autoLayoutClassParameterType inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_autoLayoutClassParameterType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterAtIndex (GALGAS_astAutoLayoutViewInstructionParameterValue inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewInstructionParameterList::cEnumerator_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject,
                                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element cEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutViewInstructionParameterList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ("astAutoLayoutViewInstructionParameterList",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewInstructionParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewInstructionParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewInstructionParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  const GALGAS_astAutoLayoutViewInstructionParameterList * p = (const GALGAS_astAutoLayoutViewInstructionParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewInstructionParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_tableValueBinding::class_func_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_tableValueBinding::class_func_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_tableValueBinding ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_tableValueBinding_tableValueBinding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableValueBinding::method_tableValueBinding (GALGAS_lstring & outAssociatedValue0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_tableValueBinding) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @tableValueBinding tableValueBinding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableValueBinding::optional_noTableValueBinding () const {
  const bool ok = mEnum == kEnum_noTableValueBinding ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableValueBinding::optional_tableValueBinding (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_tableValueBinding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableValueBinding::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @tableValueBinding: ") ;
  ioString.appendCString (gEnumNameArrayFor_tableValueBinding [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_tableValueBinding::objectCompare (const GALGAS_tableValueBinding & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @tableValueBinding generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_tableValueBinding::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  const GALGAS_tableValueBinding * p = (const GALGAS_tableValueBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tableValueBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring inAssociatedValue0,
                                                                                                    const GALGAS_lstring inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_runActionDescriptor_action::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_runActionDescriptor_action::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_runActionDescriptor_action * ptr = dynamic_cast<const cEnumAssociatedValues_runActionDescriptor_action *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::class_func_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::class_func_action (const GALGAS_lstring & inAssociatedValue0,
                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_action ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_runActionDescriptor_action (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_runActionDescriptor::method_action (GALGAS_lstring & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_action) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @runActionDescriptor action invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_runActionDescriptor_action * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_runActionDescriptor::optional_noAction () const {
  const bool ok = mEnum == kEnum_noAction ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_runActionDescriptor::optional_action (GALGAS_lstring & outAssociatedValue0,
                                                  GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_action ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_runActionDescriptor::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @runActionDescriptor: ") ;
  ioString.appendCString (gEnumNameArrayFor_runActionDescriptor [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_runActionDescriptor::objectCompare (const GALGAS_runActionDescriptor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @runActionDescriptor generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  const GALGAS_runActionDescriptor * p = (const GALGAS_runActionDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_runActionDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::class_func_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_binding ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_multipleBindingDescriptor_binding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingDescriptor::method_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_binding) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @multipleBindingDescriptor binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingDescriptor::optional_noBinding () const {
  const bool ok = mEnum == kEnum_noBinding ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingDescriptor::optional_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_binding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingDescriptor::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @multipleBindingDescriptor: ") ;
  ioString.appendCString (gEnumNameArrayFor_multipleBindingDescriptor [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_multipleBindingDescriptor::objectCompare (const GALGAS_multipleBindingDescriptor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @multipleBindingDescriptor generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  const GALGAS_multipleBindingDescriptor * p = (const GALGAS_multipleBindingDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_multipleBindingDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_graphicController_defined::cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring inAssociatedValue0,
                                                                                                  const GALGAS_lstring inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_graphicController_defined::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_graphicController_defined::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_graphicController_defined * ptr = dynamic_cast<const cEnumAssociatedValues_graphicController_defined *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController::GALGAS_graphicController (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::class_func_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                       const GALGAS_lstring & inAssociatedValue1
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_defined ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_graphicController_defined (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphicController::method_defined (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_defined) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @graphicController defined invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_graphicController_defined * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_graphicController::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_graphicController::optional_defined (GALGAS_lstring & outAssociatedValue0,
                                                 GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_defined ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_graphicController [3] = {
  "(not built)",
  "none",
  "defined"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_graphicController::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_graphicController::getter_isDefined (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_defined == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphicController::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @graphicController: ") ;
  ioString.appendCString (gEnumNameArrayFor_graphicController [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_graphicController::objectCompare (const GALGAS_graphicController & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphicController generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController ("graphicController",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphicController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphicController::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphicController (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  const GALGAS_graphicController * p = (const GALGAS_graphicController *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphicController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@regularBindingList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_regularBindingList : public cCollectionElement {
  public: GALGAS_regularBindingList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                 const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                 const GALGAS_bindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                                              const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                                              const GALGAS_bindingOptionList & in_mBindingOptionList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mObservablePropertyList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_regularBindingList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_regularBindingList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_regularBindingList (mObject.mProperty_mBindingName, mObject.mProperty_mObservablePropertyList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_regularBindingList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingName" ":") ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObservablePropertyList" ":") ;
  mObject.mProperty_mObservablePropertyList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBindingOptionList" ":") ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_regularBindingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingList * operand = (cCollectionElement_regularBindingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList::GALGAS_regularBindingList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList::GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_observablePropertyList & inOperand1,
                                                                               const GALGAS_bindingOptionList & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_regularBindingList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_regularBindingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mBindingName,
                                                           const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                           const GALGAS_bindingOptionList & in_mBindingOptionList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = nullptr ;
  macroMyNew (p, cCollectionElement_regularBindingList (in_mBindingName,
                                                        in_mObservablePropertyList,
                                                        in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_observablePropertyList & inOperand1,
                                                     const GALGAS_bindingOptionList & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_append (const GALGAS_lstring inOperand0,
                                               const GALGAS_observablePropertyList inOperand1,
                                               const GALGAS_bindingOptionList inOperand2,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_observablePropertyList inOperand1,
                                                      const GALGAS_bindingOptionList inOperand2,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_observablePropertyList & outOperand1,
                                                      GALGAS_bindingOptionList & outOperand2,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
        outOperand0 = p->mObject.mProperty_mBindingName ;
        outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
        outOperand2 = p->mObject.mProperty_mBindingOptionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_observablePropertyList & outOperand1,
                                                 GALGAS_bindingOptionList & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_observablePropertyList & outOperand1,
                                                GALGAS_bindingOptionList & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_observablePropertyList & outOperand1,
                                              GALGAS_bindingOptionList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_observablePropertyList & outOperand1,
                                             GALGAS_bindingOptionList & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::add_operation (const GALGAS_regularBindingList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMBindingNameAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_regularBindingList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMObservablePropertyListAtIndex (GALGAS_observablePropertyList inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservablePropertyList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_regularBindingList::getter_mObservablePropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_observablePropertyList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mObservablePropertyList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMBindingOptionListAtIndex (GALGAS_bindingOptionList inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_regularBindingList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_bindingOptionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_regularBindingList::cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList_2D_element cEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList cEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mObservablePropertyList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList cEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @regularBindingList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList ("regularBindingList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList result ;
  const GALGAS_regularBindingList * p = (const GALGAS_regularBindingList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_regularBindingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astComputedViewInstruction_2D_weak::objectCompare (const GALGAS_astComputedViewInstruction_2D_weak & inOperand) const {
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

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak & GALGAS_astComputedViewInstruction_2D_weak::operator = (const GALGAS_astComputedViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (const GALGAS_astComputedViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak GALGAS_astComputedViewInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction_2D_weak::bang_astComputedViewInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedViewInstruction) ;
      result = GALGAS_astComputedViewInstruction ((cPtr_astComputedViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astComputedViewInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ("astComputedViewInstruction-weak",
                                                                                          & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak GALGAS_astComputedViewInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction_2D_weak result ;
  const GALGAS_astComputedViewInstruction_2D_weak * p = (const GALGAS_astComputedViewInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedViewInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (const GALGAS_string inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::description (String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem (const GALGAS_string inAssociatedValue0,
                                                                                                                                                      const GALGAS_runActionDescriptor inAssociatedValue1,
                                                                                                                                                      const GALGAS_multipleBindingDescriptor inAssociatedValue2
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::description (String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                                      const GALGAS_lstring inAssociatedValue1
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::description (String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc (const GALGAS_astAbstractViewInstructionDeclaration inAssociatedValue0
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::description (String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity (const GALGAS_lstring inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::description (String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue::GALGAS_astAutoLayoutViewInstructionParameterValue (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (const GALGAS_string & inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (const GALGAS_string & inAssociatedValue0,
                                                                                                                          const GALGAS_runActionDescriptor & inAssociatedValue1,
                                                                                                                          const GALGAS_multipleBindingDescriptor & inAssociatedValue2
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_menuItem ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_enumFunc ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (const GALGAS_astAbstractViewInstructionDeclaration & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_viewFunc ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_entity (const GALGAS_lstring & inAssociatedValue0
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_string (GALGAS_string & outAssociatedValue0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_menuItem (GALGAS_string & outAssociatedValue0,
                                                                         GALGAS_runActionDescriptor & outAssociatedValue1,
                                                                         GALGAS_multipleBindingDescriptor & outAssociatedValue2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_menuItem) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue menuItem invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_enumFunc (GALGAS_lstring & outAssociatedValue0,
                                                                         GALGAS_lstring & outAssociatedValue1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumFunc) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue enumFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_viewFunc (GALGAS_astAbstractViewInstructionDeclaration & outAssociatedValue0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_viewFunc) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue viewFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_entity (GALGAS_lstring & outAssociatedValue0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_string (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_string ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_menuItem (GALGAS_string & outAssociatedValue0,
                                                                           GALGAS_runActionDescriptor & outAssociatedValue1,
                                                                           GALGAS_multipleBindingDescriptor & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_menuItem ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_enumFunc (GALGAS_lstring & outAssociatedValue0,
                                                                           GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_enumFunc ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_viewFunc (GALGAS_astAbstractViewInstructionDeclaration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_viewFunc ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_entity (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_entity ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [6] = {
  "(not built)",
  "string",
  "menuItem",
  "enumFunc",
  "viewFunc",
  "entity"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isEnumFunc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isViewFunc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_viewFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<enum @astAutoLayoutViewInstructionParameterValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astAutoLayoutViewInstructionParameterValue::objectCompare (const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astAutoLayoutViewInstructionParameterValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ("astAutoLayoutViewInstructionParameterValue",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewInstructionParameterValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewInstructionParameterValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewInstructionParameterValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  const GALGAS_astAutoLayoutViewInstructionParameterValue * p = (const GALGAS_astAutoLayoutViewInstructionParameterValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astAutoLayoutViewInstructionParameterValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

