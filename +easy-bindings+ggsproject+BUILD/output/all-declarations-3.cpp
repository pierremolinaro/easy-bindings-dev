#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationParameterList : public cCollectionElement {
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                               const GGS_string & in_mParameterValue
                                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                                                                                          const GGS_string & in_mParameterValue
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewInstructionGenerationParameterList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterName" ":") ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterValue" ":") ;
  mObject.mProperty_mParameterValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutViewInstructionGenerationParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_autoLayoutViewInstructionGenerationParameterList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inValue
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                     const GGS_string & inOperand1
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_autoLayoutViewInstructionGenerationParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GGS_string & in_mParameterName,
                                                                                      const GGS_string & in_mParameterValue
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (in_mParameterName,
                                                                                      in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::addAssignOperation (const GGS_string & inOperand0,
                                                                               const GGS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_append (const GGS_string inOperand0,
                                                                          const GGS_string inOperand1,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                 const GGS_string inOperand1,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                 GGS_string & outOperand1,
                                                                                 const GGS_uint inRemoveIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
      outOperand0 = p->mObject.mProperty_mParameterName ;
      outOperand1 = p->mObject.mProperty_mParameterValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GGS_string & outOperand0,
                                                                            GGS_string & outOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GGS_string & outOperand0,
                                                                           GGS_string & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::method_first (GGS_string & outOperand0,
                                                                         GGS_string & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::method_last (GGS_string & outOperand0,
                                                                        GGS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result = GGS_autoLayoutViewInstructionGenerationParameterList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result = GGS_autoLayoutViewInstructionGenerationParameterList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result = GGS_autoLayoutViewInstructionGenerationParameterList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GGS_string inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterValueAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterValueAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    result = p->mObject.mProperty_mParameterValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationParameterList::DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationParameterList::UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
  return p->mObject.mProperty_mParameterValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ("autoLayoutViewInstructionGenerationParameterList",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewInstructionGenerationParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  const GGS_autoLayoutViewInstructionGenerationParameterList * p = (const GGS_autoLayoutViewInstructionGenerationParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak & GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutComputedViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (const GGS_autoLayoutComputedViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::bang_autoLayoutComputedViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
      result = GGS_autoLayoutComputedViewInstructionGeneration ((cPtr_autoLayoutComputedViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutComputedViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ("autoLayoutComputedViewInstructionGeneration.weak",
                                                                                                           & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutComputedViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutComputedViewInstructionGeneration_2E_weak GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutComputedViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutComputedViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generate (const GGS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const GGS_string constinArgument_inIndentation,
                               GGS_string & ioArgument_ioStr,
                               Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList temp_0 = inObject ;
  UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList enumerator_79751 (temp_0) ;
  while (enumerator_79751.hasCurrentObject ()) {
    ioArgument_ioStr.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  ."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)).add_operation (enumerator_79751.current_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1906)) ;
    UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_79854 (enumerator_79751.current_mParameters (HERE)) ;
    while (enumerator_79854.hasCurrentObject ()) {
      ioArgument_ioStr.plusAssignOperation(enumerator_79854.current_mParameterName (HERE).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)).add_operation (enumerator_79854.current_mParameterValue (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1908)) ;
      enumerator_79854.gotoNextObject () ;
      if (enumerator_79854.hasCurrentObject ()) {
        ioArgument_ioStr.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)) ;
      }
    }
    ioArgument_ioStr.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1911)) ;
    enumerator_79751.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateViewBuilder (const cPtr_abstractViewGeneration * inObject,
                                                    const GGS_bool in_inPreferences,
                                                    const GGS_string in_inViewName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewBuilder (in_inPreferences, in_inViewName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outletClassDeclarationAST_2E_weak::objectCompare (const GGS_outletClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_outletClassDeclarationAST_2E_weak::GGS_outletClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak & GGS_outletClassDeclarationAST_2E_weak::operator = (const GGS_outletClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak::GGS_outletClassDeclarationAST_2E_weak (const GGS_outletClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak GGS_outletClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_outletClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST_2E_weak::bang_outletClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outletClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outletClassDeclarationAST) ;
      result = GGS_outletClassDeclarationAST ((cPtr_outletClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ("outletClassDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak GGS_outletClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_outletClassDeclarationAST_2E_weak result ;
  const GGS_outletClassDeclarationAST_2E_weak * p = (const GGS_outletClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletBindingSpecificationMap::cMapElement_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap_2E_element & inValue
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (inValue.mProperty_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (inValue.mProperty_mControllerBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletBindingSpecificationMap::cMapElement_outletBindingSpecificationMap (const GGS_lstring & inKey,
                                                                                      const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                      const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_outletBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_outletBindingSpecificationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_outletBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_outletBindingSpecificationMap::description (String & ioString, const int32_t inIndentation) const {
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

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap & GGS_outletBindingSpecificationMap::operator = (const GGS_outletBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_outletBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = p->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = p->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_outletBindingSpecificationMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_insertKey (GGS_lstring inKey,
                                                          GGS_outletBindingSpecificationModelList inArgument0,
                                                          GGS_controllerBindingOptionDecoratedList inArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * p = nullptr ;
  macroMyNew (p, cMapElement_outletBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::method_searchKey (GGS_lstring inKey,
                                                          GGS_outletBindingSpecificationModelList & outArgument0,
                                                          GGS_controllerBindingOptionDecoratedList & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_outletBindingSpecificationMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GGS_outletBindingSpecificationModelList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mOutletBindingSpecificationModelList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GGS_controllerBindingOptionDecoratedList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mControllerBindingOptionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS_outletBindingSpecificationModelList inAttributeValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mOutletBindingSpecificationModelList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS_controllerBindingOptionDecoratedList inAttributeValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mControllerBindingOptionList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_outletBindingSpecificationMap * GGS_outletBindingSpecificationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                  const GGS_string & inKey
                                                                                                                  COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * result = (cMapElement_outletBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletBindingSpecificationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingSpecificationMap::DownEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element DownEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return GGS_outletBindingSpecificationMap_2E_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList DownEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList DownEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingSpecificationMap::UpEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element UpEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return GGS_outletBindingSpecificationMap_2E_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList UpEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList UpEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  const GGS_outletBindingSpecificationMap * p = (const GGS_outletBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@bindingOptionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_bindingOptionList : public cCollectionElement {
  public: GGS_bindingOptionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_bindingOptionList (const GGS_lstring & in_mOptionName,
                                                const GGS_abstractDefaultValue & in_mOptionValue
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_bindingOptionList (const GGS_bindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GGS_lstring & in_mOptionName,
                                                                            const GGS_abstractDefaultValue & in_mOptionValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GGS_bindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_bindingOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_bindingOptionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_bindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_bindingOptionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionName" ":") ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionValue" ":") ;
  mObject.mProperty_mOptionValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList::GGS_bindingOptionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList::GGS_bindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_bindingOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_bindingOptionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::plusPlusAssignOperation (const GGS_bindingOptionList_2E_element & inValue
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_bindingOptionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  GGS_bindingOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_bindingOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_bindingOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GGS_lstring & in_mOptionName,
                                                       const GGS_abstractDefaultValue & in_mOptionValue
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_bindingOptionList (in_mOptionName,
                                                       in_mOptionValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_abstractDefaultValue & inOperand1
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_abstractDefaultValue inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_abstractDefaultValue inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_abstractDefaultValue & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionName ;
      outOperand1 = p->mObject.mProperty_mOptionValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_abstractDefaultValue & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_abstractDefaultValue & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::method_first (GGS_lstring & outOperand0,
                                          GGS_abstractDefaultValue & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::method_last (GGS_lstring & outOperand0,
                                         GGS_abstractDefaultValue & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::add_operation (const GGS_bindingOptionList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result = GGS_bindingOptionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result = GGS_bindingOptionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result = GGS_bindingOptionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::plusAssignOperation (const GGS_bindingOptionList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_setMOptionNameAtIndex (GGS_lstring inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bindingOptionList::getter_mOptionNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_setMOptionValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_bindingOptionList::getter_mOptionValueAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GGS_abstractDefaultValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @bindingOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_bindingOptionList::DownEnumerator_bindingOptionList (const GGS_bindingOptionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element DownEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue DownEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @bindingOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_bindingOptionList::UpEnumerator_bindingOptionList (const GGS_bindingOptionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element UpEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue UpEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionValue ;
}




//--------------------------------------------------------------------------------------------------
//     @bindingOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList ("bindingOptionList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_bindingOptionList result ;
  const GGS_bindingOptionList * p = (const GGS_bindingOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDefaultValue::objectCompare (const GGS_abstractDefaultValue & inOperand) const {
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

GGS_abstractDefaultValue::GGS_abstractDefaultValue (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractDefaultValue::
abstractDefaultValue_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue::GGS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDefaultValue class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDefaultValue::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_abstractDefaultValue::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDefaultValue result ;
  const GGS_abstractDefaultValue * p = (const GGS_abstractDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletBindingModelList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletBindingModelList : public cCollectionElement {
  public: GGS_outletBindingModelList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                     const GGS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GGS_propertyKind & in_mKind,
                                                                                      const GGS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKind, in_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GGS_outletBindingModelList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKind, inElement.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletBindingModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletBindingModelList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletBindingModelList (mObject.mProperty_mKind, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_outletBindingModelList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKind" ":") ;
  mObject.mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mErrorLocation" ":") ;
  mObject.mProperty_mErrorLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList::GGS_outletBindingModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_outletBindingModelList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_outletBindingModelList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::plusPlusAssignOperation (const GGS_outletBindingModelList_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletBindingModelList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::class_func_listWithValue (const GGS_propertyKind & inOperand0,
                                                                                 const GGS_location & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_outletBindingModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_outletBindingModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_outletBindingModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_propertyKind & in_mKind,
                                                            const GGS_location & in_mErrorLocation
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletBindingModelList (in_mKind,
                                                            in_mErrorLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::addAssignOperation (const GGS_propertyKind & inOperand0,
                                                     const GGS_location & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_append (const GGS_propertyKind inOperand0,
                                                const GGS_location inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_insertAtIndex (const GGS_propertyKind inOperand0,
                                                       const GGS_location inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_removeAtIndex (GGS_propertyKind & outOperand0,
                                                       GGS_location & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
      outOperand0 = p->mObject.mProperty_mKind ;
      outOperand1 = p->mObject.mProperty_mErrorLocation ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_popFirst (GGS_propertyKind & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_popLast (GGS_propertyKind & outOperand0,
                                                 GGS_location & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::method_first (GGS_propertyKind & outOperand0,
                                               GGS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::method_last (GGS_propertyKind & outOperand0,
                                              GGS_location & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    outOperand0 = p->mObject.mProperty_mKind ;
    outOperand1 = p->mObject.mProperty_mErrorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::add_operation (const GGS_outletBindingModelList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result = GGS_outletBindingModelList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result = GGS_outletBindingModelList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletBindingModelList result = GGS_outletBindingModelList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::plusAssignOperation (const GGS_outletBindingModelList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_setMKindAtIndex (GGS_propertyKind inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_outletBindingModelList::getter_mKindAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  GGS_propertyKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    result = p->mObject.mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList::setter_setMErrorLocationAtIndex (GGS_location inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletBindingModelList::getter_mErrorLocationAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
    result = p->mObject.mProperty_mErrorLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @outletBindingModelList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingModelList::DownEnumerator_outletBindingModelList (const GGS_outletBindingModelList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element DownEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mErrorLocation ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletBindingModelList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingModelList::UpEnumerator_outletBindingModelList (const GGS_outletBindingModelList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element UpEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mErrorLocation ;
}




//--------------------------------------------------------------------------------------------------
//     @outletBindingModelList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList ("outletBindingModelList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList GGS_outletBindingModelList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingModelList result ;
  const GGS_outletBindingModelList * p = (const GGS_outletBindingModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyKind
//--------------------------------------------------------------------------------------------------

GGS_propertyKind::GGS_propertyKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_property (const GGS_typeKind & inAssociatedValue0,
                                                        const GGS_propertyAccessibility & inAssociatedValue1
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_property ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_property (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_toMany (const GGS_lstring & inAssociatedValue0,
                                                      const GGS_propertyAccessibility & inAssociatedValue1,
                                                      const GGS_bool & inAssociatedValue2,
                                                      const GGS_toManyRelationshipOptionAST & inAssociatedValue3
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_toMany ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_toMany (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_toOne (const GGS_lstring & inAssociatedValue0,
                                                     const GGS_propertyAccessibility & inAssociatedValue1,
                                                     const GGS_bool & inAssociatedValue2,
                                                     const GGS_toOneOppositeRelationship & inAssociatedValue3,
                                                     const GGS_bool & inAssociatedValue4
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_toOne ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_toOne (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_arrayController (const GGS_lstring & inAssociatedValue0,
                                                               const GGS_bool & inAssociatedValue1
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_arrayController ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_arrayController (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::class_func_selectionController (const GGS_string & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind result ;
  result.mEnum = Enumeration::enum_selectionController ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyKind_2E_selectionController (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractProperty (GGS_typeKind & outAssociatedValue_type,
                                               GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_property) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_accessibility.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.property invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractToMany (GGS_lstring & outAssociatedValue_typeName,
                                             GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                             GGS_bool & outAssociatedValue_graphic,
                                             GGS_toManyRelationshipOptionAST & outAssociatedValue_optionKind,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_toMany) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_accessibility.drop () ;
    outAssociatedValue_graphic.drop () ;
    outAssociatedValue_optionKind.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.toMany invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
    outAssociatedValue_optionKind = ptr->mProperty_optionKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractToOne (GGS_lstring & outAssociatedValue_typeName,
                                            GGS_propertyAccessibility & outAssociatedValue_accessibility,
                                            GGS_bool & outAssociatedValue_graphic,
                                            GGS_toOneOppositeRelationship & outAssociatedValue_opposite,
                                            GGS_bool & outAssociatedValue_isWeak,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_toOne) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_accessibility.drop () ;
    outAssociatedValue_graphic.drop () ;
    outAssociatedValue_opposite.drop () ;
    outAssociatedValue_isWeak.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.toOne invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_accessibility = ptr->mProperty_accessibility ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
    outAssociatedValue_opposite = ptr->mProperty_opposite ;
    outAssociatedValue_isWeak = ptr->mProperty_isWeak ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractArrayController (GGS_lstring & outAssociatedValue_typeName,
                                                      GGS_bool & outAssociatedValue_graphic,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_arrayController) {
    outAssociatedValue_typeName.drop () ;
    outAssociatedValue_graphic.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.arrayController invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::method_extractSelectionController (GGS_string & outAssociatedValue_typeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selectionController) {
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @propertyKind.selectionController invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_ GGS_propertyKind::getter_getProperty (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_property_3F_ result ;
  if (mEnum == Enumeration::enum_property) {
    const auto ptr = (const GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_property (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_property (GGS_typeKind & out_type,
                                                        GGS_propertyAccessibility & out_accessibility) const {
  const auto ptr = (const GGS_propertyKind_2E_property *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_accessibility = ptr->mProperty_accessibility ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_ GGS_propertyKind::getter_getToMany (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_toMany_3F_ result ;
  if (mEnum == Enumeration::enum_toMany) {
    const auto ptr = (const GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_toMany (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_toMany (GGS_lstring & out_typeName,
                                                      GGS_propertyAccessibility & out_accessibility,
                                                      GGS_bool & out_graphic,
                                                      GGS_toManyRelationshipOptionAST & out_optionKind) const {
  const auto ptr = (const GGS_propertyKind_2E_toMany *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_accessibility = ptr->mProperty_accessibility ;
  out_graphic = ptr->mProperty_graphic ;
  out_optionKind = ptr->mProperty_optionKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_ GGS_propertyKind::getter_getToOne (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_toOne_3F_ result ;
  if (mEnum == Enumeration::enum_toOne) {
    const auto ptr = (const GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_toOne (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_toOne (GGS_lstring & out_typeName,
                                                     GGS_propertyAccessibility & out_accessibility,
                                                     GGS_bool & out_graphic,
                                                     GGS_toOneOppositeRelationship & out_opposite,
                                                     GGS_bool & out_isWeak) const {
  const auto ptr = (const GGS_propertyKind_2E_toOne *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_accessibility = ptr->mProperty_accessibility ;
  out_graphic = ptr->mProperty_graphic ;
  out_opposite = ptr->mProperty_opposite ;
  out_isWeak = ptr->mProperty_isWeak ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_ GGS_propertyKind::getter_getArrayController (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_arrayController_3F_ result ;
  if (mEnum == Enumeration::enum_arrayController) {
    const auto ptr = (const GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_arrayController (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_arrayController (GGS_lstring & out_typeName,
                                                               GGS_bool & out_graphic) const {
  const auto ptr = (const GGS_propertyKind_2E_arrayController *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
  out_graphic = ptr->mProperty_graphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_ GGS_propertyKind::getter_getSelectionController (UNUSED_LOCATION_ARGS) const {
  GGS_propertyKind_2E_selectionController_3F_ result ;
  if (mEnum == Enumeration::enum_selectionController) {
    const auto ptr = (const GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyKind_2E_selectionController (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::getAssociatedValuesFor_selectionController (GGS_string & out_typeName) const {
  const auto ptr = (const GGS_propertyKind_2E_selectionController *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyKind [6] = {
  "(not built)",
  "property",
  "toMany",
  "toOne",
  "arrayController",
  "selectionController"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_property == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isToMany (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_toMany == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isToOne (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_toOne == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isArrayController (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_arrayController == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyKind::getter_isSelectionController (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selectionController == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind ("propertyKind",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyKind::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKind result ;
  const GGS_propertyKind * p = (const GGS_propertyKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum observablePropertyAST
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST::GGS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyRelationship (const GGS_lstring & inAssociatedValue0,
                                                                                          const GGS_lstring & inAssociatedValue1
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyRelationship (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfWithoutProperty (const GGS_location & inAssociatedValue0
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfWithoutProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfWithoutProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyArray (const GGS_lstring & inAssociatedValue0,
                                                                                   const GGS_lstring & inAssociatedValue1
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyArray (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyObject (const GGS_lstring & inAssociatedValue0,
                                                                                    const GGS_lstring & inAssociatedValue1
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyObject ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyObject (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsProperty (const GGS_lstring & inAssociatedValue0
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                         const GGS_lstring & inAssociatedValue1
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerProperty (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (const GGS_lstring & inAssociatedValue0,
                                                                                                 const GGS_lstring & inAssociatedValue1,
                                                                                                 const GGS_lstring & inAssociatedValue2
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerSecondaryProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerAllProperties (const GGS_lstring & inAssociatedValue0,
                                                                                             const GGS_lstring & inAssociatedValue1,
                                                                                             const GGS_lstring & inAssociatedValue2
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerAllProperties ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerAllProperties (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerOneProperty (const GGS_lstring & inAssociatedValue0,
                                                                                           const GGS_lstring & inAssociatedValue1
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerOneProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerOneProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_signatureProperty (const GGS_location & inAssociatedValue0
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_signatureProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_signatureProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionProperty (const GGS_location & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionShouldChangeProperty (const GGS_location & inAssociatedValue0
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionShouldChangeProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionShouldChangeProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superProperty (const GGS_lstring & inAssociatedValue0,
                                                                               const GGS_lstring & inAssociatedValue1
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (const GGS_lstring & inAssociatedValue0,
                                                                                               const GGS_lstring & inAssociatedValue1,
                                                                                               const GGS_abstractDefaultValue & inAssociatedValue2
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superPropertyWithDefaultValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyRelationship (GGS_lstring & outAssociatedValue_relationshipName,
                                                                        GGS_lstring & outAssociatedValue_propertyName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyRelationship) {
    outAssociatedValue_relationshipName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyNone (GGS_lstring & outAssociatedValue_relationshipName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyNone) {
    outAssociatedValue_relationshipName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfWithoutProperty (GGS_location & outAssociatedValue_issueLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfWithoutProperty) {
    outAssociatedValue_issueLocation.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfWithoutProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_issueLocation = ptr->mProperty_issueLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyArray (GGS_lstring & outAssociatedValue_propertyName,
                                                                 GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyArray) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyObject (GGS_lstring & outAssociatedValue_propertyName,
                                                                  GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyObject) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyObject invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyNone (GGS_lstring & outAssociatedValue_propertyName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyNone) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                       GGS_lstring & outAssociatedValue_optionName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                      GGS_lstring & outAssociatedValue_propertyName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerSecondaryProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                               GGS_lstring & outAssociatedValue_propertyName,
                                                                               GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerSecondaryProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerSecondaryProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerAllProperties (GGS_lstring & outAssociatedValue_controllerName,
                                                                           GGS_lstring & outAssociatedValue_propertyName,
                                                                           GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerAllProperties) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerAllProperties invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerOneProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                         GGS_lstring & outAssociatedValue_propertyName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerOneProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerOneProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSignatureProperty (GGS_location & outAssociatedValue_location,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_signatureProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.signatureProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionProperty (GGS_location & outAssociatedValue_location,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionShouldChangeProperty (GGS_location & outAssociatedValue_location,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionShouldChangeProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionShouldChangeProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperProperty (GGS_lstring & outAssociatedValue_superEntityName,
                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superProperty) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperPropertyWithDefaultValue (GGS_lstring & outAssociatedValue_superEntityName,
                                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                                             GGS_abstractDefaultValue & outAssociatedValue_defaultValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superPropertyWithDefaultValue) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_defaultValue.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superPropertyWithDefaultValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_defaultValue = ptr->mProperty_defaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_ GGS_observablePropertyAST::getter_getRootProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootProperty_3F_ result ;
  if (mEnum == Enumeration::enum_rootProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ GGS_observablePropertyAST::getter_getRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyRelationship) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyRelationship (GGS_lstring & out_relationshipName,
                                                                                 GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_ GGS_observablePropertyAST::getter_getRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyNone (GGS_lstring & out_relationshipName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ GGS_observablePropertyAST::getter_getSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfWithoutProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfWithoutProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfWithoutProperty (GGS_location & out_issueLocation) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_issueLocation = ptr->mProperty_issueLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_ GGS_observablePropertyAST::getter_getSelfProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_ GGS_observablePropertyAST::getter_getSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyArray_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyArray) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyArray (GGS_lstring & out_propertyName,
                                                                          GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_ GGS_observablePropertyAST::getter_getSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyObject_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyObject) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyObject (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyObject (GGS_lstring & out_propertyName,
                                                                           GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_ GGS_observablePropertyAST::getter_getSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyNone (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_ GGS_observablePropertyAST::getter_getPrefsProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsProperty_3F_ result ;
  if (mEnum == Enumeration::enum_prefsProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_prefsPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsPropertyWithOption (GGS_lstring & out_propertyName,
                                                                                GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerProperty (GGS_lstring & out_controllerName,
                                                                               GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerSecondaryProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerSecondaryProperty (GGS_lstring & out_controllerName,
                                                                                        GGS_lstring & out_propertyName,
                                                                                        GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ GGS_observablePropertyAST::getter_getSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerAllProperties) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerAllProperties (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerAllProperties (GGS_lstring & out_controllerName,
                                                                                    GGS_lstring & out_propertyName,
                                                                                    GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerOneProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerOneProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerOneProperty (GGS_lstring & out_controllerName,
                                                                                  GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_ GGS_observablePropertyAST::getter_getSignatureProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_signatureProperty_3F_ result ;
  if (mEnum == Enumeration::enum_signatureProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_signatureProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_signatureProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_ GGS_observablePropertyAST::getter_getVersionProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ GGS_observablePropertyAST::getter_getVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionShouldChangeProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionShouldChangeProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionShouldChangeProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_ GGS_observablePropertyAST::getter_getSuperProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superProperty_3F_ result ;
  if (mEnum == Enumeration::enum_superProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superProperty (GGS_lstring & out_superEntityName,
                                                                      GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ GGS_observablePropertyAST::getter_getSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ result ;
  if (mEnum == Enumeration::enum_superPropertyWithDefaultValue) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superPropertyWithDefaultValue (GGS_lstring & out_superEntityName,
                                                                                      GGS_lstring & out_propertyName,
                                                                                      GGS_abstractDefaultValue & out_defaultValue) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_defaultValue = ptr->mProperty_defaultValue ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_observablePropertyAST [22] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "rootPropertyNone",
  "selfWithoutProperty",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "selfPropertyObject",
  "selfPropertyNone",
  "prefsProperty",
  "prefsPropertyWithOption",
  "selfControllerProperty",
  "selfControllerSecondaryProperty",
  "selfControllerAllProperties",
  "selfControllerOneProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty",
  "superProperty",
  "superPropertyWithDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfWithoutProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyObject == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerSecondaryProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerAllProperties == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerOneProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_signatureProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionShouldChangeProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superPropertyWithDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @observablePropertyAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_observablePropertyAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  const GGS_observablePropertyAST * p = (const GGS_observablePropertyAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@observablePropertyList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_observablePropertyList : public cCollectionElement {
  public: GGS_observablePropertyList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_observablePropertyList (const GGS_observablePropertyAST & in_mObservableProperty
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_observablePropertyList (const GGS_observablePropertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GGS_observablePropertyAST & in_mObservableProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObservableProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GGS_observablePropertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObservableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_observablePropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_observablePropertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_observablePropertyList (mObject.mProperty_mObservableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_observablePropertyList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mObservableProperty" ":") ;
  mObject.mProperty_mObservableProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList::GGS_observablePropertyList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList::GGS_observablePropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_observablePropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_observablePropertyList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::plusPlusAssignOperation (const GGS_observablePropertyList_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_observablePropertyList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::class_func_listWithValue (const GGS_observablePropertyAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_observablePropertyList result ;
  if (inOperand0.isValid ()) {
    result = GGS_observablePropertyList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_observablePropertyList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_observablePropertyAST & in_mObservableProperty
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_observablePropertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_observablePropertyList (in_mObservableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::addAssignOperation (const GGS_observablePropertyAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_append (const GGS_observablePropertyAST inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_insertAtIndex (const GGS_observablePropertyAST inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_removeAtIndex (GGS_observablePropertyAST & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
      outOperand0 = p->mObject.mProperty_mObservableProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_popFirst (GGS_observablePropertyAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_popLast (GGS_observablePropertyAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::method_first (GGS_observablePropertyAST & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::method_last (GGS_observablePropertyAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    outOperand0 = p->mObject.mProperty_mObservableProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::add_operation (const GGS_observablePropertyList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result = GGS_observablePropertyList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result = GGS_observablePropertyList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result = GGS_observablePropertyList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::plusAssignOperation (const GGS_observablePropertyList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_setMObservablePropertyAtIndex (GGS_observablePropertyAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservableProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyList::getter_mObservablePropertyAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
  GGS_observablePropertyAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
    result = p->mObject.mProperty_mObservableProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @observablePropertyList
//--------------------------------------------------------------------------------------------------

DownEnumerator_observablePropertyList::DownEnumerator_observablePropertyList (const GGS_observablePropertyList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element DownEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST DownEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject.mProperty_mObservableProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @observablePropertyList
//--------------------------------------------------------------------------------------------------

UpEnumerator_observablePropertyList::UpEnumerator_observablePropertyList (const GGS_observablePropertyList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element UpEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST UpEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject.mProperty_mObservableProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @observablePropertyList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList ("observablePropertyList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyList result ;
  const GGS_observablePropertyList * p = (const GGS_observablePropertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST modelStringForSelf'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_modelStringForSelf (const GGS_observablePropertyAST & inObject,
                                               const GGS_string & constinArgument_inSelf,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_7031_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_7031_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (extractedValue_7031_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_7149_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_7149_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (extractedValue_7149_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_7269_propertyName_0 ;
      GGS_lstring extractedValue_7292_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_7269_propertyName_0, extractedValue_7292_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7269_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7292_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_7449_relationshipName_0 ;
      GGS_lstring extractedValue_7467__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_7449_relationshipName_0, extractedValue_7467__1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (extractedValue_7449_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_7572__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_7572__0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("objectIndex"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 197)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_7646_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_7646_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7646_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_7754_propertyName_0 ;
      GGS_lstring extractedValue_7777_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_7754_propertyName_0, extractedValue_7777_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7754_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (extractedValue_7777_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_7911_propertyName_0 ;
      GGS_lstring extractedValue_7941_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_7911_propertyName_0, extractedValue_7941_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7911_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_8052_propertyName_0 ;
      GGS_lstring extractedValue_8075_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_8052_propertyName_0, extractedValue_8075_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8052_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (extractedValue_8075_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_8221_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_8221_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8221_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_8316_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_8316_propertyName_0) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8316_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_8433_propertyName_0 ;
      GGS_lstring extractedValue_8456_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_8433_propertyName_0, extractedValue_8456_optionName_1) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8433_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (extractedValue_8456_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_8603_controllerName_0 ;
      GGS_lstring extractedValue_8628_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_8603_controllerName_0, extractedValue_8628_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8603_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (extractedValue_8628_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_8768_controllerName_0 ;
      GGS_lstring extractedValue_8793_propertyName_1 ;
      GGS_lstring extractedValue_8816_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_8768_controllerName_0, extractedValue_8793_propertyName_1, extractedValue_8816_secondaryPropertyName_2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8768_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8793_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8816_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_9005_controllerName_0 ;
      GGS_lstring extractedValue_9030_propertyName_1 ;
      GGS_lstring extractedValue_9044__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_9005_controllerName_0, extractedValue_9030_propertyName_1, extractedValue_9044__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9005_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (extractedValue_9030_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_9167_controllerName_0 ;
      GGS_lstring extractedValue_9192_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_9167_controllerName_0, extractedValue_9192_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9167_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (extractedValue_9192_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_9309__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_9309__0) ;
      result_outResult = GGS_string ("self.signatureObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_9388__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_9388__0) ;
      result_outResult = GGS_string ("self.versionObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_9477__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_9477__0) ;
      result_outResult = GGS_string ("self.versionShouldChangeObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_9564__0 ;
      GGS_lstring extractedValue_9576_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_9564__0, extractedValue_9576_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9576_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_9682__0 ;
      GGS_lstring extractedValue_9694_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_9708__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_9682__0, extractedValue_9694_propertyName_1, extractedValue_9708__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9694_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST modelStringFunctionArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_modelStringFunctionArgument (const GGS_observablePropertyAST & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_10001_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_10001_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10001_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 238)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_10091_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_10091_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10091_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_10196_propertyName_0 ;
      GGS_lstring extractedValue_10219_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_10196_propertyName_0, extractedValue_10219_optionName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10196_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (extractedValue_10219_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_10333_relationshipName_0 ;
      GGS_lstring extractedValue_10360_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_10333_relationshipName_0, extractedValue_10360_elementPropertyName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10333_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (extractedValue_10360_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_10482__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_10482__0) ;
      result_outResult = GGS_string ("self_address") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_10548_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_10548_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10548_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 248)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_10643_propertyName_0 ;
      GGS_lstring extractedValue_10666_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_10643_propertyName_0, extractedValue_10666_optionName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10643_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (extractedValue_10666_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_10773_propertyName_0 ;
      GGS_lstring extractedValue_10796_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_10773_propertyName_0, extractedValue_10796_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10773_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (extractedValue_10796_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_10922_propertyName_0 ;
      GGS_lstring extractedValue_10945_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_10922_propertyName_0, extractedValue_10945_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10922_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (extractedValue_10945_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_11069_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_11069_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11069_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_11165_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_11165_propertyName_0) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11165_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 258)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_11262_propertyName_0 ;
      GGS_lstring extractedValue_11285_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_11262_propertyName_0, extractedValue_11285_optionName_1) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11262_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (extractedValue_11285_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_11398_controllerName_0 ;
      GGS_lstring extractedValue_11423_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_11398_controllerName_0, extractedValue_11423_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11398_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (extractedValue_11423_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_11550_controllerName_0 ;
      GGS_lstring extractedValue_11575_propertyName_1 ;
      GGS_lstring extractedValue_11598_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_11550_controllerName_0, extractedValue_11575_propertyName_1, extractedValue_11598_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11550_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11575_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11598_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_11760_controllerName_0 ;
      GGS_lstring extractedValue_11785_propertyName_1 ;
      GGS_lstring extractedValue_11808_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_11760_controllerName_0, extractedValue_11785_propertyName_1, extractedValue_11808_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11760_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11785_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GGS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11808_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_11972_controllerName_0 ;
      GGS_lstring extractedValue_11997_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_11972_controllerName_0, extractedValue_11997_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11972_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (extractedValue_11997_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GGS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_12116__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_12116__0) ;
      result_outResult = GGS_string ("self_signatureObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_12186__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_12186__0) ;
      result_outResult = GGS_string ("self_versionObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_12266__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_12266__0) ;
      result_outResult = GGS_string ("self_versionShouldChangeObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_12353_superEntityName_0 ;
      GGS_lstring extractedValue_12379_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_12353_superEntityName_0, extractedValue_12379_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12353_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (extractedValue_12379_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_12505_superEntityName_0 ;
      GGS_lstring extractedValue_12531_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_12545__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_12505_superEntityName_0, extractedValue_12531_propertyName_1, extractedValue_12545__2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12505_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (extractedValue_12531_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST needs_unwSelf'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needs_5F_unwSelf (const GGS_observablePropertyAST & inObject,
                                           const GGS_bool & constinArgument_inPreferences,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_12848__0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_12848__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_12899__0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_12899__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_12957__0 ;
      GGS_lstring extractedValue_12957__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_12957__0, extractedValue_12957__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_13017__0 ;
      GGS_lstring extractedValue_13017__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_13017__0, extractedValue_13017__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_13071__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_13071__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_13118__0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_13118__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 297)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_13189__0 ;
      GGS_lstring extractedValue_13189__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_13189__0, extractedValue_13189__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 299)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_13255__0 ;
      GGS_lstring extractedValue_13255__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_13255__0, extractedValue_13255__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 301)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_13322__0 ;
      GGS_lstring extractedValue_13322__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_13322__0, extractedValue_13322__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 303)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_13386__0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_13386__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 305)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_13447__0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_13447__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_13507__0 ;
      GGS_lstring extractedValue_13507__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_13507__0, extractedValue_13507__1) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_13566__0 ;
      GGS_lstring extractedValue_13566__1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_13566__0, extractedValue_13566__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_13633__0 ;
      GGS_lstring extractedValue_13633__1 ;
      GGS_lstring extractedValue_13633__2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_13633__0, extractedValue_13633__1, extractedValue_13633__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_13696__0 ;
      GGS_lstring extractedValue_13696__1 ;
      GGS_lstring extractedValue_13696__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_13696__0, extractedValue_13696__1, extractedValue_13696__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_13757__0 ;
      GGS_lstring extractedValue_13757__1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_13757__0, extractedValue_13757__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_13809__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_13809__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_13859__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_13859__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_13921__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_13921__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_13970__0 ;
      GGS_lstring extractedValue_13970__1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_13970__0, extractedValue_13970__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_14035__0 ;
      GGS_lstring extractedValue_14035__1 ;
      GGS_abstractDefaultValue extractedValue_14035__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_14035__0, extractedValue_14035__1, extractedValue_14035__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST location'
//--------------------------------------------------------------------------------------------------

GGS_location extensionGetter_location (const GGS_observablePropertyAST & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_14280_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_14280_propertyName_0) ;
      result_outResult = extractedValue_14280_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_14368_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_14368_propertyName_0) ;
      result_outResult = extractedValue_14368_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_14453__0 ;
      GGS_lstring extractedValue_14465_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_14453__0, extractedValue_14465_optionName_1) ;
      result_outResult = extractedValue_14465_optionName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_14548__0 ;
      GGS_lstring extractedValue_14560_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_14548__0, extractedValue_14560_propertyName_1) ;
      result_outResult = extractedValue_14560_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_14642_issueLocation_0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_14642_issueLocation_0) ;
      result_outResult = extractedValue_14642_issueLocation_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_14719_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_14719_propertyName_0) ;
      result_outResult = extractedValue_14719_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_14813_propertyName_0 ;
      GGS_lstring extractedValue_14827__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_14813_propertyName_0, extractedValue_14827__1) ;
      result_outResult = extractedValue_14813_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_14905_propertyName_0 ;
      GGS_lstring extractedValue_14919__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_14905_propertyName_0, extractedValue_14919__1) ;
      result_outResult = extractedValue_14905_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_14998_propertyName_0 ;
      GGS_lstring extractedValue_15012__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_14998_propertyName_0, extractedValue_15012__1) ;
      result_outResult = extractedValue_14998_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_15089_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_15089_propertyName_0) ;
      result_outResult = extractedValue_15089_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_15174_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_15174_propertyName_0) ;
      result_outResult = extractedValue_15174_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_15269_propertyName_0 ;
      GGS_lstring extractedValue_15283__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_15269_propertyName_0, extractedValue_15283__1) ;
      result_outResult = extractedValue_15269_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_15357__0 ;
      GGS_lstring extractedValue_15369_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_15357__0, extractedValue_15369_propertyName_1) ;
      result_outResult = extractedValue_15369_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_15464__0 ;
      GGS_lstring extractedValue_15464__1 ;
      GGS_lstring extractedValue_15476_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_15464__0, extractedValue_15464__1, extractedValue_15476_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15476_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_15585__0 ;
      GGS_lstring extractedValue_15585__1 ;
      GGS_lstring extractedValue_15597_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_15585__0, extractedValue_15585__1, extractedValue_15597_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15597_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_15703__0 ;
      GGS_lstring extractedValue_15715_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_15703__0, extractedValue_15715_propertyName_1) ;
      result_outResult = extractedValue_15715_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_15805_location_0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_15805_location_0) ;
      result_outResult = extractedValue_15805_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_15876_location_0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_15876_location_0) ;
      result_outResult = extractedValue_15876_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_15959_location_0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_15959_location_0) ;
      result_outResult = extractedValue_15959_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_16018__0 ;
      GGS_lstring extractedValue_16030_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_16018__0, extractedValue_16030_propertyName_1) ;
      result_outResult = extractedValue_16030_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_16122__0 ;
      GGS_lstring extractedValue_16134_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_16148__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_16122__0, extractedValue_16134_propertyName_1, extractedValue_16148__2) ;
      result_outResult = extractedValue_16134_propertyName_1.readProperty_location () ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const GGS_observablePropertyAST inObject,
                                                const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                GGS_propertyKind & outArgument_outKind,
                                                GGS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                                GGS_string & outArgument_outDefaultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  outArgument_outDefaultValue = GGS_string::makeEmptyString () ;
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_16725__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_16725__0) ;
      GGS_typeKind var_type_16738 = GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 393)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_16738, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 394))  COMMA_SOURCE_FILE ("observable-property.ggs", 394)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_16738, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 395)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_16947__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_16947__0) ;
      GGS_typeKind var_type_16960 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 397)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_16960, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 398))  COMMA_SOURCE_FILE ("observable-property.ggs", 398)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_16960, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 399)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_17174__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_17174__0) ;
      GGS_typeKind var_type_17187 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 401)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17187, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 402))  COMMA_SOURCE_FILE ("observable-property.ggs", 402)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17187, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 403)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_17405_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_17405_propertyName_0) ;
      GGS_actionMap joker_17496_2 ; // Joker input parameter
      GGS_bool joker_17496_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17405_propertyName_0, outArgument_outKind, joker_17496_2, joker_17496_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 405)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 410)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_17615_relationshipName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_17615_relationshipName_0) ;
      GGS_propertyKind var_kind_17703 ;
      GGS_actionMap joker_17715_2 ; // Joker input parameter
      GGS_bool joker_17715_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17615_relationshipName_0, var_kind_17703, joker_17715_2, joker_17715_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 412)) ;
      switch (var_kind_17703.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_17761__0 ;
          GGS_propertyAccessibility extractedValue_17761__1 ;
          var_kind_17703.getAssociatedValuesFor_property (extractedValue_17761__0, extractedValue_17761__1) ;
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_17615_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.ggs", 419)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_17867__0 ;
          GGS_propertyAccessibility extractedValue_17867__1 ;
          GGS_bool extractedValue_17867__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_17867__3 ;
          var_kind_17703.getAssociatedValuesFor_toMany (extractedValue_17867__0, extractedValue_17867__1, extractedValue_17867__2, extractedValue_17867__3) ;
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_17615_relationshipName_0.readProperty_location (), GGS_string ("an array property does not accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.ggs", 421)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_17979__0 ;
          GGS_propertyAccessibility extractedValue_17979__1 ;
          GGS_bool extractedValue_17979__2 ;
          GGS_toOneOppositeRelationship extractedValue_17979__3 ;
          GGS_bool extractedValue_17979__4 ;
          var_kind_17703.getAssociatedValuesFor_toOne (extractedValue_17979__0, extractedValue_17979__1, extractedValue_17979__2, extractedValue_17979__3, extractedValue_17979__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 423)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 423))  COMMA_SOURCE_FILE ("observable-property.ggs", 423)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_18105__0 ;
          GGS_bool extractedValue_18105__1 ;
          var_kind_17703.getAssociatedValuesFor_arrayController (extractedValue_18105__0, extractedValue_18105__1) ;
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_17615_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.ggs", 425)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_18232__0 ;
          var_kind_17703.getAssociatedValuesFor_selectionController (extractedValue_18232__0) ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_17615_relationshipName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.ggs", 427)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 429)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_18455_propertyName_0 ;
      GGS_lstring extractedValue_18478_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_18455_propertyName_0, extractedValue_18478_optionName_1) ;
      GGS_propertyKind var_kind_18556 ;
      GGS_actionMap joker_18568_2 ; // Joker input parameter
      GGS_bool joker_18568_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_18455_propertyName_0, var_kind_18556, joker_18568_2, joker_18568_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 431)) ;
      switch (var_kind_18556.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18614__0 ;
          GGS_propertyAccessibility extractedValue_18614__1 ;
          var_kind_18556.getAssociatedValuesFor_property (extractedValue_18614__0, extractedValue_18614__1) ;
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_18455_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.ggs", 438)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_18720__0 ;
          GGS_propertyAccessibility extractedValue_18720__1 ;
          GGS_bool extractedValue_18720__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_18720__3 ;
          var_kind_18556.getAssociatedValuesFor_toMany (extractedValue_18720__0, extractedValue_18720__1, extractedValue_18720__2, extractedValue_18720__3) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, extractedValue_18478_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 441)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 441))  COMMA_SOURCE_FILE ("observable-property.ggs", 441)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_18478_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.ggs", 443)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_18986__0 ;
          GGS_propertyAccessibility extractedValue_18986__1 ;
          GGS_bool extractedValue_18986__2 ;
          GGS_toOneOppositeRelationship extractedValue_18986__3 ;
          GGS_bool extractedValue_18986__4 ;
          var_kind_18556.getAssociatedValuesFor_toOne (extractedValue_18986__0, extractedValue_18986__1, extractedValue_18986__2, extractedValue_18986__3, extractedValue_18986__4) ;
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_18455_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.ggs", 446)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_19107__0 ;
          GGS_bool extractedValue_19107__1 ;
          var_kind_18556.getAssociatedValuesFor_arrayController (extractedValue_19107__0, extractedValue_19107__1) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, extractedValue_18478_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 449)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 449))  COMMA_SOURCE_FILE ("observable-property.ggs", 449)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, extractedValue_18478_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 451)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 451))  COMMA_SOURCE_FILE ("observable-property.ggs", 451)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_18478_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.ggs", 453)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_19537__0 ;
          var_kind_18556.getAssociatedValuesFor_selectionController (extractedValue_19537__0) ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_18455_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.ggs", 456)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 458)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_19762_relationshipName_0 ;
      GGS_lstring extractedValue_19789_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_19762_relationshipName_0, extractedValue_19789_propertyName_1) ;
      GGS_propertyKind var_kind_19893 ;
      GGS_actionMap joker_19905_2 ; // Joker input parameter
      GGS_bool joker_19905_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_19762_relationshipName_0, var_kind_19893, joker_19905_2, joker_19905_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 460)) ;
      switch (var_kind_19893.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_19951__0 ;
          GGS_propertyAccessibility extractedValue_19951__1 ;
          var_kind_19893.getAssociatedValuesFor_property (extractedValue_19951__0, extractedValue_19951__1) ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_19762_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.ggs", 467)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_20055_typeName_0 ;
          GGS_propertyAccessibility extractedValue_20066__1 ;
          GGS_bool extractedValue_20066__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_20066__3 ;
          var_kind_19893.getAssociatedValuesFor_toMany (extractedValue_20055_typeName_0, extractedValue_20066__1, extractedValue_20066__2, extractedValue_20066__3) ;
          GGS_propertyMap var_observablePropertyMap_20171 ;
          GGS_classKind joker_20162 ; // Joker input parameter
          GGS_actionMap joker_20194_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_20194_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_20055_typeName_0.readProperty_string (), extractedValue_19762_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE), joker_20162, var_observablePropertyMap_20171, joker_20194_2, joker_20194_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 469)) ;
          GGS_actionMap joker_20286_2 ; // Joker input parameter
          GGS_bool joker_20286_1 ; // Joker input parameter
          var_observablePropertyMap_20171.method_searchKey (extractedValue_19789_propertyName_1, outArgument_outKind, joker_20286_2, joker_20286_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_20315__0 ;
          GGS_propertyAccessibility extractedValue_20315__1 ;
          GGS_bool extractedValue_20315__2 ;
          GGS_toOneOppositeRelationship extractedValue_20315__3 ;
          GGS_bool extractedValue_20315__4 ;
          var_kind_19893.getAssociatedValuesFor_toOne (extractedValue_20315__0, extractedValue_20315__1, extractedValue_20315__2, extractedValue_20315__3, extractedValue_20315__4) ;
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_19762_relationshipName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.ggs", 476)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_20435__0 ;
          GGS_bool extractedValue_20435__1 ;
          var_kind_19893.getAssociatedValuesFor_arrayController (extractedValue_20435__0, extractedValue_20435__1) ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_19762_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.ggs", 478)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_20561__0 ;
          var_kind_19893.getAssociatedValuesFor_selectionController (extractedValue_20561__0) ;
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_19762_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.ggs", 480)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_19893, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 482)), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 482)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 482)).add_operation (extractedValue_19789_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 482)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 482)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_20804_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_20804_propertyName_0) ;
      GGS_actionMap joker_20901_2 ; // Joker input parameter
      GGS_bool joker_20901_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_20804_propertyName_0, outArgument_outKind, joker_20901_2, joker_20901_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 484)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_20950__0 ;
          GGS_propertyAccessibility extractedValue_20950__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_20950__0, extractedValue_20950__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 491)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_21050__0 ;
          GGS_propertyAccessibility extractedValue_21050__1 ;
          GGS_bool extractedValue_21050__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_21050__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_21050__0, extractedValue_21050__1, extractedValue_21050__2, extractedValue_21050__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_21141__0 ;
          GGS_propertyAccessibility extractedValue_21141__1 ;
          GGS_bool extractedValue_21141__2 ;
          GGS_toOneOppositeRelationship extractedValue_21141__3 ;
          GGS_bool extractedValue_21141__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_21141__0, extractedValue_21141__1, extractedValue_21141__2, extractedValue_21141__3, extractedValue_21141__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_21241__0 ;
          GGS_bool extractedValue_21241__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_21241__0, extractedValue_21241__1) ;
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_20804_propertyName_0.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.ggs", 497)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_21399__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_21399__0) ;
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_20804_propertyName_0.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.ggs", 499)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_21566__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_21566__0) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("Int") ;
      outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 503)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 503))  COMMA_SOURCE_FILE ("observable-property.ggs", 503)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_21765_propertyName_0 ;
      GGS_lstring extractedValue_21788_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_21765_propertyName_0, extractedValue_21788_optionName_1) ;
      GGS_propertyKind var_kind_21872 ;
      GGS_actionMap joker_21884_2 ; // Joker input parameter
      GGS_bool joker_21884_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_21765_propertyName_0, var_kind_21872, joker_21884_2, joker_21884_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 505)) ;
      switch (var_kind_21872.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_21930__0 ;
          GGS_propertyAccessibility extractedValue_21930__1 ;
          var_kind_21872.getAssociatedValuesFor_property (extractedValue_21930__0, extractedValue_21930__1) ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_21765_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.ggs", 512)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_22035__0 ;
          GGS_propertyAccessibility extractedValue_22035__1 ;
          GGS_bool extractedValue_22035__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_22035__3 ;
          var_kind_21872.getAssociatedValuesFor_toMany (extractedValue_22035__0, extractedValue_22035__1, extractedValue_22035__2, extractedValue_22035__3) ;
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, extractedValue_21788_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 515)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 515))  COMMA_SOURCE_FILE ("observable-property.ggs", 515)) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_21788_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.ggs", 517)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_22301__0 ;
          GGS_propertyAccessibility extractedValue_22301__1 ;
          GGS_bool extractedValue_22301__2 ;
          GGS_toOneOppositeRelationship extractedValue_22301__3 ;
          GGS_bool extractedValue_22301__4 ;
          var_kind_21872.getAssociatedValuesFor_toOne (extractedValue_22301__0, extractedValue_22301__1, extractedValue_22301__2, extractedValue_22301__3, extractedValue_22301__4) ;
          TC_Array <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (extractedValue_21765_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.ggs", 520)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_22413__0 ;
          GGS_bool extractedValue_22413__1 ;
          var_kind_21872.getAssociatedValuesFor_arrayController (extractedValue_22413__0, extractedValue_22413__1) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::equal, extractedValue_21788_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 523)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 523))  COMMA_SOURCE_FILE ("observable-property.ggs", 523)) ;
            }
          }
          if (GalgasBool::boolFalse == test_23) {
            GalgasBool test_24 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_24) {
              test_24 = GGS_bool (ComparisonKind::equal, extractedValue_21788_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 525)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 525))  COMMA_SOURCE_FILE ("observable-property.ggs", 525)) ;
              }
            }
            if (GalgasBool::boolFalse == test_24) {
              TC_Array <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_21788_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.ggs", 527)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_22843__0 ;
          var_kind_21872.getAssociatedValuesFor_selectionController (extractedValue_22843__0) ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (extractedValue_21765_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.ggs", 530)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 532)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_23052_propertyName_0 ;
      GGS_lstring extractedValue_23075_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_23052_propertyName_0, extractedValue_23075_elementPropertyName_1) ;
      GGS_propertyKind var_kind_23188 ;
      GGS_actionMap joker_23200_2 ; // Joker input parameter
      GGS_bool joker_23200_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_23052_propertyName_0, var_kind_23188, joker_23200_2, joker_23200_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 534)) ;
      switch (var_kind_23188.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_23246__0 ;
          GGS_propertyAccessibility extractedValue_23246__1 ;
          var_kind_23188.getAssociatedValuesFor_property (extractedValue_23246__0, extractedValue_23246__1) ;
          TC_Array <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_23052_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.ggs", 541)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_23350_typeName_0 ;
          GGS_propertyAccessibility extractedValue_23361__1 ;
          GGS_bool extractedValue_23361__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_23361__3 ;
          var_kind_23188.getAssociatedValuesFor_toMany (extractedValue_23350_typeName_0, extractedValue_23361__1, extractedValue_23361__2, extractedValue_23361__3) ;
          GGS_propertyMap var_observablePropertyMap_23430 ;
          GGS_classKind joker_23421 ; // Joker input parameter
          GGS_actionMap joker_23453_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_23453_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_23350_typeName_0, joker_23421, var_observablePropertyMap_23430, joker_23453_2, joker_23453_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 543)) ;
          GGS_actionMap joker_23552_2 ; // Joker input parameter
          GGS_bool joker_23552_1 ; // Joker input parameter
          var_observablePropertyMap_23430.method_searchKey (extractedValue_23075_elementPropertyName_1, outArgument_outKind, joker_23552_2, joker_23552_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 544)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_23581__0 ;
          GGS_propertyAccessibility extractedValue_23581__1 ;
          GGS_bool extractedValue_23581__2 ;
          GGS_toOneOppositeRelationship extractedValue_23581__3 ;
          GGS_bool extractedValue_23581__4 ;
          var_kind_23188.getAssociatedValuesFor_toOne (extractedValue_23581__0, extractedValue_23581__1, extractedValue_23581__2, extractedValue_23581__3, extractedValue_23581__4) ;
          TC_Array <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_23052_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.ggs", 550)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_23693__0 ;
          GGS_bool extractedValue_23693__1 ;
          var_kind_23188.getAssociatedValuesFor_arrayController (extractedValue_23693__0, extractedValue_23693__1) ;
          TC_Array <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_23052_propertyName_0.readProperty_location (), GGS_string ("an array controller accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.ggs", 552)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_23811__0 ;
          var_kind_23188.getAssociatedValuesFor_selectionController (extractedValue_23811__0) ;
          TC_Array <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_23052_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.ggs", 554)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_23188, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 556)), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 556)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 556)).add_operation (extractedValue_23075_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 557)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 557)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_24069_propertyName_0 ;
      GGS_lstring extractedValue_24092_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_24069_propertyName_0, extractedValue_24092_elementPropertyName_1) ;
      GGS_propertyKind var_kind_24205 ;
      GGS_actionMap joker_24217_2 ; // Joker input parameter
      GGS_bool joker_24217_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_24069_propertyName_0, var_kind_24205, joker_24217_2, joker_24217_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 559)) ;
      switch (var_kind_24205.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_24263__0 ;
          GGS_propertyAccessibility extractedValue_24263__1 ;
          var_kind_24205.getAssociatedValuesFor_property (extractedValue_24263__0, extractedValue_24263__1) ;
          TC_Array <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_24069_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'one'"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.ggs", 566)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_24372__0 ;
          GGS_propertyAccessibility extractedValue_24372__1 ;
          GGS_bool extractedValue_24372__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_24372__3 ;
          var_kind_24205.getAssociatedValuesFor_toMany (extractedValue_24372__0, extractedValue_24372__1, extractedValue_24372__2, extractedValue_24372__3) ;
          TC_Array <FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_24069_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'one'"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.ggs", 568)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_24477_typeName_0 ;
          GGS_propertyAccessibility extractedValue_24488__1 ;
          GGS_bool extractedValue_24488__2 ;
          GGS_toOneOppositeRelationship extractedValue_24488__3 ;
          GGS_bool extractedValue_24488__4 ;
          var_kind_24205.getAssociatedValuesFor_toOne (extractedValue_24477_typeName_0, extractedValue_24488__1, extractedValue_24488__2, extractedValue_24488__3, extractedValue_24488__4) ;
          GGS_propertyMap var_observablePropertyMap_24557 ;
          GGS_classKind joker_24548 ; // Joker input parameter
          GGS_actionMap joker_24580_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_24580_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_24477_typeName_0, joker_24548, var_observablePropertyMap_24557, joker_24580_2, joker_24580_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 570)) ;
          GGS_actionMap joker_24679_2 ; // Joker input parameter
          GGS_bool joker_24679_1 ; // Joker input parameter
          var_observablePropertyMap_24557.method_searchKey (extractedValue_24092_elementPropertyName_1, outArgument_outKind, joker_24679_2, joker_24679_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 571)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_24718__0 ;
          GGS_bool extractedValue_24718__1 ;
          var_kind_24205.getAssociatedValuesFor_arrayController (extractedValue_24718__0, extractedValue_24718__1) ;
          TC_Array <FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_24069_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.ggs", 577)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_24840__0 ;
          var_kind_24205.getAssociatedValuesFor_selectionController (extractedValue_24840__0) ;
          TC_Array <FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_24069_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.ggs", 579)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 581)).add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 581)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_25058_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_25058_propertyName_0) ;
      GGS_propertyKind var_kind_25161 ;
      GGS_actionMap joker_25173_2 ; // Joker input parameter
      GGS_bool joker_25173_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_25058_propertyName_0, var_kind_25161, joker_25173_2, joker_25173_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 583)) ;
      switch (var_kind_25161.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_25219__0 ;
          GGS_propertyAccessibility extractedValue_25219__1 ;
          var_kind_25161.getAssociatedValuesFor_property (extractedValue_25219__0, extractedValue_25219__1) ;
          TC_Array <FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_25058_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'none'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.ggs", 590)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_25329__0 ;
          GGS_propertyAccessibility extractedValue_25329__1 ;
          GGS_bool extractedValue_25329__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_25329__3 ;
          var_kind_25161.getAssociatedValuesFor_toMany (extractedValue_25329__0, extractedValue_25329__1, extractedValue_25329__2, extractedValue_25329__3) ;
          TC_Array <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_25058_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'none'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.ggs", 592)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_25436__0 ;
          GGS_propertyAccessibility extractedValue_25436__1 ;
          GGS_bool extractedValue_25436__2 ;
          GGS_toOneOppositeRelationship extractedValue_25436__3 ;
          GGS_bool extractedValue_25436__4 ;
          var_kind_25161.getAssociatedValuesFor_toOne (extractedValue_25436__0, extractedValue_25436__1, extractedValue_25436__2, extractedValue_25436__3, extractedValue_25436__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 594)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 594))  COMMA_SOURCE_FILE ("observable-property.ggs", 594)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_25562__0 ;
          GGS_bool extractedValue_25562__1 ;
          var_kind_25161.getAssociatedValuesFor_arrayController (extractedValue_25562__0, extractedValue_25562__1) ;
          TC_Array <FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_25058_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.ggs", 596)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_25685__0 ;
          var_kind_25161.getAssociatedValuesFor_selectionController (extractedValue_25685__0) ;
          TC_Array <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_25058_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.ggs", 598)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 600)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_25895_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_25895_propertyName_0) ;
      GGS_propertyMap var_observablePropertyMap_25996 ;
      GGS_classKind joker_25987 ; // Joker input parameter
      GGS_actionMap joker_26019_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_26019_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 602)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 602)), inCompiler COMMA_HERE), joker_25987, var_observablePropertyMap_25996, joker_26019_2, joker_26019_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 602)) ;
      GGS_actionMap joker_26103_2 ; // Joker input parameter
      GGS_bool joker_26103_1 ; // Joker input parameter
      var_observablePropertyMap_25996.method_searchKey (extractedValue_25895_propertyName_0, outArgument_outKind, joker_26103_2, joker_26103_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 603)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 608)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_26229_propertyName_0 ;
      GGS_lstring extractedValue_26252_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_26229_propertyName_0, extractedValue_26252_optionName_1) ;
      GGS_propertyMap var_observablePropertyMap_26351 ;
      GGS_classKind joker_26342 ; // Joker input parameter
      GGS_actionMap joker_26374_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_26374_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 610)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 610)), inCompiler COMMA_HERE), joker_26342, var_observablePropertyMap_26351, joker_26374_2, joker_26374_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 610)) ;
      GGS_propertyKind var_kind_26447 ;
      GGS_actionMap joker_26459_2 ; // Joker input parameter
      GGS_bool joker_26459_1 ; // Joker input parameter
      var_observablePropertyMap_26351.method_searchKey (extractedValue_26229_propertyName_0, var_kind_26447, joker_26459_2, joker_26459_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 611)) ;
      switch (var_kind_26447.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_26505__0 ;
          GGS_propertyAccessibility extractedValue_26505__1 ;
          var_kind_26447.getAssociatedValuesFor_property (extractedValue_26505__0, extractedValue_26505__1) ;
          TC_Array <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_26229_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.ggs", 618)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_26611__0 ;
          GGS_propertyAccessibility extractedValue_26611__1 ;
          GGS_bool extractedValue_26611__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_26611__3 ;
          var_kind_26447.getAssociatedValuesFor_toMany (extractedValue_26611__0, extractedValue_26611__1, extractedValue_26611__2, extractedValue_26611__3) ;
          TC_Array <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_26229_propertyName_0.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.ggs", 620)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_26723__0 ;
          GGS_propertyAccessibility extractedValue_26723__1 ;
          GGS_bool extractedValue_26723__2 ;
          GGS_toOneOppositeRelationship extractedValue_26723__3 ;
          GGS_bool extractedValue_26723__4 ;
          var_kind_26447.getAssociatedValuesFor_toOne (extractedValue_26723__0, extractedValue_26723__1, extractedValue_26723__2, extractedValue_26723__3, extractedValue_26723__4) ;
          TC_Array <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_26229_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.ggs", 622)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_26844__0 ;
          GGS_bool extractedValue_26844__1 ;
          var_kind_26447.getAssociatedValuesFor_arrayController (extractedValue_26844__0, extractedValue_26844__1) ;
          GalgasBool test_42 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_42) {
            test_42 = GGS_bool (ComparisonKind::equal, extractedValue_26252_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_42) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 625)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 625))  COMMA_SOURCE_FILE ("observable-property.ggs", 625)) ;
            }
          }
          if (GalgasBool::boolFalse == test_42) {
            GalgasBool test_43 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_43) {
              test_43 = GGS_bool (ComparisonKind::equal, extractedValue_26252_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_43) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 627)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 627))  COMMA_SOURCE_FILE ("observable-property.ggs", 627)) ;
              }
            }
            if (GalgasBool::boolFalse == test_43) {
              TC_Array <FixItDescription> fixItArray44 ;
              inCompiler->emitSemanticError (extractedValue_26252_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray44  COMMA_SOURCE_FILE ("observable-property.ggs", 629)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_27274__0 ;
          var_kind_26447.getAssociatedValuesFor_selectionController (extractedValue_27274__0) ;
          TC_Array <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (extractedValue_26229_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray45  COMMA_SOURCE_FILE ("observable-property.ggs", 632)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 634)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_27497_controllerName_0 ;
      GGS_lstring extractedValue_27522_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_27497_controllerName_0, extractedValue_27522_propertyName_1) ;
      GGS_propertyKind var_propertyKind_27624 ;
      GGS_actionMap joker_27644_2 ; // Joker input parameter
      GGS_bool joker_27644_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_27497_controllerName_0, var_propertyKind_27624, joker_27644_2, joker_27644_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 636)) ;
      switch (var_propertyKind_27624.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_27698__0 ;
          GGS_propertyAccessibility extractedValue_27698__1 ;
          var_propertyKind_27624.getAssociatedValuesFor_property (extractedValue_27698__0, extractedValue_27698__1) ;
          TC_Array <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (extractedValue_27522_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.ggs", 643)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_27804__0 ;
          GGS_propertyAccessibility extractedValue_27804__1 ;
          GGS_bool extractedValue_27804__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_27804__3 ;
          var_propertyKind_27624.getAssociatedValuesFor_toMany (extractedValue_27804__0, extractedValue_27804__1, extractedValue_27804__2, extractedValue_27804__3) ;
          TC_Array <FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_27522_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.ggs", 645)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_27916__0 ;
          GGS_propertyAccessibility extractedValue_27916__1 ;
          GGS_bool extractedValue_27916__2 ;
          GGS_toOneOppositeRelationship extractedValue_27916__3 ;
          GGS_bool extractedValue_27916__4 ;
          var_propertyKind_27624.getAssociatedValuesFor_toOne (extractedValue_27916__0, extractedValue_27916__1, extractedValue_27916__2, extractedValue_27916__3, extractedValue_27916__4) ;
          TC_Array <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_27522_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.ggs", 647)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_28036_typeName_0 ;
          GGS_bool extractedValue_28046_graphic_1 ;
          var_propertyKind_27624.getAssociatedValuesFor_arrayController (extractedValue_28036_typeName_0, extractedValue_28046_graphic_1) ;
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            GGS_bool test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27522_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
            if (GalgasBool::boolTrue != test_50.boolEnum ()) {
              test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27522_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
            }
            test_49 = test_50.boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              outArgument_outKind = GGS_propertyKind::class_func_toMany (extractedValue_28036_typeName_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 652)), extractedValue_28046_graphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("observable-property.ggs", 654))  COMMA_SOURCE_FILE ("observable-property.ggs", 650)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            TC_Array <FixItDescription> fixItArray51 ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
            inCompiler->emitSemanticError (extractedValue_27522_propertyName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray51  COMMA_SOURCE_FILE ("observable-property.ggs", 657)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_28592_entityName_0 ;
          var_propertyKind_27624.getAssociatedValuesFor_selectionController (extractedValue_28592_entityName_0) ;
          GGS_propertyMap var_observablePropertyMap_28725 ;
          GGS_classKind joker_28708 ; // Joker input parameter
          GGS_actionMap joker_28756_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_28756_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_28592_entityName_0, extractedValue_27497_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_28708, var_observablePropertyMap_28725, joker_28756_2, joker_28756_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 663)) ;
          GGS_actionMap joker_28831_2 ; // Joker input parameter
          GGS_bool joker_28831_1 ; // Joker input parameter
          var_observablePropertyMap_28725.method_searchKey (extractedValue_27522_propertyName_1, outArgument_outKind, joker_28831_2, joker_28831_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 669)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 671)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_28968_controllerName_0 ;
      GGS_lstring extractedValue_28993_propertyName_1 ;
      GGS_lstring extractedValue_29016_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_28968_controllerName_0, extractedValue_28993_propertyName_1, extractedValue_29016_secondaryPropertyName_2) ;
      GGS_propertyKind joker_29096_3 ; // Joker input parameter
      GGS_actionMap joker_29096_2 ; // Joker input parameter
      GGS_bool joker_29096_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_28968_controllerName_0, joker_29096_3, joker_29096_2, joker_29096_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 673)) ;
      GalgasBool test_52 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_52) {
        GGS_bool test_53 = GGS_bool (ComparisonKind::equal, extractedValue_28993_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
        if (GalgasBool::boolTrue == test_53.boolEnum ()) {
          test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29016_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
        }
        test_52 = test_53.boolEnum () ;
        if (GalgasBool::boolTrue == test_52) {
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 675)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 675))  COMMA_SOURCE_FILE ("observable-property.ggs", 675)) ;
        }
      }
      if (GalgasBool::boolFalse == test_52) {
        GalgasBool test_54 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_54) {
          GGS_bool test_55 = GGS_bool (ComparisonKind::equal, extractedValue_28993_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
          if (GalgasBool::boolTrue == test_55.boolEnum ()) {
            test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29016_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
          }
          test_54 = test_55.boolEnum () ;
          if (GalgasBool::boolTrue == test_54) {
            outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 677)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 677))  COMMA_SOURCE_FILE ("observable-property.ggs", 677)) ;
          }
        }
        if (GalgasBool::boolFalse == test_54) {
          TC_Array <FixItDescription> fixItArray56 ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_28993_propertyName_1.readProperty_location (), GGS_string ("unknown option"), fixItArray56  COMMA_SOURCE_FILE ("observable-property.ggs", 679)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 681)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_29750_controllerName_0 ;
      GGS_lstring extractedValue_29775_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_29750_controllerName_0, extractedValue_29775_propertyName_1) ;
      GGS_propertyKind var_propertyKind_29865 ;
      GGS_actionMap joker_29879_2 ; // Joker input parameter
      GGS_bool joker_29879_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_29750_controllerName_0, var_propertyKind_29865, joker_29879_2, joker_29879_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 683)) ;
      GGS_string var_controllerTypeName_29900 = GGS_string::makeEmptyString () ;
      switch (var_propertyKind_29865.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_29975__0 ;
          GGS_bool extractedValue_29975__1 ;
          var_propertyKind_29865.getAssociatedValuesFor_arrayController (extractedValue_29975__0, extractedValue_29975__1) ;
          TC_Array <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (extractedValue_29750_controllerName_0.readProperty_location (), GGS_string ("an array controller does not support 'one'"), fixItArray57  COMMA_SOURCE_FILE ("observable-property.ggs", 687)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_30084__0 ;
          var_propertyKind_29865.getAssociatedValuesFor_selectionController (extractedValue_30084__0) ;
          TC_Array <FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_29750_controllerName_0.readProperty_location (), GGS_string ("a selection controller does not support 'one'"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.ggs", 689)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_30186__0 ;
          GGS_propertyAccessibility extractedValue_30186__1 ;
          var_propertyKind_29865.getAssociatedValuesFor_property (extractedValue_30186__0, extractedValue_30186__1) ;
          TC_Array <FixItDescription> fixItArray59 ;
          inCompiler->emitSemanticError (extractedValue_29750_controllerName_0.readProperty_location (), GGS_string ("a property does not support 'one'"), fixItArray59  COMMA_SOURCE_FILE ("observable-property.ggs", 691)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_30274__0 ;
          GGS_propertyAccessibility extractedValue_30274__1 ;
          GGS_bool extractedValue_30274__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_30274__3 ;
          var_propertyKind_29865.getAssociatedValuesFor_toMany (extractedValue_30274__0, extractedValue_30274__1, extractedValue_30274__2, extractedValue_30274__3) ;
          TC_Array <FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (extractedValue_29750_controllerName_0.readProperty_location (), GGS_string ("a toMany relationship does not support 'one'"), fixItArray60  COMMA_SOURCE_FILE ("observable-property.ggs", 693)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_30372__0 ;
          GGS_propertyAccessibility extractedValue_30372__1 ;
          GGS_bool extractedValue_30372__2 ;
          GGS_toOneOppositeRelationship extractedValue_30372__3 ;
          GGS_bool extractedValue_30372__4 ;
          var_propertyKind_29865.getAssociatedValuesFor_toOne (extractedValue_30372__0, extractedValue_30372__1, extractedValue_30372__2, extractedValue_30372__3, extractedValue_30372__4) ;
          TC_Array <FixItDescription> fixItArray61 ;
          inCompiler->emitSemanticError (extractedValue_29750_controllerName_0.readProperty_location (), GGS_string ("a toOne relationship does not support 'one'"), fixItArray61  COMMA_SOURCE_FILE ("observable-property.ggs", 695)) ;
        }
        break ;
      }
      GGS_propertyMap var_observablePropertyMap_30579 ;
      GGS_classKind joker_30564 ; // Joker input parameter
      GGS_actionMap joker_30608_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_30608_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (var_controllerTypeName_29900, extractedValue_29750_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_30564, var_observablePropertyMap_30579, joker_30608_2, joker_30608_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 697)) ;
      GGS_actionMap joker_30678_2 ; // Joker input parameter
      GGS_bool joker_30678_1 ; // Joker input parameter
      var_observablePropertyMap_30579.method_searchKey (extractedValue_29775_propertyName_1, outArgument_outKind, joker_30678_2, joker_30678_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 703)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = var_controllerTypeName_29900.add_operation (GGS_string ("\?<<8>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 704)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_30811_controllerName_0 ;
      GGS_lstring extractedValue_30836_propertyName_1 ;
      GGS_lstring extractedValue_30859_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_30811_controllerName_0, extractedValue_30836_propertyName_1, extractedValue_30859_secondaryPropertyName_2) ;
      GGS_propertyKind var_propertyKind_30958 ;
      GGS_actionMap joker_30972_2 ; // Joker input parameter
      GGS_bool joker_30972_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_30811_controllerName_0, var_propertyKind_30958, joker_30972_2, joker_30972_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 706)) ;
      GalgasBool test_62 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_62) {
        test_62 = GGS_bool (ComparisonKind::notEqual, extractedValue_30836_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_62) {
          TC_Array <FixItDescription> fixItArray63 ;
          appendFixItActions (fixItArray63, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_30836_propertyName_1.readProperty_location (), GGS_string ("unknown property"), fixItArray63  COMMA_SOURCE_FILE ("observable-property.ggs", 708)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_62) {
        outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 712)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 712))  COMMA_SOURCE_FILE ("observable-property.ggs", 712)) ;
        switch (var_propertyKind_30958.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_31345__0 ;
            GGS_propertyAccessibility extractedValue_31345__1 ;
            var_propertyKind_30958.getAssociatedValuesFor_property (extractedValue_31345__0, extractedValue_31345__1) ;
            TC_Array <FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (extractedValue_30836_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray64  COMMA_SOURCE_FILE ("observable-property.ggs", 715)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_31523__0 ;
            GGS_propertyAccessibility extractedValue_31523__1 ;
            GGS_bool extractedValue_31523__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_31523__3 ;
            var_propertyKind_30958.getAssociatedValuesFor_toMany (extractedValue_31523__0, extractedValue_31523__1, extractedValue_31523__2, extractedValue_31523__3) ;
            TC_Array <FixItDescription> fixItArray65 ;
            inCompiler->emitSemanticError (extractedValue_30836_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray65  COMMA_SOURCE_FILE ("observable-property.ggs", 719)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_31706__0 ;
            GGS_propertyAccessibility extractedValue_31706__1 ;
            GGS_bool extractedValue_31706__2 ;
            GGS_toOneOppositeRelationship extractedValue_31706__3 ;
            GGS_bool extractedValue_31706__4 ;
            var_propertyKind_30958.getAssociatedValuesFor_toOne (extractedValue_31706__0, extractedValue_31706__1, extractedValue_31706__2, extractedValue_31706__3, extractedValue_31706__4) ;
            TC_Array <FixItDescription> fixItArray66 ;
            inCompiler->emitSemanticError (extractedValue_30836_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray66  COMMA_SOURCE_FILE ("observable-property.ggs", 723)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_31898_typeName_0 ;
            GGS_bool extractedValue_31908__1 ;
            var_propertyKind_30958.getAssociatedValuesFor_arrayController (extractedValue_31898_typeName_0, extractedValue_31908__1) ;
            GGS_propertyMap var_observablePropertyMap_32039 ;
            GGS_classKind joker_32020 ; // Joker input parameter
            GGS_actionMap joker_32072_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_32072_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_31898_typeName_0.readProperty_string (), extractedValue_30811_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32020, var_observablePropertyMap_32039, joker_32072_2, joker_32072_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 727)) ;
            GGS_actionMap joker_32159_2 ; // Joker input parameter
            GGS_bool joker_32159_1 ; // Joker input parameter
            var_observablePropertyMap_32039.method_searchKey (extractedValue_30859_secondaryPropertyName_2, outArgument_outKind, joker_32159_2, joker_32159_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 733)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_31898_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (extractedValue_30859_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_32308_entityName_0 ;
            var_propertyKind_30958.getAssociatedValuesFor_selectionController (extractedValue_32308_entityName_0) ;
            GGS_propertyMap var_observablePropertyMap_32449 ;
            GGS_classKind joker_32430 ; // Joker input parameter
            GGS_actionMap joker_32482_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_32482_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32308_entityName_0, extractedValue_30811_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32430, var_observablePropertyMap_32449, joker_32482_2, joker_32482_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 736)) ;
            GGS_actionMap joker_32570_2 ; // Joker input parameter
            GGS_bool joker_32570_1 ; // Joker input parameter
            var_observablePropertyMap_32449.method_searchKey (extractedValue_30859_secondaryPropertyName_2, outArgument_outKind, joker_32570_2, joker_32570_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 742)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32308_entityName_0, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 743)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 743)).add_operation (extractedValue_30859_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 743)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 743)) ;
          }
          break ;
        }
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_32729__0 ;
      GGS_lstring extractedValue_32741_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_32729__0, extractedValue_32741_propertyName_1) ;
      GGS_actionMap joker_32838_2 ; // Joker input parameter
      GGS_bool joker_32838_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_32741_propertyName_1, outArgument_outKind, joker_32838_2, joker_32838_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 747)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_32887__0 ;
          GGS_propertyAccessibility extractedValue_32887__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_32887__0, extractedValue_32887__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 754)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_32987__0 ;
          GGS_propertyAccessibility extractedValue_32987__1 ;
          GGS_bool extractedValue_32987__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_32987__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_32987__0, extractedValue_32987__1, extractedValue_32987__2, extractedValue_32987__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_33078__0 ;
          GGS_propertyAccessibility extractedValue_33078__1 ;
          GGS_bool extractedValue_33078__2 ;
          GGS_toOneOppositeRelationship extractedValue_33078__3 ;
          GGS_bool extractedValue_33078__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_33078__0, extractedValue_33078__1, extractedValue_33078__2, extractedValue_33078__3, extractedValue_33078__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_33178__0 ;
          GGS_bool extractedValue_33178__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_33178__0, extractedValue_33178__1) ;
          TC_Array <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (extractedValue_32741_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray67  COMMA_SOURCE_FILE ("observable-property.ggs", 760)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_33336__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_33336__0) ;
          TC_Array <FixItDescription> fixItArray68 ;
          inCompiler->emitSemanticError (extractedValue_32741_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray68  COMMA_SOURCE_FILE ("observable-property.ggs", 762)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_33513__0 ;
      GGS_lstring extractedValue_33525_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_33539_defaultValue_2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_33513__0, extractedValue_33525_propertyName_1, extractedValue_33539_defaultValue_2) ;
      GGS_actionMap joker_33636_2 ; // Joker input parameter
      GGS_bool joker_33636_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_33525_propertyName_1, outArgument_outKind, joker_33636_2, joker_33636_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 765)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_33684_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_33698__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_33684_propertyType_0, extractedValue_33698__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 772)) ;
          GGS_propertyMap var_preferencesPropertyMap_33867 ;
          GGS_classKind joker_33858 ; // Joker input parameter
          GGS_actionMap joker_33891_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_33891_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 773)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 773)), inCompiler COMMA_HERE), joker_33858, var_preferencesPropertyMap_33867, joker_33891_2, joker_33891_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 773)) ;
          GGS_typeKindList temp_69 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 775)) ;
          temp_69.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_33684_propertyType_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("observable-property.ggs", 775)) ;
          callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) extractedValue_33539_defaultValue_2.ptr (), temp_69, var_preferencesPropertyMap_33867, outArgument_outDefaultValue, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 774)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_34051__0 ;
          GGS_propertyAccessibility extractedValue_34051__1 ;
          GGS_bool extractedValue_34051__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_34051__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_34051__0, extractedValue_34051__1, extractedValue_34051__2, extractedValue_34051__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_34142__0 ;
          GGS_propertyAccessibility extractedValue_34142__1 ;
          GGS_bool extractedValue_34142__2 ;
          GGS_toOneOppositeRelationship extractedValue_34142__3 ;
          GGS_bool extractedValue_34142__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_34142__0, extractedValue_34142__1, extractedValue_34142__2, extractedValue_34142__3, extractedValue_34142__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_34242__0 ;
          GGS_bool extractedValue_34242__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_34242__0, extractedValue_34242__1) ;
          TC_Array <FixItDescription> fixItArray70 ;
          inCompiler->emitSemanticError (extractedValue_33525_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray70  COMMA_SOURCE_FILE ("observable-property.ggs", 784)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_34400__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_34400__0) ;
          TC_Array <FixItDescription> fixItArray71 ;
          inCompiler->emitSemanticError (extractedValue_33525_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray71  COMMA_SOURCE_FILE ("observable-property.ggs", 786)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedPropertyDeclarationAST_2E_weak::objectCompare (const GGS_computedPropertyDeclarationAST_2E_weak & inOperand) const {
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

GGS_computedPropertyDeclarationAST_2E_weak::GGS_computedPropertyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak & GGS_computedPropertyDeclarationAST_2E_weak::operator = (const GGS_computedPropertyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak::GGS_computedPropertyDeclarationAST_2E_weak (const GGS_computedPropertyDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak GGS_computedPropertyDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST_2E_weak::bang_computedPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyDeclarationAST) ;
      result = GGS_computedPropertyDeclarationAST ((cPtr_computedPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedPropertyDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ("computedPropertyDeclarationAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak GGS_computedPropertyDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyDeclarationAST_2E_weak result ;
  const GGS_computedPropertyDeclarationAST_2E_weak * p = (const GGS_computedPropertyDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @propertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyGeneration::objectCompare (const GGS_propertyGeneration & inOperand) const {
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

GGS_propertyGeneration::GGS_propertyGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_propertyGeneration::
propertyGeneration_init_21_ (const GGS_string & in_mPropertyName,
                             Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration::GGS_propertyGeneration (const cPtr_propertyGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_propertyGeneration::readProperty_mPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_propertyGeneration * p = (cPtr_propertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyGeneration) ;
    return p->mProperty_mPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGeneration::setProperty_mPropertyName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_propertyGeneration * p = (cPtr_propertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyGeneration) ;
    p->mProperty_mPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @propertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_propertyGeneration::cPtr_propertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_propertyGeneration::cPtr_propertyGeneration (const GGS_string & in_mPropertyName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mPropertyName () {
  mProperty_mPropertyName = in_mPropertyName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_propertyGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mPropertyName.printNonNullClassInstanceProperties ("mPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @propertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration ("propertyGeneration",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration GGS_propertyGeneration::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGeneration result ;
  const GGS_propertyGeneration * p = (const GGS_propertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientDependencyListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientDependencyListForGeneration : public cCollectionElement {
  public: GGS_transientDependencyListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                   const GGS_string & in_mFunctionArgumentName,
                                                                   const GGS_string & in_mFunctionArgumentTypeString,
                                                                   const GGS_string & in_mDefaultValueAsString
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                  const GGS_string & in_mFunctionArgumentName,
                                                                                                                  const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                  const GGS_string & in_mDefaultValueAsString
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString, in_mDefaultValueAsString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDependency, inElement.mProperty_mFunctionArgumentName, inElement.mProperty_mFunctionArgumentTypeString, inElement.mProperty_mDefaultValueAsString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientDependencyListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientDependencyListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientDependencyListForGeneration (mObject.mProperty_mDependency, mObject.mProperty_mFunctionArgumentName, mObject.mProperty_mFunctionArgumentTypeString, mObject.mProperty_mDefaultValueAsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_transientDependencyListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependency" ":") ;
  mObject.mProperty_mDependency.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionArgumentName" ":") ;
  mObject.mProperty_mFunctionArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFunctionArgumentTypeString" ":") ;
  mObject.mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDefaultValueAsString" ":") ;
  mObject.mProperty_mDefaultValueAsString.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration::GGS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_transientDependencyListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_transientDependencyListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusPlusAssignOperation (const GGS_transientDependencyListForGeneration_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::class_func_listWithValue (const GGS_observablePropertyAST & inOperand0,
                                                                                                             const GGS_string & inOperand1,
                                                                                                             const GGS_string & inOperand2,
                                                                                                             const GGS_string & inOperand3
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_transientDependencyListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_transientDependencyListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_observablePropertyAST & in_mDependency,
                                                                          const GGS_string & in_mFunctionArgumentName,
                                                                          const GGS_string & in_mFunctionArgumentTypeString,
                                                                          const GGS_string & in_mDefaultValueAsString
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (in_mDependency,
                                                                          in_mFunctionArgumentName,
                                                                          in_mFunctionArgumentTypeString,
                                                                          in_mDefaultValueAsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::addAssignOperation (const GGS_observablePropertyAST & inOperand0,
                                                                   const GGS_string & inOperand1,
                                                                   const GGS_string & inOperand2,
                                                                   const GGS_string & inOperand3
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_append (const GGS_observablePropertyAST inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_string inOperand2,
                                                              const GGS_string inOperand3,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_insertAtIndex (const GGS_observablePropertyAST inOperand0,
                                                                     const GGS_string inOperand1,
                                                                     const GGS_string inOperand2,
                                                                     const GGS_string inOperand3,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientDependencyListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_removeAtIndex (GGS_observablePropertyAST & outOperand0,
                                                                     GGS_string & outOperand1,
                                                                     GGS_string & outOperand2,
                                                                     GGS_string & outOperand3,
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
    cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mDependency ;
      outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
      outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
      outOperand3 = p->mObject.mProperty_mDefaultValueAsString ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popFirst (GGS_observablePropertyAST & outOperand0,
                                                                GGS_string & outOperand1,
                                                                GGS_string & outOperand2,
                                                                GGS_string & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
    outOperand3 = p->mObject.mProperty_mDefaultValueAsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_popLast (GGS_observablePropertyAST & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               GGS_string & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
    outOperand3 = p->mObject.mProperty_mDefaultValueAsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_first (GGS_observablePropertyAST & outOperand0,
                                                             GGS_string & outOperand1,
                                                             GGS_string & outOperand2,
                                                             GGS_string & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
    outOperand3 = p->mObject.mProperty_mDefaultValueAsString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::method_last (GGS_observablePropertyAST & outOperand0,
                                                            GGS_string & outOperand1,
                                                            GGS_string & outOperand2,
                                                            GGS_string & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDependency ;
    outOperand1 = p->mObject.mProperty_mFunctionArgumentName ;
    outOperand2 = p->mObject.mProperty_mFunctionArgumentTypeString ;
    outOperand3 = p->mObject.mProperty_mDefaultValueAsString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::add_operation (const GGS_transientDependencyListForGeneration & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result = GGS_transientDependencyListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result = GGS_transientDependencyListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_transientDependencyListForGeneration result = GGS_transientDependencyListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::plusAssignOperation (const GGS_transientDependencyListForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMDependencyAtIndex (GGS_observablePropertyAST inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependency = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_transientDependencyListForGeneration::getter_mDependencyAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GGS_observablePropertyAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mDependency ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentNameAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentNameAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mFunctionArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMFunctionArgumentTypeStringAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionArgumentTypeString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientDependencyListForGeneration::getter_mFunctionArgumentTypeStringAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mFunctionArgumentTypeString ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration::setter_setMDefaultValueAsStringAtIndex (GGS_string inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDefaultValueAsString = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientDependencyListForGeneration::getter_mDefaultValueAsStringAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDependencyListForGeneration * p = (cCollectionElement_transientDependencyListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
    result = p->mObject.mProperty_mDefaultValueAsString ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientDependencyListForGeneration::DownEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element DownEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST DownEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDefaultValueAsString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientDependencyListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientDependencyListForGeneration::UpEnumerator_transientDependencyListForGeneration (const GGS_transientDependencyListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element UpEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST UpEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDependency ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentTypeString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientDependencyListForGeneration::current_mDefaultValueAsString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDefaultValueAsString ;
}




//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration ("transientDependencyListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientDependencyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDependencyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDependencyListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientDependencyListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration result ;
  const GGS_transientDependencyListForGeneration * p = (const GGS_transientDependencyListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDependencyListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyGeneration_2E_weak::objectCompare (const GGS_propertyGeneration_2E_weak & inOperand) const {
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

GGS_propertyGeneration_2E_weak::GGS_propertyGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration_2E_weak & GGS_propertyGeneration_2E_weak::operator = (const GGS_propertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration_2E_weak::GGS_propertyGeneration_2E_weak (const GGS_propertyGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration_2E_weak GGS_propertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_propertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration GGS_propertyGeneration_2E_weak::bang_propertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_propertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_propertyGeneration) ;
      result = GGS_propertyGeneration ((cPtr_propertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ("propertyGeneration.weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration_2E_weak GGS_propertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyGeneration_2E_weak result ;
  const GGS_propertyGeneration_2E_weak * p = (const GGS_propertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@computedPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_computedPropertyGenerationList : public cCollectionElement {
  public: GGS_computedPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_computedPropertyGenerationList::cCollectionElement_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_computedPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_computedPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_computedPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_computedPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_computedPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_computedPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusPlusAssignOperation (const GGS_computedPropertyGenerationList_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::class_func_listWithValue (const GGS_computedPropertyGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_computedPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_computedPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_computedPropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_computedPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_computedPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::addAssignOperation (const GGS_computedPropertyGeneration & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_append (const GGS_computedPropertyGeneration inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_insertAtIndex (const GGS_computedPropertyGeneration inOperand0,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_computedPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_removeAtIndex (GGS_computedPropertyGeneration & outOperand0,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_popFirst (GGS_computedPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_popLast (GGS_computedPropertyGeneration & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::method_first (GGS_computedPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::method_last (GGS_computedPropertyGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::add_operation (const GGS_computedPropertyGenerationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result = GGS_computedPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result = GGS_computedPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result = GGS_computedPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusAssignOperation (const GGS_computedPropertyGenerationList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_setMPropertyAtIndex (GGS_computedPropertyGeneration inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_computedPropertyGenerationList * p = (cCollectionElement_computedPropertyGenerationList *) attributes.ptr () ;
  GGS_computedPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_computedPropertyGenerationList::DownEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element DownEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration DownEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_computedPropertyGenerationList::UpEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element UpEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration UpEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_computedPropertyGenerationList * p = (const cCollectionElement_computedPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_computedPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @computedPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ("computedPropertyGenerationList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  const GGS_computedPropertyGenerationList * p = (const GGS_computedPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computeRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeRoutineGeneration::objectCompare (const GGS_computeRoutineGeneration & inOperand) const {
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

GGS_computeRoutineGeneration::GGS_computeRoutineGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::
init_21__21__21__21_ (const GGS_string & in_mOwnerName,
                      const GGS_string & in_mTransientName,
                      const GGS_typeKind & in_mTransientType,
                      const GGS_transientDependencyListForGeneration & in_mDependencyList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_computeRoutineGeneration * object = nullptr ;
  macroMyNew (object, cPtr_computeRoutineGeneration (inCompiler COMMA_THERE)) ;
  object->computeRoutineGeneration_init_21__21__21__21_ (in_mOwnerName, in_mTransientName, in_mTransientType, in_mDependencyList, inCompiler) ;
  const GGS_computeRoutineGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_computeRoutineGeneration::
computeRoutineGeneration_init_21__21__21__21_ (const GGS_string & in_mOwnerName,
                                               const GGS_string & in_mTransientName,
                                               const GGS_typeKind & in_mTransientType,
                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                               Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration::GGS_computeRoutineGeneration (const cPtr_computeRoutineGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computeRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                           const GGS_string & in_mTransientName,
                                                                           const GGS_typeKind & in_mTransientType,
                                                                           const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_computeRoutineGeneration (in_mOwnerName, in_mTransientName, in_mTransientType, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_computeRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mTransientName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_computeRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mTransientType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_computeRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computeRoutineGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computeRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computeRoutineGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computeRoutineGeneration::cPtr_computeRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_computeRoutineGeneration::cPtr_computeRoutineGeneration (const GGS_string & in_mOwnerName,
                                                              const GGS_string & in_mTransientName,
                                                              const GGS_typeKind & in_mTransientType,
                                                              const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mDependencyList () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computeRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

void cPtr_computeRoutineGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@computeRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computeRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computeRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computeRoutineGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mTransientType.printNonNullClassInstanceProperties ("mTransientType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @computeRoutineGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ("computeRoutineGeneration",
                                                                                & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computeRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration result ;
  const GGS_computeRoutineGeneration * p = (const GGS_computeRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computeRoutineGeneration_2E_weak::objectCompare (const GGS_computeRoutineGeneration_2E_weak & inOperand) const {
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

GGS_computeRoutineGeneration_2E_weak::GGS_computeRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak & GGS_computeRoutineGeneration_2E_weak::operator = (const GGS_computeRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak::GGS_computeRoutineGeneration_2E_weak (const GGS_computeRoutineGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak GGS_computeRoutineGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computeRoutineGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration_2E_weak::bang_computeRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computeRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computeRoutineGeneration) ;
      result = GGS_computeRoutineGeneration ((cPtr_computeRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computeRoutineGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ("computeRoutineGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computeRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computeRoutineGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computeRoutineGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak GGS_computeRoutineGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computeRoutineGeneration_2E_weak result ;
  const GGS_computeRoutineGeneration_2E_weak * p = (const GGS_computeRoutineGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computeRoutineGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computeRoutineGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientDeclarationAST_2E_weak::objectCompare (const GGS_transientDeclarationAST_2E_weak & inOperand) const {
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

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak & GGS_transientDeclarationAST_2E_weak::operator = (const GGS_transientDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak::GGS_transientDeclarationAST_2E_weak (const GGS_transientDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST GGS_transientDeclarationAST_2E_weak::bang_transientDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientDeclarationAST) ;
      result = GGS_transientDeclarationAST ((cPtr_transientDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ("transientDeclarationAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDeclarationAST_2E_weak GGS_transientDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDeclarationAST_2E_weak result ;
  const GGS_transientDeclarationAST_2E_weak * p = (const GGS_transientDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                                 const GGS_string & in_mClassName,
                                                                                 const GGS_typeKind & in_mType,
                                                                                 const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                                 const GGS_bool & in_mGenerate,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (in_mPropertyName, in_mClassName, in_mType, in_mDependencyList, in_mGenerate,  inCompiler COMMA_THERE)) ;
  return result ;
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

const C_galgas_type_descriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
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

acPtr_class * cPtr_transientPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                                                   & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration result ;
  const GGS_transientPropertyGeneration * p = (const GGS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientPropertyGeneration_2E_weak::objectCompare (const GGS_transientPropertyGeneration_2E_weak & inOperand) const {
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

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak & GGS_transientPropertyGeneration_2E_weak::operator = (const GGS_transientPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak::GGS_transientPropertyGeneration_2E_weak (const GGS_transientPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGeneration_2E_weak::bang_transientPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientPropertyGeneration) ;
      result = GGS_transientPropertyGeneration ((cPtr_transientPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ("transientPropertyGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration_2E_weak GGS_transientPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGeneration_2E_weak result ;
  const GGS_transientPropertyGeneration_2E_weak * p = (const GGS_transientPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@transientPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientPropertyGenerationList : public cCollectionElement {
  public: GGS_transientPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGeneration & in_mProperty
                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientPropertyGenerationList::cCollectionElement_transientPropertyGenerationList (const GGS_transientPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_transientPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList::GGS_transientPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_transientPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_transientPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusPlusAssignOperation (const GGS_transientPropertyGenerationList_2E_element & inValue
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::class_func_listWithValue (const GGS_transientPropertyGeneration & inOperand0
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_transientPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_transientPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GGS_transientPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::addAssignOperation (const GGS_transientPropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_append (const GGS_transientPropertyGeneration inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_insertAtIndex (const GGS_transientPropertyGeneration inOperand0,
                                                                const GGS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_removeAtIndex (GGS_transientPropertyGeneration & outOperand0,
                                                                const GGS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_popFirst (GGS_transientPropertyGeneration & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_popLast (GGS_transientPropertyGeneration & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::method_first (GGS_transientPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::method_last (GGS_transientPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::add_operation (const GGS_transientPropertyGenerationList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result = GGS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result = GGS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientPropertyGenerationList result = GGS_transientPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::plusAssignOperation (const GGS_transientPropertyGenerationList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList::setter_setMPropertyAtIndex (GGS_transientPropertyGeneration inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration GGS_transientPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientPropertyGenerationList * p = (cCollectionElement_transientPropertyGenerationList *) attributes.ptr () ;
  GGS_transientPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientPropertyGenerationList::DownEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element DownEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration DownEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientPropertyGenerationList::UpEnumerator_transientPropertyGenerationList (const GGS_transientPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element UpEnumerator_transientPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGeneration UpEnumerator_transientPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_transientPropertyGenerationList * p = (const cCollectionElement_transientPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @transientPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList ("transientPropertyGenerationList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList GGS_transientPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList result ;
  const GGS_transientPropertyGenerationList * p = (const GGS_transientPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_transientComputeFunctionCall (const GGS_transientDependencyListForGeneration & inObject,
                                                         const GGS_bool & constinArgument_inPreferences,
                                                         const GGS_string & constinArgument_inOwnerName,
                                                         const GGS_string & constinArgument_inTransientName,
                                                         const GGS_string & constinArgument_inFunctionNamePrefix,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("unwSelf.") ;
  }
  GGS_string var_uwself_18145 = temp_0 ;
  result_outResult = GGS_string::makeEmptyString () ;
  GGS_string var_ident_18234 = GGS_string ("        ") ;
  const GGS_transientDependencyListForGeneration temp_2 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_18276 (temp_2) ;
  GGS_uint index_18255 (uint32_t (0)) ;
  while (enumerator_18276.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_18276.current_mDefaultValueAsString (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("var s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (index_18255.getter_string (SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (extensionGetter_modelStringForSelf (enumerator_18276.current_mDependency (HERE), var_uwself_18145, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 424)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 424)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("switch s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (index_18255.getter_string (SOURCE_FILE ("transient-property.ggs", 425)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 425)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 425)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("case .single :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 426)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 426)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("  ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 427)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 427)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("case .empty, .multiple :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 428)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 428)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("  s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (index_18255.getter_string (SOURCE_FILE ("transient-property.ggs", 429)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GGS_string (" = .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (enumerator_18276.current_mDefaultValueAsString (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 429)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 429)) ;
        result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 430)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 430)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("let s"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (index_18255.getter_string (SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (extensionGetter_modelStringForSelf (enumerator_18276.current_mDependency (HERE), var_uwself_18145, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string (".selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 432)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 432)) ;
    }
    enumerator_18276.gotoNextObject () ;
    index_18255.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 422)) ;
  }
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 435)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 435)) ;
  const GGS_transientDependencyListForGeneration temp_4 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_18930 (temp_4) ;
  GGS_uint index_18924 (uint32_t (0)) ;
  while (enumerator_18930.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string ("s").add_operation (index_18924.getter_string (SOURCE_FILE ("transient-property.ggs", 438)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 438)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 438)) ;
    enumerator_18930.gotoNextObject () ;
    if (enumerator_18930.hasCurrentObject ()) {
      result_outResult.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 440)) ;
    }
    index_18924.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 436)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 442)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 443)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 443)) ;
  const GGS_transientDependencyListForGeneration temp_5 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19080 (temp_5) ;
  GGS_uint index_19074 (uint32_t (0)) ;
  while (enumerator_19080.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (".single (let v").add_operation (index_19074.getter_string (SOURCE_FILE ("transient-property.ggs", 446)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 446)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 446)) ;
    enumerator_19080.gotoNextObject () ;
    if (enumerator_19080.hasCurrentObject ()) {
      result_outResult.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 448)) ;
    }
    index_19074.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 444)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 450)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("  return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 451)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 451)) ;
  result_outResult.plusAssignOperation(constinArgument_inFunctionNamePrefix.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 452)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 452)) ;
  result_outResult.plusAssignOperation(GGS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 453)) ;
  const GGS_transientDependencyListForGeneration temp_6 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19376 (temp_6) ;
  GGS_uint index_19370 (uint32_t (0)) ;
  while (enumerator_19376.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string ("v").add_operation (index_19370.getter_string (SOURCE_FILE ("transient-property.ggs", 456)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 456)) ;
    enumerator_19376.gotoNextObject () ;
    if (enumerator_19376.hasCurrentObject ()) {
      result_outResult.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 458)) ;
    }
    index_19370.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 454)) ;
  }
  result_outResult.plusAssignOperation(GGS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 460)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 461)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 461)) ;
  const GGS_transientDependencyListForGeneration temp_7 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_19525 (temp_7) ;
  while (enumerator_19525.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (".multiple"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 464)) ;
    enumerator_19525.gotoNextObject () ;
    if (enumerator_19525.hasCurrentObject ()) {
      result_outResult.plusAssignOperation(GGS_string (",\n              "), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 466)) ;
    }
  }
  result_outResult.plusAssignOperation(GGS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 468)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 469)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 469)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 470)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 470)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 471)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 471)) ;
  result_outResult.plusAssignOperation(var_ident_18234.add_operation (GGS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 472)), inCompiler  COMMA_SOURCE_FILE ("transient-property.ggs", 472)) ;
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@transientDependencyListForGeneration needs_unwSelf'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needs_5F_unwSelf (const GGS_transientDependencyListForGeneration & inObject,
                                           const GGS_bool & constinArgument_inPreferences,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (false) ;
  const GGS_transientDependencyListForGeneration temp_0 = inObject ;
  UpEnumerator_transientDependencyListForGeneration enumerator_20041 (temp_0) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
  if (enumerator_20041.hasCurrentObject () && bool_1) {
    while (enumerator_20041.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_20041.current_mDependency (HERE), constinArgument_inPreferences, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 480)) ;
      enumerator_20041.gotoNextObject () ;
      if (enumerator_20041.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.ggs", 479)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateAddObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateAddObserverCall (const GGS_observablePropertyAST & inObject,
                                                    const GGS_bool & constinArgument_inPreferences,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_20484 = temp_0 ;
  const GGS_observablePropertyAST temp_2 = inObject ;
  switch (temp_2.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_20601_controllerName_0 ;
      GGS_lstring extractedValue_20626_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerProperty (extractedValue_20601_controllerName_0, extractedValue_20626_propertyName_1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_20601_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (extractedValue_20626_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 492)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_20794_controllerName_0 ;
      GGS_lstring extractedValue_20819_propertyName_1 ;
      GGS_lstring extractedValue_20842_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_20794_controllerName_0, extractedValue_20819_propertyName_1, extractedValue_20842_secondaryPropertyName_2) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_20794_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (extractedValue_20819_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (extractedValue_20842_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 494)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_21054_controllerName_0 ;
      GGS_lstring extractedValue_21079_propertyName_1 ;
      GGS_lstring extractedValue_21102_secondaryPropertyName_2 ;
      temp_2.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_21054_controllerName_0, extractedValue_21079_propertyName_1, extractedValue_21102_secondaryPropertyName_2) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_21054_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (extractedValue_21079_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (extractedValue_21102_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 496)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_21310_controllerName_0 ;
      GGS_lstring extractedValue_21335_propertyName_1 ;
      temp_2.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_21310_controllerName_0, extractedValue_21335_propertyName_1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_21310_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (extractedValue_21335_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)).add_operation (GGS_string ("_property.<<4>>"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 498)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_21469__0 ;
      temp_2.getAssociatedValuesFor_selfWithoutProperty (extractedValue_21469__0) ;
      result_outResult = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_21555_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfProperty (extractedValue_21555_masterName_0) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_21555_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 502)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_21686_masterName_0 ;
      GGS_lstring extractedValue_21698__1 ;
      temp_2.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_21686_masterName_0, extractedValue_21698__1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_21686_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 504)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 504)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_21815_masterName_0 ;
      GGS_lstring extractedValue_21836_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyArray (extractedValue_21815_masterName_0, extractedValue_21836_elementPropertyName_1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_21815_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (extractedValue_21836_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 506)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_22007_masterName_0 ;
      GGS_lstring extractedValue_22028_elementPropertyName_1 ;
      temp_2.getAssociatedValuesFor_selfPropertyObject (extractedValue_22007_masterName_0, extractedValue_22028_elementPropertyName_1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_22007_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (extractedValue_22028_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 508)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_22199_masterName_0 ;
      temp_2.getAssociatedValuesFor_selfPropertyNone (extractedValue_22199_masterName_0) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_22199_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 510)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_22321_propertyName_0 ;
      temp_2.getAssociatedValuesFor_prefsProperty (extractedValue_22321_propertyName_0) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_22321_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 512)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_22459_propertyName_0 ;
      GGS_lstring extractedValue_22473__1 ;
      temp_2.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_22459_propertyName_0, extractedValue_22473__1) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_22459_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 514)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_22589_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootProperty (extractedValue_22589_masterName_0) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_22589_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 516)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_22719_masterName_0 ;
      temp_2.getAssociatedValuesFor_rootPropertyNone (extractedValue_22719_masterName_0) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_22719_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 518)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_22855_masterName_0 ;
      GGS_lstring extractedValue_22876_optionName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_22855_masterName_0, extractedValue_22876_optionName_1) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_22855_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (extractedValue_22876_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 520)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_23042_relationshipName_0 ;
      GGS_lstring extractedValue_23069_propertyName_1 ;
      temp_2.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_23042_relationshipName_0, extractedValue_23069_propertyName_1) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_23042_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (extractedValue_23069_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)).add_operation (GGS_string ("_StartsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 522)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_23227__0 ;
      temp_2.getAssociatedValuesFor_signatureProperty (extractedValue_23227__0) ;
      result_outResult = GGS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_23290__0 ;
      temp_2.getAssociatedValuesFor_versionProperty (extractedValue_23290__0) ;
      result_outResult = GGS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_23365__0 ;
      temp_2.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_23365__0) ;
      result_outResult = GGS_string ("<< ligne 247 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_23426__0 ;
      GGS_lstring extractedValue_23438_propertyName_1 ;
      temp_2.getAssociatedValuesFor_superProperty (extractedValue_23426__0, extractedValue_23438_propertyName_1) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_23438_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 530)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 530)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_23571__0 ;
      GGS_lstring extractedValue_23583_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_23597__2 ;
      temp_2.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_23571__0, extractedValue_23583_propertyName_1, extractedValue_23597__2) ;
      result_outResult = var_prefix_20484.add_operation (extractedValue_23583_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 532)).add_operation (GGS_string ("_property.startsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 532)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST generateRemoveObserverCall'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateRemoveObserverCall (const GGS_observablePropertyAST & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_23924_controllerName_0 ;
      GGS_lstring extractedValue_23949_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_23924_controllerName_0, extractedValue_23949_propertyName_1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_23924_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (extractedValue_23949_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 541)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_24117_controllerName_0 ;
      GGS_lstring extractedValue_24142_propertyName_1 ;
      GGS_lstring extractedValue_24165_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_24117_controllerName_0, extractedValue_24142_propertyName_1, extractedValue_24165_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_24117_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (extractedValue_24142_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (extractedValue_24165_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 543)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_24377_controllerName_0 ;
      GGS_lstring extractedValue_24402_propertyName_1 ;
      GGS_lstring extractedValue_24425_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_24377_controllerName_0, extractedValue_24402_propertyName_1, extractedValue_24425_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_24377_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (extractedValue_24402_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (extractedValue_24425_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 545)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_24633_controllerName_0 ;
      GGS_lstring extractedValue_24658_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_24633_controllerName_0, extractedValue_24658_propertyName_1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_24633_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (extractedValue_24658_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)).add_operation (GGS_string ("_property.toMany_<<5>>_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 547)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_24818__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_24818__0) ;
      result_outResult = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_24904_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_24904_masterName_0) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_24904_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 551)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_25035_masterName_0 ;
      GGS_lstring extractedValue_25047__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_25035_masterName_0, extractedValue_25047__1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_25035_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 553)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 553)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_25164_masterName_0 ;
      GGS_lstring extractedValue_25185_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_25164_masterName_0, extractedValue_25185_elementPropertyName_1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_25164_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (extractedValue_25185_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 555)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_25356_masterName_0 ;
      GGS_lstring extractedValue_25377_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_25356_masterName_0, extractedValue_25377_elementPropertyName_1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_25356_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (extractedValue_25377_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 557)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_25546_masterName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_25546_masterName_0) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_25546_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 559)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_25668_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_25668_propertyName_0) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_25668_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 561)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_25805_propertyName_0 ;
      GGS_lstring extractedValue_25819__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_25805_propertyName_0, extractedValue_25819__1) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_25805_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 563)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_25934_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_25934_masterName_0) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_25934_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 565)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_26069_masterName_0 ;
      GGS_lstring extractedValue_26090_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_26069_masterName_0, extractedValue_26090_optionName_1) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_26069_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (extractedValue_26090_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 567)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_26247_masterName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_26247_masterName_0) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_26247_masterName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)).add_operation (GGS_string ("_property.stopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 569)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_26384_relationshipName_0 ;
      GGS_lstring extractedValue_26411_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_26384_relationshipName_0, extractedValue_26411_propertyName_1) ;
      result_outResult = GGS_string ("self.rootObject.").add_operation (extractedValue_26384_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GGS_string ("_property.toMany_"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (extractedValue_26411_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)).add_operation (GGS_string ("_StopsBeingObserved"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 571)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_26568__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_26568__0) ;
      result_outResult = GGS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_26631__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_26631__0) ;
      result_outResult = GGS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_26706__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_26706__0) ;
      result_outResult = GGS_string ("<< ligne 274 >>") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_26767__0 ;
      GGS_lstring extractedValue_26779_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_26767__0, extractedValue_26779_propertyName_1) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_26779_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 579)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 579)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_26910__0 ;
      GGS_lstring extractedValue_26922_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_26936__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_26910__0, extractedValue_26922_propertyName_1, extractedValue_26936__2) ;
      result_outResult = GGS_string ("self.").add_operation (extractedValue_26922_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 581)).add_operation (GGS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 581)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
// @transientRoutineGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration::objectCompare (const GGS_transientRoutineGeneration & inOperand) const {
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

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                          const GGS_string & in_mTransientName,
                          const GGS_typeKind & in_mTransientType,
                          const GGS_string & in_mGeneratedFunctionNamePrefix,
                          const GGS_transientDependencyListForGeneration & in_mDependencyList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_transientRoutineGeneration * object = nullptr ;
  macroMyNew (object, cPtr_transientRoutineGeneration (inCompiler COMMA_THERE)) ;
  object->transientRoutineGeneration_init_21__21__21__21__21_ (in_mOwnerName, in_mTransientName, in_mTransientType, in_mGeneratedFunctionNamePrefix, in_mDependencyList, inCompiler) ;
  const GGS_transientRoutineGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_transientRoutineGeneration::
transientRoutineGeneration_init_21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                     const GGS_string & in_mTransientName,
                                                     const GGS_typeKind & in_mTransientType,
                                                     const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                     const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration::GGS_transientRoutineGeneration (const cPtr_transientRoutineGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientRoutineGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::class_func_new (const GGS_string & in_mOwnerName,
                                                                               const GGS_string & in_mTransientName,
                                                                               const GGS_typeKind & in_mTransientType,
                                                                               const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                                               const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_transientRoutineGeneration (in_mOwnerName, in_mTransientName, in_mTransientType, in_mGeneratedFunctionNamePrefix, in_mDependencyList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientRoutineGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mTransientName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientRoutineGeneration::setProperty_mTransientName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_transientRoutineGeneration::readProperty_mTransientType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mTransientType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientRoutineGeneration::setProperty_mTransientType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mTransientType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientRoutineGeneration::readProperty_mGeneratedFunctionNamePrefix (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mGeneratedFunctionNamePrefix ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientRoutineGeneration::setProperty_mGeneratedFunctionNamePrefix (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mGeneratedFunctionNamePrefix = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration GGS_transientRoutineGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_transientDependencyListForGeneration () ;
  }else{
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientRoutineGeneration::setProperty_mDependencyList (const GGS_transientDependencyListForGeneration & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_transientRoutineGeneration * p = (cPtr_transientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientRoutineGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientRoutineGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_transientRoutineGeneration::cPtr_transientRoutineGeneration (const GGS_string & in_mOwnerName,
                                                                  const GGS_string & in_mTransientName,
                                                                  const GGS_typeKind & in_mTransientType,
                                                                  const GGS_string & in_mGeneratedFunctionNamePrefix,
                                                                  const GGS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mTransientType (),
mProperty_mGeneratedFunctionNamePrefix (),
mProperty_mDependencyList () {
  mProperty_mOwnerName = in_mOwnerName ;
  mProperty_mTransientName = in_mTransientName ;
  mProperty_mTransientType = in_mTransientType ;
  mProperty_mGeneratedFunctionNamePrefix = in_mGeneratedFunctionNamePrefix ;
  mProperty_mDependencyList = in_mDependencyList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

void cPtr_transientRoutineGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@transientRoutineGeneration:") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedFunctionNamePrefix.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mGeneratedFunctionNamePrefix, mProperty_mDependencyList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientRoutineGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
    mProperty_mTransientName.printNonNullClassInstanceProperties ("mTransientName") ;
    mProperty_mTransientType.printNonNullClassInstanceProperties ("mTransientType") ;
    mProperty_mGeneratedFunctionNamePrefix.printNonNullClassInstanceProperties ("mGeneratedFunctionNamePrefix") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration ("transientRoutineGeneration",
                                                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration result ;
  const GGS_transientRoutineGeneration * p = (const GGS_transientRoutineGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientRoutineGeneration_2E_weak::objectCompare (const GGS_transientRoutineGeneration_2E_weak & inOperand) const {
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

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak & GGS_transientRoutineGeneration_2E_weak::operator = (const GGS_transientRoutineGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak::GGS_transientRoutineGeneration_2E_weak (const GGS_transientRoutineGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration GGS_transientRoutineGeneration_2E_weak::bang_transientRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientRoutineGeneration) ;
      result = GGS_transientRoutineGeneration ((cPtr_transientRoutineGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientRoutineGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ("transientRoutineGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientRoutineGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientRoutineGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientRoutineGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientRoutineGeneration_2E_weak GGS_transientRoutineGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientRoutineGeneration_2E_weak result ;
  const GGS_transientRoutineGeneration_2E_weak * p = (const GGS_transientRoutineGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientRoutineGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientRoutineGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum proxyKind
//--------------------------------------------------------------------------------------------------

GGS_proxyKind::GGS_proxyKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_proxyKind::class_func_propertyProxy (UNUSED_LOCATION_ARGS) {
  GGS_proxyKind result ;
  result.mEnum = Enumeration::enum_propertyProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_proxyKind::class_func_toManyProxy (UNUSED_LOCATION_ARGS) {
  GGS_proxyKind result ;
  result.mEnum = Enumeration::enum_toManyProxy ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_proxyKind [3] = {
  "(not built)",
  "propertyProxy",
  "toManyProxy"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_proxyKind::getter_isPropertyProxy (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_propertyProxy == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_proxyKind::getter_isToManyProxy (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_toManyProxy == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_proxyKind::description (String & ioString,
                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @proxyKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_proxyKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_proxyKind::objectCompare (const GGS_proxyKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @proxyKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyKind ("proxyKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_proxyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_proxyKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_proxyKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_proxyKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_proxyKind result ;
  const GGS_proxyKind * p = (const GGS_proxyKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_proxyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_proxyDeclarationAST_2E_weak::objectCompare (const GGS_proxyDeclarationAST_2E_weak & inOperand) const {
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

GGS_proxyDeclarationAST_2E_weak::GGS_proxyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST_2E_weak & GGS_proxyDeclarationAST_2E_weak::operator = (const GGS_proxyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST_2E_weak::GGS_proxyDeclarationAST_2E_weak (const GGS_proxyDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST_2E_weak GGS_proxyDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_proxyDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST_2E_weak::bang_proxyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_proxyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_proxyDeclarationAST) ;
      result = GGS_proxyDeclarationAST ((cPtr_proxyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @proxyDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ("proxyDeclarationAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_proxyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_proxyDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_proxyDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST_2E_weak GGS_proxyDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_proxyDeclarationAST_2E_weak result ;
  const GGS_proxyDeclarationAST_2E_weak * p = (const GGS_proxyDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_proxyDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @toManyProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyProxyGeneration::objectCompare (const GGS_toManyProxyGeneration & inOperand) const {
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

GGS_toManyProxyGeneration::GGS_toManyProxyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_proxyKind & in_mProxyKind,
                          const GGS_string & in_mToManyTypeName,
                          const GGS_string & in_mObservedRelationshipName,
                          const GGS_string & in_mObservedPropertyName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_toManyProxyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_toManyProxyGeneration (inCompiler COMMA_THERE)) ;
  object->toManyProxyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mProxyKind, in_mToManyTypeName, in_mObservedRelationshipName, in_mObservedPropertyName, inCompiler) ;
  const GGS_toManyProxyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::
toManyProxyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                const GGS_proxyKind & in_mProxyKind,
                                                const GGS_string & in_mToManyTypeName,
                                                const GGS_string & in_mObservedRelationshipName,
                                                const GGS_string & in_mObservedPropertyName,
                                                Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mToManyTypeName = in_mToManyTypeName ;
  mProperty_mObservedRelationshipName = in_mObservedRelationshipName ;
  mProperty_mObservedPropertyName = in_mObservedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration::GGS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyProxyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                     const GGS_proxyKind & in_mProxyKind,
                                                                     const GGS_string & in_mToManyTypeName,
                                                                     const GGS_string & in_mObservedRelationshipName,
                                                                     const GGS_string & in_mObservedPropertyName,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_toManyProxyGeneration (in_mPropertyName, in_mProxyKind, in_mToManyTypeName, in_mObservedRelationshipName, in_mObservedPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_toManyProxyGeneration::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_proxyKind () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGeneration::setProperty_mProxyKind (const GGS_proxyKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_toManyProxyGeneration::readProperty_mToManyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mToManyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGeneration::setProperty_mToManyTypeName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mToManyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_toManyProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGeneration::setProperty_mObservedRelationshipName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_toManyProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGeneration::setProperty_mObservedPropertyName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toManyProxyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toManyProxyGeneration::cPtr_toManyProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mToManyTypeName (),
mProperty_mObservedRelationshipName (),
mProperty_mObservedPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toManyProxyGeneration::cPtr_toManyProxyGeneration (const GGS_string & in_mPropertyName,
                                                        const GGS_proxyKind & in_mProxyKind,
                                                        const GGS_string & in_mToManyTypeName,
                                                        const GGS_string & in_mObservedRelationshipName,
                                                        const GGS_string & in_mObservedPropertyName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mToManyTypeName (),
mProperty_mObservedRelationshipName (),
mProperty_mObservedPropertyName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mToManyTypeName = in_mToManyTypeName ;
  mProperty_mObservedRelationshipName = in_mObservedRelationshipName ;
  mProperty_mObservedPropertyName = in_mObservedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

void cPtr_toManyProxyGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@toManyProxyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyProxyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toManyProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mToManyTypeName, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toManyProxyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mToManyTypeName.printNonNullClassInstanceProperties ("mToManyTypeName") ;
    mProperty_mObservedRelationshipName.printNonNullClassInstanceProperties ("mObservedRelationshipName") ;
    mProperty_mObservedPropertyName.printNonNullClassInstanceProperties ("mObservedPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @toManyProxyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration ("toManyProxyGeneration",
                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyProxyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGeneration result ;
  const GGS_toManyProxyGeneration * p = (const GGS_toManyProxyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyProxyGeneration_2E_weak::objectCompare (const GGS_toManyProxyGeneration_2E_weak & inOperand) const {
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

GGS_toManyProxyGeneration_2E_weak::GGS_toManyProxyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration_2E_weak & GGS_toManyProxyGeneration_2E_weak::operator = (const GGS_toManyProxyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration_2E_weak::GGS_toManyProxyGeneration_2E_weak (const GGS_toManyProxyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration_2E_weak GGS_toManyProxyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toManyProxyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration_2E_weak::bang_toManyProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyProxyGeneration) ;
      result = GGS_toManyProxyGeneration ((cPtr_toManyProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyProxyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ("toManyProxyGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyProxyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyProxyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyProxyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration_2E_weak GGS_toManyProxyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGeneration_2E_weak result ;
  const GGS_toManyProxyGeneration_2E_weak * p = (const GGS_toManyProxyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyProxyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@toManyProxyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toManyProxyGenerationList : public cCollectionElement {
  public: GGS_toManyProxyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_toManyProxyGenerationList (const GGS_toManyProxyGeneration & in_mProperty
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toManyProxyGenerationList (const GGS_toManyProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GGS_toManyProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GGS_toManyProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyProxyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toManyProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_toManyProxyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList::GGS_toManyProxyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList::GGS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_toManyProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_toManyProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::plusPlusAssignOperation (const GGS_toManyProxyGenerationList_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::class_func_listWithValue (const GGS_toManyProxyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_toManyProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_toManyProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_toManyProxyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toManyProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::addAssignOperation (const GGS_toManyProxyGeneration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_append (const GGS_toManyProxyGeneration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_insertAtIndex (const GGS_toManyProxyGeneration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_removeAtIndex (GGS_toManyProxyGeneration & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_popFirst (GGS_toManyProxyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_popLast (GGS_toManyProxyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::method_first (GGS_toManyProxyGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::method_last (GGS_toManyProxyGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::add_operation (const GGS_toManyProxyGenerationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result = GGS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result = GGS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result = GGS_toManyProxyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::plusAssignOperation (const GGS_toManyProxyGenerationList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_setMPropertyAtIndex (GGS_toManyProxyGeneration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  GGS_toManyProxyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @toManyProxyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toManyProxyGenerationList::DownEnumerator_toManyProxyGenerationList (const GGS_toManyProxyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element DownEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration DownEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toManyProxyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toManyProxyGenerationList::UpEnumerator_toManyProxyGenerationList (const GGS_toManyProxyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element UpEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration UpEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toManyProxyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ("toManyProxyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyProxyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList result ;
  const GGS_toManyProxyGenerationList * p = (const GGS_toManyProxyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicProxyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicProxyGeneration::objectCompare (const GGS_atomicProxyGeneration & inOperand) const {
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

GGS_atomicProxyGeneration::GGS_atomicProxyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration::
init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                          const GGS_proxyKind & in_mProxyKind,
                          const GGS_typeKind & in_mType,
                          const GGS_string & in_mObservedRelationshipName,
                          const GGS_string & in_mObservedPropertyName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_atomicProxyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_atomicProxyGeneration (inCompiler COMMA_THERE)) ;
  object->atomicProxyGeneration_init_21__21__21__21__21_ (in_mPropertyName, in_mProxyKind, in_mType, in_mObservedRelationshipName, in_mObservedPropertyName, inCompiler) ;
  const GGS_atomicProxyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::
atomicProxyGeneration_init_21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                const GGS_proxyKind & in_mProxyKind,
                                                const GGS_typeKind & in_mType,
                                                const GGS_string & in_mObservedRelationshipName,
                                                const GGS_string & in_mObservedPropertyName,
                                                Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mType = in_mType ;
  mProperty_mObservedRelationshipName = in_mObservedRelationshipName ;
  mProperty_mObservedPropertyName = in_mObservedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration::GGS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicProxyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                     const GGS_proxyKind & in_mProxyKind,
                                                                     const GGS_typeKind & in_mType,
                                                                     const GGS_string & in_mObservedRelationshipName,
                                                                     const GGS_string & in_mObservedPropertyName,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicProxyGeneration (in_mPropertyName, in_mProxyKind, in_mType, in_mObservedRelationshipName, in_mObservedPropertyName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyKind GGS_atomicProxyGeneration::readProperty_mProxyKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_proxyKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mProxyKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGeneration::setProperty_mProxyKind (const GGS_proxyKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_atomicProxyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGeneration::setProperty_mType (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_atomicProxyGeneration::readProperty_mObservedRelationshipName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGeneration::setProperty_mObservedRelationshipName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_atomicProxyGeneration::readProperty_mObservedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    return p->mProperty_mObservedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGeneration::setProperty_mObservedPropertyName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicProxyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_atomicProxyGeneration::cPtr_atomicProxyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mType (),
mProperty_mObservedRelationshipName (),
mProperty_mObservedPropertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicProxyGeneration::cPtr_atomicProxyGeneration (const GGS_string & in_mPropertyName,
                                                        const GGS_proxyKind & in_mProxyKind,
                                                        const GGS_typeKind & in_mType,
                                                        const GGS_string & in_mObservedRelationshipName,
                                                        const GGS_string & in_mObservedPropertyName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mProxyKind (),
mProperty_mType (),
mProperty_mObservedRelationshipName (),
mProperty_mObservedPropertyName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mProxyKind = in_mProxyKind ;
  mProperty_mType = in_mType ;
  mProperty_mObservedRelationshipName = in_mObservedRelationshipName ;
  mProperty_mObservedPropertyName = in_mObservedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

void cPtr_atomicProxyGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicProxyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicProxyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mType, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicProxyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mProxyKind.printNonNullClassInstanceProperties ("mProxyKind") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mObservedRelationshipName.printNonNullClassInstanceProperties ("mObservedRelationshipName") ;
    mProperty_mObservedPropertyName.printNonNullClassInstanceProperties ("mObservedPropertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @atomicProxyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration ("atomicProxyGeneration",
                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicProxyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGeneration result ;
  const GGS_atomicProxyGeneration * p = (const GGS_atomicProxyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicProxyGeneration_2E_weak::objectCompare (const GGS_atomicProxyGeneration_2E_weak & inOperand) const {
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

GGS_atomicProxyGeneration_2E_weak::GGS_atomicProxyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration_2E_weak & GGS_atomicProxyGeneration_2E_weak::operator = (const GGS_atomicProxyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration_2E_weak::GGS_atomicProxyGeneration_2E_weak (const GGS_atomicProxyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration_2E_weak GGS_atomicProxyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicProxyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration_2E_weak::bang_atomicProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicProxyGeneration) ;
      result = GGS_atomicProxyGeneration ((cPtr_atomicProxyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicProxyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ("atomicProxyGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicProxyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicProxyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicProxyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration_2E_weak GGS_atomicProxyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGeneration_2E_weak result ;
  const GGS_atomicProxyGeneration_2E_weak * p = (const GGS_atomicProxyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicProxyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@atomicProxyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_atomicProxyGenerationList : public cCollectionElement {
  public: GGS_atomicProxyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_atomicProxyGenerationList (const GGS_atomicProxyGeneration & in_mProperty
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_atomicProxyGenerationList (const GGS_atomicProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GGS_atomicProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GGS_atomicProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicProxyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_atomicProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_atomicProxyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList::GGS_atomicProxyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList::GGS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_atomicProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_atomicProxyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::plusPlusAssignOperation (const GGS_atomicProxyGenerationList_2E_element & inValue
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::class_func_listWithValue (const GGS_atomicProxyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_atomicProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_atomicProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_atomicProxyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::addAssignOperation (const GGS_atomicProxyGeneration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_append (const GGS_atomicProxyGeneration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_insertAtIndex (const GGS_atomicProxyGeneration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_removeAtIndex (GGS_atomicProxyGeneration & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_popFirst (GGS_atomicProxyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_popLast (GGS_atomicProxyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::method_first (GGS_atomicProxyGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::method_last (GGS_atomicProxyGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::add_operation (const GGS_atomicProxyGenerationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result = GGS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result = GGS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result = GGS_atomicProxyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::plusAssignOperation (const GGS_atomicProxyGenerationList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_setMPropertyAtIndex (GGS_atomicProxyGeneration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  GGS_atomicProxyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @atomicProxyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_atomicProxyGenerationList::DownEnumerator_atomicProxyGenerationList (const GGS_atomicProxyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element DownEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration DownEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @atomicProxyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_atomicProxyGenerationList::UpEnumerator_atomicProxyGenerationList (const GGS_atomicProxyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element UpEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration UpEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @atomicProxyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ("atomicProxyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicProxyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList result ;
  const GGS_atomicProxyGenerationList * p = (const GGS_atomicProxyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyDeclarationAST_2E_weak::objectCompare (const GGS_atomicPropertyDeclarationAST_2E_weak & inOperand) const {
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

GGS_atomicPropertyDeclarationAST_2E_weak::GGS_atomicPropertyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST_2E_weak & GGS_atomicPropertyDeclarationAST_2E_weak::operator = (const GGS_atomicPropertyDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST_2E_weak::GGS_atomicPropertyDeclarationAST_2E_weak (const GGS_atomicPropertyDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST_2E_weak GGS_atomicPropertyDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST_2E_weak::bang_atomicPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyDeclarationAST) ;
      result = GGS_atomicPropertyDeclarationAST ((cPtr_atomicPropertyDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicPropertyDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ("atomicPropertyDeclarationAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST_2E_weak GGS_atomicPropertyDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyDeclarationAST_2E_weak result ;
  const GGS_atomicPropertyDeclarationAST_2E_weak * p = (const GGS_atomicPropertyDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyGeneration::objectCompare (const GGS_atomicPropertyGeneration & inOperand) const {
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

GGS_atomicPropertyGeneration::GGS_atomicPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration::
init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                                                                             const GGS_bool & in_generateResetMethod,
                                                                                                             const GGS_bool & in_generateDirectRead,
                                                                                                             const GGS_bool & in_generateDirectAccess,
                                                                                                             const GGS_bool & in_standalone,
                                                                                                             const GGS_typeKind & in_mType,
                                                                                                             const GGS_bool & in_mIsProxy,
                                                                                                             const GGS_string & in_mDefaultValueInSwift,
                                                                                                             const GGS_bool & in_mInPreferences,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  cPtr_atomicPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_atomicPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->atomicPropertyGeneration_init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (in_mPropertyName, in_generateResetMethod, in_generateDirectRead, in_generateDirectAccess, in_standalone, in_mType, in_mIsProxy, in_mDefaultValueInSwift, in_mInPreferences, inCompiler) ;
  const GGS_atomicPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::
atomicPropertyGeneration_init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                                                                                                      const GGS_bool & in_generateResetMethod,
                                                                                                                                      const GGS_bool & in_generateDirectRead,
                                                                                                                                      const GGS_bool & in_generateDirectAccess,
                                                                                                                                      const GGS_bool & in_standalone,
                                                                                                                                      const GGS_typeKind & in_mType,
                                                                                                                                      const GGS_bool & in_mIsProxy,
                                                                                                                                      const GGS_string & in_mDefaultValueInSwift,
                                                                                                                                      const GGS_bool & in_mInPreferences,
                                                                                                                                      Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_generateResetMethod = in_generateResetMethod ;
  mProperty_generateDirectRead = in_generateDirectRead ;
  mProperty_generateDirectAccess = in_generateDirectAccess ;
  mProperty_standalone = in_standalone ;
  mProperty_mType = in_mType ;
  mProperty_mIsProxy = in_mIsProxy ;
  mProperty_mDefaultValueInSwift = in_mDefaultValueInSwift ;
  mProperty_mInPreferences = in_mInPreferences ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration::GGS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration::class_func_new (const GGS_string & in_mPropertyName,
                                                                           const GGS_bool & in_generateResetMethod,
                                                                           const GGS_bool & in_generateDirectRead,
                                                                           const GGS_bool & in_generateDirectAccess,
                                                                           const GGS_bool & in_standalone,
                                                                           const GGS_typeKind & in_mType,
                                                                           const GGS_bool & in_mIsProxy,
                                                                           const GGS_string & in_mDefaultValueInSwift,
                                                                           const GGS_bool & in_mInPreferences,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_atomicPropertyGeneration (in_mPropertyName, in_generateResetMethod, in_generateDirectRead, in_generateDirectAccess, in_standalone, in_mType, in_mIsProxy, in_mDefaultValueInSwift, in_mInPreferences,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_generateResetMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_generateResetMethod ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_generateDirectRead (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_generateDirectRead ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_generateDirectAccess (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_generateDirectAccess ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_standalone (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_standalone ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_atomicPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_mIsProxy (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mIsProxy ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_atomicPropertyGeneration::readProperty_mDefaultValueInSwift (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mDefaultValueInSwift ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_atomicPropertyGeneration::readProperty_mInPreferences (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    return p->mProperty_mInPreferences ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_generateResetMethod (),
mProperty_generateDirectRead (),
mProperty_generateDirectAccess (),
mProperty_standalone (),
mProperty_mType (),
mProperty_mIsProxy (),
mProperty_mDefaultValueInSwift (),
mProperty_mInPreferences () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (const GGS_string & in_mPropertyName,
                                                              const GGS_bool & in_generateResetMethod,
                                                              const GGS_bool & in_generateDirectRead,
                                                              const GGS_bool & in_generateDirectAccess,
                                                              const GGS_bool & in_standalone,
                                                              const GGS_typeKind & in_mType,
                                                              const GGS_bool & in_mIsProxy,
                                                              const GGS_string & in_mDefaultValueInSwift,
                                                              const GGS_bool & in_mInPreferences,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_generateResetMethod (),
mProperty_generateDirectRead (),
mProperty_generateDirectAccess (),
mProperty_standalone (),
mProperty_mType (),
mProperty_mIsProxy (),
mProperty_mDefaultValueInSwift (),
mProperty_mInPreferences () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_generateResetMethod = in_generateResetMethod ;
  mProperty_generateDirectRead = in_generateDirectRead ;
  mProperty_generateDirectAccess = in_generateDirectAccess ;
  mProperty_standalone = in_standalone ;
  mProperty_mType = in_mType ;
  mProperty_mIsProxy = in_mIsProxy ;
  mProperty_mDefaultValueInSwift = in_mDefaultValueInSwift ;
  mProperty_mInPreferences = in_mInPreferences ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

void cPtr_atomicPropertyGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateResetMethod.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateDirectRead.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateDirectAccess.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_standalone.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsProxy.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicPropertyGeneration (mProperty_mPropertyName, mProperty_generateResetMethod, mProperty_generateDirectRead, mProperty_generateDirectAccess, mProperty_standalone, mProperty_mType, mProperty_mIsProxy, mProperty_mDefaultValueInSwift, mProperty_mInPreferences, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_generateResetMethod.printNonNullClassInstanceProperties ("generateResetMethod") ;
    mProperty_generateDirectRead.printNonNullClassInstanceProperties ("generateDirectRead") ;
    mProperty_generateDirectAccess.printNonNullClassInstanceProperties ("generateDirectAccess") ;
    mProperty_standalone.printNonNullClassInstanceProperties ("standalone") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mIsProxy.printNonNullClassInstanceProperties ("mIsProxy") ;
    mProperty_mDefaultValueInSwift.printNonNullClassInstanceProperties ("mDefaultValueInSwift") ;
    mProperty_mInPreferences.printNonNullClassInstanceProperties ("mInPreferences") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @atomicPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration ("atomicPropertyGeneration",
                                                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGeneration result ;
  const GGS_atomicPropertyGeneration * p = (const GGS_atomicPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyGeneration_2E_weak::objectCompare (const GGS_atomicPropertyGeneration_2E_weak & inOperand) const {
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

GGS_atomicPropertyGeneration_2E_weak::GGS_atomicPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration_2E_weak & GGS_atomicPropertyGeneration_2E_weak::operator = (const GGS_atomicPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration_2E_weak::GGS_atomicPropertyGeneration_2E_weak (const GGS_atomicPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration_2E_weak GGS_atomicPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration_2E_weak::bang_atomicPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicPropertyGeneration) ;
      result = GGS_atomicPropertyGeneration ((cPtr_atomicPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ("atomicPropertyGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration_2E_weak GGS_atomicPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGeneration_2E_weak result ;
  const GGS_atomicPropertyGeneration_2E_weak * p = (const GGS_atomicPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@atomicPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public: GGS_atomicPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_atomicPropertyGenerationList (const GGS_atomicPropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GGS_atomicPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicPropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_atomicPropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList::GGS_atomicPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList::GGS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::plusPlusAssignOperation (const GGS_atomicPropertyGenerationList_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::class_func_listWithValue (const GGS_atomicPropertyGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_atomicPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_atomicPropertyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::addAssignOperation (const GGS_atomicPropertyGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_append (const GGS_atomicPropertyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_insertAtIndex (const GGS_atomicPropertyGeneration inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_removeAtIndex (GGS_atomicPropertyGeneration & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_popFirst (GGS_atomicPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_popLast (GGS_atomicPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::method_first (GGS_atomicPropertyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::method_last (GGS_atomicPropertyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::add_operation (const GGS_atomicPropertyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result = GGS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result = GGS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result = GGS_atomicPropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::plusAssignOperation (const GGS_atomicPropertyGenerationList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_setMPropertyAtIndex (GGS_atomicPropertyGeneration inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  GGS_atomicPropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @atomicPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_atomicPropertyGenerationList::DownEnumerator_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element DownEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration DownEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @atomicPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_atomicPropertyGenerationList::UpEnumerator_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element UpEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration UpEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @atomicPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList result ;
  const GGS_atomicPropertyGenerationList * p = (const GGS_atomicPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum toOneOppositeRelationship
//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship::GGS_toOneOppositeRelationship (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneOppositeRelationship::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneOppositeRelationship::class_func_oppositeIsToOne (const GGS_lstring & inAssociatedValue0
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship result ;
  result.mEnum = Enumeration::enum_oppositeIsToOne ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toOneOppositeRelationship_2E_oppositeIsToOne (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneOppositeRelationship::class_func_oppositeIsToMany (const GGS_lstring & inAssociatedValue0
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship result ;
  result.mEnum = Enumeration::enum_oppositeIsToMany ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toOneOppositeRelationship_2E_oppositeIsToMany (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship::method_extractOppositeIsToOne (GGS_lstring & outAssociatedValue_oppositeRelationshipName,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_oppositeIsToOne) {
    outAssociatedValue_oppositeRelationshipName.drop () ;
    String s ;
    s.appendCString ("method @toOneOppositeRelationship.oppositeIsToOne invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeRelationshipName = ptr->mProperty_oppositeRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship::method_extractOppositeIsToMany (GGS_lstring & outAssociatedValue_oppositeRelationshipName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_oppositeIsToMany) {
    outAssociatedValue_oppositeRelationshipName.drop () ;
    String s ;
    s.appendCString ("method @toOneOppositeRelationship.oppositeIsToMany invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeRelationshipName = ptr->mProperty_oppositeRelationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ GGS_toOneOppositeRelationship::getter_getOppositeIsToOne (UNUSED_LOCATION_ARGS) const {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ result ;
  if (mEnum == Enumeration::enum_oppositeIsToOne) {
    const auto ptr = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toOneOppositeRelationship_2E_oppositeIsToOne (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship::getAssociatedValuesFor_oppositeIsToOne (GGS_lstring & out_oppositeRelationshipName) const {
  const auto ptr = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeRelationshipName = ptr->mProperty_oppositeRelationshipName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ GGS_toOneOppositeRelationship::getter_getOppositeIsToMany (UNUSED_LOCATION_ARGS) const {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ result ;
  if (mEnum == Enumeration::enum_oppositeIsToMany) {
    const auto ptr = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toOneOppositeRelationship_2E_oppositeIsToMany (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship::getAssociatedValuesFor_oppositeIsToMany (GGS_lstring & out_oppositeRelationshipName) const {
  const auto ptr = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeRelationshipName = ptr->mProperty_oppositeRelationshipName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toOneOppositeRelationship [4] = {
  "(not built)",
  "none",
  "oppositeIsToOne",
  "oppositeIsToMany"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneOppositeRelationship::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneOppositeRelationship::getter_isOppositeIsToOne (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_oppositeIsToOne == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOneOppositeRelationship::getter_isOppositeIsToMany (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_oppositeIsToMany == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @toOneOppositeRelationship: ") ;
  ioString.appendCString (gEnumNameArrayFor_toOneOppositeRelationship [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneOppositeRelationship::objectCompare (const GGS_toOneOppositeRelationship & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_oppositeIsToOne: {
        const auto left = (GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_oppositeIsToMany: {
        const auto left = (GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneOppositeRelationship generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ("toOneOppositeRelationship",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneOppositeRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneOppositeRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneOppositeRelationship (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOneOppositeRelationship::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship result ;
  const GGS_toOneOppositeRelationship * p = (const GGS_toOneOppositeRelationship *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneOppositeRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneRelationshipAST_2E_weak::objectCompare (const GGS_toOneRelationshipAST_2E_weak & inOperand) const {
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

GGS_toOneRelationshipAST_2E_weak::GGS_toOneRelationshipAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak & GGS_toOneRelationshipAST_2E_weak::operator = (const GGS_toOneRelationshipAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak::GGS_toOneRelationshipAST_2E_weak (const GGS_toOneRelationshipAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak GGS_toOneRelationshipAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toOneRelationshipAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST_2E_weak::bang_toOneRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toOneRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOneRelationshipAST) ;
      result = GGS_toOneRelationshipAST ((cPtr_toOneRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneRelationshipAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2E_weak ("toOneRelationshipAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneRelationshipAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneRelationshipAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneRelationshipAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak GGS_toOneRelationshipAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toOneRelationshipAST_2E_weak result ;
  const GGS_toOneRelationshipAST_2E_weak * p = (const GGS_toOneRelationshipAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneRelationshipAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GGS_propertyMap_2E_element & inValue
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mKind (inValue.mProperty_mKind),
mProperty_mActionMap (inValue.mProperty_mActionMap),
mProperty_mIsOverriding (inValue.mProperty_mIsOverriding) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GGS_lstring & inKey,
                                                  const GGS_propertyKind & in_mKind,
                                                  const GGS_actionMap & in_mActionMap,
                                                  const GGS_bool & in_mIsOverriding
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mActionMap (in_mActionMap),
mProperty_mIsOverriding (in_mIsOverriding) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mKind, mProperty_mActionMap, mProperty_mIsOverriding COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mKind" ":") ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActionMap" ":") ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsOverriding" ":") ;
  mProperty_mIsOverriding.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (const GGS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap & GGS_propertyMap::operator = (const GGS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_propertyMap * p = (cMapElement_propertyMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_propertyMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mKind = p->mProperty_mKind ;
      element.mProperty_mActionMap = p->mProperty_mActionMap ;
      element.mProperty_mIsOverriding = p->mProperty_mIsOverriding ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_mapWithMapToOverride (const GGS_propertyMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_insertKey (GGS_lstring inKey,
                                        GGS_propertyKind inArgument0,
                                        GGS_actionMap inArgument1,
                                        GGS_bool inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::method_searchKey (GGS_lstring inKey,
                                        GGS_propertyKind & outArgument0,
                                        GGS_actionMap & outArgument1,
                                        GGS_bool & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mActionMap ;
    outArgument2 = p->mProperty_mIsOverriding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyMap::getter_mKindForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_propertyKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_propertyMap::getter_mActionMapForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_actionMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_mIsOverridingForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsOverriding ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMKindForKey (GGS_propertyKind inAttributeValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMActionMapForKey (GGS_actionMap inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMIsOverridingForKey (GGS_bool inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsOverriding = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GGS_propertyMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                              const GGS_string & inKey
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyMap::DownEnumerator_propertyMap (const GGS_propertyMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element DownEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GGS_propertyMap_2E_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap, p->mProperty_mIsOverriding) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap DownEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyMap::UpEnumerator_propertyMap (const GGS_propertyMap & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element UpEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GGS_propertyMap_2E_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap, p->mProperty_mIsOverriding) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap UpEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsOverriding ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  const GGS_propertyMap * p = (const GGS_propertyMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOnePropertyGeneration_2E_weak::objectCompare (const GGS_toOnePropertyGeneration_2E_weak & inOperand) const {
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

GGS_toOnePropertyGeneration_2E_weak::GGS_toOnePropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak & GGS_toOnePropertyGeneration_2E_weak::operator = (const GGS_toOnePropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak::GGS_toOnePropertyGeneration_2E_weak (const GGS_toOnePropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak GGS_toOnePropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toOnePropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration_2E_weak::bang_toOnePropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toOnePropertyGeneration) ;
      result = GGS_toOnePropertyGeneration ((cPtr_toOnePropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2E_weak ("toOnePropertyGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOnePropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak GGS_toOnePropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGeneration_2E_weak result ;
  const GGS_toOnePropertyGeneration_2E_weak * p = (const GGS_toOnePropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@toOnePropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public: GGS_toOnePropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_toOnePropertyGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProperty" ":") ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::plusPlusAssignOperation (const GGS_toOnePropertyGenerationList_2E_element & inValue
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::class_func_listWithValue (const GGS_toOnePropertyGeneration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_toOnePropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_toOnePropertyGeneration & in_mProperty
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::addAssignOperation (const GGS_toOnePropertyGeneration & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_append (const GGS_toOnePropertyGeneration inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_insertAtIndex (const GGS_toOnePropertyGeneration inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_removeAtIndex (GGS_toOnePropertyGeneration & outOperand0,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
      outOperand0 = p->mObject.mProperty_mProperty ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_popFirst (GGS_toOnePropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_popLast (GGS_toOnePropertyGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::method_first (GGS_toOnePropertyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::method_last (GGS_toOnePropertyGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::add_operation (const GGS_toOnePropertyGenerationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result = GGS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result = GGS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result = GGS_toOnePropertyGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::plusAssignOperation (const GGS_toOnePropertyGenerationList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_setMPropertyAtIndex (GGS_toOnePropertyGeneration inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  GGS_toOnePropertyGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toOnePropertyGenerationList::DownEnumerator_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element DownEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration DownEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toOnePropertyGenerationList::UpEnumerator_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element UpEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration UpEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList result ;
  const GGS_toOnePropertyGenerationList * p = (const GGS_toOnePropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum toManyRelationshipOptionAST
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST::GGS_toManyRelationshipOptionAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_hasOpposite (const GGS_lstring & inAssociatedValue0
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_hasOpposite ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionAST_2E_hasOpposite (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::class_func_hasDependance (const GGS_lstring & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  result.mEnum = Enumeration::enum_hasDependance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionAST_2E_hasDependance (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::method_extractHasOpposite (GGS_lstring & outAssociatedValue_oppositeName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasOpposite) {
    outAssociatedValue_oppositeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionAST.hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeName = ptr->mProperty_oppositeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::method_extractHasDependance (GGS_lstring & outAssociatedValue_masterPropertyName,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasDependance) {
    outAssociatedValue_masterPropertyName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionAST.hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_masterPropertyName = ptr->mProperty_masterPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionAST::getter_getHasOpposite (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ result ;
  if (mEnum == Enumeration::enum_hasOpposite) {
    const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionAST_2E_hasOpposite (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::getAssociatedValuesFor_hasOpposite (GGS_lstring & out_oppositeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeName = ptr->mProperty_oppositeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ GGS_toManyRelationshipOptionAST::getter_getHasDependance (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ result ;
  if (mEnum == Enumeration::enum_hasDependance) {
    const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionAST_2E_hasDependance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::getAssociatedValuesFor_hasDependance (GGS_lstring & out_masterPropertyName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionAST_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
  out_masterPropertyName = ptr->mProperty_masterPropertyName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionAST [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionAST::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @toManyRelationshipOptionAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_toManyRelationshipOptionAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST GGS_toManyRelationshipOptionAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST result ;
  const GGS_toManyRelationshipOptionAST * p = (const GGS_toManyRelationshipOptionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

