#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@transientDefinitionListForGenerationEX' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_transientDefinitionListForGenerationEX : public cCollectionElement {
  public : GALGAS_transientDefinitionListForGenerationEX_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_transientDefinitionListForGenerationEX (const GALGAS_string & in_mOwnerName,
                                                                      const GALGAS_string & in_mTransientName,
                                                                      const GALGAS_typeKind & in_mTransientType,
                                                                      const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                      const GALGAS_string & in_mExternFunctionName
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_transientDefinitionListForGenerationEX (const GALGAS_transientDefinitionListForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientDefinitionListForGenerationEX::cCollectionElement_transientDefinitionListForGenerationEX (const GALGAS_string & in_mOwnerName,
                                                                                                                      const GALGAS_string & in_mTransientName,
                                                                                                                      const GALGAS_typeKind & in_mTransientType,
                                                                                                                      const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                                                                      const GALGAS_string & in_mExternFunctionName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mTransientName, in_mTransientType, in_mDependencyList, in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientDefinitionListForGenerationEX::cCollectionElement_transientDefinitionListForGenerationEX (const GALGAS_transientDefinitionListForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mTransientName, inElement.mProperty_mTransientType, inElement.mProperty_mDependencyList, inElement.mProperty_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_transientDefinitionListForGenerationEX::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_transientDefinitionListForGenerationEX::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientDefinitionListForGenerationEX (mObject.mProperty_mOwnerName, mObject.mProperty_mTransientName, mObject.mProperty_mTransientType, mObject.mProperty_mDependencyList, mObject.mProperty_mExternFunctionName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_transientDefinitionListForGenerationEX::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientName" ":" ;
  mObject.mProperty_mTransientName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientType" ":" ;
  mObject.mProperty_mTransientType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependencyList" ":" ;
  mObject.mProperty_mDependencyList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExternFunctionName" ":" ;
  mObject.mProperty_mExternFunctionName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_transientDefinitionListForGenerationEX::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientDefinitionListForGenerationEX * operand = (cCollectionElement_transientDefinitionListForGenerationEX *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX::GALGAS_transientDefinitionListForGenerationEX (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX::GALGAS_transientDefinitionListForGenerationEX (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDefinitionListForGenerationEX  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_typeKind & inOperand2,
                                                                                                                        const GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGenerationEX result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_transientDefinitionListForGenerationEX (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_transientDefinitionListForGenerationEX::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mOwnerName,
                                                                               const GALGAS_string & in_mTransientName,
                                                                               const GALGAS_typeKind & in_mTransientType,
                                                                               const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                               const GALGAS_string & in_mExternFunctionName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_transientDefinitionListForGenerationEX * p = NULL ;
  macroMyNew (p, cCollectionElement_transientDefinitionListForGenerationEX (in_mOwnerName,
                                                                            in_mTransientName,
                                                                            in_mTransientType,
                                                                            in_mDependencyList,
                                                                            in_mExternFunctionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_typeKind & inOperand2,
                                                                         const GALGAS_transientDependencyListForGeneration & inOperand3,
                                                                         const GALGAS_string & inOperand4
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDefinitionListForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::setter_append (GALGAS_transientDefinitionListForGenerationEX_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDefinitionListForGenerationEX (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_typeKind inOperand2,
                                                                          const GALGAS_transientDependencyListForGeneration inOperand3,
                                                                          const GALGAS_string inOperand4,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientDefinitionListForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_typeKind & outOperand2,
                                                                          GALGAS_transientDependencyListForGeneration & outOperand3,
                                                                          GALGAS_string & outOperand4,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mTransientName ;
      outOperand2 = p->mObject.mProperty_mTransientType ;
      outOperand3 = p->mObject.mProperty_mDependencyList ;
      outOperand4 = p->mObject.mProperty_mExternFunctionName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_typeKind & outOperand2,
                                                                     GALGAS_transientDependencyListForGeneration & outOperand3,
                                                                     GALGAS_string & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mTransientType ;
    outOperand3 = p->mObject.mProperty_mDependencyList ;
    outOperand4 = p->mObject.mProperty_mExternFunctionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_typeKind & outOperand2,
                                                                    GALGAS_transientDependencyListForGeneration & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mTransientType ;
    outOperand3 = p->mObject.mProperty_mDependencyList ;
    outOperand4 = p->mObject.mProperty_mExternFunctionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_typeKind & outOperand2,
                                                                  GALGAS_transientDependencyListForGeneration & outOperand3,
                                                                  GALGAS_string & outOperand4,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mTransientType ;
    outOperand3 = p->mObject.mProperty_mDependencyList ;
    outOperand4 = p->mObject.mProperty_mExternFunctionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_typeKind & outOperand2,
                                                                 GALGAS_transientDependencyListForGeneration & outOperand3,
                                                                 GALGAS_string & outOperand4,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mTransientName ;
    outOperand2 = p->mObject.mProperty_mTransientType ;
    outOperand3 = p->mObject.mProperty_mDependencyList ;
    outOperand4 = p->mObject.mProperty_mExternFunctionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::add_operation (const GALGAS_transientDefinitionListForGenerationEX & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result = GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result = GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_transientDefinitionListForGenerationEX result = GALGAS_transientDefinitionListForGenerationEX::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGenerationEX::plusAssign_operation (const GALGAS_transientDefinitionListForGenerationEX inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX::getter_mTransientNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    result = p->mObject.mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientDefinitionListForGenerationEX::getter_mTransientTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    result = p->mObject.mProperty_mTransientType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGenerationEX::getter_mDependencyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    result = p->mObject.mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGenerationEX::getter_mExternFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientDefinitionListForGenerationEX * p = (cCollectionElement_transientDefinitionListForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
    result = p->mObject.mProperty_mExternFunctionName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_transientDefinitionListForGenerationEX::cEnumerator_transientDefinitionListForGenerationEX (const GALGAS_transientDefinitionListForGenerationEX & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX_2D_element cEnumerator_transientDefinitionListForGenerationEX::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDefinitionListForGenerationEX::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject.mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDefinitionListForGenerationEX::current_mTransientName (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject.mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_transientDefinitionListForGenerationEX::current_mTransientType (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject.mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cEnumerator_transientDefinitionListForGenerationEX::current_mDependencyList (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject.mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDefinitionListForGenerationEX::current_mExternFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_transientDefinitionListForGenerationEX * p = (const cCollectionElement_transientDefinitionListForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDefinitionListForGenerationEX) ;
  return p->mObject.mProperty_mExternFunctionName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @transientDefinitionListForGenerationEX type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGenerationEX ("transientDefinitionListForGenerationEX",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGenerationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGenerationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDefinitionListForGenerationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGenerationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_transientDefinitionListForGenerationEX::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGenerationEX result ;
  const GALGAS_transientDefinitionListForGenerationEX * p = (const GALGAS_transientDefinitionListForGenerationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDefinitionListForGenerationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDefinitionListForGenerationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@toOneEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toOneEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toOneEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                        const GALGAS_typeKind & in_mRelationshipType,
                                                                        const GALGAS_string & in_mOppositeRelationshipName,
                                                                        const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                        const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                        const GALGAS_bool & in_mCascading
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_string & in_mToOneRelationshipName,
                                                                                                                          const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                          const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                          const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                                                          const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                          const GALGAS_bool & in_mCascading
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToOneRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mInverseRelationMultiplicity, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toOneEntityRelationshipListForGeneration::cCollectionElement_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToOneRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mInverseRelationMultiplicity, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toOneEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toOneEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOneEntityRelationshipListForGeneration (mObject.mProperty_mToOneRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mInverseRelationMultiplicity, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toOneEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToOneRelationshipName" ":" ;
  mObject.mProperty_mToOneRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationMultiplicity" ":" ;
  mObject.mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toOneEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOneEntityRelationshipListForGeneration * operand = (cCollectionElement_toOneEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration::GALGAS_toOneEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOneEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_typeKind & inOperand1,
                                                                                                                            const GALGAS_string & inOperand2,
                                                                                                                            const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                            const GALGAS_observablePropertyMap & inOperand4,
                                                                                                                            const GALGAS_bool & inOperand5
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_string & in_mToOneRelationshipName,
                                                                                 const GALGAS_typeKind & in_mRelationshipType,
                                                                                 const GALGAS_string & in_mOppositeRelationshipName,
                                                                                 const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                                                 const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                 const GALGAS_bool & in_mCascading
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (in_mToOneRelationshipName,
                                                                              in_mRelationshipType,
                                                                              in_mOppositeRelationshipName,
                                                                              in_mInverseRelationMultiplicity,
                                                                              in_mDestinationEntityObservablePropertyMap,
                                                                              in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                           const GALGAS_typeKind & inOperand1,
                                                                           const GALGAS_string & inOperand2,
                                                                           const GALGAS_propertyMultiplicity & inOperand3,
                                                                           const GALGAS_observablePropertyMap & inOperand4,
                                                                           const GALGAS_bool & inOperand5
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_append (GALGAS_toOneEntityRelationshipListForGeneration_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_string inOperand2,
                                                                            const GALGAS_propertyMultiplicity inOperand3,
                                                                            const GALGAS_observablePropertyMap inOperand4,
                                                                            const GALGAS_bool inOperand5,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toOneEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_propertyMultiplicity & outOperand3,
                                                                            GALGAS_observablePropertyMap & outOperand4,
                                                                            GALGAS_bool & outOperand5,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
      outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand5 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_propertyMultiplicity & outOperand3,
                                                                       GALGAS_observablePropertyMap & outOperand4,
                                                                       GALGAS_bool & outOperand5,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_propertyMultiplicity & outOperand3,
                                                                      GALGAS_observablePropertyMap & outOperand4,
                                                                      GALGAS_bool & outOperand5,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_propertyMultiplicity & outOperand3,
                                                                    GALGAS_observablePropertyMap & outOperand4,
                                                                    GALGAS_bool & outOperand5,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                   GALGAS_typeKind & outOperand1,
                                                                   GALGAS_string & outOperand2,
                                                                   GALGAS_propertyMultiplicity & outOperand3,
                                                                   GALGAS_observablePropertyMap & outOperand4,
                                                                   GALGAS_bool & outOperand5,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToOneRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mInverseRelationMultiplicity ;
    outOperand4 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand5 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::add_operation (const GALGAS_toOneEntityRelationshipListForGeneration & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_toOneEntityRelationshipListForGeneration result = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toOneEntityRelationshipListForGeneration inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mToOneRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toOneEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOneEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneEntityRelationshipListForGeneration::getter_mInverseRelationMultiplicityAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_propertyMultiplicity result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toOneEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toOneEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOneEntityRelationshipListForGeneration * p = (cCollectionElement_toOneEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toOneEntityRelationshipListForGeneration::cEnumerator_toOneEntityRelationshipListForGeneration (const GALGAS_toOneEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element cEnumerator_toOneEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mToOneRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toOneEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toOneEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cEnumerator_toOneEntityRelationshipListForGeneration::current_mInverseRelationMultiplicity (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toOneEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toOneEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toOneEntityRelationshipListForGeneration * p = (const cCollectionElement_toOneEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOneEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toOneEntityRelationshipListForGeneration type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ("toOneEntityRelationshipListForGeneration",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_toOneEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration result ;
  const GALGAS_toOneEntityRelationshipListForGeneration * p = (const GALGAS_toOneEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Class for element of '@toManyEntityRelationshipListForGeneration' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_toManyEntityRelationshipListForGeneration : public cCollectionElement {
  public : GALGAS_toManyEntityRelationshipListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                         const GALGAS_typeKind & in_mRelationshipType,
                                                                         const GALGAS_string & in_mOppositeRelationshipName,
                                                                         const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                         const GALGAS_bool & in_mCascading
                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_string & in_mToManyRelationshipName,
                                                                                                                            const GALGAS_typeKind & in_mRelationshipType,
                                                                                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                                                                                            const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                                                            const GALGAS_bool & in_mCascading
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mToManyRelationshipName, in_mRelationshipType, in_mOppositeRelationshipName, in_mDestinationEntityObservablePropertyMap, in_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_toManyEntityRelationshipListForGeneration::cCollectionElement_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mToManyRelationshipName, inElement.mProperty_mRelationshipType, inElement.mProperty_mOppositeRelationshipName, inElement.mProperty_mDestinationEntityObservablePropertyMap, inElement.mProperty_mCascading) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_toManyEntityRelationshipListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_toManyEntityRelationshipListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyEntityRelationshipListForGeneration (mObject.mProperty_mToManyRelationshipName, mObject.mProperty_mRelationshipType, mObject.mProperty_mOppositeRelationshipName, mObject.mProperty_mDestinationEntityObservablePropertyMap, mObject.mProperty_mCascading COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_toManyEntityRelationshipListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mToManyRelationshipName" ":" ;
  mObject.mProperty_mToManyRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRelationshipType" ":" ;
  mObject.mProperty_mRelationshipType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOppositeRelationshipName" ":" ;
  mObject.mProperty_mOppositeRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDestinationEntityObservablePropertyMap" ":" ;
  mObject.mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascading" ":" ;
  mObject.mProperty_mCascading.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_toManyEntityRelationshipListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyEntityRelationshipListForGeneration * operand = (cCollectionElement_toManyEntityRelationshipListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration::GALGAS_toManyEntityRelationshipListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyEntityRelationshipListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_typeKind & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand3,
                                                                                                                              const GALGAS_bool & inOperand4
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_string & in_mToManyRelationshipName,
                                                                                  const GALGAS_typeKind & in_mRelationshipType,
                                                                                  const GALGAS_string & in_mOppositeRelationshipName,
                                                                                  const GALGAS_observablePropertyMap & in_mDestinationEntityObservablePropertyMap,
                                                                                  const GALGAS_bool & in_mCascading
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (in_mToManyRelationshipName,
                                                                               in_mRelationshipType,
                                                                               in_mOppositeRelationshipName,
                                                                               in_mDestinationEntityObservablePropertyMap,
                                                                               in_mCascading COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                            const GALGAS_typeKind & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_observablePropertyMap & inOperand3,
                                                                            const GALGAS_bool & inOperand4
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_append (GALGAS_toManyEntityRelationshipListForGeneration_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                             const GALGAS_typeKind inOperand1,
                                                                             const GALGAS_string inOperand2,
                                                                             const GALGAS_observablePropertyMap inOperand3,
                                                                             const GALGAS_bool inOperand4,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_toManyEntityRelationshipListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                             GALGAS_typeKind & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_observablePropertyMap & outOperand3,
                                                                             GALGAS_bool & outOperand4,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
      outOperand1 = p->mObject.mProperty_mRelationshipType ;
      outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
      outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
      outOperand4 = p->mObject.mProperty_mCascading ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                        GALGAS_typeKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        GALGAS_observablePropertyMap & outOperand3,
                                                                        GALGAS_bool & outOperand4,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_observablePropertyMap & outOperand3,
                                                                       GALGAS_bool & outOperand4,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                     GALGAS_typeKind & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_observablePropertyMap & outOperand3,
                                                                     GALGAS_bool & outOperand4,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                    GALGAS_typeKind & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_observablePropertyMap & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mToManyRelationshipName ;
    outOperand1 = p->mObject.mProperty_mRelationshipType ;
    outOperand2 = p->mObject.mProperty_mOppositeRelationshipName ;
    outOperand3 = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
    outOperand4 = p->mObject.mProperty_mCascading ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::add_operation (const GALGAS_toManyEntityRelationshipListForGeneration & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyEntityRelationshipListForGeneration result = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration::plusAssign_operation (const GALGAS_toManyEntityRelationshipListForGeneration inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mToManyRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_toManyEntityRelationshipListForGeneration::getter_mRelationshipTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toManyEntityRelationshipListForGeneration::getter_mOppositeRelationshipNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_toManyEntityRelationshipListForGeneration::getter_mDestinationEntityObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_toManyEntityRelationshipListForGeneration::getter_mCascadingAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyEntityRelationshipListForGeneration * p = (cCollectionElement_toManyEntityRelationshipListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
    result = p->mObject.mProperty_mCascading ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_toManyEntityRelationshipListForGeneration::cEnumerator_toManyEntityRelationshipListForGeneration (const GALGAS_toManyEntityRelationshipListForGeneration & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element cEnumerator_toManyEntityRelationshipListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mToManyRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_toManyEntityRelationshipListForGeneration::current_mRelationshipType (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_toManyEntityRelationshipListForGeneration::current_mOppositeRelationshipName (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_toManyEntityRelationshipListForGeneration::current_mDestinationEntityObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_toManyEntityRelationshipListForGeneration::current_mCascading (LOCATION_ARGS) const {
  const cCollectionElement_toManyEntityRelationshipListForGeneration * p = (const cCollectionElement_toManyEntityRelationshipListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyEntityRelationshipListForGeneration) ;
  return p->mObject.mProperty_mCascading ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @toManyEntityRelationshipListForGeneration type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ("toManyEntityRelationshipListForGeneration",
                                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyEntityRelationshipListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyEntityRelationshipListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyEntityRelationshipListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyEntityRelationshipListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_toManyEntityRelationshipListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration result ;
  const GALGAS_toManyEntityRelationshipListForGeneration * p = (const GALGAS_toManyEntityRelationshipListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyEntityRelationshipListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyEntityRelationshipListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@arrayControllerForGenerationEX' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerForGenerationEX : public cCollectionElement {
  public : GALGAS_arrayControllerForGenerationEX_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerForGenerationEX (const GALGAS_string & in_mOwnerName,
                                                              const GALGAS_lstring & in_mControllerName,
                                                              const GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                                              const GALGAS_string & in_mModelString,
                                                              const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                                              const GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                                              const GALGAS_string & in_mModelTypeName,
                                                              const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                              const GALGAS_string & in_mElementTypeName,
                                                              const GALGAS_bool & in_mElementTypeIsGraphic,
                                                              const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerForGenerationEX (const GALGAS_arrayControllerForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerForGenerationEX::cCollectionElement_arrayControllerForGenerationEX (const GALGAS_string & in_mOwnerName,
                                                                                                      const GALGAS_lstring & in_mControllerName,
                                                                                                      const GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                                                                                      const GALGAS_string & in_mModelString,
                                                                                                      const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                                                                                      const GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                                                                                      const GALGAS_string & in_mModelTypeName,
                                                                                                      const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                                                      const GALGAS_string & in_mElementTypeName,
                                                                                                      const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                                                      const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mControllerName, in_mArrayControllerFilterListForGeneration, in_mModelString, in_mArrayControllerBoundColumnListForGeneration, in_mArrayControllerSortedColumnListForGeneration, in_mModelTypeName, in_mArrayControllerModelKind, in_mElementTypeName, in_mElementTypeIsGraphic, in_mAttributeListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerForGenerationEX::cCollectionElement_arrayControllerForGenerationEX (const GALGAS_arrayControllerForGenerationEX_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mControllerName, inElement.mProperty_mArrayControllerFilterListForGeneration, inElement.mProperty_mModelString, inElement.mProperty_mArrayControllerBoundColumnListForGeneration, inElement.mProperty_mArrayControllerSortedColumnListForGeneration, inElement.mProperty_mModelTypeName, inElement.mProperty_mArrayControllerModelKind, inElement.mProperty_mElementTypeName, inElement.mProperty_mElementTypeIsGraphic, inElement.mProperty_mAttributeListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerForGenerationEX::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerForGenerationEX::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerForGenerationEX (mObject.mProperty_mOwnerName, mObject.mProperty_mControllerName, mObject.mProperty_mArrayControllerFilterListForGeneration, mObject.mProperty_mModelString, mObject.mProperty_mArrayControllerBoundColumnListForGeneration, mObject.mProperty_mArrayControllerSortedColumnListForGeneration, mObject.mProperty_mModelTypeName, mObject.mProperty_mArrayControllerModelKind, mObject.mProperty_mElementTypeName, mObject.mProperty_mElementTypeIsGraphic, mObject.mProperty_mAttributeListForGeneration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerForGenerationEX::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControllerName" ":" ;
  mObject.mProperty_mControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerFilterListForGeneration" ":" ;
  mObject.mProperty_mArrayControllerFilterListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelString" ":" ;
  mObject.mProperty_mModelString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerBoundColumnListForGeneration" ":" ;
  mObject.mProperty_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerSortedColumnListForGeneration" ":" ;
  mObject.mProperty_mArrayControllerSortedColumnListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerModelKind" ":" ;
  mObject.mProperty_mArrayControllerModelKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementTypeName" ":" ;
  mObject.mProperty_mElementTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementTypeIsGraphic" ":" ;
  mObject.mProperty_mElementTypeIsGraphic.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeListForGeneration" ":" ;
  mObject.mProperty_mAttributeListForGeneration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerForGenerationEX::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerForGenerationEX * operand = (cCollectionElement_arrayControllerForGenerationEX *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerForGenerationEX) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX::GALGAS_arrayControllerForGenerationEX (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX::GALGAS_arrayControllerForGenerationEX (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerForGenerationEX  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                        const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                                        const GALGAS_string & inOperand6,
                                                                                                        const GALGAS_arrayControllerModelKind & inOperand7,
                                                                                                        const GALGAS_string & inOperand8,
                                                                                                        const GALGAS_bool & inOperand9,
                                                                                                        const GALGAS__32_stringlist & inOperand10
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerForGenerationEX result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_arrayControllerForGenerationEX (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerForGenerationEX::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mOwnerName,
                                                                       const GALGAS_lstring & in_mControllerName,
                                                                       const GALGAS_arrayControllerFilterListForGeneration & in_mArrayControllerFilterListForGeneration,
                                                                       const GALGAS_string & in_mModelString,
                                                                       const GALGAS_arrayControllerBoundColumnListForGeneration & in_mArrayControllerBoundColumnListForGeneration,
                                                                       const GALGAS_arrayControllerSortedColumnListForGeneration & in_mArrayControllerSortedColumnListForGeneration,
                                                                       const GALGAS_string & in_mModelTypeName,
                                                                       const GALGAS_arrayControllerModelKind & in_mArrayControllerModelKind,
                                                                       const GALGAS_string & in_mElementTypeName,
                                                                       const GALGAS_bool & in_mElementTypeIsGraphic,
                                                                       const GALGAS__32_stringlist & in_mAttributeListForGeneration
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerForGenerationEX * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerForGenerationEX (in_mOwnerName,
                                                                    in_mControllerName,
                                                                    in_mArrayControllerFilterListForGeneration,
                                                                    in_mModelString,
                                                                    in_mArrayControllerBoundColumnListForGeneration,
                                                                    in_mArrayControllerSortedColumnListForGeneration,
                                                                    in_mModelTypeName,
                                                                    in_mArrayControllerModelKind,
                                                                    in_mElementTypeName,
                                                                    in_mElementTypeIsGraphic,
                                                                    in_mAttributeListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_lstring & inOperand1,
                                                                 const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                 const GALGAS_string & inOperand3,
                                                                 const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                 const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                 const GALGAS_string & inOperand6,
                                                                 const GALGAS_arrayControllerModelKind & inOperand7,
                                                                 const GALGAS_string & inOperand8,
                                                                 const GALGAS_bool & inOperand9,
                                                                 const GALGAS__32_stringlist & inOperand10
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::setter_append (GALGAS_arrayControllerForGenerationEX_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerForGenerationEX (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_arrayControllerFilterListForGeneration inOperand2,
                                                                  const GALGAS_string inOperand3,
                                                                  const GALGAS_arrayControllerBoundColumnListForGeneration inOperand4,
                                                                  const GALGAS_arrayControllerSortedColumnListForGeneration inOperand5,
                                                                  const GALGAS_string inOperand6,
                                                                  const GALGAS_arrayControllerModelKind inOperand7,
                                                                  const GALGAS_string inOperand8,
                                                                  const GALGAS_bool inOperand9,
                                                                  const GALGAS__32_stringlist inOperand10,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerForGenerationEX (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_arrayControllerFilterListForGeneration & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  GALGAS_arrayControllerBoundColumnListForGeneration & outOperand4,
                                                                  GALGAS_arrayControllerSortedColumnListForGeneration & outOperand5,
                                                                  GALGAS_string & outOperand6,
                                                                  GALGAS_arrayControllerModelKind & outOperand7,
                                                                  GALGAS_string & outOperand8,
                                                                  GALGAS_bool & outOperand9,
                                                                  GALGAS__32_stringlist & outOperand10,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
    if (NULL == p) {
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
      macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mControllerName ;
      outOperand2 = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
      outOperand3 = p->mObject.mProperty_mModelString ;
      outOperand4 = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
      outOperand5 = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
      outOperand6 = p->mObject.mProperty_mModelTypeName ;
      outOperand7 = p->mObject.mProperty_mArrayControllerModelKind ;
      outOperand8 = p->mObject.mProperty_mElementTypeName ;
      outOperand9 = p->mObject.mProperty_mElementTypeIsGraphic ;
      outOperand10 = p->mObject.mProperty_mAttributeListForGeneration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_arrayControllerFilterListForGeneration & outOperand2,
                                                             GALGAS_string & outOperand3,
                                                             GALGAS_arrayControllerBoundColumnListForGeneration & outOperand4,
                                                             GALGAS_arrayControllerSortedColumnListForGeneration & outOperand5,
                                                             GALGAS_string & outOperand6,
                                                             GALGAS_arrayControllerModelKind & outOperand7,
                                                             GALGAS_string & outOperand8,
                                                             GALGAS_bool & outOperand9,
                                                             GALGAS__32_stringlist & outOperand10,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mControllerName ;
    outOperand2 = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
    outOperand3 = p->mObject.mProperty_mModelString ;
    outOperand4 = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
    outOperand5 = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
    outOperand6 = p->mObject.mProperty_mModelTypeName ;
    outOperand7 = p->mObject.mProperty_mArrayControllerModelKind ;
    outOperand8 = p->mObject.mProperty_mElementTypeName ;
    outOperand9 = p->mObject.mProperty_mElementTypeIsGraphic ;
    outOperand10 = p->mObject.mProperty_mAttributeListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_arrayControllerFilterListForGeneration & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_arrayControllerBoundColumnListForGeneration & outOperand4,
                                                            GALGAS_arrayControllerSortedColumnListForGeneration & outOperand5,
                                                            GALGAS_string & outOperand6,
                                                            GALGAS_arrayControllerModelKind & outOperand7,
                                                            GALGAS_string & outOperand8,
                                                            GALGAS_bool & outOperand9,
                                                            GALGAS__32_stringlist & outOperand10,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mControllerName ;
    outOperand2 = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
    outOperand3 = p->mObject.mProperty_mModelString ;
    outOperand4 = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
    outOperand5 = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
    outOperand6 = p->mObject.mProperty_mModelTypeName ;
    outOperand7 = p->mObject.mProperty_mArrayControllerModelKind ;
    outOperand8 = p->mObject.mProperty_mElementTypeName ;
    outOperand9 = p->mObject.mProperty_mElementTypeIsGraphic ;
    outOperand10 = p->mObject.mProperty_mAttributeListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_arrayControllerFilterListForGeneration & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          GALGAS_arrayControllerBoundColumnListForGeneration & outOperand4,
                                                          GALGAS_arrayControllerSortedColumnListForGeneration & outOperand5,
                                                          GALGAS_string & outOperand6,
                                                          GALGAS_arrayControllerModelKind & outOperand7,
                                                          GALGAS_string & outOperand8,
                                                          GALGAS_bool & outOperand9,
                                                          GALGAS__32_stringlist & outOperand10,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mControllerName ;
    outOperand2 = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
    outOperand3 = p->mObject.mProperty_mModelString ;
    outOperand4 = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
    outOperand5 = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
    outOperand6 = p->mObject.mProperty_mModelTypeName ;
    outOperand7 = p->mObject.mProperty_mArrayControllerModelKind ;
    outOperand8 = p->mObject.mProperty_mElementTypeName ;
    outOperand9 = p->mObject.mProperty_mElementTypeIsGraphic ;
    outOperand10 = p->mObject.mProperty_mAttributeListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_arrayControllerFilterListForGeneration & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         GALGAS_arrayControllerBoundColumnListForGeneration & outOperand4,
                                                         GALGAS_arrayControllerSortedColumnListForGeneration & outOperand5,
                                                         GALGAS_string & outOperand6,
                                                         GALGAS_arrayControllerModelKind & outOperand7,
                                                         GALGAS_string & outOperand8,
                                                         GALGAS_bool & outOperand9,
                                                         GALGAS__32_stringlist & outOperand10,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mControllerName ;
    outOperand2 = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
    outOperand3 = p->mObject.mProperty_mModelString ;
    outOperand4 = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
    outOperand5 = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
    outOperand6 = p->mObject.mProperty_mModelTypeName ;
    outOperand7 = p->mObject.mProperty_mArrayControllerModelKind ;
    outOperand8 = p->mObject.mProperty_mElementTypeName ;
    outOperand9 = p->mObject.mProperty_mElementTypeIsGraphic ;
    outOperand10 = p->mObject.mProperty_mAttributeListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::add_operation (const GALGAS_arrayControllerForGenerationEX & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result = GALGAS_arrayControllerForGenerationEX::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result = GALGAS_arrayControllerForGenerationEX::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerForGenerationEX result = GALGAS_arrayControllerForGenerationEX::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGenerationEX::plusAssign_operation (const GALGAS_arrayControllerForGenerationEX inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGenerationEX::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerForGenerationEX::getter_mControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerForGenerationEX::getter_mArrayControllerFilterListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGenerationEX::getter_mModelStringAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mModelString ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerForGenerationEX::getter_mArrayControllerBoundColumnListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerForGenerationEX::getter_mArrayControllerSortedColumnListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGenerationEX::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerForGenerationEX::getter_mArrayControllerModelKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_arrayControllerModelKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mArrayControllerModelKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGenerationEX::getter_mElementTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_arrayControllerForGenerationEX::getter_mElementTypeIsGraphicAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mElementTypeIsGraphic ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_arrayControllerForGenerationEX::getter_mAttributeListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerForGenerationEX * p = (cCollectionElement_arrayControllerForGenerationEX *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
    result = p->mObject.mProperty_mAttributeListForGeneration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerForGenerationEX::cEnumerator_arrayControllerForGenerationEX (const GALGAS_arrayControllerForGenerationEX & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX_2D_element cEnumerator_arrayControllerForGenerationEX::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerForGenerationEX::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerForGenerationEX::current_mControllerName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration cEnumerator_arrayControllerForGenerationEX::current_mArrayControllerFilterListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mArrayControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerForGenerationEX::current_mModelString (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration cEnumerator_arrayControllerForGenerationEX::current_mArrayControllerBoundColumnListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mArrayControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration cEnumerator_arrayControllerForGenerationEX::current_mArrayControllerSortedColumnListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mArrayControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerForGenerationEX::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind cEnumerator_arrayControllerForGenerationEX::current_mArrayControllerModelKind (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mArrayControllerModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_arrayControllerForGenerationEX::current_mElementTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_arrayControllerForGenerationEX::current_mElementTypeIsGraphic (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mElementTypeIsGraphic ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist cEnumerator_arrayControllerForGenerationEX::current_mAttributeListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerForGenerationEX * p = (const cCollectionElement_arrayControllerForGenerationEX *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerForGenerationEX) ;
  return p->mObject.mProperty_mAttributeListForGeneration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @arrayControllerForGenerationEX type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerForGenerationEX ("arrayControllerForGenerationEX",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerForGenerationEX::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerForGenerationEX ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerForGenerationEX::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerForGenerationEX (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_arrayControllerForGenerationEX::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerForGenerationEX result ;
  const GALGAS_arrayControllerForGenerationEX * p = (const GALGAS_arrayControllerForGenerationEX *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerForGenerationEX *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerForGenerationEX", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Class for element of '@selectionControllerForGeneration' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_selectionControllerForGeneration : public cCollectionElement {
  public : GALGAS_selectionControllerForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                const GALGAS_string & in_mSelectionControllerName,
                                                                const GALGAS_string & in_mBoundControllerName,
                                                                const GALGAS_string & in_mBoundControllerPropertyName,
                                                                const GALGAS_string & in_mSelectionTypeName,
                                                                const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_string & in_mOwnerName,
                                                                                                          const GALGAS_string & in_mSelectionControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerName,
                                                                                                          const GALGAS_string & in_mBoundControllerPropertyName,
                                                                                                          const GALGAS_string & in_mSelectionTypeName,
                                                                                                          const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_selectionControllerForGeneration::cCollectionElement_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mSelectionControllerName, inElement.mProperty_mBoundControllerName, inElement.mProperty_mBoundControllerPropertyName, inElement.mProperty_mSelectionTypeName, inElement.mProperty_mSelectionObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_selectionControllerForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_selectionControllerForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_selectionControllerForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mSelectionControllerName, mObject.mProperty_mBoundControllerName, mObject.mProperty_mBoundControllerPropertyName, mObject.mProperty_mSelectionTypeName, mObject.mProperty_mSelectionObservablePropertyMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_selectionControllerForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOwnerName" ":" ;
  mObject.mProperty_mOwnerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionControllerName" ":" ;
  mObject.mProperty_mSelectionControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerName" ":" ;
  mObject.mProperty_mBoundControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundControllerPropertyName" ":" ;
  mObject.mProperty_mBoundControllerPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionTypeName" ":" ;
  mObject.mProperty_mSelectionTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionObservablePropertyMap" ":" ;
  mObject.mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_selectionControllerForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_selectionControllerForGeneration * operand = (cCollectionElement_selectionControllerForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_selectionControllerForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration::GALGAS_selectionControllerForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                            const GALGAS_string & inOperand1,
                                                                                                            const GALGAS_string & inOperand2,
                                                                                                            const GALGAS_string & inOperand3,
                                                                                                            const GALGAS_string & inOperand4,
                                                                                                            const GALGAS_observablePropertyMap & inOperand5
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_selectionControllerForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_string & in_mOwnerName,
                                                                         const GALGAS_string & in_mSelectionControllerName,
                                                                         const GALGAS_string & in_mBoundControllerName,
                                                                         const GALGAS_string & in_mBoundControllerPropertyName,
                                                                         const GALGAS_string & in_mSelectionTypeName,
                                                                         const GALGAS_observablePropertyMap & in_mSelectionObservablePropertyMap
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_selectionControllerForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_selectionControllerForGeneration (in_mOwnerName,
                                                                      in_mSelectionControllerName,
                                                                      in_mBoundControllerName,
                                                                      in_mBoundControllerPropertyName,
                                                                      in_mSelectionTypeName,
                                                                      in_mSelectionObservablePropertyMap COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                   const GALGAS_string & inOperand1,
                                                                   const GALGAS_string & inOperand2,
                                                                   const GALGAS_string & inOperand3,
                                                                   const GALGAS_string & inOperand4,
                                                                   const GALGAS_observablePropertyMap & inOperand5
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_append (GALGAS_selectionControllerForGeneration_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                    const GALGAS_string inOperand1,
                                                                    const GALGAS_string inOperand2,
                                                                    const GALGAS_string inOperand3,
                                                                    const GALGAS_string inOperand4,
                                                                    const GALGAS_observablePropertyMap inOperand5,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_selectionControllerForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_string & outOperand3,
                                                                    GALGAS_string & outOperand4,
                                                                    GALGAS_observablePropertyMap & outOperand5,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOwnerName ;
      outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
      outOperand2 = p->mObject.mProperty_mBoundControllerName ;
      outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
      outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
      outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                               GALGAS_string & outOperand1,
                                                               GALGAS_string & outOperand2,
                                                               GALGAS_string & outOperand3,
                                                               GALGAS_string & outOperand4,
                                                               GALGAS_observablePropertyMap & outOperand5,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                              GALGAS_string & outOperand1,
                                                              GALGAS_string & outOperand2,
                                                              GALGAS_string & outOperand3,
                                                              GALGAS_string & outOperand4,
                                                              GALGAS_observablePropertyMap & outOperand5,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::method_first (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            GALGAS_string & outOperand4,
                                                            GALGAS_observablePropertyMap & outOperand5,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::method_last (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           GALGAS_string & outOperand4,
                                                           GALGAS_observablePropertyMap & outOperand5,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOwnerName ;
    outOperand1 = p->mObject.mProperty_mSelectionControllerName ;
    outOperand2 = p->mObject.mProperty_mBoundControllerName ;
    outOperand3 = p->mObject.mProperty_mBoundControllerPropertyName ;
    outOperand4 = p->mObject.mProperty_mSelectionTypeName ;
    outOperand5 = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::add_operation (const GALGAS_selectionControllerForGeneration & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_selectionControllerForGeneration result = GALGAS_selectionControllerForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration::plusAssign_operation (const GALGAS_selectionControllerForGeneration inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mBoundControllerPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_selectionControllerForGeneration * p = (cCollectionElement_selectionControllerForGeneration *) attributes.ptr () ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
    result = p->mObject.mProperty_mSelectionObservablePropertyMap ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_selectionControllerForGeneration::cEnumerator_selectionControllerForGeneration (const GALGAS_selectionControllerForGeneration & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element cEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mBoundControllerPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  const cCollectionElement_selectionControllerForGeneration * p = (const cCollectionElement_selectionControllerForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_selectionControllerForGeneration) ;
  return p->mObject.mProperty_mSelectionObservablePropertyMap ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @selectionControllerForGeneration type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_selectionControllerForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration result ;
  const GALGAS_selectionControllerForGeneration * p = (const GALGAS_selectionControllerForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Class for element of '@entityListForGeneratingEBManagedObjectContext' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_entityListForGeneratingEBManagedObjectContext : public cCollectionElement {
  public : GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                             const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_string & in_mEntityName,
                                                                                                                                    const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_entityListForGeneratingEBManagedObjectContext::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_entityListForGeneratingEBManagedObjectContext::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntityName" ":" ;
  mObject.mProperty_mEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObsoleteEntityNames" ":" ;
  mObject.mProperty_mObsoleteEntityNames.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_entityListForGeneratingEBManagedObjectContext::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * operand = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext::GALGAS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_lstringlist & inOperand1
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GALGAS_string & in_mEntityName,
                                                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = NULL ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (in_mEntityName,
                                                                                   in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                const GALGAS_lstringlist & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_append (GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element inElement,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                 const GALGAS_lstringlist inOperand1,
                                                                                 const GALGAS_uint inInsertionIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                 GALGAS_lstringlist & outOperand1,
                                                                                 const GALGAS_uint inRemoveIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
      outOperand0 = p->mObject.mProperty_mEntityName ;
      outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GALGAS_string & outOperand0,
                                                                            GALGAS_lstringlist & outOperand1,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GALGAS_string & outOperand0,
                                                                           GALGAS_lstringlist & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_first (GALGAS_string & outOperand0,
                                                                         GALGAS_lstringlist & outOperand1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::method_last (GALGAS_string & outOperand0,
                                                                        GALGAS_lstringlist & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    outOperand0 = p->mObject.mProperty_mEntityName ;
    outOperand1 = p->mObject.mProperty_mObsoleteEntityNames ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::add_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                          C_Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_entityListForGeneratingEBManagedObjectContext result = GALGAS_entityListForGeneratingEBManagedObjectContext::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneratingEBManagedObjectContext::plusAssign_operation (const GALGAS_entityListForGeneratingEBManagedObjectContext inOperand,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    result = p->mObject.mProperty_mObsoleteEntityNames ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_entityListForGeneratingEBManagedObjectContext::cEnumerator_entityListForGeneratingEBManagedObjectContext (const GALGAS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element cEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  const cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (const cCollectionElement_entityListForGeneratingEBManagedObjectContext *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
  return p->mObject.mProperty_mObsoleteEntityNames ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @entityListForGeneratingEBManagedObjectContext type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneratingEBManagedObjectContext GALGAS_entityListForGeneratingEBManagedObjectContext::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind::GALGAS_objectKind (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_objectKind::constructor_classObject (UNUSED_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  result.mEnum = kEnum_classObject ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_objectKind::constructor_entityObject (UNUSED_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  result.mEnum = kEnum_entityObject ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_objectKind::constructor_graphicEntityObject (UNUSED_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  result.mEnum = kEnum_graphicEntityObject ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_objectKind [4] = {
  "(not built)",
  "classObject",
  "entityObject",
  "graphicEntityObject"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectKind::getter_isClassObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classObject == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectKind::getter_isEntityObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityObject == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_objectKind::getter_isGraphicEntityObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphicEntityObject == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_objectKind::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @objectKind: " << gEnumNameArrayFor_objectKind [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_objectKind::objectCompare (const GALGAS_objectKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                  @objectKind type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectKind ("objectKind",
                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_objectKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_objectKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_objectKind::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_objectKind result ;
  const GALGAS_objectKind * p = (const GALGAS_objectKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_objectKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("objectKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_entityObservablePropertyMap::cMapElement_entityObservablePropertyMap (const GALGAS_lstring & inKey,
                                                                                  const GALGAS_observablePropertyMap & in_mObservablePropertyMap,
                                                                                  const GALGAS_objectKind & in_mObjectKind
                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObservablePropertyMap (in_mObservablePropertyMap),
mProperty_mObjectKind (in_mObjectKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_entityObservablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObservablePropertyMap.isValid () && mProperty_mObjectKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_entityObservablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_entityObservablePropertyMap (mProperty_lkey, mProperty_mObservablePropertyMap, mProperty_mObjectKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_entityObservablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyMap" ":" ;
  mProperty_mObservablePropertyMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectKind" ":" ;
  mProperty_mObjectKind.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_entityObservablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_entityObservablePropertyMap * operand = (cMapElement_entityObservablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservablePropertyMap.objectCompare (operand->mProperty_mObservablePropertyMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObjectKind.objectCompare (operand->mProperty_mObjectKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap::GALGAS_entityObservablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap::GALGAS_entityObservablePropertyMap (const GALGAS_entityObservablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap & GALGAS_entityObservablePropertyMap::operator = (const GALGAS_entityObservablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap GALGAS_entityObservablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap GALGAS_entityObservablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_entityObservablePropertyMap & inMapToOverride
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap GALGAS_entityObservablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_entityObservablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                              const GALGAS_observablePropertyMap & inArgument0,
                                                              const GALGAS_objectKind & inArgument1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cMapElement_entityObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_entityObservablePropertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@entityObservablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                           GALGAS_observablePropertyMap inArgument0,
                                                           GALGAS_objectKind inArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_entityObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_entityObservablePropertyMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' document is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_entityObservablePropertyMap_searchKey = "there is no '%K' document" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                           GALGAS_observablePropertyMap & outArgument0,
                                                           GALGAS_objectKind & outArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) performSearch (inKey,
                                                                                                                       inCompiler,
                                                                                                                       kSearchErrorMessage_entityObservablePropertyMap_searchKey
                                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
    outArgument0 = p->mProperty_mObservablePropertyMap ;
    outArgument1 = p->mProperty_mObjectKind ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_entityObservablePropertyMap::getter_mObservablePropertyMapForKey (const GALGAS_string & inKey,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) attributes ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
    result = p->mProperty_mObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind GALGAS_entityObservablePropertyMap::getter_mObjectKindForKey (const GALGAS_string & inKey,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) attributes ;
  GALGAS_objectKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
    result = p->mProperty_mObjectKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap::setter_setMObservablePropertyMapForKey (GALGAS_observablePropertyMap inAttributeValue,
                                                                                 GALGAS_string inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_entityObservablePropertyMap * p = (cMapElement_entityObservablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
    p->mProperty_mObservablePropertyMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityObservablePropertyMap::setter_setMObjectKindForKey (GALGAS_objectKind inAttributeValue,
                                                                      GALGAS_string inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_entityObservablePropertyMap * p = (cMapElement_entityObservablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
    p->mProperty_mObjectKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_entityObservablePropertyMap * GALGAS_entityObservablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & inKey
                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_entityObservablePropertyMap * result = (cMapElement_entityObservablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_entityObservablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_entityObservablePropertyMap::cEnumerator_entityObservablePropertyMap (const GALGAS_entityObservablePropertyMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap_2D_element cEnumerator_entityObservablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
  return GALGAS_entityObservablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mObservablePropertyMap, p->mProperty_mObjectKind) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_entityObservablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_entityObservablePropertyMap::current_mObservablePropertyMap (LOCATION_ARGS) const {
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
  return p->mProperty_mObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_objectKind cEnumerator_entityObservablePropertyMap::current_mObjectKind (LOCATION_ARGS) const {
  const cMapElement_entityObservablePropertyMap * p = (const cMapElement_entityObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_entityObservablePropertyMap) ;
  return p->mProperty_mObjectKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @entityObservablePropertyMap type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityObservablePropertyMap ("entityObservablePropertyMap",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityObservablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityObservablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityObservablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityObservablePropertyMap GALGAS_entityObservablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap result ;
  const GALGAS_entityObservablePropertyMap * p = (const GALGAS_entityObservablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityObservablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityObservablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@outletDeclarationList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public : GALGAS_outletDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                     const GALGAS_lstring & in_mOutletName,
                                                     const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                     const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                     const GALGAS_regularBindingList & in_mRegularBindingList,
                                                     const GALGAS_graphicController & in_mGraphicController
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                                                    const GALGAS_lstring & in_mOutletName,
                                                                                    const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                    const GALGAS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mObject.mProperty_mOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingDescriptor" ":" ;
  mObject.mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunDescriptor" ":" ;
  mObject.mProperty_mRunDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnabledBindingDescriptor" ":" ;
  mObject.mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingList" ":" ;
  mObject.mProperty_mRegularBindingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGraphicController" ":" ;
  mObject.mProperty_mGraphicController.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletDeclarationList * operand = (cCollectionElement_outletDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_tableValueBinding & inOperand2,
                                                                                      const GALGAS_runActionDescriptor & inOperand3,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                      const GALGAS_regularBindingList & inOperand6,
                                                                                      const GALGAS_graphicController & inOperand7
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mOutletTypeName,
                                                              const GALGAS_lstring & in_mOutletName,
                                                              const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                              const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                              const GALGAS_regularBindingList & in_mRegularBindingList,
                                                              const GALGAS_graphicController & in_mGraphicController
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (in_mOutletTypeName,
                                                           in_mOutletName,
                                                           in_mTableValueBindingDescriptor,
                                                           in_mRunDescriptor,
                                                           in_mEnabledBindingDescriptor,
                                                           in_mHiddenBindingDescriptor,
                                                           in_mRegularBindingList,
                                                           in_mGraphicController COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_tableValueBinding & inOperand2,
                                                        const GALGAS_runActionDescriptor & inOperand3,
                                                        const GALGAS_multipleBindingDescriptor & inOperand4,
                                                        const GALGAS_multipleBindingDescriptor & inOperand5,
                                                        const GALGAS_regularBindingList & inOperand6,
                                                        const GALGAS_graphicController & inOperand7
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_append (GALGAS_outletDeclarationList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_tableValueBinding inOperand2,
                                                         const GALGAS_runActionDescriptor inOperand3,
                                                         const GALGAS_multipleBindingDescriptor inOperand4,
                                                         const GALGAS_multipleBindingDescriptor inOperand5,
                                                         const GALGAS_regularBindingList inOperand6,
                                                         const GALGAS_graphicController inOperand7,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_tableValueBinding & outOperand2,
                                                         GALGAS_runActionDescriptor & outOperand3,
                                                         GALGAS_multipleBindingDescriptor & outOperand4,
                                                         GALGAS_multipleBindingDescriptor & outOperand5,
                                                         GALGAS_regularBindingList & outOperand6,
                                                         GALGAS_graphicController & outOperand7,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      outOperand7.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mOutletTypeName ;
      outOperand1 = p->mObject.mProperty_mOutletName ;
      outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
      outOperand3 = p->mObject.mProperty_mRunDescriptor ;
      outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
      outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
      outOperand6 = p->mObject.mProperty_mRegularBindingList ;
      outOperand7 = p->mObject.mProperty_mGraphicController ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_tableValueBinding & outOperand2,
                                                    GALGAS_runActionDescriptor & outOperand3,
                                                    GALGAS_multipleBindingDescriptor & outOperand4,
                                                    GALGAS_multipleBindingDescriptor & outOperand5,
                                                    GALGAS_regularBindingList & outOperand6,
                                                    GALGAS_graphicController & outOperand7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_tableValueBinding & outOperand2,
                                                   GALGAS_runActionDescriptor & outOperand3,
                                                   GALGAS_multipleBindingDescriptor & outOperand4,
                                                   GALGAS_multipleBindingDescriptor & outOperand5,
                                                   GALGAS_regularBindingList & outOperand6,
                                                   GALGAS_graphicController & outOperand7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_tableValueBinding & outOperand2,
                                                 GALGAS_runActionDescriptor & outOperand3,
                                                 GALGAS_multipleBindingDescriptor & outOperand4,
                                                 GALGAS_multipleBindingDescriptor & outOperand5,
                                                 GALGAS_regularBindingList & outOperand6,
                                                 GALGAS_graphicController & outOperand7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_tableValueBinding & outOperand2,
                                                GALGAS_runActionDescriptor & outOperand3,
                                                GALGAS_multipleBindingDescriptor & outOperand4,
                                                GALGAS_multipleBindingDescriptor & outOperand5,
                                                GALGAS_regularBindingList & outOperand6,
                                                GALGAS_graphicController & outOperand7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_tableValueBinding result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mTableValueBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_runActionDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRunDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_regularBindingList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRegularBindingList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_graphicController result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mGraphicController ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @outletDeclarationList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  const GALGAS_outletDeclarationList * p = (const GALGAS_outletDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_documentObservablePropertyMap::cMapElement_documentObservablePropertyMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_observablePropertyMap & in_mObservablePropertyMap
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObservablePropertyMap (in_mObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_documentObservablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_documentObservablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_documentObservablePropertyMap (mProperty_lkey, mProperty_mObservablePropertyMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_documentObservablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyMap" ":" ;
  mProperty_mObservablePropertyMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_documentObservablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_documentObservablePropertyMap * operand = (cMapElement_documentObservablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservablePropertyMap.objectCompare (operand->mProperty_mObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap::GALGAS_documentObservablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap::GALGAS_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap & GALGAS_documentObservablePropertyMap::operator = (const GALGAS_documentObservablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_documentObservablePropertyMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_documentObservablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_observablePropertyMap & inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_documentObservablePropertyMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@documentObservablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_observablePropertyMap inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_documentObservablePropertyMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' document is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_documentObservablePropertyMap_searchKey = "there is no '%K' document" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_observablePropertyMap & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_documentObservablePropertyMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    outArgument0 = p->mProperty_mObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap::getter_mObservablePropertyMapForKey (const GALGAS_string & inKey,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) attributes ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    result = p->mProperty_mObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::setter_setMObservablePropertyMapForKey (GALGAS_observablePropertyMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_documentObservablePropertyMap * p = (cMapElement_documentObservablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    p->mProperty_mObservablePropertyMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_documentObservablePropertyMap * GALGAS_documentObservablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * result = (cMapElement_documentObservablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_documentObservablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_documentObservablePropertyMap::cEnumerator_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element cEnumerator_documentObservablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
  return GALGAS_documentObservablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mObservablePropertyMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_documentObservablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_documentObservablePropertyMap::current_mObservablePropertyMap (LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
  return p->mProperty_mObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @documentObservablePropertyMap type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap ("documentObservablePropertyMap",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  const GALGAS_documentObservablePropertyMap * p = (const GALGAS_documentObservablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentObservablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentObservablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@documentListForGeneration' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_documentListForGeneration : public cCollectionElement {
  public : GALGAS_documentListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_documentListForGeneration (const GALGAS_string & in_mDocumentName,
                                                         const GALGAS_string & in_mRootEntityName,
                                                         const GALGAS_transientDefinitionListForGenerationEX & in_mTransientListForGeneration,
                                                         const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                         const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                         const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                         const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                         const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerForGeneration,
                                                         const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                         const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                         const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_documentListForGeneration (const GALGAS_documentListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_documentListForGeneration::cCollectionElement_documentListForGeneration (const GALGAS_string & in_mDocumentName,
                                                                                            const GALGAS_string & in_mRootEntityName,
                                                                                            const GALGAS_transientDefinitionListForGenerationEX & in_mTransientListForGeneration,
                                                                                            const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                                            const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                                            const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                            const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                                            const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerForGeneration,
                                                                                            const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                            const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                            const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDocumentName, in_mRootEntityName, in_mTransientListForGeneration, in_mOutletMap, in_mTargetActionList, in_mRegularBindingsGenerationList, in_multipleBindingGenerationList, in_mArrayControllerForGeneration, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mSelectionControllerListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_documentListForGeneration::cCollectionElement_documentListForGeneration (const GALGAS_documentListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDocumentName, inElement.mProperty_mRootEntityName, inElement.mProperty_mTransientListForGeneration, inElement.mProperty_mOutletMap, inElement.mProperty_mTargetActionList, inElement.mProperty_mRegularBindingsGenerationList, inElement.mProperty_multipleBindingGenerationList, inElement.mProperty_mArrayControllerForGeneration, inElement.mProperty_mTableViewBindingGenerationList, inElement.mProperty_mEBViewBindingGenerationList, inElement.mProperty_mSelectionControllerListForGeneration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_documentListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_documentListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_documentListForGeneration (mObject.mProperty_mDocumentName, mObject.mProperty_mRootEntityName, mObject.mProperty_mTransientListForGeneration, mObject.mProperty_mOutletMap, mObject.mProperty_mTargetActionList, mObject.mProperty_mRegularBindingsGenerationList, mObject.mProperty_multipleBindingGenerationList, mObject.mProperty_mArrayControllerForGeneration, mObject.mProperty_mTableViewBindingGenerationList, mObject.mProperty_mEBViewBindingGenerationList, mObject.mProperty_mSelectionControllerListForGeneration COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_documentListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDocumentName" ":" ;
  mObject.mProperty_mDocumentName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRootEntityName" ":" ;
  mObject.mProperty_mRootEntityName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTransientListForGeneration" ":" ;
  mObject.mProperty_mTransientListForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletMap" ":" ;
  mObject.mProperty_mOutletMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetActionList" ":" ;
  mObject.mProperty_mTargetActionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "multipleBindingGenerationList" ":" ;
  mObject.mProperty_multipleBindingGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerForGeneration" ":" ;
  mObject.mProperty_mArrayControllerForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableViewBindingGenerationList" ":" ;
  mObject.mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEBViewBindingGenerationList" ":" ;
  mObject.mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectionControllerListForGeneration" ":" ;
  mObject.mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_documentListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_documentListForGeneration * operand = (cCollectionElement_documentListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_documentListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration::GALGAS_documentListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration::GALGAS_documentListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_transientDefinitionListForGenerationEX & inOperand2,
                                                                                              const GALGAS_decoratedOutletMap & inOperand3,
                                                                                              const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                              const GALGAS_regularBindingsGenerationList & inOperand5,
                                                                                              const GALGAS_multipleBindingGenerationList & inOperand6,
                                                                                              const GALGAS_arrayControllerForGenerationEX & inOperand7,
                                                                                              const GALGAS_tableViewBindingGenerationList & inOperand8,
                                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand9,
                                                                                              const GALGAS_selectionControllerForGeneration & inOperand10
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_documentListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_documentListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_documentListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_string & in_mDocumentName,
                                                                  const GALGAS_string & in_mRootEntityName,
                                                                  const GALGAS_transientDefinitionListForGenerationEX & in_mTransientListForGeneration,
                                                                  const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                  const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                  const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                  const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                  const GALGAS_arrayControllerForGenerationEX & in_mArrayControllerForGeneration,
                                                                  const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                  const GALGAS_selectionControllerForGeneration & in_mSelectionControllerListForGeneration
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_documentListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_documentListForGeneration (in_mDocumentName,
                                                               in_mRootEntityName,
                                                               in_mTransientListForGeneration,
                                                               in_mOutletMap,
                                                               in_mTargetActionList,
                                                               in_mRegularBindingsGenerationList,
                                                               in_multipleBindingGenerationList,
                                                               in_mArrayControllerForGeneration,
                                                               in_mTableViewBindingGenerationList,
                                                               in_mEBViewBindingGenerationList,
                                                               in_mSelectionControllerListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                            const GALGAS_string & inOperand1,
                                                            const GALGAS_transientDefinitionListForGenerationEX & inOperand2,
                                                            const GALGAS_decoratedOutletMap & inOperand3,
                                                            const GALGAS_actionBindingListForGeneration & inOperand4,
                                                            const GALGAS_regularBindingsGenerationList & inOperand5,
                                                            const GALGAS_multipleBindingGenerationList & inOperand6,
                                                            const GALGAS_arrayControllerForGenerationEX & inOperand7,
                                                            const GALGAS_tableViewBindingGenerationList & inOperand8,
                                                            const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand9,
                                                            const GALGAS_selectionControllerForGeneration & inOperand10
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_documentListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::setter_append (GALGAS_documentListForGeneration_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_documentListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                             const GALGAS_string inOperand1,
                                                             const GALGAS_transientDefinitionListForGenerationEX inOperand2,
                                                             const GALGAS_decoratedOutletMap inOperand3,
                                                             const GALGAS_actionBindingListForGeneration inOperand4,
                                                             const GALGAS_regularBindingsGenerationList inOperand5,
                                                             const GALGAS_multipleBindingGenerationList inOperand6,
                                                             const GALGAS_arrayControllerForGenerationEX inOperand7,
                                                             const GALGAS_tableViewBindingGenerationList inOperand8,
                                                             const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand9,
                                                             const GALGAS_selectionControllerForGeneration inOperand10,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_documentListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_transientDefinitionListForGenerationEX & outOperand2,
                                                             GALGAS_decoratedOutletMap & outOperand3,
                                                             GALGAS_actionBindingListForGeneration & outOperand4,
                                                             GALGAS_regularBindingsGenerationList & outOperand5,
                                                             GALGAS_multipleBindingGenerationList & outOperand6,
                                                             GALGAS_arrayControllerForGenerationEX & outOperand7,
                                                             GALGAS_tableViewBindingGenerationList & outOperand8,
                                                             GALGAS_ebViewGraphicControllerBindingGenerationList & outOperand9,
                                                             GALGAS_selectionControllerForGeneration & outOperand10,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
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
      macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mDocumentName ;
      outOperand1 = p->mObject.mProperty_mRootEntityName ;
      outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
      outOperand3 = p->mObject.mProperty_mOutletMap ;
      outOperand4 = p->mObject.mProperty_mTargetActionList ;
      outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
      outOperand6 = p->mObject.mProperty_multipleBindingGenerationList ;
      outOperand7 = p->mObject.mProperty_mArrayControllerForGeneration ;
      outOperand8 = p->mObject.mProperty_mTableViewBindingGenerationList ;
      outOperand9 = p->mObject.mProperty_mEBViewBindingGenerationList ;
      outOperand10 = p->mObject.mProperty_mSelectionControllerListForGeneration ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_transientDefinitionListForGenerationEX & outOperand2,
                                                        GALGAS_decoratedOutletMap & outOperand3,
                                                        GALGAS_actionBindingListForGeneration & outOperand4,
                                                        GALGAS_regularBindingsGenerationList & outOperand5,
                                                        GALGAS_multipleBindingGenerationList & outOperand6,
                                                        GALGAS_arrayControllerForGenerationEX & outOperand7,
                                                        GALGAS_tableViewBindingGenerationList & outOperand8,
                                                        GALGAS_ebViewGraphicControllerBindingGenerationList & outOperand9,
                                                        GALGAS_selectionControllerForGeneration & outOperand10,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDocumentName ;
    outOperand1 = p->mObject.mProperty_mRootEntityName ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mOutletMap ;
    outOperand4 = p->mObject.mProperty_mTargetActionList ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_multipleBindingGenerationList ;
    outOperand7 = p->mObject.mProperty_mArrayControllerForGeneration ;
    outOperand8 = p->mObject.mProperty_mTableViewBindingGenerationList ;
    outOperand9 = p->mObject.mProperty_mEBViewBindingGenerationList ;
    outOperand10 = p->mObject.mProperty_mSelectionControllerListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_transientDefinitionListForGenerationEX & outOperand2,
                                                       GALGAS_decoratedOutletMap & outOperand3,
                                                       GALGAS_actionBindingListForGeneration & outOperand4,
                                                       GALGAS_regularBindingsGenerationList & outOperand5,
                                                       GALGAS_multipleBindingGenerationList & outOperand6,
                                                       GALGAS_arrayControllerForGenerationEX & outOperand7,
                                                       GALGAS_tableViewBindingGenerationList & outOperand8,
                                                       GALGAS_ebViewGraphicControllerBindingGenerationList & outOperand9,
                                                       GALGAS_selectionControllerForGeneration & outOperand10,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDocumentName ;
    outOperand1 = p->mObject.mProperty_mRootEntityName ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mOutletMap ;
    outOperand4 = p->mObject.mProperty_mTargetActionList ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_multipleBindingGenerationList ;
    outOperand7 = p->mObject.mProperty_mArrayControllerForGeneration ;
    outOperand8 = p->mObject.mProperty_mTableViewBindingGenerationList ;
    outOperand9 = p->mObject.mProperty_mEBViewBindingGenerationList ;
    outOperand10 = p->mObject.mProperty_mSelectionControllerListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::method_first (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     GALGAS_transientDefinitionListForGenerationEX & outOperand2,
                                                     GALGAS_decoratedOutletMap & outOperand3,
                                                     GALGAS_actionBindingListForGeneration & outOperand4,
                                                     GALGAS_regularBindingsGenerationList & outOperand5,
                                                     GALGAS_multipleBindingGenerationList & outOperand6,
                                                     GALGAS_arrayControllerForGenerationEX & outOperand7,
                                                     GALGAS_tableViewBindingGenerationList & outOperand8,
                                                     GALGAS_ebViewGraphicControllerBindingGenerationList & outOperand9,
                                                     GALGAS_selectionControllerForGeneration & outOperand10,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDocumentName ;
    outOperand1 = p->mObject.mProperty_mRootEntityName ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mOutletMap ;
    outOperand4 = p->mObject.mProperty_mTargetActionList ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_multipleBindingGenerationList ;
    outOperand7 = p->mObject.mProperty_mArrayControllerForGeneration ;
    outOperand8 = p->mObject.mProperty_mTableViewBindingGenerationList ;
    outOperand9 = p->mObject.mProperty_mEBViewBindingGenerationList ;
    outOperand10 = p->mObject.mProperty_mSelectionControllerListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::method_last (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_transientDefinitionListForGenerationEX & outOperand2,
                                                    GALGAS_decoratedOutletMap & outOperand3,
                                                    GALGAS_actionBindingListForGeneration & outOperand4,
                                                    GALGAS_regularBindingsGenerationList & outOperand5,
                                                    GALGAS_multipleBindingGenerationList & outOperand6,
                                                    GALGAS_arrayControllerForGenerationEX & outOperand7,
                                                    GALGAS_tableViewBindingGenerationList & outOperand8,
                                                    GALGAS_ebViewGraphicControllerBindingGenerationList & outOperand9,
                                                    GALGAS_selectionControllerForGeneration & outOperand10,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDocumentName ;
    outOperand1 = p->mObject.mProperty_mRootEntityName ;
    outOperand2 = p->mObject.mProperty_mTransientListForGeneration ;
    outOperand3 = p->mObject.mProperty_mOutletMap ;
    outOperand4 = p->mObject.mProperty_mTargetActionList ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_multipleBindingGenerationList ;
    outOperand7 = p->mObject.mProperty_mArrayControllerForGeneration ;
    outOperand8 = p->mObject.mProperty_mTableViewBindingGenerationList ;
    outOperand9 = p->mObject.mProperty_mEBViewBindingGenerationList ;
    outOperand10 = p->mObject.mProperty_mSelectionControllerListForGeneration ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::add_operation (const GALGAS_documentListForGeneration & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_documentListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_documentListForGeneration result = GALGAS_documentListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_documentListForGeneration result = GALGAS_documentListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_documentListForGeneration result = GALGAS_documentListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration::plusAssign_operation (const GALGAS_documentListForGeneration inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentListForGeneration::getter_mDocumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mDocumentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentListForGeneration::getter_mRootEntityNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX GALGAS_documentListForGeneration::getter_mTransientListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_transientDefinitionListForGenerationEX result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mTransientListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_documentListForGeneration::getter_mOutletMapAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_decoratedOutletMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mOutletMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_documentListForGeneration::getter_mTargetActionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mTargetActionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_documentListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_documentListForGeneration::getter_multipleBindingGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_multipleBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX GALGAS_documentListForGeneration::getter_mArrayControllerForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_arrayControllerForGenerationEX result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mArrayControllerForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_documentListForGeneration::getter_mTableViewBindingGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                       C_Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_documentListForGeneration::getter_mEBViewBindingGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_documentListForGeneration::getter_mSelectionControllerListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_documentListForGeneration * p = (cCollectionElement_documentListForGeneration *) attributes.ptr () ;
  GALGAS_selectionControllerForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
    result = p->mObject.mProperty_mSelectionControllerListForGeneration ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_documentListForGeneration::cEnumerator_documentListForGeneration (const GALGAS_documentListForGeneration & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element cEnumerator_documentListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_documentListForGeneration::current_mDocumentName (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mDocumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_documentListForGeneration::current_mRootEntityName (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGenerationEX cEnumerator_documentListForGeneration::current_mTransientListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap cEnumerator_documentListForGeneration::current_mOutletMap (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration cEnumerator_documentListForGeneration::current_mTargetActionList (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mTargetActionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cEnumerator_documentListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList cEnumerator_documentListForGeneration::current_multipleBindingGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGenerationEX cEnumerator_documentListForGeneration::current_mArrayControllerForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList cEnumerator_documentListForGeneration::current_mTableViewBindingGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList cEnumerator_documentListForGeneration::current_mEBViewBindingGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration cEnumerator_documentListForGeneration::current_mSelectionControllerListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_documentListForGeneration * p = (const cCollectionElement_documentListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_documentListForGeneration) ;
  return p->mObject.mProperty_mSelectionControllerListForGeneration ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @documentListForGeneration type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentListForGeneration ("documentListForGeneration",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration GALGAS_documentListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_documentListForGeneration result ;
  const GALGAS_documentListForGeneration * p = (const GALGAS_documentListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap::cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_string & in_mOutletTypeName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletTypeName (in_mOutletTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_decoratedOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_decoratedOutletMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_decoratedOutletMap (mProperty_lkey, mProperty_mOutletTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_decoratedOutletMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mProperty_mOutletTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_decoratedOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_decoratedOutletMap * operand = (cMapElement_decoratedOutletMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletTypeName.objectCompare (operand->mProperty_mOutletTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap & GALGAS_decoratedOutletMap::operator = (const GALGAS_decoratedOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_mapWithMapToOverride (const GALGAS_decoratedOutletMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_string & inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@decoratedOutletMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_decoratedOutletMap_searchKey = "the '%K' outlet is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_string & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_decoratedOutletMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_decoratedOutletMap::getter_mOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    result = p->mProperty_mOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_decoratedOutletMap::setter_setMOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_decoratedOutletMap * p = (cMapElement_decoratedOutletMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    p->mProperty_mOutletTypeName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap * GALGAS_decoratedOutletMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * result = (cMapElement_decoratedOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_decoratedOutletMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedOutletMap::cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element cEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return GALGAS_decoratedOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletTypeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return p->mProperty_mOutletTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @decoratedOutletMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  const GALGAS_decoratedOutletMap * p = (const GALGAS_decoratedOutletMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@actionBindingListForGeneration' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_actionBindingListForGeneration : public cCollectionElement {
  public : GALGAS_actionBindingListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                              const GALGAS_string & in_mTargetName,
                                                              const GALGAS_string & in_mActionName,
                                                              const GALGAS_string & in_mTargetTypeName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                                                                      const GALGAS_string & in_mTargetName,
                                                                                                      const GALGAS_string & in_mActionName,
                                                                                                      const GALGAS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_actionBindingListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetTypeName" ":" ;
  mObject.mProperty_mTargetTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_actionBindingListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionBindingListForGeneration * operand = (cCollectionElement_actionBindingListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionBindingListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mOutletName,
                                                                       const GALGAS_string & in_mTargetName,
                                                                       const GALGAS_string & in_mActionName,
                                                                       const GALGAS_string & in_mTargetTypeName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_actionBindingListForGeneration (in_mOutletName,
                                                                    in_mTargetName,
                                                                    in_mActionName,
                                                                    in_mTargetTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1,
                                                                 const GALGAS_string & inOperand2,
                                                                 const GALGAS_string & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_append (GALGAS_actionBindingListForGeneration_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_string inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             GALGAS_string & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::add_operation (const GALGAS_actionBindingListForGeneration & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetTypeName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionBindingListForGeneration::cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element cEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @actionBindingListForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  const GALGAS_actionBindingListForGeneration * p = (const GALGAS_actionBindingListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@regularBindingsGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_regularBindingsGenerationList : public cCollectionElement {
  public : GALGAS_regularBindingsGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_boundObjectList & in_mBoundObjectList,
                                                             const GALGAS_string & in_mBindingOptionsString
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GALGAS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_regularBindingsGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectList" ":" ;
  mObject.mProperty_mBoundObjectList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionsString" ":" ;
  mObject.mProperty_mBindingOptionsString.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_regularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingsGenerationList * operand = (cCollectionElement_regularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_regularBindingsGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectList,
                                                                   in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_boundObjectList & inOperand2,
                                                                const GALGAS_string & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_append (GALGAS_regularBindingsGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_boundObjectList inOperand2,
                                                                 const GALGAS_string inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_boundObjectList & outOperand2,
                                                                 GALGAS_string & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_boundObjectList & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_boundObjectList & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_boundObjectList & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_boundObjectList & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_boundObjectList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingOptionsString ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_regularBindingsGenerationList::cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element cEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList cEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @regularBindingsGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  const GALGAS_regularBindingsGenerationList * p = (const GALGAS_regularBindingsGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@multipleBindingGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_multipleBindingGenerationList : public cCollectionElement {
  public : GALGAS_multipleBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_multipleBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectExpression" ":" ;
  mObject.mProperty_mBoundObjectExpression.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_multipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_multipleBindingGenerationList * operand = (cCollectionElement_multipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_multipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_multipleBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_multipleBindingGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_append (GALGAS_multipleBindingGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::add_operation (const GALGAS_multipleBindingGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectExpression ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_multipleBindingGenerationList::cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element cEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @multipleBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  const GALGAS_multipleBindingGenerationList * p = (const GALGAS_multipleBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@tableViewBindingGenerationList' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_tableViewBindingGenerationList : public cCollectionElement {
  public : GALGAS_tableViewBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                              const GALGAS_string & in_mTableValueBindingControllerName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                      const GALGAS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_tableViewBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingOutletName" ":" ;
  mObject.mProperty_mTableValueBindingOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingControllerName" ":" ;
  mObject.mProperty_mTableValueBindingControllerName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_tableViewBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewBindingGenerationList * operand = (cCollectionElement_tableViewBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mTableValueBindingOutletName,
                                                                       const GALGAS_string & in_mTableValueBindingControllerName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (in_mTableValueBindingOutletName,
                                                                    in_mTableValueBindingControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_append (GALGAS_tableViewBindingGenerationList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
      outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_tableViewBindingGenerationList::cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element cEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @tableViewBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  const GALGAS_tableViewBindingGenerationList * p = (const GALGAS_tableViewBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@ebViewGraphicControllerBindingGenerationList' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_ebViewGraphicControllerBindingGenerationList : public cCollectionElement {
  public : GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                            const GALGAS_string & in_mArrayControllerControllerName
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                  const GALGAS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_ebViewGraphicControllerBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEBViewOutletName" ":" ;
  mObject.mProperty_mEBViewOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerControllerName" ":" ;
  mObject.mProperty_mArrayControllerControllerName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ebViewGraphicControllerBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * operand = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mEBViewOutletName,
                                                                                     const GALGAS_string & in_mArrayControllerControllerName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName,
                                                                                  in_mArrayControllerControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_append (GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_string inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_string & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
      outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mEBViewOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mEBViewOutletName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mArrayControllerControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mArrayControllerControllerName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ebViewGraphicControllerBindingGenerationList::cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element cEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mEBViewOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mArrayControllerControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @ebViewGraphicControllerBindingGenerationList type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@storedArrayPropertyListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_storedArrayPropertyListAST : public cCollectionElement {
  public : GALGAS_storedArrayPropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_storedArrayPropertyListAST (const GALGAS_lstring & in_mElementClassName,
                                                          const GALGAS_lstring & in_mStoredArrayPropertyName
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_storedArrayPropertyListAST::cCollectionElement_storedArrayPropertyListAST (const GALGAS_lstring & in_mElementClassName,
                                                                                              const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElementClassName, in_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_storedArrayPropertyListAST::cCollectionElement_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElementClassName, inElement.mProperty_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_storedArrayPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_storedArrayPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_storedArrayPropertyListAST (mObject.mProperty_mElementClassName, mObject.mProperty_mStoredArrayPropertyName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_storedArrayPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementClassName" ":" ;
  mObject.mProperty_mElementClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStoredArrayPropertyName" ":" ;
  mObject.mProperty_mStoredArrayPropertyName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_storedArrayPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_storedArrayPropertyListAST * operand = (cCollectionElement_storedArrayPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_storedArrayPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST::GALGAS_storedArrayPropertyListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST::GALGAS_storedArrayPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_storedArrayPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mElementClassName,
                                                                   const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_storedArrayPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (in_mElementClassName,
                                                                in_mStoredArrayPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_append (GALGAS_storedArrayPropertyListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mElementClassName ;
      outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::add_operation (const GALGAS_storedArrayPropertyListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::plusAssign_operation (const GALGAS_storedArrayPropertyListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST::getter_mElementClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    result = p->mObject.mProperty_mElementClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST::getter_mStoredArrayPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    result = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_storedArrayPropertyListAST::cEnumerator_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element cEnumerator_storedArrayPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_storedArrayPropertyListAST::current_mElementClassName (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject.mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_storedArrayPropertyListAST::current_mStoredArrayPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject.mProperty_mStoredArrayPropertyName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @storedArrayPropertyListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListAST ("storedArrayPropertyListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storedArrayPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST result ;
  const GALGAS_storedArrayPropertyListAST * p = (const GALGAS_storedArrayPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_preferencesForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyListForGeneration.objectCompare (p->mProperty_mPropertyListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionBindingListForGeneration.objectCompare (p->mProperty_mActionBindingListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration::constructor_new (GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                           GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                           GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                           GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_propertyGenerationList & inAttribute_mPropertyListForGeneration,
                                                                                  const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                  const GALGAS_multipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                  const GALGAS_actionBindingListForGeneration & inAttribute_mActionBindingListForGeneration,
                                                                                  const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                  const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                                  const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inAttribute_mPropertyListForGeneration.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mActionBindingListForGeneration.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_preferencesForGeneration (inAttribute_mPropertyListForGeneration, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mActionBindingListForGeneration, inAttribute_mOutletMap, inAttribute_mExternSwiftFunctionList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mPropertyListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cPtr_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mMultipleBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList cPtr_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mActionBindingListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration cPtr_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap cPtr_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList cPtr_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @preferencesForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                              const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                              const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mPropertyListForGeneration (in_mPropertyListForGeneration),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mActionBindingListForGeneration (in_mActionBindingListForGeneration),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

void cPtr_preferencesForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@preferencesForGeneration:" ;
  mProperty_mPropertyListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_preferencesForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  const GALGAS_preferencesForGeneration * p = (const GALGAS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@outletClassDeclarationListEX buildOutletClassMap'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildOutletClassMap (const GALGAS_outletClassDeclarationListEX inObject,
                                          GALGAS_outletClassMap & ioArgument_ioOutletClassMap,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationListEX var_remainingList_5148 = GALGAS_outletClassDeclarationListEX::constructor_emptyList (SOURCE_FILE ("outlet-class.galgas", 166)) ;
  const GALGAS_outletClassDeclarationListEX temp_0 = inObject ;
  cEnumerator_outletClassDeclarationListEX enumerator_5170 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5170.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5170.current_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioOutletClassMap.setter_insertKey (enumerator_5170.current_mOutletClassName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.galgas", 171)), enumerator_5170.current_mHasRunAction (HERE), enumerator_5170.current_mHandlesTableValueBinding (HERE), enumerator_5170.current_mHasEnabled (HERE), enumerator_5170.current_mHasHidden (HERE), enumerator_5170.current_mHandlesGraphicControllerBinding (HERE), enumerator_5170.current_mUserDefined (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 169)) ;
      }
    }else if (kBoolFalse == test_1) {
      var_remainingList_5148.addAssign_operation (enumerator_5170.current_mUserDefined (HERE), enumerator_5170.current_mOutletClassName (HERE), enumerator_5170.current_mSuperClassName (HERE), enumerator_5170.current_mHasRunAction (HERE), enumerator_5170.current_mHasEnabled (HERE), enumerator_5170.current_mHandlesTableValueBinding (HERE), enumerator_5170.current_mHandlesGraphicControllerBinding (HERE), enumerator_5170.current_mHasHidden (HERE)  COMMA_SOURCE_FILE ("outlet-class.galgas", 180)) ;
    }
    enumerator_5170.gotoNextObject () ;
  }
  GALGAS_bool var_continue_5822 = GALGAS_bool (true) ;
  if (var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).isValid ()) {
    uint32_t variant_5836 = var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).uintValue () ;
    bool loop_5836 = true ;
    while (loop_5836) {
      loop_5836 = GALGAS_bool (kIsStrictSup, var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_continue_5822 COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).isValid () ;
      if (loop_5836) {
        loop_5836 = GALGAS_bool (kIsStrictSup, var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_continue_5822 COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).boolValue () ;
      }
      if (loop_5836 && (0 == variant_5836)) {
        loop_5836 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-class.galgas", 193)) ;
      }
      if (loop_5836) {
        variant_5836 -- ;
        GALGAS_outletClassDeclarationListEX var_currentList_5934 = var_remainingList_5148 ;
        var_remainingList_5148 = GALGAS_outletClassDeclarationListEX::constructor_emptyList (SOURCE_FILE ("outlet-class.galgas", 195)) ;
        var_continue_5822 = GALGAS_bool (false) ;
        cEnumerator_outletClassDeclarationListEX enumerator_6020 (var_currentList_5934, kENUMERATION_UP) ;
        while (enumerator_6020.hasCurrentObject ()) {
          const enumGalgasBool test_2 = ioArgument_ioOutletClassMap.getter_hasKey (enumerator_6020.current_mSuperClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-class.galgas", 198)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_bool var_hasRunAction_6191 ;
            GALGAS_bool var_handlesTableValueBinding_6231 ;
            GALGAS_bool var_hasEnabled_6257 ;
            GALGAS_bool var_hasHidden_6282 ;
            GALGAS_bool var_handlesGraphicControllerBinding_6329 ;
            GALGAS_lstring joker_6162 ; // Joker input parameter
            GALGAS_bool joker_6341 ; // Joker input parameter
            ioArgument_ioOutletClassMap.method_searchKey (enumerator_6020.current_mSuperClassName (HERE), joker_6162, var_hasRunAction_6191, var_handlesTableValueBinding_6231, var_hasEnabled_6257, var_hasHidden_6282, var_handlesGraphicControllerBinding_6329, joker_6341, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 199)) ;
            const enumGalgasBool test_3 = enumerator_6020.current_mHasRunAction (HERE).operator_and (var_hasRunAction_6191 COMMA_SOURCE_FILE ("outlet-class.galgas", 209)).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 210)), GALGAS_string ("$run binding already defined in superclass"), fixItArray4  COMMA_SOURCE_FILE ("outlet-class.galgas", 210)) ;
            }
            const enumGalgasBool test_5 = enumerator_6020.current_mHandlesTableValueBinding (HERE).operator_and (var_handlesTableValueBinding_6231 COMMA_SOURCE_FILE ("outlet-class.galgas", 212)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 213)), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray6  COMMA_SOURCE_FILE ("outlet-class.galgas", 213)) ;
            }
            const enumGalgasBool test_7 = enumerator_6020.current_mHasEnabled (HERE).operator_and (var_hasEnabled_6257 COMMA_SOURCE_FILE ("outlet-class.galgas", 215)).boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 216)), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray8  COMMA_SOURCE_FILE ("outlet-class.galgas", 216)) ;
            }
            const enumGalgasBool test_9 = enumerator_6020.current_mHasHidden (HERE).operator_and (var_hasHidden_6282 COMMA_SOURCE_FILE ("outlet-class.galgas", 218)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <C_FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 219)), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray10  COMMA_SOURCE_FILE ("outlet-class.galgas", 219)) ;
            }
            const enumGalgasBool test_11 = enumerator_6020.current_mHandlesGraphicControllerBinding (HERE).operator_and (var_handlesGraphicControllerBinding_6329 COMMA_SOURCE_FILE ("outlet-class.galgas", 221)).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 222)), GALGAS_string ("$graphicControler binding already defined in superclass"), fixItArray12  COMMA_SOURCE_FILE ("outlet-class.galgas", 222)) ;
            }
            {
            ioArgument_ioOutletClassMap.setter_insertKey (enumerator_6020.current_mOutletClassName (HERE), enumerator_6020.current_mSuperClassName (HERE), enumerator_6020.current_mHasRunAction (HERE).operator_or (var_hasRunAction_6191 COMMA_SOURCE_FILE ("outlet-class.galgas", 227)), enumerator_6020.current_mHandlesTableValueBinding (HERE).operator_or (var_handlesTableValueBinding_6231 COMMA_SOURCE_FILE ("outlet-class.galgas", 228)), enumerator_6020.current_mHasEnabled (HERE).operator_or (var_hasEnabled_6257 COMMA_SOURCE_FILE ("outlet-class.galgas", 229)), enumerator_6020.current_mHasHidden (HERE).operator_or (var_hasHidden_6282 COMMA_SOURCE_FILE ("outlet-class.galgas", 230)), enumerator_6020.current_mHandlesGraphicControllerBinding (HERE).operator_or (var_handlesGraphicControllerBinding_6329 COMMA_SOURCE_FILE ("outlet-class.galgas", 231)), enumerator_6020.current_mUserDefined (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 224)) ;
            }
          }else if (kBoolFalse == test_2) {
            var_continue_5822 = GALGAS_bool (true) ;
            var_remainingList_5148.addAssign_operation (enumerator_6020.current_mUserDefined (HERE), enumerator_6020.current_mOutletClassName (HERE), enumerator_6020.current_mSuperClassName (HERE), enumerator_6020.current_mHasRunAction (HERE), enumerator_6020.current_mHasEnabled (HERE), enumerator_6020.current_mHandlesTableValueBinding (HERE), enumerator_6020.current_mHandlesGraphicControllerBinding (HERE), enumerator_6020.current_mHasHidden (HERE)  COMMA_SOURCE_FILE ("outlet-class.galgas", 236)) ;
          }
          enumerator_6020.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_outletClassDeclarationListEX enumerator_7939 (var_remainingList_5148, kENUMERATION_UP) ;
  while (enumerator_7939.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_7939.current_mSuperClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 250)), GALGAS_string ("undefined outlet class"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas", 250)) ;
    enumerator_7939.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@controllerBindingOptionList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controllerBindingOptionList : public cCollectionElement {
  public : GALGAS_controllerBindingOptionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                           const GALGAS_lstring & in_mOptionTypeName
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                                                const GALGAS_lstring & in_mOptionTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controllerBindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controllerBindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controllerBindingOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionTypeName" ":" ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controllerBindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionList * operand = (cCollectionElement_controllerBindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mOptionName,
                                                                    const GALGAS_lstring & in_mOptionTypeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionList (in_mOptionName,
                                                                 in_mOptionTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::setter_append (GALGAS_controllerBindingOptionList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionName ;
      outOperand1 = p->mObject.mProperty_mOptionTypeName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controllerBindingOptionList::cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element cEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controllerBindingOptionList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList ("controllerBindingOptionList",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList result ;
  const GALGAS_controllerBindingOptionList * p = (const GALGAS_controllerBindingOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@outletClassBindingSpecificationModelList' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletClassBindingSpecificationModelList : public cCollectionElement {
  public : GALGAS_outletClassBindingSpecificationModelList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                        const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                          const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelTypeName, in_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelTypeName, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationModelList (mObject.mProperty_mModelTypeName, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletClassBindingSpecificationModelList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelShouldBeWritableProperty" ":" ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationModelList * operand = (cCollectionElement_outletClassBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lstring & in_mModelTypeName,
                                                                                 const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (in_mModelTypeName,
                                                                              in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                           const GALGAS_bool & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::setter_append (GALGAS_outletClassBindingSpecificationModelList_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                            const GALGAS_bool inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                            GALGAS_bool & outOperand1,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
      outOperand0 = p->mObject.mProperty_mModelTypeName ;
      outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                      GALGAS_bool & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::method_first (GALGAS_lstring & outOperand0,
                                                                    GALGAS_bool & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::method_last (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassBindingSpecificationModelList::cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element cEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @outletClassBindingSpecificationModelList type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ("outletClassBindingSpecificationModelList",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList result ;
  const GALGAS_outletClassBindingSpecificationModelList * p = (const GALGAS_outletClassBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletBindingSpecificationMap::cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_outletBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_outletBindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_outletBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_outletBindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletBindingSpecificationModelList" ":" ;
  mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControllerBindingOptionList" ":" ;
  mProperty_mControllerBindingOptionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_outletBindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_outletBindingSpecificationMap * operand = (cMapElement_outletBindingSpecificationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletBindingSpecificationModelList.objectCompare (operand->mProperty_mOutletBindingSpecificationModelList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mControllerBindingOptionList.objectCompare (operand->mProperty_mControllerBindingOptionList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap & GALGAS_outletBindingSpecificationMap::operator = (const GALGAS_outletBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_outletBindingSpecificationMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_outletBindingSpecificationModelList & inArgument0,
                                                                const GALGAS_controllerBindingOptionDecoratedList & inArgument1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_outletBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@outletBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_outletBindingSpecificationModelList inArgument0,
                                                             GALGAS_controllerBindingOptionDecoratedList inArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_outletBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                             GALGAS_controllerBindingOptionDecoratedList & outArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_outletBindingSpecificationMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GALGAS_string & inKey,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mOutletBindingSpecificationModelList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GALGAS_string & inKey,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) attributes ;
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    result = p->mProperty_mControllerBindingOptionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GALGAS_outletBindingSpecificationModelList inAttributeValue,
                                                                                                 GALGAS_string inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mOutletBindingSpecificationModelList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GALGAS_controllerBindingOptionDecoratedList inAttributeValue,
                                                                                         GALGAS_string inKey,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_outletBindingSpecificationMap * p = (cMapElement_outletBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
    p->mProperty_mControllerBindingOptionList = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletBindingSpecificationMap * GALGAS_outletBindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * result = (cMapElement_outletBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletBindingSpecificationMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletBindingSpecificationMap::cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element cEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return GALGAS_outletBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList cEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList cEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @outletBindingSpecificationMap type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  const GALGAS_outletBindingSpecificationMap * p = (const GALGAS_outletBindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@outletBindingSpecificationModelList' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_outletBindingSpecificationModelList : public cCollectionElement {
  public : GALGAS_outletBindingSpecificationModelList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                   const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                                                                const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelType, in_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelType, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletBindingSpecificationModelList (mObject.mProperty_mModelType, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_outletBindingSpecificationModelList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelType" ":" ;
  mObject.mProperty_mModelType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelShouldBeWritableProperty" ":" ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingSpecificationModelList * operand = (cCollectionElement_outletBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_typeKind & in_mModelType,
                                                                            const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (in_mModelType,
                                                                         in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                      const GALGAS_bool & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::setter_append (GALGAS_outletBindingSpecificationModelList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
      outOperand0 = p->mObject.mProperty_mModelType ;
      outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::method_first (GALGAS_typeKind & outOperand0,
                                                               GALGAS_bool & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::method_last (GALGAS_typeKind & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList::getter_mModelTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletBindingSpecificationModelList::cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element cEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @outletBindingSpecificationModelList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ("outletBindingSpecificationModelList",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList result ;
  const GALGAS_outletBindingSpecificationModelList * p = (const GALGAS_outletBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@controllerBindingOptionDecoratedList' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_controllerBindingOptionDecoratedList : public cCollectionElement {
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                    const GALGAS_lstring & in_mOptionName
                                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                                                                  const GALGAS_lstring & in_mOptionName
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionType, in_mOptionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionType, inElement.mProperty_mOptionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controllerBindingOptionDecoratedList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controllerBindingOptionDecoratedList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionDecoratedList (mObject.mProperty_mOptionType, mObject.mProperty_mOptionName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_controllerBindingOptionDecoratedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionType" ":" ;
  mObject.mProperty_mOptionType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controllerBindingOptionDecoratedList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionDecoratedList * operand = (cCollectionElement_controllerBindingOptionDecoratedList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionDecoratedList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_typeKind & in_mOptionType,
                                                                             const GALGAS_lstring & in_mOptionName
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = NULL ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (in_mOptionType,
                                                                          in_mOptionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                       const GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::setter_append (GALGAS_controllerBindingOptionDecoratedList_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                        const GALGAS_lstring inOperand1,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
      outOperand0 = p->mObject.mProperty_mOptionType ;
      outOperand1 = p->mObject.mProperty_mOptionName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::method_first (GALGAS_typeKind & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::method_last (GALGAS_typeKind & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList::getter_mOptionTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controllerBindingOptionDecoratedList::cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element cEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @controllerBindingOptionDecoratedList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ("controllerBindingOptionDecoratedList",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList result ;
  const GALGAS_controllerBindingOptionDecoratedList * p = (const GALGAS_controllerBindingOptionDecoratedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@bindingOptionList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_bindingOptionList : public cCollectionElement {
  public : GALGAS_bindingOptionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                 const GALGAS_abstractDefaultValue & in_mOptionValue
                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                            const GALGAS_abstractDefaultValue & in_mOptionValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_bindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_bindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_bindingOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionValue" ":" ;
  mObject.mProperty_mOptionValue.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_bindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bindingOptionList * operand = (cCollectionElement_bindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList::GALGAS_bindingOptionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList::GALGAS_bindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingOptionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_abstractDefaultValue & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_bindingOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mOptionName,
                                                          const GALGAS_abstractDefaultValue & in_mOptionValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_bindingOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_bindingOptionList (in_mOptionName,
                                                       in_mOptionValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_abstractDefaultValue & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::setter_append (GALGAS_bindingOptionList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_abstractDefaultValue inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_abstractDefaultValue & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionName ;
      outOperand1 = p->mObject.mProperty_mOptionValue ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_abstractDefaultValue & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_abstractDefaultValue & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_abstractDefaultValue & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_abstractDefaultValue & outOperand1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::add_operation (const GALGAS_bindingOptionList & inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::plusAssign_operation (const GALGAS_bindingOptionList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_bindingOptionList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList::getter_mOptionValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
    result = p->mObject.mProperty_mOptionValue ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_bindingOptionList::cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element cEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @bindingOptionList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList ("bindingOptionList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList result ;
  const GALGAS_bindingOptionList * p = (const GALGAS_bindingOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractDefaultValue::objectCompare (const GALGAS_abstractDefaultValue & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @abstractDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @abstractDefaultValue type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_abstractDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractDefaultValue result ;
  const GALGAS_abstractDefaultValue * p = (const GALGAS_abstractDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_tableValueBinding ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_tableValueBinding_tableValueBinding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableValueBinding::method_tableValueBinding (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_tableValueBinding) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @tableValueBinding tableValueBinding invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableValueBinding::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @tableValueBinding: " << gEnumNameArrayFor_tableValueBinding [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableValueBinding::objectCompare (const GALGAS_tableValueBinding & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @tableValueBinding type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_tableValueBinding::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  const GALGAS_tableValueBinding * p = (const GALGAS_tableValueBinding *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableValueBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_graphicController_defined::cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_graphicController_defined::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_graphicController_defined::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_graphicController_defined * ptr = dynamic_cast<const cEnumAssociatedValues_graphicController_defined *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController::GALGAS_graphicController (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_graphicController::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_graphicController::constructor_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_defined ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_graphicController_defined (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphicController::method_defined (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_defined) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @graphicController defined invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_graphicController_defined * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_graphicController [3] = {
  "(not built)",
  "none",
  "defined"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_graphicController::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_graphicController::getter_isDefined (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_defined == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphicController::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @graphicController: " << gEnumNameArrayFor_graphicController [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_graphicController::objectCompare (const GALGAS_graphicController & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @graphicController type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphicController ("graphicController",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_graphicController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_graphicController::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphicController (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_graphicController::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  const GALGAS_graphicController * p = (const GALGAS_graphicController *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphicController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_runActionDescriptor_action::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_runActionDescriptor_action::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_runActionDescriptor_action * ptr = dynamic_cast<const cEnumAssociatedValues_runActionDescriptor_action *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_action ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_runActionDescriptor_action (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_runActionDescriptor::method_action (GALGAS_lstring & outAssociatedValue0,
                                                GALGAS_lstring & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_action) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @runActionDescriptor action invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_runActionDescriptor_action * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_runActionDescriptor::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @runActionDescriptor: " << gEnumNameArrayFor_runActionDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_runActionDescriptor::objectCompare (const GALGAS_runActionDescriptor & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @runActionDescriptor type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  const GALGAS_runActionDescriptor * p = (const GALGAS_runActionDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_runActionDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_binding ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_multipleBindingDescriptor_binding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingDescriptor::method_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_binding) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @multipleBindingDescriptor binding invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingDescriptor::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @multipleBindingDescriptor: " << gEnumNameArrayFor_multipleBindingDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_multipleBindingDescriptor::objectCompare (const GALGAS_multipleBindingDescriptor & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @multipleBindingDescriptor type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  const GALGAS_multipleBindingDescriptor * p = (const GALGAS_multipleBindingDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@regularBindingList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_regularBindingList : public cCollectionElement {
  public : GALGAS_regularBindingList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                  const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                  const GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                                              const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                                              const GALGAS_bindingOptionList & in_mBindingOptionList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mObservablePropertyList, inElement.mProperty_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_regularBindingList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_regularBindingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingList (mObject.mProperty_mBindingName, mObject.mProperty_mObservablePropertyList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_regularBindingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyList" ":" ;
  mObject.mProperty_mObservablePropertyList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionList" ":" ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_regularBindingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingList * operand = (cCollectionElement_regularBindingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList::GALGAS_regularBindingList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList::GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mBindingName,
                                                           const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                           const GALGAS_bindingOptionList & in_mBindingOptionList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = NULL ;
  macroMyNew (p, cCollectionElement_regularBindingList (in_mBindingName,
                                                        in_mObservablePropertyList,
                                                        in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_observablePropertyList & inOperand1,
                                                     const GALGAS_bindingOptionList & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::setter_append (GALGAS_regularBindingList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_observablePropertyList inOperand1,
                                                      const GALGAS_bindingOptionList inOperand2,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_observablePropertyList & outOperand1,
                                                      GALGAS_bindingOptionList & outOperand2,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
    if (NULL == p) {
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_observablePropertyList & outOperand1,
                                                 GALGAS_bindingOptionList & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_observablePropertyList & outOperand1,
                                                GALGAS_bindingOptionList & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_observablePropertyList & outOperand1,
                                              GALGAS_bindingOptionList & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_observablePropertyList & outOperand1,
                                             GALGAS_bindingOptionList & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::add_operation (const GALGAS_regularBindingList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_regularBindingList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_regularBindingList::getter_mObservablePropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_observablePropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mObservablePropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_regularBindingList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_bindingOptionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_regularBindingList::cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element cEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList cEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mObservablePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList cEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @regularBindingList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList ("regularBindingList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList result ;
  const GALGAS_regularBindingList * p = (const GALGAS_regularBindingList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

