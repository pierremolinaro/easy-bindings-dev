#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-2.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingComparisonAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @multipleBindingComparisonAST: " << gEnumNameArrayFor_multipleBindingComparisonAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingComparisonAST::objectCompare (const GALGAS_multipleBindingComparisonAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @multipleBindingComparisonAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  const GALGAS_multipleBindingComparisonAST * p = (const GALGAS_multipleBindingComparisonAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingComparisonAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingComparisonAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@arrayControllerBoundColumnListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerBoundColumnListAST : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                 const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                 const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                 const GALGAS_lstring & in_mSortPropertyName
                                                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerBoundColumnListAST::cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                                                            const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                            const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                                                            const GALGAS_lstring & in_mSortPropertyName
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mSortPropertyName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListAST (mObject.mAttribute_mColumnName, mObject.mAttribute_mColumnOutletTypeName, mObject.mAttribute_mColumnBindingAST, mObject.mAttribute_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mAttribute_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mAttribute_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnBindingAST" ":" ;
  mObject.mAttribute_mColumnBindingAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mAttribute_mSortPropertyName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListAST * operand = (cCollectionElement_arrayControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_columnBindingAST & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mColumnName,
                                                                          const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                          const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                          const GALGAS_lstring & in_mSortPropertyName
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (in_mColumnName,
                                                                       in_mColumnOutletTypeName,
                                                                       in_mColumnBindingAST,
                                                                       in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_columnBindingAST & inOperand2,
                                                                    const GALGAS_lstring & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_columnBindingAST inOperand2,
                                                                       const GALGAS_lstring inOperand3,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_columnBindingAST & outOperand2,
                                                                       GALGAS_lstring & outOperand3,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
      outOperand0 = p->mObject.mAttribute_mColumnName ;
      outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mAttribute_mColumnBindingAST ;
      outOperand3 = p->mObject.mAttribute_mSortPropertyName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_columnBindingAST & outOperand2,
                                                                  GALGAS_lstring & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mColumnBindingAST ;
    outOperand3 = p->mObject.mAttribute_mSortPropertyName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_columnBindingAST & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mColumnBindingAST ;
    outOperand3 = p->mObject.mAttribute_mSortPropertyName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_columnBindingAST & outOperand2,
                                                             GALGAS_lstring & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mColumnBindingAST ;
    outOperand3 = p->mObject.mAttribute_mSortPropertyName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_columnBindingAST & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mColumnBindingAST ;
    outOperand3 = p->mObject.mAttribute_mSortPropertyName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::operator_concat (const GALGAS_arrayControllerBoundColumnListAST & inOperand
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::add_operation (const GALGAS_arrayControllerBoundColumnListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST::dotAssign_operation (const GALGAS_arrayControllerBoundColumnListAST inOperand
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mAttribute_mColumnName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mAttribute_mColumnOutletTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST GALGAS_arrayControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_columnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mAttribute_mColumnBindingAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mAttribute_mSortPropertyName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerBoundColumnListAST::cEnumerator_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element cEnumerator_arrayControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST cEnumerator_arrayControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mAttribute_mColumnBindingAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mAttribute_mSortPropertyName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @arrayControllerBoundColumnListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ("arrayControllerBoundColumnListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  const GALGAS_arrayControllerBoundColumnListAST * p = (const GALGAS_arrayControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@arrayControllerAttributListAST' list                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerAttributListAST : public cCollectionElement {
  public : GALGAS_arrayControllerAttributListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerAttributListAST::cCollectionElement_arrayControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                      const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerAttributListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mAttribute_mAttributeValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerAttributListAST * operand = (cCollectionElement_arrayControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST::GALGAS_arrayControllerAttributListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_lstring & in_mAttributeName,
                                                                       const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (in_mAttributeName,
                                                                    in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_abstractDefaultValue & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_abstractDefaultValue inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_abstractDefaultValue & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mAttributeValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_abstractDefaultValue & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::modifier_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_abstractDefaultValue & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                         GALGAS_abstractDefaultValue & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::operator_concat (const GALGAS_arrayControllerAttributListAST & inOperand
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::add_operation (const GALGAS_arrayControllerAttributListAST & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result = GALGAS_arrayControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST::dotAssign_operation (const GALGAS_arrayControllerAttributListAST inOperand
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerAttributListAST * p = (cCollectionElement_arrayControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
    result = p->mObject.mAttribute_mAttributeValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerAttributListAST::cEnumerator_arrayControllerAttributListAST (const GALGAS_arrayControllerAttributListAST & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element cEnumerator_arrayControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_arrayControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue cEnumerator_arrayControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerAttributListAST * p = (const cCollectionElement_arrayControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerAttributListAST) ;
  return p->mObject.mAttribute_mAttributeValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @arrayControllerAttributListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST ("arrayControllerAttributListAST",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST result ;
  const GALGAS_arrayControllerAttributListAST * p = (const GALGAS_arrayControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_relationshipModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_relationshipModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_storedArrayModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_storedArrayModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientModel (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientModel ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_arrayControllerModelKind [4] = {
  "(not built)",
  "relationshipModel",
  "storedArrayModel",
  "transientModel"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isRelationshipModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_relationshipModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isStoredArrayModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_storedArrayModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientModel (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientModel == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerModelKind::objectCompare (const GALGAS_arrayControllerModelKind & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @arrayControllerModelKind type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  const GALGAS_arrayControllerModelKind * p = (const GALGAS_arrayControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Class for element of '@arrayControllerFilterListForGeneration' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerFilterListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerFilterListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                      const GALGAS_typeKind & in_mFilterPropertyType
                                                                      COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerFilterListForGeneration::cCollectionElement_arrayControllerFilterListForGeneration (const GALGAS_string & in_mFilterPropertyName,
                                                                                                                      const GALGAS_typeKind & in_mFilterPropertyType
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilterPropertyName, in_mFilterPropertyType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerFilterListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerFilterListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerFilterListForGeneration (mObject.mAttribute_mFilterPropertyName, mObject.mAttribute_mFilterPropertyType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerFilterListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyName" ":" ;
  mObject.mAttribute_mFilterPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFilterPropertyType" ":" ;
  mObject.mAttribute_mFilterPropertyType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerFilterListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerFilterListForGeneration * operand = (cCollectionElement_arrayControllerFilterListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration::GALGAS_arrayControllerFilterListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mFilterPropertyName,
                                                                               const GALGAS_typeKind & in_mFilterPropertyType
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerFilterListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (in_mFilterPropertyName,
                                                                            in_mFilterPropertyType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_typeKind & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                            const GALGAS_typeKind inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerFilterListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
      outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                      GALGAS_typeKind & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_typeKind & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_typeKind & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mFilterPropertyName ;
    outOperand1 = p->mObject.mAttribute_mFilterPropertyType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::operator_concat (const GALGAS_arrayControllerFilterListForGeneration & inOperand
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::add_operation (const GALGAS_arrayControllerFilterListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerFilterListForGeneration result = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration::dotAssign_operation (const GALGAS_arrayControllerFilterListForGeneration inOperand
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mAttribute_mFilterPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerFilterListForGeneration::getter_mFilterPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerFilterListForGeneration * p = (cCollectionElement_arrayControllerFilterListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
    result = p->mObject.mAttribute_mFilterPropertyType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerFilterListForGeneration::cEnumerator_arrayControllerFilterListForGeneration (const GALGAS_arrayControllerFilterListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element cEnumerator_arrayControllerFilterListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mAttribute_mFilterPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_arrayControllerFilterListForGeneration::current_mFilterPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerFilterListForGeneration * p = (const cCollectionElement_arrayControllerFilterListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerFilterListForGeneration) ;
  return p->mObject.mAttribute_mFilterPropertyType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @arrayControllerFilterListForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ("arrayControllerFilterListForGeneration",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerFilterListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration result ;
  const GALGAS_arrayControllerFilterListForGeneration * p = (const GALGAS_arrayControllerFilterListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerFilterListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerFilterListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@arrayControllerBoundColumnListForGeneration' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                           const GALGAS_string & in_mColumnOutletTypeName,
                                                                           const GALGAS_string & in_mRunAction,
                                                                           const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerBoundColumnListForGeneration::cCollectionElement_arrayControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                const GALGAS_string & in_mRunAction,
                                                                                                                                const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListForGeneration (mObject.mAttribute_mColumnName, mObject.mAttribute_mColumnOutletTypeName, mObject.mAttribute_mRunAction, mObject.mAttribute_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mAttribute_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mAttribute_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mAttribute_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * operand = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration::GALGAS_arrayControllerBoundColumnListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                    const GALGAS_string & in_mColumnName,
                                                                                    const GALGAS_string & in_mColumnOutletTypeName,
                                                                                    const GALGAS_string & in_mRunAction,
                                                                                    const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                 in_mColumnOutletTypeName,
                                                                                 in_mRunAction,
                                                                                 in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_regularBindingsGenerationList & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                                 const GALGAS_string inOperand1,
                                                                                 const GALGAS_string inOperand2,
                                                                                 const GALGAS_regularBindingsGenerationList inOperand3,
                                                                                 const GALGAS_uint inInsertionIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                                 GALGAS_string & outOperand1,
                                                                                 GALGAS_string & outOperand2,
                                                                                 GALGAS_regularBindingsGenerationList & outOperand3,
                                                                                 const GALGAS_uint inRemoveIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mColumnName ;
      outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mAttribute_mRunAction ;
      outOperand3 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                            GALGAS_string & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            GALGAS_regularBindingsGenerationList & outOperand3,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mRunAction ;
    outOperand3 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           GALGAS_regularBindingsGenerationList & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mRunAction ;
    outOperand3 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       GALGAS_regularBindingsGenerationList & outOperand3,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mRunAction ;
    outOperand3 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                      GALGAS_string & outOperand1,
                                                                      GALGAS_string & outOperand2,
                                                                      GALGAS_regularBindingsGenerationList & outOperand3,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mAttribute_mRunAction ;
    outOperand3 = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::operator_concat (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::add_operation (const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand,
                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListForGeneration result = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration::dotAssign_operation (const GALGAS_arrayControllerBoundColumnListForGeneration inOperand
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mColumnName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mColumnOutletTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mRunAction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_arrayControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       C_Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (cCollectionElement_arrayControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
    result = p->mObject.mAttribute_mRegularBindingsGenerationList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerBoundColumnListForGeneration::cEnumerator_arrayControllerBoundColumnListForGeneration (const GALGAS_arrayControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element cEnumerator_arrayControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList cEnumerator_arrayControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListForGeneration * p = (const cCollectionElement_arrayControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListForGeneration) ;
  return p->mObject.mAttribute_mRegularBindingsGenerationList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @arrayControllerBoundColumnListForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ("arrayControllerBoundColumnListForGeneration",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration result ;
  const GALGAS_arrayControllerBoundColumnListForGeneration * p = (const GALGAS_arrayControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Class for element of '@arrayControllerSortedColumnListForGeneration' list                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_arrayControllerSortedColumnListForGeneration : public cCollectionElement {
  public : GALGAS_arrayControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                            const GALGAS_typeKind & in_mSortPropertyType,
                                                                            const GALGAS_string & in_mObservablePropertyForSorting
                                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_arrayControllerSortedColumnListForGeneration::cCollectionElement_arrayControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                  const GALGAS_typeKind & in_mSortPropertyType,
                                                                                                                                  const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyType, in_mObservablePropertyForSorting) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_arrayControllerSortedColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_arrayControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerSortedColumnListForGeneration (mObject.mAttribute_mColumnName, mObject.mAttribute_mSortPropertyType, mObject.mAttribute_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_arrayControllerSortedColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mAttribute_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyType" ":" ;
  mObject.mAttribute_mSortPropertyType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyForSorting" ":" ;
  mObject.mAttribute_mObservablePropertyForSorting.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_arrayControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * operand = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration::GALGAS_arrayControllerSortedColumnListForGeneration (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_typeKind & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mColumnName,
                                                                                     const GALGAS_typeKind & in_mSortPropertyType,
                                                                                     const GALGAS_string & in_mObservablePropertyForSorting
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                  in_mSortPropertyType,
                                                                                  in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_typeKind & inOperand1,
                                                                               const GALGAS_string & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                                                  const GALGAS_typeKind inOperand1,
                                                                                  const GALGAS_string inOperand2,
                                                                                  const GALGAS_uint inInsertionIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                                                  GALGAS_typeKind & outOperand1,
                                                                                  GALGAS_string & outOperand2,
                                                                                  const GALGAS_uint inRemoveIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
      outOperand0 = p->mObject.mAttribute_mColumnName ;
      outOperand1 = p->mObject.mAttribute_mSortPropertyType ;
      outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::modifier_popFirst (GALGAS_string & outOperand0,
                                                                             GALGAS_typeKind & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mSortPropertyType ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::modifier_popLast (GALGAS_string & outOperand0,
                                                                            GALGAS_typeKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mSortPropertyType ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_typeKind & outOperand1,
                                                                        GALGAS_string & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mSortPropertyType ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_typeKind & outOperand1,
                                                                       GALGAS_string & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mAttribute_mColumnName ;
    outOperand1 = p->mObject.mAttribute_mSortPropertyType ;
    outOperand2 = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::operator_concat (const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::add_operation (const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerSortedColumnListForGeneration result = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration::dotAssign_operation (const GALGAS_arrayControllerSortedColumnListForGeneration inOperand
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mAttribute_mColumnName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerSortedColumnListForGeneration::getter_mSortPropertyTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mAttribute_mSortPropertyType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (cCollectionElement_arrayControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
    result = p->mObject.mAttribute_mObservablePropertyForSorting ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_arrayControllerSortedColumnListForGeneration::cEnumerator_arrayControllerSortedColumnListForGeneration (const GALGAS_arrayControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element cEnumerator_arrayControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_arrayControllerSortedColumnListForGeneration::current_mSortPropertyType (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mAttribute_mSortPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_arrayControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerSortedColumnListForGeneration * p = (const cCollectionElement_arrayControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerSortedColumnListForGeneration) ;
  return p->mObject.mAttribute_mObservablePropertyForSorting ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @arrayControllerSortedColumnListForGeneration type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ("arrayControllerSortedColumnListForGeneration",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerSortedColumnListForGeneration result ;
  const GALGAS_arrayControllerSortedColumnListForGeneration * p = (const GALGAS_arrayControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@defaultValueList' list                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_defaultValueList : public cCollectionElement {
  public : GALGAS_defaultValueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_defaultValueList::cCollectionElement_defaultValueList (const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDefaultValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_defaultValueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_defaultValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_defaultValueList (mObject.mAttribute_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_defaultValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDefaultValue" ":" ;
  mObject.mAttribute_mDefaultValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_defaultValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_defaultValueList * operand = (cCollectionElement_defaultValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_defaultValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList::GALGAS_defaultValueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList::GALGAS_defaultValueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::constructor_listWithValue (const GALGAS_abstractDefaultValue & inOperand0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_defaultValueList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_abstractDefaultValue & in_mDefaultValue
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_defaultValueList * p = NULL ;
  macroMyNew (p, cCollectionElement_defaultValueList (in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::addAssign_operation (const GALGAS_abstractDefaultValue & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_insertAtIndex (const GALGAS_abstractDefaultValue inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_defaultValueList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_removeAtIndex (GALGAS_abstractDefaultValue & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
      outOperand0 = p->mObject.mAttribute_mDefaultValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_popFirst (GALGAS_abstractDefaultValue & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::modifier_popLast (GALGAS_abstractDefaultValue & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::method_first (GALGAS_abstractDefaultValue & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::method_last (GALGAS_abstractDefaultValue & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    outOperand0 = p->mObject.mAttribute_mDefaultValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::operator_concat (const GALGAS_defaultValueList & inOperand
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::add_operation (const GALGAS_defaultValueList & inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_defaultValueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_defaultValueList result = GALGAS_defaultValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList::dotAssign_operation (const GALGAS_defaultValueList inOperand
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList::getter_mDefaultValueAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_defaultValueList * p = (cCollectionElement_defaultValueList *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
    result = p->mObject.mAttribute_mDefaultValue ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_defaultValueList::cEnumerator_defaultValueList (const GALGAS_defaultValueList & inEnumeratedObject,
                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element cEnumerator_defaultValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue cEnumerator_defaultValueList::current_mDefaultValue (LOCATION_ARGS) const {
  const cCollectionElement_defaultValueList * p = (const cCollectionElement_defaultValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_defaultValueList) ;
  return p->mObject.mAttribute_mDefaultValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @defaultValueList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList ("defaultValueList",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList GALGAS_defaultValueList::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList result ;
  const GALGAS_defaultValueList * p = (const GALGAS_defaultValueList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_typeKind & in_mTypeKind,
                                                        const GALGAS_actionMap & in_mActionMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mTypeKind (in_mTypeKind),
mAttribute_mActionMap (in_mActionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTypeKind.isValid () && mAttribute_mActionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mAttribute_lkey, mAttribute_mTypeKind, mAttribute_mActionMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_unifiedTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeKind" ":" ;
  mAttribute_mTypeKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mAttribute_mActionMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeKind.objectCompare (operand->mAttribute_mTypeKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mActionMap.objectCompare (operand->mAttribute_mActionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_uniqueMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_uniqueMap (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_uniqueMap *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton states                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton state names                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton actions                                                    *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton action names                                                 *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton transitions                                                  *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//  Map automaton final state issues                                           *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_insertKey (GALGAS_lstring inKey,
                                                GALGAS_typeKind inArgument0,
                                                GALGAS_actionMap inArgument1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = NULL ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' type is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes,
                        inCompiler,
                        0,
                        NULL,
                        kInsertErrorMessage,
                        kShadowErrorMessage
                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_unifiedTypeMap_searchKey = "the '%K' type is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_typeKind & outArgument0,
                                              GALGAS_actionMap & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_unifiedTypeMap_searchKey
                                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mAttribute_mTypeKind ;
    outArgument1 = p->mAttribute_mActionMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap::getter_mTypeKindForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_unifiedTypeMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mActionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMTypeKindForKey (GALGAS_typeKind inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mTypeKind = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap::modifier_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mAttribute_mActionMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_unifiedTypeMap::current_mTypeKind (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mTypeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap cEnumerator_unifiedTypeMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mAttribute_mActionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @unifiedTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy::GALGAS_unifiedTypeMap_2D_proxy (void) :
AC_GALGAS_uniqueMapProxy () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_null (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.makeNullProxy (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (GALGAS_unifiedTypeMap & ioMap,
                                                             GALGAS_lstring inKey,
                                                             GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                             COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (GALGAS_unifiedTypeMap & ioMap,
                                                                       GALGAS_string inKey,
                                                                       GALGAS_unifiedTypeMap_2D_proxy & outProxy
                                                                       COMMA_LOCATION_ARGS) {
  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_unifiedTypeMap_2D_proxy::getter_mTypeKind (C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mTypeKind" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mTypeKind;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_unifiedTypeMap_2D_proxy::getter_mActionMap (C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) getAttributeListPointer (inCompiler, "mActionMap" COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mAttribute_mActionMap;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (const GALGAS_unifiedTypeMap & inMap,
                                                                                      const GALGAS_lstring & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_unifiedTypeMap_searchKey, inCompiler COMMA_THERE) ;
  return result ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @unifiedTypeMap-proxy type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ("unifiedTypeMap-proxy",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap_2D_proxy::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeMap_2D_proxy::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap_2D_proxy (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeMap_2D_proxy::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  const GALGAS_unifiedTypeMap_2D_proxy * p = (const GALGAS_unifiedTypeMap_2D_proxy *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeMap_2D_proxy *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap-proxy", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@typeKindList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_typeKindList : public cCollectionElement {
  public : GALGAS_typeKindList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_typeKindList::cCollectionElement_typeKindList (const GALGAS_typeKind & in_mType
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_typeKindList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_typeKindList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_typeKindList (mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_typeKindList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_typeKindList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_typeKindList * operand = (cCollectionElement_typeKindList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_typeKindList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList::GALGAS_typeKindList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList::GALGAS_typeKindList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::constructor_listWithValue (const GALGAS_typeKind & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_typeKindList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_typeKind & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_typeKindList * p = NULL ;
  macroMyNew (p, cCollectionElement_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::addAssign_operation (const GALGAS_typeKind & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                  const GALGAS_uint inInsertionIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_typeKindList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                  const GALGAS_uint inRemoveIndex,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_typeKindList) ;
      outOperand0 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_popFirst (GALGAS_typeKind & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::modifier_popLast (GALGAS_typeKind & outOperand0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::method_first (GALGAS_typeKind & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::method_last (GALGAS_typeKind & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    outOperand0 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::operator_concat (const GALGAS_typeKindList & inOperand
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::add_operation (const GALGAS_typeKindList & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKindList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_typeKindList result = GALGAS_typeKindList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList::dotAssign_operation (const GALGAS_typeKindList inOperand
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKindList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_typeKindList * p = (cCollectionElement_typeKindList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_typeKindList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_typeKindList::cEnumerator_typeKindList (const GALGAS_typeKindList & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element cEnumerator_typeKindList::current (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind cEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_typeKindList * p = (const cCollectionElement_typeKindList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_typeKindList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @typeKindList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList GALGAS_typeKindList::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList result ;
  const GALGAS_typeKindList * p = (const GALGAS_typeKindList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Class for element of '@secondaryDeclarationListWorkingList' list                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_secondaryDeclarationListWorkingList : public cCollectionElement {
  public : GALGAS_secondaryDeclarationListWorkingList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                   const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                   COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_secondaryDeclarationListWorkingList::cCollectionElement_secondaryDeclarationListWorkingList (const GALGAS_astDeclaration & in_mDeclaration,
                                                                                                                const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration, in_mSecondaryPropertyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_secondaryDeclarationListWorkingList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_secondaryDeclarationListWorkingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_secondaryDeclarationListWorkingList (mObject.mAttribute_mDeclaration, mObject.mAttribute_mSecondaryPropertyList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_secondaryDeclarationListWorkingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mAttribute_mDeclaration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSecondaryPropertyList" ":" ;
  mObject.mAttribute_mSecondaryPropertyList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_secondaryDeclarationListWorkingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_secondaryDeclarationListWorkingList * operand = (cCollectionElement_secondaryDeclarationListWorkingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList::GALGAS_secondaryDeclarationListWorkingList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::constructor_listWithValue (const GALGAS_astDeclaration & inOperand0,
                                                                                                                  const GALGAS_secondaryPropertyList & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_secondaryDeclarationListWorkingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_astDeclaration & in_mDeclaration,
                                                                            const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_secondaryDeclarationListWorkingList * p = NULL ;
  macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (in_mDeclaration,
                                                                         in_mSecondaryPropertyList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::addAssign_operation (const GALGAS_astDeclaration & inOperand0,
                                                                      const GALGAS_secondaryPropertyList & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_insertAtIndex (const GALGAS_astDeclaration inOperand0,
                                                                         const GALGAS_secondaryPropertyList inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_secondaryDeclarationListWorkingList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_removeAtIndex (GALGAS_astDeclaration & outOperand0,
                                                                         GALGAS_secondaryPropertyList & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
      outOperand0 = p->mObject.mAttribute_mDeclaration ;
      outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_popFirst (GALGAS_astDeclaration & outOperand0,
                                                                    GALGAS_secondaryPropertyList & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::modifier_popLast (GALGAS_astDeclaration & outOperand0,
                                                                   GALGAS_secondaryPropertyList & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::method_first (GALGAS_astDeclaration & outOperand0,
                                                               GALGAS_secondaryPropertyList & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::method_last (GALGAS_astDeclaration & outOperand0,
                                                              GALGAS_secondaryPropertyList & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    outOperand0 = p->mObject.mAttribute_mDeclaration ;
    outOperand1 = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::operator_concat (const GALGAS_secondaryDeclarationListWorkingList & inOperand
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::add_operation (const GALGAS_secondaryDeclarationListWorkingList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_secondaryDeclarationListWorkingList result = GALGAS_secondaryDeclarationListWorkingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList::dotAssign_operation (const GALGAS_secondaryDeclarationListWorkingList inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_secondaryDeclarationListWorkingList::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_astDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mAttribute_mDeclaration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_secondaryDeclarationListWorkingList::getter_mSecondaryPropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_secondaryDeclarationListWorkingList * p = (cCollectionElement_secondaryDeclarationListWorkingList *) attributes.ptr () ;
  GALGAS_secondaryPropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
    result = p->mObject.mAttribute_mSecondaryPropertyList ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_secondaryDeclarationListWorkingList::cEnumerator_secondaryDeclarationListWorkingList (const GALGAS_secondaryDeclarationListWorkingList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element cEnumerator_secondaryDeclarationListWorkingList::current (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration cEnumerator_secondaryDeclarationListWorkingList::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mAttribute_mDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList cEnumerator_secondaryDeclarationListWorkingList::current_mSecondaryPropertyList (LOCATION_ARGS) const {
  const cCollectionElement_secondaryDeclarationListWorkingList * p = (const cCollectionElement_secondaryDeclarationListWorkingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_secondaryDeclarationListWorkingList) ;
  return p->mObject.mAttribute_mSecondaryPropertyList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @secondaryDeclarationListWorkingList type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ("secondaryDeclarationListWorkingList",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_secondaryDeclarationListWorkingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_secondaryDeclarationListWorkingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryDeclarationListWorkingList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList GALGAS_secondaryDeclarationListWorkingList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList result ;
  const GALGAS_secondaryDeclarationListWorkingList * p = (const GALGAS_secondaryDeclarationListWorkingList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryDeclarationListWorkingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryDeclarationListWorkingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@XCodeGroupList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public : GALGAS_XCodeGroupList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                              const GALGAS_string & in_mGroupName,
                                              const GALGAS_string & in_mGroupPath,
                                              const GALGAS_stringlist & in_mChildrenRefs
                                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                                                      const GALGAS_string & in_mGroupName,
                                                                      const GALGAS_string & in_mGroupPath,
                                                                      const GALGAS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mAttribute_mGroupReference, mObject.mAttribute_mGroupName, mObject.mAttribute_mGroupPath, mObject.mAttribute_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mAttribute_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mAttribute_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mAttribute_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mAttribute_mChildrenRefs.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeGroupList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeGroupList * operand = (cCollectionElement_XCodeGroupList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeGroupList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                        const GALGAS_string & inOperand1,
                                                                        const GALGAS_string & inOperand2,
                                                                        const GALGAS_stringlist & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                       const GALGAS_string & in_mGroupReference,
                                                       const GALGAS_string & in_mGroupName,
                                                       const GALGAS_string & in_mGroupPath,
                                                       const GALGAS_stringlist & in_mChildrenRefs
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = NULL ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::addAssign_operation (const GALGAS_string & inOperand0,
                                                 const GALGAS_string & inOperand1,
                                                 const GALGAS_string & inOperand2,
                                                 const GALGAS_stringlist & inOperand3
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                    const GALGAS_string inOperand1,
                                                    const GALGAS_string inOperand2,
                                                    const GALGAS_stringlist inOperand3,
                                                    const GALGAS_uint inInsertionIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                    GALGAS_string & outOperand1,
                                                    GALGAS_string & outOperand2,
                                                    GALGAS_stringlist & outOperand3,
                                                    const GALGAS_uint inRemoveIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
      outOperand0 = p->mObject.mAttribute_mGroupReference ;
      outOperand1 = p->mObject.mAttribute_mGroupName ;
      outOperand2 = p->mObject.mAttribute_mGroupPath ;
      outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_popFirst (GALGAS_string & outOperand0,
                                               GALGAS_string & outOperand1,
                                               GALGAS_string & outOperand2,
                                               GALGAS_stringlist & outOperand3,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::modifier_popLast (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              GALGAS_stringlist & outOperand3,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::method_first (GALGAS_string & outOperand0,
                                          GALGAS_string & outOperand1,
                                          GALGAS_string & outOperand2,
                                          GALGAS_stringlist & outOperand3,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::method_last (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         GALGAS_stringlist & outOperand3,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mAttribute_mGroupReference ;
    outOperand1 = p->mObject.mAttribute_mGroupName ;
    outOperand2 = p->mObject.mAttribute_mGroupPath ;
    outOperand3 = p->mObject.mAttribute_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::operator_concat (const GALGAS_XCodeGroupList & inOperand
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::add_operation (const GALGAS_XCodeGroupList & inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::dotAssign_operation (const GALGAS_XCodeGroupList inOperand
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList::getter_mGroupPathAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mGroupPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mAttribute_mChildrenRefs ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element cEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mAttribute_mChildrenRefs ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @XCodeGroupList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList result ;
  const GALGAS_XCodeGroupList * p = (const GALGAS_XCodeGroupList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@XCodeToolTargetList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public : GALGAS_XCodeToolTargetList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_XCodeToolTargetList (const GALGAS_string & in_mTargetRef,
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

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mAttribute_mTargetRef, mObject.mAttribute_mTargetName, mObject.mAttribute_mProductFileReference, mObject.mAttribute_mProductFileName, mObject.mAttribute_mBuildPhaseRefList, mObject.mAttribute_mBuildPhaseRef, mObject.mAttribute_mBuildConfigurationListRef, mObject.mAttribute_mBuildConfigurationSettingList, mObject.mAttribute_mBuildConfigurationRef, mObject.mAttribute_mFrameworksFileRefList, mObject.mAttribute_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mAttribute_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mAttribute_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mAttribute_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mAttribute_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mAttribute_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mAttribute_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mAttribute_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mAttribute_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeToolTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeToolTargetList * operand = (cCollectionElement_XCodeToolTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeToolTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  cCollectionElement_XCodeToolTargetList * p = NULL ;
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

//---------------------------------------------------------------------------------------------------------------------*

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_insertAtIndex (const GALGAS_string inOperand0,
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
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_removeAtIndex (GALGAS_string & outOperand0,
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
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
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
      macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
      outOperand0 = p->mObject.mAttribute_mTargetRef ;
      outOperand1 = p->mObject.mAttribute_mTargetName ;
      outOperand2 = p->mObject.mAttribute_mProductFileReference ;
      outOperand3 = p->mObject.mAttribute_mProductFileName ;
      outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
      outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_popFirst (GALGAS_string & outOperand0,
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
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::modifier_popLast (GALGAS_string & outOperand0,
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
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::operator_concat (const GALGAS_XCodeToolTargetList & inOperand
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::add_operation (const GALGAS_XCodeToolTargetList & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::dotAssign_operation (const GALGAS_XCodeToolTargetList inOperand
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element cEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeToolTargetList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList result ;
  const GALGAS_XCodeToolTargetList * p = (const GALGAS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@XCodeAppTargetList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public : GALGAS_XCodeAppTargetList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_string & in_mTargetRef,
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

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mAttribute_mTargetRef, mObject.mAttribute_mTargetName, mObject.mAttribute_mProductFileReference, mObject.mAttribute_mProductFileName, mObject.mAttribute_mBuildPhaseRefList, mObject.mAttribute_mBuildPhaseRef, mObject.mAttribute_mBuildConfigurationListRef, mObject.mAttribute_mBuildConfigurationSettingList, mObject.mAttribute_mBuildConfigurationRef, mObject.mAttribute_mFrameworksFileRefList, mObject.mAttribute_mFrameworkBuildPhaseRef, mObject.mAttribute_mDependentTargets, mObject.mAttribute_mResourceBuildRef, mObject.mAttribute_mResourceFileBuildRefs, mObject.mAttribute_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mAttribute_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mAttribute_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mAttribute_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mAttribute_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mAttribute_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mAttribute_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mAttribute_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mAttribute_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mAttribute_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mAttribute_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mAttribute_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInfoPListFile" ":" ;
  mObject.mAttribute_mInfoPListFile.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_XCodeAppTargetList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_XCodeAppTargetList * operand = (cCollectionElement_XCodeAppTargetList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_XCodeAppTargetList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
  cCollectionElement_XCodeAppTargetList * p = NULL ;
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

//---------------------------------------------------------------------------------------------------------------------*

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_insertAtIndex (const GALGAS_string inOperand0,
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
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_removeAtIndex (GALGAS_string & outOperand0,
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
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
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
      outOperand11.drop () ;
      outOperand12.drop () ;
      outOperand13.drop () ;
      outOperand14.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
      outOperand0 = p->mObject.mAttribute_mTargetRef ;
      outOperand1 = p->mObject.mAttribute_mTargetName ;
      outOperand2 = p->mObject.mAttribute_mProductFileReference ;
      outOperand3 = p->mObject.mAttribute_mProductFileName ;
      outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
      outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
      outOperand11 = p->mObject.mAttribute_mDependentTargets ;
      outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
      outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
      outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_popFirst (GALGAS_string & outOperand0,
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
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
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
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::modifier_popLast (GALGAS_string & outOperand0,
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
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
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
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
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
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
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
    outOperand11.drop () ;
    outOperand12.drop () ;
    outOperand13.drop () ;
    outOperand14.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mAttribute_mTargetRef ;
    outOperand1 = p->mObject.mAttribute_mTargetName ;
    outOperand2 = p->mObject.mAttribute_mProductFileReference ;
    outOperand3 = p->mObject.mAttribute_mProductFileName ;
    outOperand4 = p->mObject.mAttribute_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mAttribute_mBuildPhaseRef ;
    outOperand6 = p->mObject.mAttribute_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mAttribute_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mAttribute_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mAttribute_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mAttribute_mDependentTargets ;
    outOperand12 = p->mObject.mAttribute_mResourceBuildRef ;
    outOperand13 = p->mObject.mAttribute_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mAttribute_mInfoPListFile ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::operator_concat (const GALGAS_XCodeAppTargetList & inOperand
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::add_operation (const GALGAS_XCodeAppTargetList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::dotAssign_operation (const GALGAS_XCodeAppTargetList inOperand
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mDependentTargets ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mResourceBuildRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mResourceFileBuildRefs ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mAttribute_mInfoPListFile ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element cEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mAttribute_mInfoPListFile ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @XCodeAppTargetList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList result ;
  const GALGAS_XCodeAppTargetList * p = (const GALGAS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@BuildFileList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_BuildFileList : public cCollectionElement {
  public : GALGAS_BuildFileList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
                                             COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mAttribute_mFileReference, mObject.mAttribute_mFileName, mObject.mAttribute_mBuildReference COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mAttribute_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mAttribute_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mAttribute_mBuildReference.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = NULL ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_string inOperand1,
                                                   const GALGAS_string inOperand2,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   GALGAS_string & outOperand2,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mAttribute_mFileReference ;
      outOperand1 = p->mObject.mAttribute_mFileName ;
      outOperand2 = p->mObject.mAttribute_mBuildReference ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_popFirst (GALGAS_string & outOperand0,
                                              GALGAS_string & outOperand1,
                                              GALGAS_string & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::modifier_popLast (GALGAS_string & outOperand0,
                                             GALGAS_string & outOperand1,
                                             GALGAS_string & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::operator_concat (const GALGAS_BuildFileList & inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::dotAssign_operation (const GALGAS_BuildFileList inOperand
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mBuildReference ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mBuildReference ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @BuildFileList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@mainXibLineDescriptorList' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public : GALGAS_mainXibLineDescriptorList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mAttribute_mElement COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mAttribute_mElement.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_listWithValue (const GALGAS_mainXibElement & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_removeAtIndex (GALGAS_mainXibElement & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
      outOperand0 = p->mObject.mAttribute_mElement ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_popFirst (GALGAS_mainXibElement & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::modifier_popLast (GALGAS_mainXibElement & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::method_first (GALGAS_mainXibElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::method_last (GALGAS_mainXibElement & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mAttribute_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::operator_concat (const GALGAS_mainXibLineDescriptorList & inOperand
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::add_operation (const GALGAS_mainXibLineDescriptorList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::dotAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mAttribute_mElement ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mAttribute_mElement ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @mainXibLineDescriptorList type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList result ;
  const GALGAS_mainXibLineDescriptorList * p = (const GALGAS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       N O N    T E R M I N A L    N A M E S                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_easyBindings_grammar [79] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<toMany_relationship>",// Index 5
  "<toOne_relationship>",// Index 6
  "<entity_declaration>",// Index 7
  "<document_declaration>",// Index 8
  "<preferences_declaration>",// Index 9
  "<outlet_class_declaration>",// Index 10
  "<binding_specification>",// Index 11
  "<outlet_declaration>",// Index 12
  "<observable_property>",// Index 13
  "<transient_declaration>",// Index 14
  "<simple_stored_declaration>",// Index 15
  "<stored_array_declaration>",// Index 16
  "<action_declaration>",// Index 17
  "<booleanMultipleBindingExpression>",// Index 18
  "<booleanMultipleBindingComparison>",// Index 19
  "<booleanMultipleBindingTerm>",// Index 20
  "<booleanMultipleBindingOperand>",// Index 21
  "<binding_option_list>",// Index 22
  "<array_controller_declaration>",// Index 23
  "<column_bindings>",// Index 24
  "<explicit_value>",// Index 25
  "<xcode_project>",// Index 26
  "<main_xib>",// Index 27
  "<main_xib_line>",// Index 28
  "<select_easyBindings_5F_syntax_0>",// Index 29
  "<select_easyBindings_5F_syntax_1>",// Index 30
  "<select_easyBindings_5F_syntax_2>",// Index 31
  "<select_easyBindings_5F_syntax_3>",// Index 32
  "<select_easyBindings_5F_syntax_4>",// Index 33
  "<select_easyBindings_5F_syntax_5>",// Index 34
  "<select_easyBindings_5F_syntax_6>",// Index 35
  "<select_easyBindings_5F_syntax_7>",// Index 36
  "<select_easyBindings_5F_syntax_8>",// Index 37
  "<select_easyBindings_5F_syntax_9>",// Index 38
  "<select_easyBindings_5F_syntax_10>",// Index 39
  "<select_easyBindings_5F_syntax_11>",// Index 40
  "<select_easyBindings_5F_syntax_12>",// Index 41
  "<select_easyBindings_5F_syntax_13>",// Index 42
  "<select_easyBindings_5F_syntax_14>",// Index 43
  "<select_easyBindings_5F_syntax_15>",// Index 44
  "<select_easyBindings_5F_syntax_16>",// Index 45
  "<select_easyBindings_5F_syntax_17>",// Index 46
  "<select_easyBindings_5F_syntax_18>",// Index 47
  "<select_easyBindings_5F_syntax_19>",// Index 48
  "<select_easyBindings_5F_syntax_20>",// Index 49
  "<select_easyBindings_5F_syntax_21>",// Index 50
  "<select_easyBindings_5F_syntax_22>",// Index 51
  "<select_easyBindings_5F_syntax_23>",// Index 52
  "<select_easyBindings_5F_syntax_24>",// Index 53
  "<select_easyBindings_5F_syntax_25>",// Index 54
  "<select_easyBindings_5F_syntax_26>",// Index 55
  "<select_easyBindings_5F_syntax_27>",// Index 56
  "<select_easyBindings_5F_syntax_28>",// Index 57
  "<select_easyBindings_5F_syntax_29>",// Index 58
  "<select_easyBindings_5F_syntax_30>",// Index 59
  "<select_easyBindings_5F_syntax_31>",// Index 60
  "<select_easyBindings_5F_syntax_32>",// Index 61
  "<select_easyBindings_5F_syntax_33>",// Index 62
  "<select_easyBindings_5F_syntax_34>",// Index 63
  "<select_easyBindings_5F_syntax_35>",// Index 64
  "<select_easyBindings_5F_syntax_36>",// Index 65
  "<select_easyBindings_5F_syntax_37>",// Index 66
  "<select_easyBindings_5F_syntax_38>",// Index 67
  "<select_easyBindings_5F_syntax_39>",// Index 68
  "<select_easyBindings_5F_syntax_40>",// Index 69
  "<select_easyBindings_5F_syntax_41>",// Index 70
  "<select_easyBindings_5F_syntax_42>",// Index 71
  "<select_easyBindings_5F_syntax_43>",// Index 72
  "<select_easyBindings_5F_syntax_44>",// Index 73
  "<select_easyBindings_5F_syntax_45>",// Index 74
  "<select_easyBindings_5F_syntax_46>",// Index 75
  "<select_easyBindings_5F_syntax_47>",// Index 76
  "<select_easyBindings_5F_syntax_48>",// Index 77
  "<>"// Index 78
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_easyBindings_grammar [] = {
// State S0 (index = 0)
  C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S1 (index = 27)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (24)
, END
// State S2 (index = 30)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (25)
, END
// State S3 (index = 33)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (26)
, END
// State S4 (index = 36)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (27)
, END
// State S5 (index = 39)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S6 (index = 42)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S7 (index = 45)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (30)
, END
// State S8 (index = 48)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (31)
, END
// State S9 (index = 51)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (32)
, END
// State S10 (index = 54)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (33)
, END
// State S11 (index = 57)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (34)
, END
// State S12 (index = 60)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (35)
, END
// State S13 (index = 63)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S14 (index = 66)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S15 (index = 93)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S16 (index = 120)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S17 (index = 147)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S18 (index = 174)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S19 (index = 201)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S20 (index = 228)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S21 (index = 255)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S22 (index = 282)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S23 (index = 309)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S24 (index = 312)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (45)
, END
// State S25 (index = 315)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (46)
, END
// State S26 (index = 318)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (47)
, END
// State S27 (index = 321)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (48)
, END
// State S28 (index = 324)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (49)
, END
// State S29 (index = 327)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (61)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (50)
, END
// State S30 (index = 332)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (52)
, END
// State S31 (index = 335)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S32 (index = 358)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (72)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (73)
, END
// State S33 (index = 367)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (75)
, END
// State S34 (index = 370)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (76)
, END
// State S35 (index = 373)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S36 (index = 380)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S37 (index = 383)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S38 (index = 386)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S39 (index = 389)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S40 (index = 392)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S41 (index = 395)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S42 (index = 398)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S43 (index = 401)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (45)
, END
// State S44 (index = 404)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (46)
, END
// State S45 (index = 407)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S46 (index = 434)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (82)
, END
// State S47 (index = 437)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S48 (index = 452)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (90)
, END
// State S49 (index = 455)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (91)
, END
// State S50 (index = 458)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (92)
, END
// State S51 (index = 461)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (93)
, END
// State S52 (index = 464)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (94)
, END
// State S53 (index = 467)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (95)
, END
// State S54 (index = 470)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (96)
, END
// State S55 (index = 475)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (131)
, END
// State S56 (index = 478)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (98)
, END
// State S57 (index = 481)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (99)
, END
// State S58 (index = 484)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (100)
, END
// State S59 (index = 487)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (101)
, END
// State S60 (index = 490)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (102)
, END
// State S61 (index = 493)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (103)
, END
// State S62 (index = 496)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S63 (index = 519)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S64 (index = 542)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S65 (index = 565)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S66 (index = 588)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S67 (index = 611)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S68 (index = 634)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S69 (index = 657)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (111)
, END
// State S70 (index = 660)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (112)
, END
// State S71 (index = 663)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (72)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (73)
, END
// State S72 (index = 672)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (72)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (73)
, END
// State S73 (index = 681)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (72)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (73)
, END
// State S74 (index = 690)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (116)
, END
// State S75 (index = 693)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (117)
, END
// State S76 (index = 696)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (33)
, END
// State S77 (index = 723)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (177)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S78 (index = 728)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (118)
, END
// State S79 (index = 731)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (120)
, END
// State S80 (index = 736)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, END
// State S81 (index = 741)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S82 (index = 744)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (125)
, END
// State S83 (index = 747)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (126)
, END
// State S84 (index = 750)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S85 (index = 765)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S86 (index = 780)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S87 (index = 795)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S88 (index = 810)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (83)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S89 (index = 825)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (132)
, END
// State S90 (index = 828)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (133)
, END
// State S91 (index = 831)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S92 (index = 836)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (62)
, END
// State S93 (index = 839)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S94 (index = 854)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (145)
, END
// State S95 (index = 857)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (146)
, END
// State S96 (index = 860)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (127)
, END
// State S97 (index = 863)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (147)
, END
// State S98 (index = 866)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (148)
, END
// State S99 (index = 869)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (149)
, END
// State S100 (index = 872)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (150)
, END
// State S101 (index = 875)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (151)
, END
// State S102 (index = 878)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (152)
, END
// State S103 (index = 881)
, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift, SHIFT (153)
, END
// State S104 (index = 884)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, END
// State S105 (index = 887)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S106 (index = 890)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, END
// State S107 (index = 893)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S108 (index = 896)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S109 (index = 899)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S110 (index = 902)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S111 (index = 905)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (11)
, END
// State S112 (index = 932)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_validates, SHIFT (154)
, END
// State S113 (index = 937)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, END
// State S114 (index = 940)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, END
// State S115 (index = 943)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, END
// State S116 (index = 946)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (12)
, END
// State S117 (index = 973)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (156)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (157)
, END
// State S118 (index = 978)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (176)
, END
// State S119 (index = 983)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (182)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (182)
, END
// State S120 (index = 988)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (159)
, END
// State S121 (index = 991)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (160)
, END
// State S122 (index = 994)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (179)
, END
// State S123 (index = 999)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S124 (index = 1006)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (164)
, END
// State S125 (index = 1009)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (47)
, END
// State S126 (index = 1014)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (167)
, END
// State S127 (index = 1017)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, END
// State S128 (index = 1020)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (58)
, END
// State S129 (index = 1023)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (57)
, END
// State S130 (index = 1026)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, END
// State S131 (index = 1029)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (60)
, END
// State S132 (index = 1032)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S133 (index = 1059)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S134 (index = 1086)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (168)
, END
// State S135 (index = 1089)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (169)
, END
// State S136 (index = 1092)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, END
// State S137 (index = 1097)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (170)
, END
// State S138 (index = 1100)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S139 (index = 1115)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S140 (index = 1130)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S141 (index = 1145)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S142 (index = 1160)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (137)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S143 (index = 1175)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (176)
, END
// State S144 (index = 1178)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (177)
, END
// State S145 (index = 1181)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S146 (index = 1200)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (184)
, END
// State S147 (index = 1203)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (185)
, END
// State S148 (index = 1206)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S149 (index = 1219)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (192)
, END
// State S150 (index = 1222)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (19)
, END
// State S151 (index = 1251)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, END
// State S152 (index = 1254)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (194)
, END
// State S153 (index = 1257)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (195)
, END
// State S154 (index = 1260)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (133)
, END
// State S155 (index = 1263)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (196)
, END
// State S156 (index = 1266)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (89)
, END
// State S157 (index = 1271)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (90)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (90)
, END
// State S158 (index = 1276)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (198)
, END
// State S159 (index = 1281)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (181)
, END
// State S160 (index = 1286)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, END
// State S161 (index = 1291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (120)
, END
// State S162 (index = 1296)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (35)
, END
// State S163 (index = 1299)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, END
// State S164 (index = 1304)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S165 (index = 1331)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (202)
, END
// State S166 (index = 1334)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (203)
, END
// State S167 (index = 1337)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, END
// State S168 (index = 1352)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S169 (index = 1357)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S170 (index = 1384)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (205)
, END
// State S171 (index = 1387)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S172 (index = 1390)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S173 (index = 1393)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S174 (index = 1396)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S175 (index = 1399)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S176 (index = 1402)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (206)
, END
// State S177 (index = 1405)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S178 (index = 1432)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S179 (index = 1451)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S180 (index = 1470)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S181 (index = 1489)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S182 (index = 1508)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (61)
, END
// State S183 (index = 1527)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (212)
, END
// State S184 (index = 1530)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (213)
, END
// State S185 (index = 1533)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (214)
, END
// State S186 (index = 1536)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (215)
, END
// State S187 (index = 1539)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (217)
, END
// State S188 (index = 1544)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S189 (index = 1565)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S190 (index = 1580)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S191 (index = 1601)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (237)
, END
// State S192 (index = 1604)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (18)
, END
// State S193 (index = 1627)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (238)
, END
// State S194 (index = 1630)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (239)
, END
// State S195 (index = 1633)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (240)
, END
// State S196 (index = 1636)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (241)
, END
// State S197 (index = 1639)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (91)
, END
// State S198 (index = 1646)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (92)
, END
// State S199 (index = 1653)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (242)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (87)
, END
// State S200 (index = 1660)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (179)
, END
// State S201 (index = 1665)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, END
// State S202 (index = 1668)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (47)
, END
// State S203 (index = 1673)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (246)
, END
// State S204 (index = 1676)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S205 (index = 1679)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (247)
, END
// State S206 (index = 1682)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (248)
, END
// State S207 (index = 1685)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S208 (index = 1688)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S209 (index = 1691)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, END
// State S210 (index = 1694)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S211 (index = 1697)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S212 (index = 1700)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S213 (index = 1727)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (2)
, END
// State S214 (index = 1752)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S215 (index = 1767)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S216 (index = 1780)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (104)
, END
// State S217 (index = 1783)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (103)
, END
// State S218 (index = 1786)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (251)
, END
// State S219 (index = 1789)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (252)
, END
// State S220 (index = 1792)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S221 (index = 1813)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (111)
, END
// State S222 (index = 1844)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (254)
, END
// State S223 (index = 1847)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (255)
, END
// State S224 (index = 1850)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (256)
, END
// State S225 (index = 1853)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (112)
, END
// State S226 (index = 1884)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (113)
, END
// State S227 (index = 1915)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S228 (index = 1936)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S229 (index = 1963)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S230 (index = 1990)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S231 (index = 2003)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (259)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (134)
, END
// State S232 (index = 2024)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (261)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (136)
, END
// State S233 (index = 2047)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (263)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (264)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S234 (index = 2074)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (15)
, END
// State S235 (index = 2105)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (105)
, END
// State S236 (index = 2122)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S237 (index = 2135)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (14)
, END
// State S238 (index = 2158)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S239 (index = 2173)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (278)
, END
// State S240 (index = 2176)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (279)
, END
// State S241 (index = 2179)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (280)
, END
// State S242 (index = 2182)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (156)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (157)
, END
// State S243 (index = 2187)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (282)
, END
// State S244 (index = 2192)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, END
// State S245 (index = 2195)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (48)
, END
// State S246 (index = 2198)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S247 (index = 2225)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (284)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (285)
, END
// State S248 (index = 2230)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (287)
, END
// State S249 (index = 2233)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (288)
, END
// State S250 (index = 2238)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, END
// State S251 (index = 2241)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (290)
, END
// State S252 (index = 2244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (291)
, END
// State S253 (index = 2247)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (292)
, END
// State S254 (index = 2250)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (293)
, END
// State S255 (index = 2253)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (294)
, END
// State S256 (index = 2256)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (295)
, END
// State S257 (index = 2259)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S258 (index = 2286)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S259 (index = 2289)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S260 (index = 2310)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S261 (index = 2329)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S262 (index = 2350)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S263 (index = 2371)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S264 (index = 2392)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S265 (index = 2413)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S266 (index = 2436)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S267 (index = 2451)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (301)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S268 (index = 2470)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, END
// State S269 (index = 2473)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, END
// State S270 (index = 2482)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, END
// State S271 (index = 2491)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S272 (index = 2506)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, END
// State S273 (index = 2515)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, END
// State S274 (index = 2524)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, END
// State S275 (index = 2533)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, END
// State S276 (index = 2542)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (305)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (145)
, END
// State S277 (index = 2547)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, END
// State S278 (index = 2556)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (307)
, END
// State S279 (index = 2559)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (308)
, END
// State S280 (index = 2562)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S281 (index = 2577)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (198)
, END
// State S282 (index = 2582)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (311)
, END
// State S283 (index = 2585)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (312)
, END
// State S284 (index = 2588)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (54)
, END
// State S285 (index = 2591)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (53)
, END
// State S286 (index = 2594)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (313)
, END
// State S287 (index = 2597)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (314)
, END
// State S288 (index = 2600)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S289 (index = 2615)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (316)
, END
// State S290 (index = 2618)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S291 (index = 2631)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (318)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S292 (index = 2664)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S293 (index = 2691)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (320)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (114)
, END
// State S294 (index = 2724)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (322)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (122)
, END
// State S295 (index = 2757)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (324)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (118)
, END
// State S296 (index = 2790)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (259)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (134)
, END
// State S297 (index = 2811)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S298 (index = 2832)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (263)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (264)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S299 (index = 2859)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (263)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (264)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S300 (index = 2886)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (105)
, END
// State S301 (index = 2903)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (330)
, END
// State S302 (index = 2906)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (190)
, END
// State S303 (index = 2919)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (27)
, END
// State S304 (index = 2936)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (332)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, END
// State S305 (index = 2941)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (334)
, END
// State S306 (index = 2944)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (335)
, END
// State S307 (index = 2947)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (30)
, END
// State S308 (index = 2970)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (31)
, END
// State S309 (index = 2993)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (336)
, END
// State S310 (index = 2996)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (242)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (87)
, END
// State S311 (index = 3003)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (338)
, END
// State S312 (index = 3006)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outletClass, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (13)
, END
// State S313 (index = 3033)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (339)
, END
// State S314 (index = 3036)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (340)
, END
// State S315 (index = 3039)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (288)
, END
// State S316 (index = 3044)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (16)
, END
// State S317 (index = 3073)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, END
// State S318 (index = 3076)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (342)
, END
// State S319 (index = 3079)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (110)
, END
// State S320 (index = 3110)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (343)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (344)
, END
// State S321 (index = 3115)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (107)
, END
// State S322 (index = 3146)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (346)
, END
// State S323 (index = 3149)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (109)
, END
// State S324 (index = 3180)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (347)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (348)
, END
// State S325 (index = 3185)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (108)
, END
// State S326 (index = 3216)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (135)
, END
// State S327 (index = 3235)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (139)
, END
// State S328 (index = 3258)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (140)
, END
// State S329 (index = 3281)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, END
// State S330 (index = 3296)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (350)
, END
// State S331 (index = 3299)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, END
// State S332 (index = 3302)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S333 (index = 3317)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (352)
, END
// State S334 (index = 3320)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (353)
, END
// State S335 (index = 3323)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (354)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (355)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (356)
, END
// State S336 (index = 3330)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (17)
, END
// State S337 (index = 3359)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, END
// State S338 (index = 3364)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (358)
, END
// State S339 (index = 3367)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (7)
, END
// State S340 (index = 3382)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (359)
, END
// State S341 (index = 3385)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, END
// State S342 (index = 3388)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S343 (index = 3419)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S344 (index = 3450)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (360)
, END
// State S345 (index = 3453)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (115)
, END
// State S346 (index = 3484)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (123)
, END
// State S347 (index = 3515)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (121)
, END
// State S348 (index = 3546)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (361)
, END
// State S349 (index = 3549)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (119)
, END
// State S350 (index = 3580)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S351 (index = 3595)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (332)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, END
// State S352 (index = 3600)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, END
// State S353 (index = 3609)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S354 (index = 3624)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (365)
, END
// State S355 (index = 3627)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (366)
, END
// State S356 (index = 3630)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (367)
, END
// State S357 (index = 3633)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (368)
, END
// State S358 (index = 3638)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (370)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (95)
, END
// State S359 (index = 3643)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (6)
, END
// State S360 (index = 3658)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (372)
, END
// State S361 (index = 3661)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (373)
, END
// State S362 (index = 3664)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (143)
, END
// State S363 (index = 3669)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (173)
, END
// State S364 (index = 3672)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (305)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (145)
, END
// State S365 (index = 3677)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (377)
, END
// State S366 (index = 3680)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (378)
, END
// State S367 (index = 3683)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (379)
, END
// State S368 (index = 3686)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (380)
, END
// State S369 (index = 3689)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (381)
, END
// State S370 (index = 3692)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (382)
, END
// State S371 (index = 3695)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (383)
, END
// State S372 (index = 3698)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S373 (index = 3729)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (120)
, END
// State S374 (index = 3760)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (384)
, END
// State S375 (index = 3763)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (385)
, END
// State S376 (index = 3766)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (146)
, END
// State S377 (index = 3769)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (149)
, END
// State S378 (index = 3774)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (147)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (147)
, END
// State S379 (index = 3779)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (148)
, END
// State S380 (index = 3784)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (386)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (152)
, END
// State S381 (index = 3789)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (388)
, END
// State S382 (index = 3794)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (390)
, END
// State S383 (index = 3797)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, END
// State S384 (index = 3800)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (391)
, END
// State S385 (index = 3803)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (142)
, END
// State S386 (index = 3820)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (392)
, END
// State S387 (index = 3823)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (151)
, END
// State S388 (index = 3826)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (393)
, END
// State S389 (index = 3829)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (394)
, END
// State S390 (index = 3832)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (395)
, END
// State S391 (index = 3835)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (275)
, END
// State S392 (index = 3850)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (386)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (152)
, END
// State S393 (index = 3855)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (398)
, END
// State S394 (index = 3860)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (28)
, END
// State S395 (index = 3883)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (370)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (95)
, END
// State S396 (index = 3888)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (143)
, END
// State S397 (index = 3893)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, END
// State S398 (index = 3896)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (402)
, END
// State S399 (index = 3899)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (403)
, END
// State S400 (index = 3902)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S401 (index = 3905)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (144)
, END
// State S402 (index = 3908)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (157)
, END
// State S403 (index = 3911)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (404)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S404 (index = 3924)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (410)
, END
// State S405 (index = 3927)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S406 (index = 3948)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S407 (index = 3963)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (220)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (228)
, END
// State S408 (index = 3984)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (388)
, END
// State S409 (index = 3989)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (29)
, END
// State S410 (index = 3994)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (415)
, END
// State S411 (index = 3997)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (404)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S412 (index = 4010)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S413 (index = 4027)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (404)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S414 (index = 4040)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (155)
, END
// State S415 (index = 4043)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (420)
, END
// State S416 (index = 4046)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S417 (index = 4051)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (221)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (222)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (225)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (226)
, END
// State S418 (index = 4066)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (301)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S419 (index = 4085)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S420 (index = 4090)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (404)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S421 (index = 4103)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S422 (index = 4120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (404)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (406)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S423 (index = 4133)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S424 (index = 4138)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (164)
, END
// State S425 (index = 4153)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (162)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [426] = {
  0  // S0
, 27  // S1
, 30  // S2
, 33  // S3
, 36  // S4
, 39  // S5
, 42  // S6
, 45  // S7
, 48  // S8
, 51  // S9
, 54  // S10
, 57  // S11
, 60  // S12
, 63  // S13
, 66  // S14
, 93  // S15
, 120  // S16
, 147  // S17
, 174  // S18
, 201  // S19
, 228  // S20
, 255  // S21
, 282  // S22
, 309  // S23
, 312  // S24
, 315  // S25
, 318  // S26
, 321  // S27
, 324  // S28
, 327  // S29
, 332  // S30
, 335  // S31
, 358  // S32
, 367  // S33
, 370  // S34
, 373  // S35
, 380  // S36
, 383  // S37
, 386  // S38
, 389  // S39
, 392  // S40
, 395  // S41
, 398  // S42
, 401  // S43
, 404  // S44
, 407  // S45
, 434  // S46
, 437  // S47
, 452  // S48
, 455  // S49
, 458  // S50
, 461  // S51
, 464  // S52
, 467  // S53
, 470  // S54
, 475  // S55
, 478  // S56
, 481  // S57
, 484  // S58
, 487  // S59
, 490  // S60
, 493  // S61
, 496  // S62
, 519  // S63
, 542  // S64
, 565  // S65
, 588  // S66
, 611  // S67
, 634  // S68
, 657  // S69
, 660  // S70
, 663  // S71
, 672  // S72
, 681  // S73
, 690  // S74
, 693  // S75
, 696  // S76
, 723  // S77
, 728  // S78
, 731  // S79
, 736  // S80
, 741  // S81
, 744  // S82
, 747  // S83
, 750  // S84
, 765  // S85
, 780  // S86
, 795  // S87
, 810  // S88
, 825  // S89
, 828  // S90
, 831  // S91
, 836  // S92
, 839  // S93
, 854  // S94
, 857  // S95
, 860  // S96
, 863  // S97
, 866  // S98
, 869  // S99
, 872  // S100
, 875  // S101
, 878  // S102
, 881  // S103
, 884  // S104
, 887  // S105
, 890  // S106
, 893  // S107
, 896  // S108
, 899  // S109
, 902  // S110
, 905  // S111
, 932  // S112
, 937  // S113
, 940  // S114
, 943  // S115
, 946  // S116
, 973  // S117
, 978  // S118
, 983  // S119
, 988  // S120
, 991  // S121
, 994  // S122
, 999  // S123
, 1006  // S124
, 1009  // S125
, 1014  // S126
, 1017  // S127
, 1020  // S128
, 1023  // S129
, 1026  // S130
, 1029  // S131
, 1032  // S132
, 1059  // S133
, 1086  // S134
, 1089  // S135
, 1092  // S136
, 1097  // S137
, 1100  // S138
, 1115  // S139
, 1130  // S140
, 1145  // S141
, 1160  // S142
, 1175  // S143
, 1178  // S144
, 1181  // S145
, 1200  // S146
, 1203  // S147
, 1206  // S148
, 1219  // S149
, 1222  // S150
, 1251  // S151
, 1254  // S152
, 1257  // S153
, 1260  // S154
, 1263  // S155
, 1266  // S156
, 1271  // S157
, 1276  // S158
, 1281  // S159
, 1286  // S160
, 1291  // S161
, 1296  // S162
, 1299  // S163
, 1304  // S164
, 1331  // S165
, 1334  // S166
, 1337  // S167
, 1352  // S168
, 1357  // S169
, 1384  // S170
, 1387  // S171
, 1390  // S172
, 1393  // S173
, 1396  // S174
, 1399  // S175
, 1402  // S176
, 1405  // S177
, 1432  // S178
, 1451  // S179
, 1470  // S180
, 1489  // S181
, 1508  // S182
, 1527  // S183
, 1530  // S184
, 1533  // S185
, 1536  // S186
, 1539  // S187
, 1544  // S188
, 1565  // S189
, 1580  // S190
, 1601  // S191
, 1604  // S192
, 1627  // S193
, 1630  // S194
, 1633  // S195
, 1636  // S196
, 1639  // S197
, 1646  // S198
, 1653  // S199
, 1660  // S200
, 1665  // S201
, 1668  // S202
, 1673  // S203
, 1676  // S204
, 1679  // S205
, 1682  // S206
, 1685  // S207
, 1688  // S208
, 1691  // S209
, 1694  // S210
, 1697  // S211
, 1700  // S212
, 1727  // S213
, 1752  // S214
, 1767  // S215
, 1780  // S216
, 1783  // S217
, 1786  // S218
, 1789  // S219
, 1792  // S220
, 1813  // S221
, 1844  // S222
, 1847  // S223
, 1850  // S224
, 1853  // S225
, 1884  // S226
, 1915  // S227
, 1936  // S228
, 1963  // S229
, 1990  // S230
, 2003  // S231
, 2024  // S232
, 2047  // S233
, 2074  // S234
, 2105  // S235
, 2122  // S236
, 2135  // S237
, 2158  // S238
, 2173  // S239
, 2176  // S240
, 2179  // S241
, 2182  // S242
, 2187  // S243
, 2192  // S244
, 2195  // S245
, 2198  // S246
, 2225  // S247
, 2230  // S248
, 2233  // S249
, 2238  // S250
, 2241  // S251
, 2244  // S252
, 2247  // S253
, 2250  // S254
, 2253  // S255
, 2256  // S256
, 2259  // S257
, 2286  // S258
, 2289  // S259
, 2310  // S260
, 2329  // S261
, 2350  // S262
, 2371  // S263
, 2392  // S264
, 2413  // S265
, 2436  // S266
, 2451  // S267
, 2470  // S268
, 2473  // S269
, 2482  // S270
, 2491  // S271
, 2506  // S272
, 2515  // S273
, 2524  // S274
, 2533  // S275
, 2542  // S276
, 2547  // S277
, 2556  // S278
, 2559  // S279
, 2562  // S280
, 2577  // S281
, 2582  // S282
, 2585  // S283
, 2588  // S284
, 2591  // S285
, 2594  // S286
, 2597  // S287
, 2600  // S288
, 2615  // S289
, 2618  // S290
, 2631  // S291
, 2664  // S292
, 2691  // S293
, 2724  // S294
, 2757  // S295
, 2790  // S296
, 2811  // S297
, 2832  // S298
, 2859  // S299
, 2886  // S300
, 2903  // S301
, 2906  // S302
, 2919  // S303
, 2936  // S304
, 2941  // S305
, 2944  // S306
, 2947  // S307
, 2970  // S308
, 2993  // S309
, 2996  // S310
, 3003  // S311
, 3006  // S312
, 3033  // S313
, 3036  // S314
, 3039  // S315
, 3044  // S316
, 3073  // S317
, 3076  // S318
, 3079  // S319
, 3110  // S320
, 3115  // S321
, 3146  // S322
, 3149  // S323
, 3180  // S324
, 3185  // S325
, 3216  // S326
, 3235  // S327
, 3258  // S328
, 3281  // S329
, 3296  // S330
, 3299  // S331
, 3302  // S332
, 3317  // S333
, 3320  // S334
, 3323  // S335
, 3330  // S336
, 3359  // S337
, 3364  // S338
, 3367  // S339
, 3382  // S340
, 3385  // S341
, 3388  // S342
, 3419  // S343
, 3450  // S344
, 3453  // S345
, 3484  // S346
, 3515  // S347
, 3546  // S348
, 3549  // S349
, 3580  // S350
, 3595  // S351
, 3600  // S352
, 3609  // S353
, 3624  // S354
, 3627  // S355
, 3630  // S356
, 3633  // S357
, 3638  // S358
, 3643  // S359
, 3658  // S360
, 3661  // S361
, 3664  // S362
, 3669  // S363
, 3672  // S364
, 3677  // S365
, 3680  // S366
, 3683  // S367
, 3686  // S368
, 3689  // S369
, 3692  // S370
, 3695  // S371
, 3698  // S372
, 3729  // S373
, 3760  // S374
, 3763  // S375
, 3766  // S376
, 3769  // S377
, 3774  // S378
, 3779  // S379
, 3784  // S380
, 3789  // S381
, 3794  // S382
, 3797  // S383
, 3800  // S384
, 3803  // S385
, 3820  // S386
, 3823  // S387
, 3826  // S388
, 3829  // S389
, 3832  // S390
, 3835  // S391
, 3850  // S392
, 3855  // S393
, 3860  // S394
, 3883  // S395
, 3888  // S396
, 3893  // S397
, 3896  // S398
, 3899  // S399
, 3902  // S400
, 3905  // S401
, 3908  // S402
, 3911  // S403
, 3924  // S404
, 3927  // S405
, 3948  // S406
, 3963  // S407
, 3984  // S408
, 3989  // S409
, 3994  // S410
, 3997  // S411
, 4010  // S412
, 4027  // S413
, 4040  // S414
, 4043  // S415
, 4046  // S416
, 4051  // S417
, 4066  // S418
, 4085  // S419
, 4090  // S420
, 4103  // S421
, 4120  // S422
, 4133  // S423
, 4138  // S424
, 4153  // S425
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            SLR states successors table                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [23] = {0, 13,
  3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 36, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 37, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 38, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 39, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 40, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 41, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 42, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 43, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 44, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_29 [3] = {35, 51, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_31 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 69,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_32 [3] = {39, 74, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_35 [3] = {75, 80, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_45 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_47 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 89,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [3] = {55, 97, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_62 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 104,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_63 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 105,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 106,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 107,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 108,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 109,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [19] = {2, 62,
  12, 63,
  14, 64,
  15, 65,
  16, 66,
  17, 67,
  23, 68,
  38, 110,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_71 [3] = {39, 113, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_72 [3] = {39, 114, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_73 [3] = {39, 115, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_79 [5] = {28, 121,
  77, 122, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_80 [3] = {74, 124, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_84 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 127,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 128,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_86 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 129,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_87 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 130,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_88 [15] = {1, 84,
  2, 85,
  14, 86,
  15, 87,
  17, 88,
  34, 131,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_91 [3] = {31, 135, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_93 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 144,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_112 [3] = {58, 155, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_117 [3] = {41, 158, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_122 [3] = {76, 162, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_123 [3] = {75, 163, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_125 [3] = {30, 166, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_138 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 171,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_139 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 172,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_140 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 173,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_141 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 174,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [17] = {5, 138,
  6, 139,
  14, 140,
  15, 141,
  17, 142,
  32, 143,
  36, 175,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_145 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 183,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_148 [3] = {45, 191, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_158 [3] = {42, 199, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_161 [3] = {77, 200, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [3] = {74, 201, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_168 [3] = {31, 204, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_178 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 207,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_179 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 208,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_180 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 209,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_181 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 210,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_182 [15] = {12, 178,
  14, 179,
  15, 180,
  17, 181,
  23, 182,
  37, 211,
  57, 70, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_187 [3] = {46, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_188 [13] = {13, 229,
  18, 230,
  19, 231,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [5] = {13, 235,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_190 [13] = {13, 229,
  18, 236,
  19, 231,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_199 [3] = {40, 243, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_200 [3] = {76, 244, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_202 [3] = {30, 245, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_214 [5] = {13, 249,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_215 [3] = {45, 250, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_220 [13] = {13, 229,
  18, 253,
  19, 231,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_227 [7] = {13, 229,
  21, 257,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_230 [3] = {45, 258, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_231 [3] = {59, 260, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_232 [3] = {60, 262, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_233 [3] = {61, 265, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_235 [3] = {47, 267, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_236 [3] = {45, 268, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_238 [5] = {25, 276,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_242 [3] = {41, 281, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [3] = {43, 283, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_247 [3] = {33, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_249 [3] = {56, 289, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_259 [11] = {13, 229,
  19, 296,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_261 [9] = {13, 229,
  20, 297,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_263 [7] = {13, 229,
  21, 298,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_264 [7] = {13, 229,
  21, 299,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_266 [5] = {13, 300,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [5] = {22, 302,
  62, 303, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [5] = {25, 304,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [3] = {64, 306, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [5] = {25, 309,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [3] = {42, 310, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_288 [5] = {13, 315,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_290 [3] = {45, 317, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [3] = {54, 319, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_293 [3] = {49, 321, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_294 [3] = {53, 323, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_295 [3] = {51, 325, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_296 [3] = {59, 326, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_298 [3] = {61, 327, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [3] = {61, 328, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [3] = {47, 329, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_302 [3] = {45, 331, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_304 [3] = {73, 333, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_310 [3] = {40, 337, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_315 [3] = {56, 341, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_320 [3] = {50, 345, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_324 [3] = {52, 349, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_332 [5] = {25, 351,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_335 [3] = {65, 357, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_350 [5] = {25, 362,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_351 [3] = {73, 363, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_353 [5] = {25, 364,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_357 [3] = {66, 369, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_358 [3] = {44, 371, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_362 [3] = {63, 375, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_364 [3] = {64, 376, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_380 [3] = {67, 387, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_381 [3] = {68, 389, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_391 [5] = {25, 396,
  72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_392 [3] = {67, 397, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_393 [3] = {69, 399, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_395 [3] = {44, 400, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_396 [3] = {63, 401, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_403 [5] = {24, 408,
  70, 409, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_405 [13] = {13, 229,
  18, 411,
  19, 231,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_406 [5] = {13, 412,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_407 [13] = {13, 229,
  18, 413,
  19, 231,
  20, 232,
  21, 233,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_408 [3] = {68, 414, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_411 [3] = {70, 416, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_412 [3] = {71, 418, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_413 [3] = {70, 419, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_417 [5] = {13, 421,
  48, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_418 [5] = {22, 422,
  62, 303, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_420 [3] = {70, 423, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_421 [3] = {71, 424, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_422 [3] = {70, 425, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [426] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_29, NULL, gSuccessorTable_easyBindings_grammar_31, 
  gSuccessorTable_easyBindings_grammar_32, NULL, NULL, gSuccessorTable_easyBindings_grammar_35, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_45, NULL, gSuccessorTable_easyBindings_grammar_47, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_54, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_62, gSuccessorTable_easyBindings_grammar_63, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, NULL, NULL, gSuccessorTable_easyBindings_grammar_71, 
  gSuccessorTable_easyBindings_grammar_72, gSuccessorTable_easyBindings_grammar_73, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_79, 
  gSuccessorTable_easyBindings_grammar_80, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_84, gSuccessorTable_easyBindings_grammar_85, gSuccessorTable_easyBindings_grammar_86, gSuccessorTable_easyBindings_grammar_87, 
  gSuccessorTable_easyBindings_grammar_88, NULL, NULL, gSuccessorTable_easyBindings_grammar_91, 
  NULL, gSuccessorTable_easyBindings_grammar_93, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_112, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_117, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_122, gSuccessorTable_easyBindings_grammar_123, 
  NULL, gSuccessorTable_easyBindings_grammar_125, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_138, gSuccessorTable_easyBindings_grammar_139, 
  gSuccessorTable_easyBindings_grammar_140, gSuccessorTable_easyBindings_grammar_141, gSuccessorTable_easyBindings_grammar_142, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_145, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_148, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_158, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_161, NULL, gSuccessorTable_easyBindings_grammar_163, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_168, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_178, gSuccessorTable_easyBindings_grammar_179, 
  gSuccessorTable_easyBindings_grammar_180, gSuccessorTable_easyBindings_grammar_181, gSuccessorTable_easyBindings_grammar_182, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_187, 
  gSuccessorTable_easyBindings_grammar_188, gSuccessorTable_easyBindings_grammar_189, gSuccessorTable_easyBindings_grammar_190, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_199, 
  gSuccessorTable_easyBindings_grammar_200, NULL, gSuccessorTable_easyBindings_grammar_202, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_214, gSuccessorTable_easyBindings_grammar_215, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_220, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_227, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_230, gSuccessorTable_easyBindings_grammar_231, 
  gSuccessorTable_easyBindings_grammar_232, gSuccessorTable_easyBindings_grammar_233, NULL, gSuccessorTable_easyBindings_grammar_235, 
  gSuccessorTable_easyBindings_grammar_236, NULL, gSuccessorTable_easyBindings_grammar_238, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_242, gSuccessorTable_easyBindings_grammar_243, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_247, 
  NULL, gSuccessorTable_easyBindings_grammar_249, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_259, 
  NULL, gSuccessorTable_easyBindings_grammar_261, NULL, gSuccessorTable_easyBindings_grammar_263, 
  gSuccessorTable_easyBindings_grammar_264, NULL, gSuccessorTable_easyBindings_grammar_266, gSuccessorTable_easyBindings_grammar_267, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_271, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_276, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_280, gSuccessorTable_easyBindings_grammar_281, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_288, NULL, gSuccessorTable_easyBindings_grammar_290, gSuccessorTable_easyBindings_grammar_291, 
  NULL, gSuccessorTable_easyBindings_grammar_293, gSuccessorTable_easyBindings_grammar_294, gSuccessorTable_easyBindings_grammar_295, 
  gSuccessorTable_easyBindings_grammar_296, NULL, gSuccessorTable_easyBindings_grammar_298, gSuccessorTable_easyBindings_grammar_299, 
  gSuccessorTable_easyBindings_grammar_300, NULL, gSuccessorTable_easyBindings_grammar_302, NULL, 
  gSuccessorTable_easyBindings_grammar_304, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_310, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_315, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_320, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_324, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_332, NULL, NULL, gSuccessorTable_easyBindings_grammar_335, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_350, gSuccessorTable_easyBindings_grammar_351, 
  NULL, gSuccessorTable_easyBindings_grammar_353, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_357, gSuccessorTable_easyBindings_grammar_358, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_362, NULL, 
  gSuccessorTable_easyBindings_grammar_364, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_380, gSuccessorTable_easyBindings_grammar_381, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_391, 
  gSuccessorTable_easyBindings_grammar_392, gSuccessorTable_easyBindings_grammar_393, NULL, gSuccessorTable_easyBindings_grammar_395, 
  gSuccessorTable_easyBindings_grammar_396, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_403, 
  NULL, gSuccessorTable_easyBindings_grammar_405, gSuccessorTable_easyBindings_grammar_406, gSuccessorTable_easyBindings_grammar_407, 
  gSuccessorTable_easyBindings_grammar_408, NULL, NULL, gSuccessorTable_easyBindings_grammar_411, 
  gSuccessorTable_easyBindings_grammar_412, gSuccessorTable_easyBindings_grammar_413, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_417, gSuccessorTable_easyBindings_grammar_418, NULL, 
  gSuccessorTable_easyBindings_grammar_420, gSuccessorTable_easyBindings_grammar_421, gSuccessorTable_easyBindings_grammar_422, NULL, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Production rules infos (left non terminal, size of right string)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [184 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 8,
  3, 5,
  4, 6,
  5, 8,
  6, 7,
  3, 5,
  7, 6,
  8, 7,
  9, 4,
  10, 4,
  11, 9,
  12, 5,
  13, 1,
  14, 8,
  15, 8,
  16, 4,
  17, 3,
  18, 2,
  19, 2,
  20, 2,
  21, 1,
  21, 2,
  21, 3,
  21, 1,
  22, 1,
  23, 13,
  24, 1,
  23, 7,
  23, 7,
  25, 1,
  26, 3,
  27, 5,
  28, 2,
  29, 0,
  29, 4,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  30, 0,
  30, 3,
  31, 0,
  31, 3,
  32, 0,
  32, 1,
  33, 1,
  33, 1,
  34, 0,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  34, 2,
  35, 0,
  35, 2,
  36, 0,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  36, 2,
  37, 0,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  37, 2,
  38, 0,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  39, 0,
  39, 2,
  39, 2,
  39, 2,
  40, 0,
  40, 4,
  41, 1,
  41, 1,
  42, 1,
  42, 1,
  43, 0,
  43, 6,
  44, 0,
  44, 5,
  45, 0,
  45, 3,
  45, 5,
  45, 3,
  45, 3,
  45, 5,
  46, 1,
  46, 1,
  47, 0,
  47, 3,
  48, 4,
  48, 4,
  48, 4,
  48, 4,
  48, 1,
  48, 1,
  48, 1,
  49, 0,
  49, 2,
  50, 1,
  50, 3,
  51, 0,
  51, 2,
  52, 3,
  52, 1,
  53, 0,
  53, 2,
  54, 0,
  54, 2,
  55, 0,
  55, 1,
  56, 0,
  56, 3,
  57, 0,
  57, 1,
  58, 0,
  58, 1,
  59, 0,
  59, 3,
  60, 0,
  60, 2,
  61, 0,
  61, 3,
  61, 3,
  62, 0,
  62, 6,
  63, 0,
  63, 5,
  64, 0,
  64, 5,
  65, 3,
  65, 3,
  65, 3,
  66, 0,
  66, 3,
  67, 0,
  67, 3,
  68, 0,
  68, 6,
  69, 0,
  69, 2,
  70, 0,
  70, 5,
  70, 3,
  70, 3,
  70, 5,
  71, 0,
  71, 3,
  72, 1,
  72, 1,
  72, 1,
  72, 1,
  72, 1,
  72, 1,
  72, 4,
  73, 0,
  73, 3,
  74, 0,
  74, 3,
  75, 2,
  75, 1,
  75, 3,
  76, 0,
  76, 3,
  77, 2,
  77, 1,
  78, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'start_symbol' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_easyBindings_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Grammar start symbol implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
      if (scanner->sourceText () != NULL) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                         gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                         gProductionsTable_easyBindings_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_easyBindings_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                       gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                       gProductionsTable_easyBindings_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_easyBindings_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'extern_swift_delegate' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_delegate_ (GALGAS_externSwiftDelegateList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'extern_swift_func' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_extern_5F_swift_5F_func_ (GALGAS_externSwiftFunctionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'class_declaration' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse(inLexique) ;
    break ;
  case 4 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i4_parse(inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 4 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i4_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i8_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   'enum_declaration' non terminal implementation                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i5_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'toMany_relationship' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (GALGAS_toManyRelationshipList &  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'toOne_relationship' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (GALGAS_toOneRelationshipList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'entity_declaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'document_declaration' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i10_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'preferences_declaration' non terminal implementation                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'outlet_class_declaration' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_outletClassDeclarationList &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'binding_specification' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i13_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_ (const GALGAS_bool  parameter_1,
                                GALGAS_bindingSpecificationListMap &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i13_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'outlet_declaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'observable_property' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_observable_5F_property_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_observable_5F_property_i15_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                'transient_declaration' non terminal implementation                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i16_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'simple_stored_declaration' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (GALGAS_simpleStoredPropertyList &  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i17_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               'stored_array_declaration' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_ (GALGAS_storedArrayPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  'action_declaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i19_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'booleanMultipleBindingExpression' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'booleanMultipleBindingComparison' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'booleanMultipleBindingTerm' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            'booleanMultipleBindingOperand' non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'binding_option_list' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             'array_controller_declaration' non terminal implementation                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_parse(inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i28_(parameter_1, inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i30_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   'column_bindings' non terminal implementation                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_columnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    'explicit_value' non terminal implementation                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    'xcode_project' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       'main_xib' non terminal implementation                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    'main_xib_line' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_0' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 36 37 38 39 40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 55 56 57 58 59 60
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 63 64 65 66 67 68
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 69 70 71 72 73 74
  return inLexique->nextProductionIndex () - 68 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 75 76 77 78 79 80 81 82
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 83 84 85 86
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 97 98 99 100 101 102
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 107 108 109 110 111 112 113
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 126 127
  return inLexique->nextProductionIndex () - 125 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 128 129
  return inLexique->nextProductionIndex () - 127 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 130 131
  return inLexique->nextProductionIndex () - 129 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 132 133
  return inLexique->nextProductionIndex () - 131 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 134 135
  return inLexique->nextProductionIndex () - 133 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 138 139 140
  return inLexique->nextProductionIndex () - 137 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 141 142
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 143 144
  return inLexique->nextProductionIndex () - 142 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 145 146
  return inLexique->nextProductionIndex () - 144 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 147 148 149
  return inLexique->nextProductionIndex () - 146 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 156 157
  return inLexique->nextProductionIndex () - 155 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 158 159 160 161 162
  return inLexique->nextProductionIndex () - 157 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 163 164
  return inLexique->nextProductionIndex () - 162 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 165 166 167 168 169 170 171
  return inLexique->nextProductionIndex () - 164 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 172 173
  return inLexique->nextProductionIndex () - 171 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 174 175
  return inLexique->nextProductionIndex () - 173 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 176 177 178
  return inLexique->nextProductionIndex () - 175 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 179 180
  return inLexique->nextProductionIndex () - 178 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 181 182
  return inLexique->nextProductionIndex () - 180 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap::GALGAS_bindingSpecificationListMap (void) :
AC_GALGAS_listmap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_bindingSpecificationListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap::addAssign_operation (const GALGAS_string & inKey,
                                                              const GALGAS_bool & inOperand0,
                                                              const GALGAS_lstring & inOperand1,
                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                              const GALGAS_controllerBindingOptionList & inOperand3
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_outletClassBindingSpecificationList (listForKey (inKey)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_bindingSpecificationListMap::cEnumerator_bindingSpecificationListMap (const GALGAS_bindingSpecificationListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element cEnumerator_bindingSpecificationListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_bindingSpecificationListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_bindingSpecificationListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList cEnumerator_bindingSpecificationListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_outletClassBindingSpecificationList (p->mSharedListMapList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @bindingSpecificationListMap type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap ("bindingSpecificationListMap",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_bindingSpecificationListMap::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap result ;
  const GALGAS_bindingSpecificationListMap * p = (const GALGAS_bindingSpecificationListMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_propertyClassDefaultValues_string::cEnumAssociatedValues_propertyClassDefaultValues_string (const GALGAS_stringset & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_propertyClassDefaultValues_string::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_propertyClassDefaultValues_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyClassDefaultValues_string * ptr = dynamic_cast<const cEnumAssociatedValues_propertyClassDefaultValues_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDefaultValues::GALGAS_propertyClassDefaultValues (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDefaultValues::constructor_string (const GALGAS_stringset & inAssociatedValue0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDefaultValues result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyClassDefaultValues_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyClassDefaultValues::method_string (GALGAS_stringset & outAssociatedValue0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyClassDefaultValues string invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyClassDefaultValues_string * ptr = (const cEnumAssociatedValues_propertyClassDefaultValues_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_propertyClassDefaultValues [2] = {
  "(not built)",
  "string"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyClassDefaultValues::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyClassDefaultValues::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<enum @propertyClassDefaultValues: " << gEnumNameArrayFor_propertyClassDefaultValues [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyClassDefaultValues::objectCompare (const GALGAS_propertyClassDefaultValues & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @propertyClassDefaultValues type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyClassDefaultValues ("propertyClassDefaultValues",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyClassDefaultValues::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDefaultValues ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyClassDefaultValues::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyClassDefaultValues (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDefaultValues::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDefaultValues result ;
  const GALGAS_propertyClassDefaultValues * p = (const GALGAS_propertyClassDefaultValues *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyClassDefaultValues *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyClassDefaultValues", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_enumType::cEnumAssociatedValues_typeKind_enumType (const GALGAS_string & inAssociatedValue0,
                                                                                  const GALGAS_enumConstantMap & inAssociatedValue1
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_enumType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_enumType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_enumType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_enumType *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_entityType::cEnumAssociatedValues_typeKind_entityType (const GALGAS_string & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_entityType::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_entityType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_entityType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_entityType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_classType::cEnumAssociatedValues_typeKind_classType (const GALGAS_string & inAssociatedValue0
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_classType::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_propertyClassType::cEnumAssociatedValues_typeKind_propertyClassType (const GALGAS_string & inAssociatedValue0,
                                                                                                    const GALGAS_propertyClassDefaultValues & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_propertyClassType::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_propertyClassType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_propertyClassType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_propertyClassType *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_typeKind_transientPropertyClassType::cEnumAssociatedValues_typeKind_transientPropertyClassType (const GALGAS_string & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_typeKind_transientPropertyClassType::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_typeKind_transientPropertyClassType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKind_transientPropertyClassType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKind_transientPropertyClassType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind::GALGAS_typeKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_boolType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_boolType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_integerType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_integerType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_doubleType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_doubleType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_stringType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_stringType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_dateType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_dateType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_fontType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  result.mEnum = kEnum_fontType ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_enumType (const GALGAS_string & inAssociatedValue0,
                                                       const GALGAS_enumConstantMap & inAssociatedValue1
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_enumType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_enumType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_entityType (const GALGAS_string & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_entityType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_entityType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_classType (const GALGAS_string & inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_classType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_classType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_propertyClassType (const GALGAS_string & inAssociatedValue0,
                                                                const GALGAS_propertyClassDefaultValues & inAssociatedValue1
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_propertyClassType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_propertyClassType (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::constructor_transientPropertyClassType (const GALGAS_string & inAssociatedValue0
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transientPropertyClassType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKind_transientPropertyClassType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_enumType (GALGAS_string & outAssociatedValue0,
                                       GALGAS_enumConstantMap & outAssociatedValue1,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind enumType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_enumType * ptr = (const cEnumAssociatedValues_typeKind_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_entityType (GALGAS_string & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entityType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind entityType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_entityType * ptr = (const cEnumAssociatedValues_typeKind_entityType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_classType (GALGAS_string & outAssociatedValue0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_classType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind classType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_classType * ptr = (const cEnumAssociatedValues_typeKind_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_propertyClassType (GALGAS_string & outAssociatedValue0,
                                                GALGAS_propertyClassDefaultValues & outAssociatedValue1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_propertyClassType) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @typeKind propertyClassType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_propertyClassType * ptr = (const cEnumAssociatedValues_typeKind_propertyClassType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::method_transientPropertyClassType (GALGAS_string & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transientPropertyClassType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @typeKind transientPropertyClassType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKind_transientPropertyClassType * ptr = (const cEnumAssociatedValues_typeKind_transientPropertyClassType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_typeKind [12] = {
  "(not built)",
  "boolType",
  "integerType",
  "doubleType",
  "stringType",
  "dateType",
  "fontType",
  "enumType",
  "entityType",
  "classType",
  "propertyClassType",
  "transientPropertyClassType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_integerType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_doubleType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stringType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_dateType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fontType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isPropertyClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyClassType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_typeKind::getter_isTransientPropertyClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientPropertyClassType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKind::description (C_String & ioString,
                                   const int32_t inIndentation) const {
  ioString << "<enum @typeKind: " << gEnumNameArrayFor_typeKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKind::objectCompare (const GALGAS_typeKind & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @typeKind type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKind::extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeKind result ;
  const GALGAS_typeKind * p = (const GALGAS_typeKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableValueBinding::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @tableValueBinding: " << gEnumNameArrayFor_tableValueBinding [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @tableValueBinding type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_runActionDescriptor_action::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_runActionDescriptor::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @runActionDescriptor: " << gEnumNameArrayFor_runActionDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @runActionDescriptor type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingDescriptor::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @multipleBindingDescriptor: " << gEnumNameArrayFor_multipleBindingDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @multipleBindingDescriptor type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootProperty::cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_selfProperty::cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_selfProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_prefsProperty::cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_prefsProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_controllerProperty::cEnumAssociatedValues_observablePropertyAST_controllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_controllerProperty::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_controllerProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_controllerProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_controllerProperty *> (inOperand) ;
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

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                                  const GALGAS_lstring & inAssociatedValue2
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_signatureProperty::cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_signatureProperty::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_signatureProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_signatureProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_versionProperty::cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_versionProperty::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST::GALGAS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_rootPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_rootPropertyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                               const GALGAS_lstring & inAssociatedValue1
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selfPropertyArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_prefsProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_prefsProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_prefsPropertyWithOption ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_controllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_controllerProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_controllerProperty (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_controllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1,
                                                                                                    const GALGAS_lstring & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_controllerSecondaryProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_signatureProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_signatureProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_versionProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_versionProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_versionShouldChangeProperty ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_rootProperty (GALGAS_lstring & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_rootPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                  GALGAS_lstring & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_rootPropertyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootPropertyRelationship) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST rootPropertyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_selfProperty (GALGAS_lstring & outAssociatedValue0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_selfPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                  GALGAS_lstring & outAssociatedValue1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_selfPropertyArray (GALGAS_lstring & outAssociatedValue0,
                                                             GALGAS_lstring & outAssociatedValue1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfPropertyArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST selfPropertyArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_prefsProperty (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefsProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST prefsProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_prefsPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                   GALGAS_lstring & outAssociatedValue1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_prefsPropertyWithOption) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST prefsPropertyWithOption invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_controllerProperty (GALGAS_lstring & outAssociatedValue0,
                                                              GALGAS_lstring & outAssociatedValue1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @observablePropertyAST controllerProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_controllerProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_controllerSecondaryProperty (GALGAS_lstring & outAssociatedValue0,
                                                                       GALGAS_lstring & outAssociatedValue1,
                                                                       GALGAS_lstring & outAssociatedValue2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerSecondaryProperty) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @observablePropertyAST controllerSecondaryProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_signatureProperty (GALGAS_location & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_signatureProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST signatureProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_versionProperty (GALGAS_location & outAssociatedValue0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_versionProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST versionProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::method_versionShouldChangeProperty (GALGAS_location & outAssociatedValue0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_versionShouldChangeProperty) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @observablePropertyAST versionShouldChangeProperty invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_observablePropertyAST [14] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "prefsProperty",
  "prefsPropertyWithOption",
  "controllerProperty",
  "controllerSecondaryProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyWithOption == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyRelationship == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyWithOption == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyArray == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsPropertyWithOption == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerSecondaryProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_signatureProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionShouldChangeProperty == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @observablePropertyAST: " << gEnumNameArrayFor_observablePropertyAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyAST::objectCompare (const GALGAS_observablePropertyAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @observablePropertyAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  const GALGAS_observablePropertyAST * p = (const GALGAS_observablePropertyAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

