#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public: GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                           const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                                                  const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_autoLayoutTableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * operand = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                   const GALGAS_abstractDefaultValue & inOperand1
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mAttributeName,
                                                                                     const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName,
                                                                                  in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_abstractDefaultValue & inOperand1
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_append (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_abstractDefaultValue inOperand1,
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_abstractDefaultValue inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
        outOperand0 = p->mObject.mProperty_mAttributeName ;
        outOperand1 = p->mObject.mProperty_mAttributeValue ;
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_abstractDefaultValue & outOperand1,
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_abstractDefaultValue & outOperand1,
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_abstractDefaultValue & outOperand1,
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

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_abstractDefaultValue & outOperand1,
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

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::add_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                            GALGAS_uint inIndex,
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

GALGAS_abstractDefaultValue GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerAttributListAST::cEnumerator_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element cEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  const GALGAS_autoLayoutTableViewControllerAttributListAST * p = (const GALGAS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak & GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (const GALGAS_autoLayoutTableViewControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::bang_autoLayoutTableViewControllerDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
      result = GALGAS_autoLayoutTableViewControllerDeclarationAST ((cPtr_autoLayoutTableViewControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ("autoLayoutTableViewControllerDeclarationAST-weak",
                                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
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

ComparisonResult cPtr_autoLayoutTableViewControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (const cPtr_autoLayoutTableViewControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_autoLayoutTableViewControllerPropertyGeneration::objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::init_28__2C__2C__29_ (const GALGAS_string & in_mPropertyName,
                                                                                                                                        const GALGAS_string & in_mModelString,
                                                                                                                                        const GALGAS_string & in_mOwnerName,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mPropertyName = in_mPropertyName ;
  object->mProperty_mModelString = in_mModelString ;
  object->mProperty_mOwnerName = in_mOwnerName ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (const cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                                               const GALGAS_string & inAttribute_mModelString,
                                                                                                                               const GALGAS_string & inAttribute_mOwnerName
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                                            const GALGAS_string & in_mModelString,
                                                                                                            const GALGAS_string & in_mOwnerName
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
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

acPtr_class * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration * p = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak & GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::bang_autoLayoutTableViewControllerPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
      result = GALGAS_autoLayoutTableViewControllerPropertyGeneration ((cPtr_autoLayoutTableViewControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak ("autoLayoutTableViewControllerPropertyGeneration-weak",
                                                                                                               & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind::GALGAS_autoLayoutTableViewControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerModelKind::description (String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @autoLayoutTableViewControllerModelKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutTableViewControllerModelKind::objectCompare (const GALGAS_autoLayoutTableViewControllerModelKind & inOperand) const {
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
//
//     @autoLayoutTableViewControllerModelKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ("autoLayoutTableViewControllerModelKind",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  const GALGAS_autoLayoutTableViewControllerModelKind * p = (const GALGAS_autoLayoutTableViewControllerModelKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerModelKind *> (p)) {
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
  public: GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                        const GALGAS_string & in_mSortPropertyName,
                                                                                        const GALGAS_string & in_mDisplayedPropertyName,
                                                                                        const GALGAS_string & in_mColumnObjectTypeName,
                                                                                        const GALGAS_string & in_mRunAction,
                                                                                        const GALGAS__32_stringlist & in_mActualParameterList
                                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                                                                                            const GALGAS_string & in_mSortPropertyName,
                                                                                                                                                            const GALGAS_string & in_mDisplayedPropertyName,
                                                                                                                                                            const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                                                                            const GALGAS_string & in_mRunAction,
                                                                                                                                                            const GALGAS__32_stringlist & in_mActualParameterList
                                                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mSortPropertyName, in_mDisplayedPropertyName, in_mColumnObjectTypeName, in_mRunAction, in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                                                             const GALGAS_string & inOperand1,
                                                                                                                                                             const GALGAS_string & inOperand2,
                                                                                                                                                             const GALGAS_string & inOperand3,
                                                                                                                                                             const GALGAS_string & inOperand4,
                                                                                                                                                             const GALGAS__32_stringlist & inOperand5
                                                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                  const GALGAS_bool & in_mEditable,
                                                                                                  const GALGAS_string & in_mSortPropertyName,
                                                                                                  const GALGAS_string & in_mDisplayedPropertyName,
                                                                                                  const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                  const GALGAS_string & in_mRunAction,
                                                                                                  const GALGAS__32_stringlist & in_mActualParameterList
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4,
                                                                                            const GALGAS__32_stringlist & inOperand5
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_append (const GALGAS_bool inOperand0,
                                                                                      const GALGAS_string inOperand1,
                                                                                      const GALGAS_string inOperand2,
                                                                                      const GALGAS_string inOperand3,
                                                                                      const GALGAS_string inOperand4,
                                                                                      const GALGAS__32_stringlist inOperand5,
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                             const GALGAS_string inOperand1,
                                                                                             const GALGAS_string inOperand2,
                                                                                             const GALGAS_string inOperand3,
                                                                                             const GALGAS_string inOperand4,
                                                                                             const GALGAS__32_stringlist inOperand5,
                                                                                             const GALGAS_uint inInsertionIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                             GALGAS_string & outOperand1,
                                                                                             GALGAS_string & outOperand2,
                                                                                             GALGAS_string & outOperand3,
                                                                                             GALGAS_string & outOperand4,
                                                                                             GALGAS__32_stringlist & outOperand5,
                                                                                             const GALGAS_uint inRemoveIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
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
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_bool & outOperand0,
                                                                                        GALGAS_string & outOperand1,
                                                                                        GALGAS_string & outOperand2,
                                                                                        GALGAS_string & outOperand3,
                                                                                        GALGAS_string & outOperand4,
                                                                                        GALGAS__32_stringlist & outOperand5,
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popLast (GALGAS_bool & outOperand0,
                                                                                       GALGAS_string & outOperand1,
                                                                                       GALGAS_string & outOperand2,
                                                                                       GALGAS_string & outOperand3,
                                                                                       GALGAS_string & outOperand4,
                                                                                       GALGAS__32_stringlist & outOperand5,
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                                                     GALGAS_string & outOperand1,
                                                                                     GALGAS_string & outOperand2,
                                                                                     GALGAS_string & outOperand3,
                                                                                     GALGAS_string & outOperand4,
                                                                                     GALGAS__32_stringlist & outOperand5,
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

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                                                    GALGAS_string & outOperand1,
                                                                                    GALGAS_string & outOperand2,
                                                                                    GALGAS_string & outOperand3,
                                                                                    GALGAS_string & outOperand4,
                                                                                    GALGAS__32_stringlist & outOperand5,
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

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                                                  Compiler * /* inCompiler */
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                                   GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMSortPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                                           GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMDisplayedPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                                                GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mDisplayedPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mDisplayedPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                                               GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnObjectTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GALGAS_string inOperand,
                                                                                                    GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMActualParameterListAtIndex (GALGAS__32_stringlist inOperand,
                                                                                                              GALGAS_uint inIndex,
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

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mActualParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mActualParameterList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mDisplayedPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mDisplayedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *> (p)) {
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
  public: GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                         const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                         const GALGAS_string & in_mObservablePropertyForSorting
                                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                                              const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                              const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * operand = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                                               const GALGAS_propertyKind & inOperand1,
                                                                                                                                                               const GALGAS_string & inOperand2
                                                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                   const GALGAS_string & in_mColumnName,
                                                                                                   const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                   const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                                in_mSortPropertyKind,
                                                                                                in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                             const GALGAS_propertyKind & inOperand1,
                                                                                             const GALGAS_string & inOperand2
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                                                       const GALGAS_propertyKind inOperand1,
                                                                                       const GALGAS_string inOperand2,
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                              const GALGAS_propertyKind inOperand1,
                                                                                              const GALGAS_string inOperand2,
                                                                                              const GALGAS_uint inInsertionIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                              GALGAS_propertyKind & outOperand1,
                                                                                              GALGAS_string & outOperand2,
                                                                                              const GALGAS_uint inRemoveIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
        outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                                         GALGAS_propertyKind & outOperand1,
                                                                                         GALGAS_string & outOperand2,
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                                        GALGAS_propertyKind & outOperand1,
                                                                                        GALGAS_string & outOperand2,
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                                      GALGAS_propertyKind & outOperand1,
                                                                                      GALGAS_string & outOperand2,
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

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                                     GALGAS_propertyKind & outOperand1,
                                                                                     GALGAS_string & outOperand2,
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

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::add_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                                                                    Compiler * /* inCompiler */
                                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                                              Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                                      GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMSortPropertyKindAtIndex (GALGAS_propertyKind inOperand,
                                                                                                            GALGAS_uint inIndex,
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

GALGAS_propertyKind GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMObservablePropertyForSortingAtIndex (GALGAS_string inOperand,
                                                                                                                        GALGAS_uint inIndex,
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

GALGAS_string GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & inOperand) const {
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

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak & GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::operator = (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (const GALGAS_autoLayoutTableViewControllerGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::bang_autoLayoutTableViewControllerGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutTableViewControllerGeneration) ;
      result = GALGAS_autoLayoutTableViewControllerGeneration ((cPtr_autoLayoutTableViewControllerGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutTableViewControllerGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2D_weak ("autoLayoutTableViewControllerGeneration-weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerGeneration_2D_weak GALGAS_autoLayoutTableViewControllerGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerGeneration_2D_weak result ;
  const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak * p = (const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutTableViewControllerGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectionControllerDeclarationAST_2D_weak::objectCompare (const GALGAS_selectionControllerDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak & GALGAS_selectionControllerDeclarationAST_2D_weak::operator = (const GALGAS_selectionControllerDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak::GALGAS_selectionControllerDeclarationAST_2D_weak (const GALGAS_selectionControllerDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak GALGAS_selectionControllerDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST GALGAS_selectionControllerDeclarationAST_2D_weak::bang_selectionControllerDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerDeclarationAST) ;
      result = GALGAS_selectionControllerDeclarationAST ((cPtr_selectionControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2D_weak ("selectionControllerDeclarationAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerDeclarationAST_2D_weak GALGAS_selectionControllerDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclarationAST_2D_weak result ;
  const GALGAS_selectionControllerDeclarationAST_2D_weak * p = (const GALGAS_selectionControllerDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectionControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mOwnerName (),
mProperty_mModelControllerName (),
mProperty_mModelControllerPropertyName () {
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

ComparisonResult cPtr_selectionControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_selectionControllerPropertyGeneration * p = (const cPtr_selectionControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_selectionControllerPropertyGeneration::objectCompare (const GALGAS_selectionControllerPropertyGeneration & inOperand) const {
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

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::init_28__2C__2C__2C__29_ (const GALGAS_string & in_mPropertyName,
                                                                                                                        const GALGAS_string & in_mOwnerName,
                                                                                                                        const GALGAS_string & in_mModelControllerName,
                                                                                                                        const GALGAS_string & in_mModelControllerPropertyName,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cPtr_selectionControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectionControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->mProperty_mPropertyName = in_mPropertyName ;
  object->mProperty_mOwnerName = in_mOwnerName ;
  object->mProperty_mModelControllerName = in_mModelControllerName ;
  object->mProperty_mModelControllerPropertyName = in_mModelControllerPropertyName ;
  const GALGAS_selectionControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration::GALGAS_selectionControllerPropertyGeneration (const cPtr_selectionControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                           const GALGAS_string & inAttribute_mOwnerName,
                                                                                                           const GALGAS_string & inAttribute_mModelControllerName,
                                                                                                           const GALGAS_string & inAttribute_mModelControllerPropertyName
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mOwnerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mOwnerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mModelControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectionControllerPropertyGeneration::readProperty_mModelControllerPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerPropertyGeneration) ;
    return p->mProperty_mModelControllerPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectionControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectionControllerPropertyGeneration::cPtr_selectionControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                        const GALGAS_string & in_mOwnerName,
                                                                                        const GALGAS_string & in_mModelControllerName,
                                                                                        const GALGAS_string & in_mModelControllerPropertyName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
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

acPtr_class * cPtr_selectionControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectionControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mOwnerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ("selectionControllerPropertyGeneration",
                                                                                             & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration result ;
  const GALGAS_selectionControllerPropertyGeneration * p = (const GALGAS_selectionControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectionControllerPropertyGeneration_2D_weak::objectCompare (const GALGAS_selectionControllerPropertyGeneration_2D_weak & inOperand) const {
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

GALGAS_selectionControllerPropertyGeneration_2D_weak::GALGAS_selectionControllerPropertyGeneration_2D_weak (void) :
GALGAS_propertyGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak & GALGAS_selectionControllerPropertyGeneration_2D_weak::operator = (const GALGAS_selectionControllerPropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak::GALGAS_selectionControllerPropertyGeneration_2D_weak (const GALGAS_selectionControllerPropertyGeneration & inSource) :
GALGAS_propertyGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak GALGAS_selectionControllerPropertyGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration GALGAS_selectionControllerPropertyGeneration_2D_weak::bang_selectionControllerPropertyGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectionControllerPropertyGeneration) ;
      result = GALGAS_selectionControllerPropertyGeneration ((cPtr_selectionControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerPropertyGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2D_weak ("selectionControllerPropertyGeneration-weak",
                                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerPropertyGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerPropertyGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerPropertyGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerPropertyGeneration_2D_weak GALGAS_selectionControllerPropertyGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerPropertyGeneration_2D_weak result ;
  const GALGAS_selectionControllerPropertyGeneration_2D_weak * p = (const GALGAS_selectionControllerPropertyGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerPropertyGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerPropertyGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_selectionControllerForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                               const GALGAS_string & in_mSelectionControllerName,
                                                               const GALGAS_string & in_mBoundControllerName,
                                                               const GALGAS_string & in_mBoundControllerPropertyName,
                                                               const GALGAS_string & in_mBaseTypeName,
                                                               const GALGAS_string & in_mSelectionTypeName,
                                                               const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                               const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                                                          const GALGAS_string & in_mSelectionControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerPropertyName,
                                                                                                          const GALGAS_string & in_mBaseTypeName,
                                                                                                          const GALGAS_string & in_mSelectionTypeName,
                                                                                                          const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                          const GALGAS_propertyGenerationList & in_mPropertyGenerationList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_selectionControllerForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_selectionControllerForGeneration * operand = (cCollectionElement_selectionControllerForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_selectionControllerForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                           const GALGAS_string & inOperand1,
                                                                                                           const GALGAS_string & inOperand2,
                                                                                                           const GALGAS_string & inOperand3,
                                                                                                           const GALGAS_string & inOperand4,
                                                                                                           const GALGAS_string & inOperand5,
                                                                                                           const GALGAS_propertyMap & inOperand6,
                                                                                                           const GALGAS_propertyGenerationList & inOperand7
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_selectionControllerForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_string & in_mOwnerName,
                                                                         const GALGAS_string & in_mSelectionControllerName,
                                                                         const GALGAS_string & in_mBoundControllerName,
                                                                         const GALGAS_string & in_mBoundControllerPropertyName,
                                                                         const GALGAS_string & in_mBaseTypeName,
                                                                         const GALGAS_string & in_mSelectionTypeName,
                                                                         const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                         const GALGAS_propertyGenerationList & in_mPropertyGenerationList
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

void GALGAS_selectionControllerForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                   const GALGAS_string & inOperand1,
                                                                   const GALGAS_string & inOperand2,
                                                                   const GALGAS_string & inOperand3,
                                                                   const GALGAS_string & inOperand4,
                                                                   const GALGAS_string & inOperand5,
                                                                   const GALGAS_propertyMap & inOperand6,
                                                                   const GALGAS_propertyGenerationList & inOperand7
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

void GALGAS_selectionControllerForGeneration::setter_append (const GALGAS_string inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_string inOperand2,
                                                             const GALGAS_string inOperand3,
                                                             const GALGAS_string inOperand4,
                                                             const GALGAS_string inOperand5,
                                                             const GALGAS_propertyMap inOperand6,
                                                             const GALGAS_propertyGenerationList inOperand7,
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

void GALGAS_selectionControllerForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                    const GALGAS_string inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_string inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_string inOperand5,
                                                                    const GALGAS_propertyMap inOperand6,
                                                                    const GALGAS_propertyGenerationList inOperand7,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
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

void GALGAS_selectionControllerForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_string & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    GALGAS_string & outOperand5,
                                                                    GALGAS_propertyMap & outOperand6,
                                                                    GALGAS_propertyGenerationList & outOperand7,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               GALGAS_string & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               GALGAS_string & outOperand5,
                                                               GALGAS_propertyMap & outOperand6,
                                                               GALGAS_propertyGenerationList & outOperand7,
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

void GALGAS_selectionControllerForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              GALGAS_string & outOperand5,
                                                              GALGAS_propertyMap & outOperand6,
                                                              GALGAS_propertyGenerationList & outOperand7,
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

void GALGAS_selectionControllerForGeneration::method_first (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            GALGAS_string & outOperand5,
                                                            GALGAS_propertyMap & outOperand6,
                                                            GALGAS_propertyGenerationList & outOperand7,
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

void GALGAS_selectionControllerForGeneration::method_last (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           GALGAS_string & outOperand5,
                                                           GALGAS_propertyMap & outOperand6,
                                                           GALGAS_propertyGenerationList & outOperand7,
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

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMOwnerNameAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionControllerNameAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBoundControllerNameAtIndex (GALGAS_string inOperand,
                                                                                     GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBoundControllerPropertyNameAtIndex (GALGAS_string inOperand,
                                                                                             GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerPropertyName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMBaseTypeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBaseTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBaseTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionTypeNameAtIndex (GALGAS_string inOperand,
                                                                                   GALGAS_uint inIndex,
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

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMSelectionObservablePropertyMapAtIndex (GALGAS_propertyMap inOperand,
                                                                                                GALGAS_uint inIndex,
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

GALGAS_propertyMap GALGAS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_propertyMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration::setter_setMPropertyGenerationListAtIndex (GALGAS_propertyGenerationList inOperand,
                                                                                        GALGAS_uint inIndex,
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

GALGAS_propertyGenerationList GALGAS_selectionControllerForGeneration::getter_mPropertyGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_propertyGenerationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mPropertyGenerationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_selectionControllerForGeneration::cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element cEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBaseTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyMap cEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionObservablePropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cEnumerator_selectionControllerForGeneration::current_mPropertyGenerationList (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  const GALGAS_selectionControllerForGeneration * p = (const GALGAS_selectionControllerForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractDefaultValue_2D_weak::objectCompare (const GALGAS_abstractDefaultValue_2D_weak & inOperand) const {
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

GALGAS_abstractDefaultValue_2D_weak::GALGAS_abstractDefaultValue_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak & GALGAS_abstractDefaultValue_2D_weak::operator = (const GALGAS_abstractDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak::GALGAS_abstractDefaultValue_2D_weak (const GALGAS_abstractDefaultValue & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak GALGAS_abstractDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_abstractDefaultValue_2D_weak::bang_abstractDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDefaultValue) ;
      result = GALGAS_abstractDefaultValue ((cPtr_abstractDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak ("abstractDefaultValue-weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue_2D_weak GALGAS_abstractDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDefaultValue_2D_weak result ;
  const GALGAS_abstractDefaultValue_2D_weak * p = (const GALGAS_abstractDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boolAsDefaultValue_2D_weak::objectCompare (const GALGAS_boolAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak & GALGAS_boolAsDefaultValue_2D_weak::operator = (const GALGAS_boolAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak::GALGAS_boolAsDefaultValue_2D_weak (const GALGAS_boolAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak GALGAS_boolAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue_2D_weak::bang_boolAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolAsDefaultValue) ;
      result = GALGAS_boolAsDefaultValue ((cPtr_boolAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @boolAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2D_weak ("boolAsDefaultValue-weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boolAsDefaultValue_2D_weak GALGAS_boolAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue_2D_weak result ;
  const GALGAS_boolAsDefaultValue_2D_weak * p = (const GALGAS_boolAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boolAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_doubleAsDefaultValue_2D_weak::objectCompare (const GALGAS_doubleAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_doubleAsDefaultValue_2D_weak::GALGAS_doubleAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak & GALGAS_doubleAsDefaultValue_2D_weak::operator = (const GALGAS_doubleAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak::GALGAS_doubleAsDefaultValue_2D_weak (const GALGAS_doubleAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak GALGAS_doubleAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue GALGAS_doubleAsDefaultValue_2D_weak::bang_doubleAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_doubleAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doubleAsDefaultValue) ;
      result = GALGAS_doubleAsDefaultValue ((cPtr_doubleAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @doubleAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2D_weak ("doubleAsDefaultValue-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_doubleAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_doubleAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doubleAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_doubleAsDefaultValue_2D_weak GALGAS_doubleAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_doubleAsDefaultValue_2D_weak result ;
  const GALGAS_doubleAsDefaultValue_2D_weak * p = (const GALGAS_doubleAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_doubleAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @integerAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue (),
mProperty_mNegative () {
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

ComparisonResult cPtr_integerAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_integerAsDefaultValue * p = (const cPtr_integerAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNegative.objectCompare (p->mProperty_mNegative) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_integerAsDefaultValue::objectCompare (const GALGAS_integerAsDefaultValue & inOperand) const {
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

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

/* GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::init_28__2C__29_ (const GALGAS_luint & in_mValue,
                                                                                const GALGAS_bool & in_mNegative,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cPtr_integerAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_integerAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->mProperty_mValue = in_mValue ;
  object->mProperty_mNegative = in_mNegative ;
  const GALGAS_integerAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
} */

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue::GALGAS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::class_func_new (const GALGAS_luint & inAttribute_mValue,
                                                                           const GALGAS_bool & inAttribute_mNegative
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  if (inAttribute_mValue.isValid () && inAttribute_mNegative.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_integerAsDefaultValue (inAttribute_mValue, inAttribute_mNegative COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMValue (GALGAS_luint inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_integerAsDefaultValue::setter_setMNegative (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mNegative = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_integerAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_integerAsDefaultValue::readProperty_mNegative (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mNegative ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GALGAS_luint & in_mValue,
                                                        const GALGAS_bool & in_mNegative
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue),
mProperty_mNegative (in_mNegative) {
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

acPtr_class * cPtr_integerAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue, mProperty_mNegative COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @integerAsDefaultValue generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                                                             & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue result ;
  const GALGAS_integerAsDefaultValue * p = (const GALGAS_integerAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_integerAsDefaultValue_2D_weak::objectCompare (const GALGAS_integerAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_integerAsDefaultValue_2D_weak::GALGAS_integerAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak & GALGAS_integerAsDefaultValue_2D_weak::operator = (const GALGAS_integerAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak::GALGAS_integerAsDefaultValue_2D_weak (const GALGAS_integerAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak GALGAS_integerAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue GALGAS_integerAsDefaultValue_2D_weak::bang_integerAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_integerAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerAsDefaultValue) ;
      result = GALGAS_integerAsDefaultValue ((cPtr_integerAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @integerAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2D_weak ("integerAsDefaultValue-weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_integerAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_integerAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_integerAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_integerAsDefaultValue_2D_weak GALGAS_integerAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_integerAsDefaultValue_2D_weak result ;
  const GALGAS_integerAsDefaultValue_2D_weak * p = (const GALGAS_integerAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_integerAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_stringAsDefaultValue_2D_weak::objectCompare (const GALGAS_stringAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak & GALGAS_stringAsDefaultValue_2D_weak::operator = (const GALGAS_stringAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak::GALGAS_stringAsDefaultValue_2D_weak (const GALGAS_stringAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak GALGAS_stringAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue GALGAS_stringAsDefaultValue_2D_weak::bang_stringAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringAsDefaultValue) ;
      result = GALGAS_stringAsDefaultValue ((cPtr_stringAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @stringAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2D_weak ("stringAsDefaultValue-weak",
                                                                                    & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringAsDefaultValue_2D_weak GALGAS_stringAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_stringAsDefaultValue_2D_weak result ;
  const GALGAS_stringAsDefaultValue_2D_weak * p = (const GALGAS_stringAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_stringAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_identifierAsDefaultValue_2D_weak::objectCompare (const GALGAS_identifierAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak & GALGAS_identifierAsDefaultValue_2D_weak::operator = (const GALGAS_identifierAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak::GALGAS_identifierAsDefaultValue_2D_weak (const GALGAS_identifierAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak GALGAS_identifierAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue GALGAS_identifierAsDefaultValue_2D_weak::bang_identifierAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_identifierAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_identifierAsDefaultValue) ;
      result = GALGAS_identifierAsDefaultValue ((cPtr_identifierAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @identifierAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2D_weak ("identifierAsDefaultValue-weak",
                                                                                        & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_identifierAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_identifierAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_identifierAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_identifierAsDefaultValue_2D_weak GALGAS_identifierAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_identifierAsDefaultValue_2D_weak result ;
  const GALGAS_identifierAsDefaultValue_2D_weak * p = (const GALGAS_identifierAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_identifierAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_prefsAsDefaultValue_2D_weak::objectCompare (const GALGAS_prefsAsDefaultValue_2D_weak & inOperand) const {
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

GALGAS_prefsAsDefaultValue_2D_weak::GALGAS_prefsAsDefaultValue_2D_weak (void) :
GALGAS_abstractDefaultValue_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak & GALGAS_prefsAsDefaultValue_2D_weak::operator = (const GALGAS_prefsAsDefaultValue & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak::GALGAS_prefsAsDefaultValue_2D_weak (const GALGAS_prefsAsDefaultValue & inSource) :
GALGAS_abstractDefaultValue_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak GALGAS_prefsAsDefaultValue_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue GALGAS_prefsAsDefaultValue_2D_weak::bang_prefsAsDefaultValue_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_prefsAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsAsDefaultValue) ;
      result = GALGAS_prefsAsDefaultValue ((cPtr_prefsAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefsAsDefaultValue-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2D_weak ("prefsAsDefaultValue-weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractDefaultValue_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsAsDefaultValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsAsDefaultValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsAsDefaultValue_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsAsDefaultValue_2D_weak GALGAS_prefsAsDefaultValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsAsDefaultValue_2D_weak result ;
  const GALGAS_prefsAsDefaultValue_2D_weak * p = (const GALGAS_prefsAsDefaultValue_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefsAsDefaultValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                  const GALGAS_typeKindList constin_inAttributeActualTypeList,
                                                  const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                                  GALGAS_string & out_outSwiftDefaultValueAsString,
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

void cPtr_abstractDefaultValue::method_enterDefaultValuePrecedence (const GALGAS_lstring /* constinArgument_inNode */,
                                                                    GALGAS_declarationPrecedenceGraph & /* ioArgument_ioGraph */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (cPtr_abstractDefaultValue * inObject,
                                                      const GALGAS_lstring constin_inNode,
                                                      GALGAS_declarationPrecedenceGraph & io_ioGraph,
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

GALGAS_string extensionGetter_typeName (const GALGAS_typeKind & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_result = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_result = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
    {
      result_result = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_result = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_result = GALGAS_string ("Date") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_result = GALGAS_string ("Data") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_result = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_result = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_result = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_result = GALGAS_string ("BezierPathArray") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_827 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_798_typeName = extractPtr_827->mAssociatedValue0 ;
      result_result = extractedValue_798_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_883 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_855_typeName = extractPtr_883->mAssociatedValue0 ;
      result_result = extractedValue_855_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_935 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_910_typeName = extractPtr_935->mAssociatedValue0 ;
      result_result = extractedValue_910_typeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_1005 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_980_typeName = extractPtr_1005->mAssociatedValue0 ;
      result_result = extractedValue_980_typeName ;
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

GALGAS_bool extensionGetter_isComparable (const GALGAS_typeKind & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_bezierPathType:
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
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

GALGAS_bool extensionGetter_isGraphic (const GALGAS_typeKind & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_dataType:
  case GALGAS_typeKind::kEnum_bezierPathType:
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_2099 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_2070_isGraphic = extractPtr_2099->mAssociatedValue1 ;
      result_outResult = extractedValue_2070_isGraphic ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      result_outResult = GALGAS_bool (false) ;
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
  public: GALGAS_typeKindList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKindList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_typeKindList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeKindList * operand = (cCollectionElement_typeKindList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeKindList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList::GALGAS_typeKindList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList::GALGAS_typeKindList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_typeKindList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::class_func_listWithValue (const GALGAS_typeKind & inOperand0
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_typeKindList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_typeKind & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = nullptr ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::addAssign_operation (const GALGAS_typeKind & inOperand0
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

void GALGAS_typeKindList::setter_append (const GALGAS_typeKind inOperand0,
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

void GALGAS_typeKindList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_typeKindList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_typeKindList) ;
        outOperand0 = p->mObject.mProperty_mType ;
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

void GALGAS_typeKindList::setter_popFirst (GALGAS_typeKind & outOperand0,
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

void GALGAS_typeKindList::setter_popLast (GALGAS_typeKind & outOperand0,
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

void GALGAS_typeKindList::method_first (GALGAS_typeKind & outOperand0,
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

void GALGAS_typeKindList::method_last (GALGAS_typeKind & outOperand0,
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

GALGAS_typeKindList GALGAS_typeKindList::add_operation (const GALGAS_typeKindList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::plusAssign_operation (const GALGAS_typeKindList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList::setter_setMTypeAtIndex (GALGAS_typeKind inOperand,
                                                  GALGAS_uint inIndex,
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

GALGAS_typeKind GALGAS_typeKindList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_typeKindList::cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList GALGAS_typeKindList::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  const GALGAS_typeKindList * p = (const GALGAS_typeKindList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKindList *> (p)) {
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

GALGAS_string extensionGetter_typeName (const GALGAS_propertyKind & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_2636 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_2597_type = extractPtr_2636->mAssociatedValue0 ;
      result_result = extensionGetter_typeName (extractedValue_2597_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 90)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_2682 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2653_typeName = extractPtr_2682->mAssociatedValue0 ;
      result_result = extractedValue_2653_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_2734 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2705_typeName = extractPtr_2734->mAssociatedValue0 ;
      result_result = extractedValue_2705_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_2795 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_2767_typeName = extractPtr_2795->mAssociatedValue0 ;
      result_result = extractedValue_2767_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_2857 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_2832_typeName = extractPtr_2857->mAssociatedValue0 ;
      result_result = extractedValue_2832_typeName ;
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

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_propertyKind & inObject,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_3120 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_3076_type = extractPtr_3120->mAssociatedValue0 ;
      result_result = extensionGetter_swiftTypeName (extractedValue_3076_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 107)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_3166 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3137_typeName = extractPtr_3166->mAssociatedValue0 ;
      result_result = extractedValue_3137_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_3218 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3189_typeName = extractPtr_3218->mAssociatedValue0 ;
      result_result = extractedValue_3189_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_3279 = (const cEnumAssociatedValues_propertyKind_arrayController *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_3251_typeName = extractPtr_3279->mAssociatedValue0 ;
      result_result = extractedValue_3251_typeName.readProperty_string () ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_3341 = (const cEnumAssociatedValues_propertyKind_selectionController *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_3316_typeName = extractPtr_3341->mAssociatedValue0 ;
      result_result = extractedValue_3316_typeName ;
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

GALGAS_string extensionGetter_swiftTypeName (const GALGAS_typeKind & inObject,
                                             Compiler *
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_typeKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uint_33__32_Type:
    {
      result_outResult = GALGAS_string ("UInt32") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("Date") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("Data") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathArrayType:
    {
      result_outResult = GALGAS_string ("BezierPathArray") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_4068 = (const cEnumAssociatedValues_typeKind_entityType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4039_entityName = extractPtr_4068->mAssociatedValue0 ;
      result_outResult = extractedValue_4039_entityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const cEnumAssociatedValues_typeKind_enumType * extractPtr_4136 = (const cEnumAssociatedValues_typeKind_enumType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4104_enumTypeName = extractPtr_4136->mAssociatedValue0 ;
      result_outResult = extractedValue_4104_enumTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKind_classType * extractPtr_4204 = (const cEnumAssociatedValues_typeKind_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4175_classTypeName = extractPtr_4204->mAssociatedValue0 ;
      result_outResult = extractedValue_4175_classTypeName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyExternType:
    {
      const cEnumAssociatedValues_typeKind_transientPropertyExternType * extractPtr_4291 = (const cEnumAssociatedValues_typeKind_transientPropertyExternType *) (temp_0.unsafePointer ()) ;
      const GALGAS_string extractedValue_4262_classTypeName = extractPtr_4291->mAssociatedValue0 ;
      result_outResult = extractedValue_4262_classTypeName ;
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

GALGAS_bool extensionGetter_isTransient (const GALGAS_propertyKind & inObject,
                                         Compiler *
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_4567 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4514_accessibility = extractPtr_4567->mAssociatedValue1 ;
      result_result = extractedValue_4514_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 145)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      const cEnumAssociatedValues_propertyKind_toMany * extractPtr_4644 = (const cEnumAssociatedValues_propertyKind_toMany *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4587_accessibility = extractPtr_4644->mAssociatedValue1 ;
      result_result = extractedValue_4587_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 146)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      const cEnumAssociatedValues_propertyKind_toOne * extractPtr_4720 = (const cEnumAssociatedValues_propertyKind_toOne *) (temp_0.unsafePointer ()) ;
      const GALGAS_propertyAccessibility extractedValue_4663_accessibility = extractPtr_4720->mAssociatedValue1 ;
      result_result = extractedValue_4663_accessibility.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 147)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
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

GALGAS_bool extensionGetter_isComparable (const GALGAS_propertyKind & inObject,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5061 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_5022_type = extractPtr_5061->mAssociatedValue0 ;
      result_result = extensionGetter_isComparable (extractedValue_5022_type, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 157)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
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

GALGAS_bool extensionGetter_isEntityType (const GALGAS_propertyKind & inObject,
                                          Compiler *
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
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

GALGAS_bool extensionGetter_isEnumType (const GALGAS_propertyKind & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_propertyKind temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_propertyKind::kNotBuilt:
    break ;
  case GALGAS_propertyKind::kEnum_property:
    {
      const cEnumAssociatedValues_propertyKind_property * extractPtr_5859 = (const cEnumAssociatedValues_propertyKind_property *) (temp_0.unsafePointer ()) ;
      const GALGAS_typeKind extractedValue_5822_type = extractPtr_5859->mAssociatedValue0 ;
      result_result = extractedValue_5822_type.getter_isEnumType (SOURCE_FILE ("unified-type.ggs", 181)) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toMany:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_toOne:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_arrayController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_propertyKind::kEnum_selectionController:
    {
      result_result = GALGAS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_atomic::cEnumAssociatedValues_classKind_atomic (const GALGAS_typeKind inAssociatedValue0
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_atomic::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_classKind_atomic::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_atomic * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_atomic *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_document::cEnumAssociatedValues_classKind_document (const GALGAS_lstring inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_document::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_classKind_document::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_document * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_document *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_classKind_entity::cEnumAssociatedValues_classKind_entity (const GALGAS_string inAssociatedValue0,
                                                                                const GALGAS_bool inAssociatedValue1,
                                                                                const GALGAS_bool inAssociatedValue2,
                                                                                const GALGAS_bool inAssociatedValue3
                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_classKind_entity::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_classKind_entity::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_classKind_entity * ptr = dynamic_cast<const cEnumAssociatedValues_classKind_entity *> (inOperand) ;
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
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue3.objectCompare (ptr->mAssociatedValue3) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind::GALGAS_classKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::class_func_prefs (UNUSED_LOCATION_ARGS) {
  GALGAS_classKind result ;
  result.mEnum = kEnum_prefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::class_func_atomic (const GALGAS_typeKind & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_atomic ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_atomic (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::class_func_document (const GALGAS_lstring & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_document ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_document (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::class_func_entity (const GALGAS_string & inAssociatedValue0,
                                                      const GALGAS_bool & inAssociatedValue1,
                                                      const GALGAS_bool & inAssociatedValue2,
                                                      const GALGAS_bool & inAssociatedValue3
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_classKind_entity (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_atomic (GALGAS_typeKind & outAssociatedValue0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_atomic) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @classKind atomic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_atomic * ptr = (const cEnumAssociatedValues_classKind_atomic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_document (GALGAS_lstring & outAssociatedValue0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_document) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @classKind document invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_document * ptr = (const cEnumAssociatedValues_classKind_document *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_classKind::method_entity (GALGAS_string & outAssociatedValue0,
                                      GALGAS_bool & outAssociatedValue1,
                                      GALGAS_bool & outAssociatedValue2,
                                      GALGAS_bool & outAssociatedValue3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    String s ;
    s.appendCString ("method @classKind entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_classKind_entity * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_prefs () const {
  const bool ok = mEnum == kEnum_prefs ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_atomic (GALGAS_typeKind & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_atomic ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_atomic *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_document (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_document ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_document *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_classKind::optional_entity (GALGAS_string & outAssociatedValue0,
                                        GALGAS_bool & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        GALGAS_bool & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_entity ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_classKind_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
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

GALGAS_bool GALGAS_classKind::getter_isPrefs (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefs == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isAtomic (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_atomic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isDocument (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_document == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classKind::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_classKind::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @classKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_classKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_classKind::objectCompare (const GALGAS_classKind & inOperand) const {
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
//     @classKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ("classKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_classKind GALGAS_classKind::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classKind result ;
  const GALGAS_classKind * p = (const GALGAS_classKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_classKind *> (p)) {
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

GALGAS_string cPtr_propertyGeneration::getter_prefKeyDefinitionCode (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_declarationInSelectionControllerCode (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string callExtensionGetter_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                           const GALGAS_bool in_inPreferences,
                                                           const GALGAS_bool in_inGenerationDirectAccess,
                                                           const GALGAS_stringset in_inOverriddenTransients,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
                                                     const GALGAS_bool in_inPreferences,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string callExtensionGetter_initCode (const cPtr_propertyGeneration * inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_populateExplorerWindowCode (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
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

GALGAS_string cPtr_propertyGeneration::getter_resetToManyRelationships (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_resetToManyRelationships (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyAccessibility_transient::cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyAccessibility_transient::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_propertyAccessibility_transient::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessibility_transient * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessibility_transient *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility::GALGAS_propertyAccessibility (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::class_func_stored (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_stored ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::class_func_computed (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_computed ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::class_func_transient (const GALGAS_bool & inAssociatedValue0
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transient ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessibility_transient (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAccessibility::method_transient (GALGAS_bool & outAssociatedValue0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transient) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @propertyAccessibility transient invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessibility_transient * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_stored () const {
  const bool ok = mEnum == kEnum_stored ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_computed () const {
  const bool ok = mEnum == kEnum_computed ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyAccessibility::optional_transient (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_transient ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyAccessibility [4] = {
  "(not built)",
  "stored",
  "computed",
  "transient"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stored == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isComputed (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_computed == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transient == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyAccessibility::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyAccessibility: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyAccessibility [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyAccessibility::objectCompare (const GALGAS_propertyAccessibility & inOperand) const {
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
//     @propertyAccessibility generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  const GALGAS_propertyAccessibility * p = (const GALGAS_propertyAccessibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyAccessibility *> (p)) {
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
  public: GALGAS_transientExternTypeList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                      const GALGAS_bool & in_mIsClass
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                                                        const GALGAS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_transientExternTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientExternTypeList * operand = (cCollectionElement_transientExternTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientExternTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                         const GALGAS_bool & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientExternTypeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_string & in_mTypeName,
                                                                const GALGAS_bool & in_mIsClass
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName,
                                                             in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::addAssign_operation (const GALGAS_string & inOperand0,
                                                          const GALGAS_bool & inOperand1
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

void GALGAS_transientExternTypeList::setter_append (const GALGAS_string inOperand0,
                                                    const GALGAS_bool inOperand1,
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

void GALGAS_transientExternTypeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                           const GALGAS_bool inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_transientExternTypeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mIsClass ;
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

void GALGAS_transientExternTypeList::setter_popFirst (GALGAS_string & outOperand0,
                                                      GALGAS_bool & outOperand1,
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

void GALGAS_transientExternTypeList::setter_popLast (GALGAS_string & outOperand0,
                                                     GALGAS_bool & outOperand1,
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

void GALGAS_transientExternTypeList::method_first (GALGAS_string & outOperand0,
                                                   GALGAS_bool & outOperand1,
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

void GALGAS_transientExternTypeList::method_last (GALGAS_string & outOperand0,
                                                  GALGAS_bool & outOperand1,
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

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::add_operation (const GALGAS_transientExternTypeList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_setMTypeNameAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
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

GALGAS_string GALGAS_transientExternTypeList::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList::setter_setMIsClassAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
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

GALGAS_bool GALGAS_transientExternTypeList::getter_mIsClassAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mIsClass ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_transientExternTypeList::cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element cEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList result ;
  const GALGAS_transientExternTypeList * p = (const GALGAS_transientExternTypeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientExternTypeList *> (p)) {
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
                                       const GALGAS_string constin_inOutputDirectory,
                                       const GALGAS_generationStruct constin_inGenerationStruct,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
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
  public: GALGAS_fileGenerationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_fileGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fileGenerationList * operand = (cCollectionElement_fileGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fileGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList::GALGAS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList::GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fileGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::class_func_listWithValue (const GALGAS_abstractFileGeneration & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fileGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::addAssign_operation (const GALGAS_abstractFileGeneration & inOperand0
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

void GALGAS_fileGenerationList::setter_append (const GALGAS_abstractFileGeneration inOperand0,
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

void GALGAS_fileGenerationList::setter_insertAtIndex (const GALGAS_abstractFileGeneration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_fileGenerationList::setter_removeAtIndex (GALGAS_abstractFileGeneration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
        outOperand0 = p->mObject.mProperty_mFileGeneration ;
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

void GALGAS_fileGenerationList::setter_popFirst (GALGAS_abstractFileGeneration & outOperand0,
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

void GALGAS_fileGenerationList::setter_popLast (GALGAS_abstractFileGeneration & outOperand0,
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

void GALGAS_fileGenerationList::method_first (GALGAS_abstractFileGeneration & outOperand0,
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

void GALGAS_fileGenerationList::method_last (GALGAS_abstractFileGeneration & outOperand0,
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

GALGAS_fileGenerationList GALGAS_fileGenerationList::add_operation (const GALGAS_fileGenerationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList::setter_setMFileGenerationAtIndex (GALGAS_abstractFileGeneration inOperand,
                                                                  GALGAS_uint inIndex,
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

GALGAS_abstractFileGeneration GALGAS_fileGenerationList::getter_mFileGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  GALGAS_abstractFileGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    result = p->mObject.mProperty_mFileGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_fileGenerationList::cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element cEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractFileGeneration cEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList GALGAS_fileGenerationList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList result ;
  const GALGAS_fileGenerationList * p = (const GALGAS_fileGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (void) :
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

GALGAS_generationStruct::~ GALGAS_generationStruct (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::init_28__29_ (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::setInitializedProperties (Compiler * /* inCompiler */) {
  mProperty_mValidationStubRoutineListForGeneration = GALGAS_validationStubRoutineListForGeneration::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 31)) ;
  mProperty_mFileGenerationList = GALGAS_fileGenerationList::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 32)) ;
  mProperty_mEntityListForGeneration = GALGAS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 33)) ;
  mProperty_mGenerateEBManagedXibDocumentSwift = GALGAS_bool (false) ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GALGAS_bool (false) ;
  mProperty_mNeededOutletClasses = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 36)) ;
  mProperty_mMainXibDescriptorList = GALGAS_mainXibDescriptorList::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 37)) ;
  mProperty_mToOneClassImplementations = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 39)) ;
  mProperty_mToManyClassImplementations = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 40)) ;
  mProperty_mSelectionControllerListForGeneration = GALGAS_selectionControllerForGeneration::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 42)) ;
  mProperty_mPropertyClassList = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 43)) ;
  mProperty_mTransientPropertyTypeList = GALGAS_transientExternTypeList::class_func_emptyList (SOURCE_FILE ("code-generation.ggs", 44)) ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 46)) ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 47)) ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 48)) ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 49)) ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("code-generation.ggs", 50)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationStruct::GALGAS_generationStruct (const GALGAS_validationStubRoutineListForGeneration & inOperand0,
                                                  const GALGAS_fileGenerationList & inOperand1,
                                                  const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_bool & inOperand4,
                                                  const GALGAS_stringset & inOperand5,
                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                  const GALGAS_stringset & inOperand7,
                                                  const GALGAS_stringset & inOperand8,
                                                  const GALGAS_selectionControllerForGeneration & inOperand9,
                                                  const GALGAS_stringlist & inOperand10,
                                                  const GALGAS_transientExternTypeList & inOperand11,
                                                  const GALGAS_stringset & inOperand12,
                                                  const GALGAS_stringset & inOperand13,
                                                  const GALGAS_stringset & inOperand14,
                                                  const GALGAS_stringset & inOperand15,
                                                  const GALGAS_stringset & inOperand16) :
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

GALGAS_generationStruct GALGAS_generationStruct::class_func_new (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_generationStruct::objectCompare (const GALGAS_generationStruct & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mProperty_mValidationStubRoutineListForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFileGenerationList.objectCompare (inOperand.mProperty_mFileGenerationList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntityListForGeneration.objectCompare (inOperand.mProperty_mEntityListForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateEBManagedXibDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedXibDocumentSwift) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.objectCompare (inOperand.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mNeededOutletClasses.objectCompare (inOperand.mProperty_mNeededOutletClasses) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mToOneClassImplementations.objectCompare (inOperand.mProperty_mToOneClassImplementations) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mToManyClassImplementations.objectCompare (inOperand.mProperty_mToManyClassImplementations) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (inOperand.mProperty_mSelectionControllerListForGeneration) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPropertyClassList.objectCompare (inOperand.mProperty_mPropertyClassList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTransientPropertyTypeList.objectCompare (inOperand.mProperty_mTransientPropertyTypeList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateClass_5F_TransientArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_TransientArrayOf_5F_) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGenerateClass_5F_StoredArrayOf_5F_.objectCompare (inOperand.mProperty_mGenerateClass_5F_StoredArrayOf_5F_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StoredArrayOf_5F_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_generationStruct::drop (void) {
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

void GALGAS_generationStruct::description (String & ioString,
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

const C_galgas_type_descriptor * GALGAS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_generationStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_generationStruct GALGAS_generationStruct::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_generationStruct result ;
  const GALGAS_generationStruct * p = (const GALGAS_generationStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_generationStruct *> (p)) {
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
  public: GALGAS_XCodeGroupList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                             const GALGAS_string & in_mGroupName,
                                             const GALGAS_string & in_mGroupPath,
                                             const GALGAS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
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

ComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                       const GALGAS_string & inOperand1,
                                                                       const GALGAS_string & inOperand2,
                                                                       const GALGAS_stringlist & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mGroupReference,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_string & in_mGroupPath,
                                                       const GALGAS_stringlist & in_mChildrenRefs
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

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
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

void GALGAS_XCodeGroupList::setter_append (const GALGAS_string inOperand0,
                                           const GALGAS_string inOperand1,
                                           const GALGAS_string inOperand2,
                                           const GALGAS_stringlist inOperand3,
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

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                  const GALGAS_string inOperand1,
                                                  const GALGAS_string inOperand2,
                                                  const GALGAS_stringlist inOperand3,
                                                  const GALGAS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_stringlist & outOperand3,
                                                  const GALGAS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
        outOperand0 = p->mObject.mProperty_mGroupReference ;
        outOperand1 = p->mObject.mProperty_mGroupName ;
        outOperand2 = p->mObject.mProperty_mGroupPath ;
        outOperand3 = p->mObject.mProperty_mChildrenRefs ;
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

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_stringlist & outOperand3,
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

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            GALGAS_stringlist & outOperand3,
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

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
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

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
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

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
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

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
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

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
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

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
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

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  const GALGAS_XCodeGroupList * p = (const GALGAS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeToolTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                  const GALGAS_string & in_mTargetName,
                                                  const GALGAS_string & in_mProductFileReference,
                                                  const GALGAS_string & in_mProductFileName,
                                                  const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                  const GALGAS_string & in_mBuildPhaseRef,
                                                  const GALGAS_string & in_mBuildConfigurationListRef,
                                                  const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                  const GALGAS_string & in_mBuildConfigurationRef,
                                                  const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                  const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
                                                                                const GALGAS_string & in_mTargetName,
                                                                                const GALGAS_string & in_mProductFileReference,
                                                                                const GALGAS_string & in_mProductFileName,
                                                                                const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                                const GALGAS_string & in_mBuildPhaseRef,
                                                                                const GALGAS_string & in_mBuildConfigurationListRef,
                                                                                const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                                const GALGAS_string & in_mBuildConfigurationRef,
                                                                                const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                                const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                 const GALGAS_string & inOperand1,
                                                                                 const GALGAS_string & inOperand2,
                                                                                 const GALGAS_string & inOperand3,
                                                                                 const GALGAS_stringlist & inOperand4,
                                                                                 const GALGAS_string & inOperand5,
                                                                                 const GALGAS_string & inOperand6,
                                                                                 const GALGAS_stringlist & inOperand7,
                                                                                 const GALGAS_string & inOperand8,
                                                                                 const GALGAS_stringlist & inOperand9,
                                                                                 const GALGAS_string & inOperand10
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mTargetRef,
                                                            const GALGAS_string & in_mTargetName,
                                                            const GALGAS_string & in_mProductFileReference,
                                                            const GALGAS_string & in_mProductFileName,
                                                            const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                            const GALGAS_string & in_mBuildPhaseRef,
                                                            const GALGAS_string & in_mBuildConfigurationListRef,
                                                            const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                            const GALGAS_string & in_mBuildConfigurationRef,
                                                            const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                            const GALGAS_string & in_mFrameworkBuildPhaseRef
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef,
                                                         in_mTargetName,
                                                         in_mProductFileReference,
                                                         in_mProductFileName,
                                                         in_mBuildPhaseRefList,
                                                         in_mBuildPhaseRef,
                                                         in_mBuildConfigurationListRef,
                                                         in_mBuildConfigurationSettingList,
                                                         in_mBuildConfigurationRef,
                                                         in_mFrameworksFileRefList,
                                                         in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_string & inOperand1,
                                                      const GALGAS_string & inOperand2,
                                                      const GALGAS_string & inOperand3,
                                                      const GALGAS_stringlist & inOperand4,
                                                      const GALGAS_string & inOperand5,
                                                      const GALGAS_string & inOperand6,
                                                      const GALGAS_stringlist & inOperand7,
                                                      const GALGAS_string & inOperand8,
                                                      const GALGAS_stringlist & inOperand9,
                                                      const GALGAS_string & inOperand10
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_append (const GALGAS_string inOperand0,
                                                const GALGAS_string inOperand1,
                                                const GALGAS_string inOperand2,
                                                const GALGAS_string inOperand3,
                                                const GALGAS_stringlist inOperand4,
                                                const GALGAS_string inOperand5,
                                                const GALGAS_string inOperand6,
                                                const GALGAS_stringlist inOperand7,
                                                const GALGAS_string inOperand8,
                                                const GALGAS_stringlist inOperand9,
                                                const GALGAS_string inOperand10,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_string inOperand1,
                                                       const GALGAS_string inOperand2,
                                                       const GALGAS_string inOperand3,
                                                       const GALGAS_stringlist inOperand4,
                                                       const GALGAS_string inOperand5,
                                                       const GALGAS_string inOperand6,
                                                       const GALGAS_stringlist inOperand7,
                                                       const GALGAS_string inOperand8,
                                                       const GALGAS_stringlist inOperand9,
                                                       const GALGAS_string inOperand10,
                                                       const GALGAS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
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

void GALGAS_XCodeToolTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       GALGAS_string & outOperand3,
                                                       GALGAS_stringlist & outOperand4,
                                                       GALGAS_string & outOperand5,
                                                       GALGAS_string & outOperand6,
                                                       GALGAS_stringlist & outOperand7,
                                                       GALGAS_string & outOperand8,
                                                       GALGAS_stringlist & outOperand9,
                                                       GALGAS_string & outOperand10,
                                                       const GALGAS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  GALGAS_string & outOperand2,
                                                  GALGAS_string & outOperand3,
                                                  GALGAS_stringlist & outOperand4,
                                                  GALGAS_string & outOperand5,
                                                  GALGAS_string & outOperand6,
                                                  GALGAS_stringlist & outOperand7,
                                                  GALGAS_string & outOperand8,
                                                  GALGAS_stringlist & outOperand9,
                                                  GALGAS_string & outOperand10,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_string & outOperand3,
                                               GALGAS_stringlist & outOperand4,
                                               GALGAS_string & outOperand5,
                                               GALGAS_string & outOperand6,
                                               GALGAS_stringlist & outOperand7,
                                               GALGAS_string & outOperand8,
                                               GALGAS_stringlist & outOperand9,
                                               GALGAS_string & outOperand10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  const GALGAS_XCodeToolTargetList * p = (const GALGAS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeAppTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                 const GALGAS_string & in_mTargetName,
                                                 const GALGAS_string & in_mProductFileReference,
                                                 const GALGAS_string & in_mProductFileName,
                                                 const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                 const GALGAS_string & in_mBuildPhaseRef,
                                                 const GALGAS_string & in_mBuildConfigurationListRef,
                                                 const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                 const GALGAS_string & in_mBuildConfigurationRef,
                                                 const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                 const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                 const GALGAS__32_stringlist & in_mDependentTargets,
                                                 const GALGAS_string & in_mResourceBuildRef,
                                                 const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                 const GALGAS_string & in_mInfoPListFile
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
                                                                              const GALGAS_string & in_mTargetName,
                                                                              const GALGAS_string & in_mProductFileReference,
                                                                              const GALGAS_string & in_mProductFileName,
                                                                              const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                                              const GALGAS_string & in_mBuildPhaseRef,
                                                                              const GALGAS_string & in_mBuildConfigurationListRef,
                                                                              const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                                              const GALGAS_string & in_mBuildConfigurationRef,
                                                                              const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                                              const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                                              const GALGAS__32_stringlist & in_mDependentTargets,
                                                                              const GALGAS_string & in_mResourceBuildRef,
                                                                              const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                                              const GALGAS_string & in_mInfoPListFile
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependentTargets" ":") ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceBuildRef" ":") ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceFileBuildRefs" ":") ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInfoPListFile" ":") ;
  mObject.mProperty_mInfoPListFile.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1,
                                                                               const GALGAS_string & inOperand2,
                                                                               const GALGAS_string & inOperand3,
                                                                               const GALGAS_stringlist & inOperand4,
                                                                               const GALGAS_string & inOperand5,
                                                                               const GALGAS_string & inOperand6,
                                                                               const GALGAS_stringlist & inOperand7,
                                                                               const GALGAS_string & inOperand8,
                                                                               const GALGAS_stringlist & inOperand9,
                                                                               const GALGAS_string & inOperand10,
                                                                               const GALGAS__32_stringlist & inOperand11,
                                                                               const GALGAS_string & inOperand12,
                                                                               const GALGAS_stringlist & inOperand13,
                                                                               const GALGAS_string & inOperand14
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mTargetRef,
                                                           const GALGAS_string & in_mTargetName,
                                                           const GALGAS_string & in_mProductFileReference,
                                                           const GALGAS_string & in_mProductFileName,
                                                           const GALGAS_stringlist & in_mBuildPhaseRefList,
                                                           const GALGAS_string & in_mBuildPhaseRef,
                                                           const GALGAS_string & in_mBuildConfigurationListRef,
                                                           const GALGAS_stringlist & in_mBuildConfigurationSettingList,
                                                           const GALGAS_string & in_mBuildConfigurationRef,
                                                           const GALGAS_stringlist & in_mFrameworksFileRefList,
                                                           const GALGAS_string & in_mFrameworkBuildPhaseRef,
                                                           const GALGAS__32_stringlist & in_mDependentTargets,
                                                           const GALGAS_string & in_mResourceBuildRef,
                                                           const GALGAS_stringlist & in_mResourceFileBuildRefs,
                                                           const GALGAS_string & in_mInfoPListFile
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs,
                                                        in_mInfoPListFile COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_string & inOperand1,
                                                     const GALGAS_string & inOperand2,
                                                     const GALGAS_string & inOperand3,
                                                     const GALGAS_stringlist & inOperand4,
                                                     const GALGAS_string & inOperand5,
                                                     const GALGAS_string & inOperand6,
                                                     const GALGAS_stringlist & inOperand7,
                                                     const GALGAS_string & inOperand8,
                                                     const GALGAS_stringlist & inOperand9,
                                                     const GALGAS_string & inOperand10,
                                                     const GALGAS__32_stringlist & inOperand11,
                                                     const GALGAS_string & inOperand12,
                                                     const GALGAS_stringlist & inOperand13,
                                                     const GALGAS_string & inOperand14
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_append (const GALGAS_string inOperand0,
                                               const GALGAS_string inOperand1,
                                               const GALGAS_string inOperand2,
                                               const GALGAS_string inOperand3,
                                               const GALGAS_stringlist inOperand4,
                                               const GALGAS_string inOperand5,
                                               const GALGAS_string inOperand6,
                                               const GALGAS_stringlist inOperand7,
                                               const GALGAS_string inOperand8,
                                               const GALGAS_stringlist inOperand9,
                                               const GALGAS_string inOperand10,
                                               const GALGAS__32_stringlist inOperand11,
                                               const GALGAS_string inOperand12,
                                               const GALGAS_stringlist inOperand13,
                                               const GALGAS_string inOperand14,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_string inOperand1,
                                                      const GALGAS_string inOperand2,
                                                      const GALGAS_string inOperand3,
                                                      const GALGAS_stringlist inOperand4,
                                                      const GALGAS_string inOperand5,
                                                      const GALGAS_string inOperand6,
                                                      const GALGAS_stringlist inOperand7,
                                                      const GALGAS_string inOperand8,
                                                      const GALGAS_stringlist inOperand9,
                                                      const GALGAS_string inOperand10,
                                                      const GALGAS__32_stringlist inOperand11,
                                                      const GALGAS_string inOperand12,
                                                      const GALGAS_stringlist inOperand13,
                                                      const GALGAS_string inOperand14,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
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

void GALGAS_XCodeAppTargetList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      GALGAS_string & outOperand2,
                                                      GALGAS_string & outOperand3,
                                                      GALGAS_stringlist & outOperand4,
                                                      GALGAS_string & outOperand5,
                                                      GALGAS_string & outOperand6,
                                                      GALGAS_stringlist & outOperand7,
                                                      GALGAS_string & outOperand8,
                                                      GALGAS_stringlist & outOperand9,
                                                      GALGAS_string & outOperand10,
                                                      GALGAS__32_stringlist & outOperand11,
                                                      GALGAS_string & outOperand12,
                                                      GALGAS_stringlist & outOperand13,
                                                      GALGAS_string & outOperand14,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        outOperand7.drop () ;
        outOperand8.drop () ;
        outOperand9.drop () ;
        outOperand10.drop () ;
        outOperand11.drop () ;
        outOperand12.drop () ;
        outOperand13.drop () ;
        outOperand14.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
        outOperand0 = p->mObject.mProperty_mTargetRef ;
        outOperand1 = p->mObject.mProperty_mTargetName ;
        outOperand2 = p->mObject.mProperty_mProductFileReference ;
        outOperand3 = p->mObject.mProperty_mProductFileName ;
        outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
        outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
        outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
        outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
        outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
        outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
        outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
        outOperand11 = p->mObject.mProperty_mDependentTargets ;
        outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
        outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
        outOperand14 = p->mObject.mProperty_mInfoPListFile ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
      outOperand8.drop () ;
      outOperand9.drop () ;
      outOperand10.drop () ;
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
      outOperand14.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 GALGAS_string & outOperand3,
                                                 GALGAS_stringlist & outOperand4,
                                                 GALGAS_string & outOperand5,
                                                 GALGAS_string & outOperand6,
                                                 GALGAS_stringlist & outOperand7,
                                                 GALGAS_string & outOperand8,
                                                 GALGAS_stringlist & outOperand9,
                                                 GALGAS_string & outOperand10,
                                                 GALGAS__32_stringlist & outOperand11,
                                                 GALGAS_string & outOperand12,
                                                 GALGAS_stringlist & outOperand13,
                                                 GALGAS_string & outOperand14,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_string & outOperand1,
                                                GALGAS_string & outOperand2,
                                                GALGAS_string & outOperand3,
                                                GALGAS_stringlist & outOperand4,
                                                GALGAS_string & outOperand5,
                                                GALGAS_string & outOperand6,
                                                GALGAS_stringlist & outOperand7,
                                                GALGAS_string & outOperand8,
                                                GALGAS_stringlist & outOperand9,
                                                GALGAS_string & outOperand10,
                                                GALGAS__32_stringlist & outOperand11,
                                                GALGAS_string & outOperand12,
                                                GALGAS_stringlist & outOperand13,
                                                GALGAS_string & outOperand14,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_string & outOperand3,
                                              GALGAS_stringlist & outOperand4,
                                              GALGAS_string & outOperand5,
                                              GALGAS_string & outOperand6,
                                              GALGAS_stringlist & outOperand7,
                                              GALGAS_string & outOperand8,
                                              GALGAS_stringlist & outOperand9,
                                              GALGAS_string & outOperand10,
                                              GALGAS__32_stringlist & outOperand11,
                                              GALGAS_string & outOperand12,
                                              GALGAS_stringlist & outOperand13,
                                              GALGAS_string & outOperand14,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             GALGAS_string & outOperand3,
                                             GALGAS_stringlist & outOperand4,
                                             GALGAS_string & outOperand5,
                                             GALGAS_string & outOperand6,
                                             GALGAS_stringlist & outOperand7,
                                             GALGAS_string & outOperand8,
                                             GALGAS_stringlist & outOperand9,
                                             GALGAS_string & outOperand10,
                                             GALGAS__32_stringlist & outOperand11,
                                             GALGAS_string & outOperand12,
                                             GALGAS_stringlist & outOperand13,
                                             GALGAS_string & outOperand14,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_setMInfoPListFileAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInfoPListFile = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GALGAS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mInfoPListFile ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
}




//--------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@BuildFileList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GALGAS_BuildFileList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                            const GALGAS_string & in_mFileName,
                                            const GALGAS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileReference" ":") ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileName" ":") ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildReference" ":") ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                     const GALGAS_string & inOperand1,
                                                                     const GALGAS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_append (const GALGAS_string inOperand0,
                                          const GALGAS_string inOperand1,
                                          const GALGAS_string inOperand2,
                                          Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
        outOperand0 = p->mObject.mProperty_mFileReference ;
        outOperand1 = p->mObject.mProperty_mFileName ;
        outOperand2 = p->mObject.mProperty_mBuildReference ;
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

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileReferenceAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMFileNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_setMBuildReferenceAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//
//     @BuildFileList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@mainXibLineDescriptorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public: GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mainXibLineDescriptorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::class_func_listWithValue (const GALGAS_mainXibElement & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_append (const GALGAS_mainXibElement inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_mainXibLineDescriptorList::setter_removeAtIndex (GALGAS_mainXibElement & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_mainXibLineDescriptorList::setter_popFirst (GALGAS_mainXibElement & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_popLast (GALGAS_mainXibElement & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::method_first (GALGAS_mainXibElement & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::method_last (GALGAS_mainXibElement & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList::setter_setMElementAtIndex (GALGAS_mainXibElement inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//
//     @mainXibLineDescriptorList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  const GALGAS_mainXibLineDescriptorList * p = (const GALGAS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_mainXibElement_text::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring inAssociatedValue0,
                                                                                          const GALGAS_lstring inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_mainXibElement_outlet::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_mainXibElement_outlet::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_outlet * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_outlet *> (inOperand) ;
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

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::class_func_text (const GALGAS_lstring & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_text ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_text (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::class_func_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                const GALGAS_lstring & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_outlet ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_outlet (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::method_text (GALGAS_lstring & outAssociatedValue0,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_text) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement text invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_text * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::method_outlet (GALGAS_lstring & outAssociatedValue0,
                                           GALGAS_lstring & outAssociatedValue1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outlet) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement outlet invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_outlet * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mainXibElement::optional_text (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_text ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mainXibElement::optional_outlet (GALGAS_lstring & outAssociatedValue0,
                                             GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_outlet ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibElement::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @mainXibElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_mainXibElement [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_mainXibElement::objectCompare (const GALGAS_mainXibElement & inOperand) const {
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
//     @mainXibElement generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibElement::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  const GALGAS_mainXibElement * p = (const GALGAS_mainXibElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@mainXibDescriptorList generateCode'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("main-xib.ggs", 87)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_count (SOURCE_FILE ("main-xib.ggs", 88)).getter_string (SOURCE_FILE ("main-xib.ggs", 88)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 89)) ;
      GALGAS_bigint var_idx_3114 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 90)) ;
      GALGAS_bigint var_columnMax_3130 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 91)) ;
      const GALGAS_mainXibDescriptorList temp_3 = inObject ;
      cEnumerator_mainXibDescriptorList enumerator_3153 (temp_3, EnumerationOrder::up) ;
      while (enumerator_3153.hasCurrentObject ()) {
        GALGAS_bigint var_column_3181 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 93)) ;
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 94)) ;
        cEnumerator_mainXibLineDescriptorList enumerator_3249 (enumerator_3153.current_mLine (HERE), EnumerationOrder::up) ;
        while (enumerator_3249.hasCurrentObject ()) {
          switch (enumerator_3249.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
              const cEnumAssociatedValues_mainXibElement_text * extractPtr_4015 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3249.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3314_t = extractPtr_4015->mAssociatedValue0 ;
              var_idx_3114.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_3314_t.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 99)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_3314_t.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 100)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (var_column_3181.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 101)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (extractedValue_3314_t.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 102)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 103)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 104)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 105)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3114.getter_string (SOURCE_FILE ("main-xib.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 106)) ;
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4487 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3249.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4042_outletType = extractPtr_4487->mAssociatedValue0 ;
              const GALGAS_lstring extractedValue_4054_outletName = extractPtr_4487->mAssociatedValue1 ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_4054_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 108)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_4054_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (extractedValue_4042_outletType.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (var_column_3181.getter_string (SOURCE_FILE ("main-xib.ggs", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 109)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_4054_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (extractedValue_4054_outletName.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 110)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_4054_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 111)) ;
            }
            break ;
          }
          var_column_3181.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)) ;
          enumerator_3249.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::greaterThan, var_column_3181.objectCompare (var_columnMax_3130)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_columnMax_3130 = var_column_3181 ;
          }
        }
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 118)) ;
        enumerator_3153.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 120)) ;
      const GALGAS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3130.getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (temp_5.getter_count (SOURCE_FILE ("main-xib.ggs", 121)).getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 121)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 122)) ;
    }
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (void) :
mProperty_mIndex (),
mProperty_mAssociatedString () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::~ GALGAS_enumFunAssociationSortedList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::init_28__2C__29_ (const GALGAS_uint & in_mIndex,
                                                                                                                 const GALGAS_string & in_mAssociatedString,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedString = in_mAssociatedString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_string & inOperand1) :
mProperty_mIndex (inOperand0),
mProperty_mAssociatedString (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::class_func_new (const GALGAS_uint & in_mIndex,
                                                                                                               const GALGAS_string & in_mAssociatedString,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedString = in_mAssociatedString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_enumFunAssociationSortedList_2D_element::objectCompare (const GALGAS_enumFunAssociationSortedList_2D_element & inOperand) const {
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

bool GALGAS_enumFunAssociationSortedList_2D_element::isValid (void) const {
  return mProperty_mIndex.isValid () && mProperty_mAssociatedString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::drop (void) {
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFunAssociationSortedList-element:") ;
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
//
//     @enumFunAssociationSortedList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ("enumFunAssociationSortedList-element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFunAssociationSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFunAssociationSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFunAssociationSortedList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  const GALGAS_enumFunAssociationSortedList_2D_element * p = (const GALGAS_enumFunAssociationSortedList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumFunAssociationSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::init_28__2C__29_ (const GALGAS_string & in_mEntityName,
                                                                                                                                                   const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntityName = in_mEntityName ;
  result.mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::class_func_new (const GALGAS_string & in_mEntityName,
                                                                                                                                                 const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntityName = in_mEntityName ;
  result.mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::objectCompare (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntityName.objectCompare (inOperand.mProperty_mEntityName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mObsoleteEntityNames.objectCompare (inOperand.mProperty_mObsoleteEntityNames) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @entityListForGeneratingEBManagedObjectContext-element:") ;
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
//
//     @entityListForGeneratingEBManagedObjectContext-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameAndTypeNameList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::~ GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mLinkerName,
                                                                                                                                 const GALGAS__32_stringlist & in_mOutletNameAndTypeNameList,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameAndTypeNameList = in_mOutletNameAndTypeNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS__32_stringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameAndTypeNameList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::class_func_new (const GALGAS_string & in_mLinkerName,
                                                                                                                               const GALGAS__32_stringlist & in_mOutletNameAndTypeNameList,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameAndTypeNameList = in_mOutletNameAndTypeNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLinkerName.objectCompare (inOperand.mProperty_mLinkerName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletNameAndTypeNameList.objectCompare (inOperand.mProperty_mOutletNameAndTypeNameList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameAndTypeNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameAndTypeNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutOutletLinkerGenerationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLinkerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutOutletLinkerGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ("autoLayoutOutletLinkerGenerationList-element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element * p = (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::~ GALGAS_astViewInstructionList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::init_28__29_ (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::class_func_new (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_astViewInstructionList_2D_element::objectCompare (const GALGAS_astViewInstructionList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_astViewInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astViewInstructionList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @astViewInstructionList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ("astViewInstructionList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  const GALGAS_astViewInstructionList_2D_element * p = (const GALGAS_astViewInstructionList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astViewInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::~ GALGAS_implicitViewFunctionGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::init_28__29_ (const GALGAS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::class_func_new (const GALGAS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_implicitViewFunctionGenerationList_2D_element::objectCompare (const GALGAS_implicitViewFunctionGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_implicitViewFunctionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitViewFunctionGenerationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @implicitViewFunctionGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ("implicitViewFunctionGenerationList-element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitViewFunctionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitViewFunctionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitViewFunctionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  const GALGAS_implicitViewFunctionGenerationList_2D_element * p = (const GALGAS_implicitViewFunctionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_implicitViewFunctionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::~ GALGAS_viewGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mViewName,
                                                                                             const GALGAS_abstractViewGeneration & in_mView,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_abstractViewGeneration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::class_func_new (const GALGAS_string & in_mViewName,
                                                                                           const GALGAS_abstractViewGeneration & in_mView,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_viewGenerationList_2D_element::objectCompare (const GALGAS_viewGenerationList_2D_element & inOperand) const {
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

bool GALGAS_viewGenerationList_2D_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @viewGenerationList-element:") ;
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
//     @viewGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList_2D_element ("viewGenerationList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_viewGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_viewGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_viewGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  const GALGAS_viewGenerationList_2D_element * p = (const GALGAS_viewGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_viewGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::init_28__2C__2C__29_ (const GALGAS_string & in_mBindingName,
                                                                                                                                           const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                                                           const GALGAS_string & in_mBindingOptionsString,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_boundObjectList & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::class_func_new (const GALGAS_string & in_mBindingName,
                                                                                                                                     const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                                                     const GALGAS_string & in_mBindingOptionsString,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutRegularBindingsGenerationList-element:") ;
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
//
//     @autoLayoutRegularBindingsGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ("autoLayoutRegularBindingsGenerationList-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element * p = (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mBindingName,
                                                                                                                                       const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::class_func_new (const GALGAS_string & in_mBindingName,
                                                                                                                                     const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutMultipleBindingGenerationList-element:") ;
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
//
//     @autoLayoutMultipleBindingGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ("autoLayoutMultipleBindingGenerationList-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element * p = (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) :
mProperty_mParameterName (),
mProperty_mParameterValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mParameterName,
                                                                                                                                                         const GALGAS_string & in_mParameterValue,
                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterValue = in_mParameterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_string & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::class_func_new (const GALGAS_string & in_mParameterName,
                                                                                                                                                       const GALGAS_string & in_mParameterValue,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterValue = in_mParameterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameterValue.objectCompare (inOperand.mProperty_mParameterValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::description (String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationParameterList-element:") ;
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
//
//     @autoLayoutViewInstructionGenerationParameterList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ("autoLayoutViewInstructionGenerationParameterList-element",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mFunctionName,
                                                                                                                                                       const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::class_func_new (const GALGAS_string & in_mFunctionName,
                                                                                                                                                     const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters,
                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mParameters.objectCompare (inOperand.mProperty_mParameters) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::description (String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationFuncCallList-element:") ;
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
//
//     @autoLayoutViewInstructionGenerationFuncCallList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ("autoLayoutViewInstructionGenerationFuncCallList-element",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::init_28__29_ (const GALGAS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::class_func_new (const GALGAS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_autoLayoutViewInstructionGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewInstructionGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ("autoLayoutViewInstructionGenerationList-element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::init_28__2C__29_ (const GALGAS_typeKind & in_mModelType,
                                                                                                                               const GALGAS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::class_func_new (const GALGAS_typeKind & in_mModelType,
                                                                                                                             const GALGAS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mModelType.objectCompare (inOperand.mProperty_mModelType) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingSpecificationModelList-element:") ;
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
//
//     @outletBindingSpecificationModelList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::init_28__2C__29_ (const GALGAS_propertyKind & in_mKind,
                                                                                                     const GALGAS_location & in_mErrorLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::class_func_new (const GALGAS_propertyKind & in_mKind,
                                                                                                   const GALGAS_location & in_mErrorLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingModelList-element:") ;
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
//
//     @outletBindingModelList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                                     const GALGAS_string & in_mTableValueBindingControllerName,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTableValueBindingOutletName = in_mTableValueBindingOutletName ;
  result.mProperty_mTableValueBindingControllerName = in_mTableValueBindingControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::class_func_new (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                                   const GALGAS_string & in_mTableValueBindingControllerName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTableValueBindingOutletName = in_mTableValueBindingOutletName ;
  result.mProperty_mTableValueBindingControllerName = in_mTableValueBindingControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTableValueBindingOutletName.objectCompare (inOperand.mProperty_mTableValueBindingOutletName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTableValueBindingControllerName.objectCompare (inOperand.mProperty_mTableValueBindingControllerName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tableViewBindingGenerationList-element:") ;
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
//
//     @tableViewBindingGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  const GALGAS_tableViewBindingGenerationList_2D_element * p = (const GALGAS_tableViewBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_tableViewBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                                 const GALGAS_string & in_mArrayControllerControllerName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEBViewOutletName = in_mEBViewOutletName ;
  result.mProperty_mArrayControllerControllerName = in_mArrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::class_func_new (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                               const GALGAS_string & in_mArrayControllerControllerName,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEBViewOutletName = in_mEBViewOutletName ;
  result.mProperty_mArrayControllerControllerName = in_mArrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEBViewOutletName.objectCompare (inOperand.mProperty_mEBViewOutletName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mArrayControllerControllerName.objectCompare (inOperand.mProperty_mArrayControllerControllerName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ebViewGraphicControllerBindingGenerationList-element:") ;
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
//
//     @ebViewGraphicControllerBindingGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::init_28__2C__29_ (const GALGAS_string & in_mBoundObjectString,
                                                                                       const GALGAS_propertyKind & in_mKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBoundObjectString = in_mBoundObjectString ;
  result.mProperty_mKind = in_mKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::class_func_new (const GALGAS_string & in_mBoundObjectString,
                                                                                     const GALGAS_propertyKind & in_mKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBoundObjectString = in_mBoundObjectString ;
  result.mProperty_mKind = in_mKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_boundObjectList_2D_element::objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBoundObjectString.objectCompare (inOperand.mProperty_mBoundObjectString) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @boundObjectList-element:") ;
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
//
//     @boundObjectList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  const GALGAS_boundObjectList_2D_element * p = (const GALGAS_boundObjectList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_boundObjectList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_string & in_mOutletName,
                                                                                                                           const GALGAS_string & in_mBindingName,
                                                                                                                           const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                                           const GALGAS_string & in_mBindingOptionsString,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::class_func_new (const GALGAS_string & in_mOutletName,
                                                                                                                 const GALGAS_string & in_mBindingName,
                                                                                                                 const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                                 const GALGAS_string & in_mBindingOptionsString,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @regularBindingsGenerationList-element:") ;
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
//
//     @regularBindingsGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::init_28__2C__2C__2C__29_ (const GALGAS_string & in_mOutletName,
                                                                                                                             const GALGAS_string & in_mTargetName,
                                                                                                                             const GALGAS_string & in_mActionName,
                                                                                                                             const GALGAS_string & in_mTargetTypeName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mActionName = in_mActionName ;
  result.mProperty_mTargetTypeName = in_mTargetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::class_func_new (const GALGAS_string & in_mOutletName,
                                                                                                                   const GALGAS_string & in_mTargetName,
                                                                                                                   const GALGAS_string & in_mActionName,
                                                                                                                   const GALGAS_string & in_mTargetTypeName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mActionName = in_mActionName ;
  result.mProperty_mTargetTypeName = in_mTargetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mTargetTypeName.objectCompare (inOperand.mProperty_mTargetTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actionBindingListForGeneration-element:") ;
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
//
//     @actionBindingListForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::init_28__29_ (const GALGAS_observablePropertyAST & in_mObservableProperty,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObservableProperty = in_mObservableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::class_func_new (const GALGAS_observablePropertyAST & in_mObservableProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObservableProperty = in_mObservableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @observablePropertyList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  const GALGAS_observablePropertyList_2D_element * p = (const GALGAS_observablePropertyList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_observablePropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

