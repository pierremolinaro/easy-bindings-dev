#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind::GALGAS_proxyKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::constructor_propertyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_propertyProxy ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::constructor_toManyProxy (UNUSED_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  result.mEnum = kEnum_toManyProxy ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_propertyProxy () const {
  const bool ok = mEnum == kEnum_propertyProxy ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_proxyKind::optional_toManyProxy () const {
  const bool ok = mEnum == kEnum_toManyProxy ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_proxyKind [3] = {
  "(not built)",
  "propertyProxy",
  "toManyProxy"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isPropertyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_propertyProxy == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_proxyKind::getter_isToManyProxy (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toManyProxy == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_proxyKind::description (C_String & ioString,
                                    const int32_t /* inIndentation */) const {
  ioString << "<enum @proxyKind: " << gEnumNameArrayFor_proxyKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_proxyKind::objectCompare (const GALGAS_proxyKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@proxyKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_proxyKind ("proxyKind",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_proxyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_proxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_proxyKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_proxyKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_proxyKind::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_proxyKind result ;
  const GALGAS_proxyKind * p = (const GALGAS_proxyKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_proxyKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("proxyKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyProxyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyTypeName.objectCompare (p->mProperty_mToManyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedRelationshipName.objectCompare (p->mProperty_mObservedRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedPropertyName.objectCompare (p->mProperty_mObservedPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toManyProxyGeneration::objectCompare (const GALGAS_toManyProxyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration::GALGAS_toManyProxyGeneration (const cPtr_toManyProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyProxyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                            const GALGAS_string & inAttribute_mToManyTypeName,
                                                                            const GALGAS_string & inAttribute_mObservedRelationshipName,
                                                                            const GALGAS_string & inAttribute_mObservedPropertyName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mToManyTypeName.isValid () && inAttribute_mObservedRelationshipName.isValid () && inAttribute_mObservedPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyProxyGeneration (inAttribute_mPropertyName, inAttribute_mProxyKind, inAttribute_mToManyTypeName, inAttribute_mObservedRelationshipName, inAttribute_mObservedPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_toManyProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_proxyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mProxyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind cPtr_toManyProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mToManyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mToManyTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mToManyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mObservedRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_toManyProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyProxyGeneration * p = (const cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    result = p->mProperty_mObservedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_toManyProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mToManyTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMToManyTypeName (GALGAS_string inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mToManyTypeName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyProxyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyProxyGeneration::cPtr_toManyProxyGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_proxyKind & in_mProxyKind,
                                                        const GALGAS_string & in_mToManyTypeName,
                                                        const GALGAS_string & in_mObservedRelationshipName,
                                                        const GALGAS_string & in_mObservedPropertyName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mToManyTypeName (in_mToManyTypeName),
mProperty_mObservedRelationshipName (in_mObservedRelationshipName),
mProperty_mObservedPropertyName (in_mObservedPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

void cPtr_toManyProxyGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@toManyProxyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mToManyTypeName, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGeneration ("toManyProxyGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGeneration result ;
  const GALGAS_toManyProxyGeneration * p = (const GALGAS_toManyProxyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toManyProxyGenerationList : public cCollectionElement {
  public : GALGAS_toManyProxyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyProxyGenerationList::cCollectionElement_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyProxyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyProxyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toManyProxyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyProxyGenerationList * operand = (cCollectionElement_toManyProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList::GALGAS_toManyProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyProxyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::constructor_listWithValue (const GALGAS_toManyProxyGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_toManyProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::addAssign_operation (const GALGAS_toManyProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_append (GALGAS_toManyProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_insertAtIndex (const GALGAS_toManyProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyProxyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_removeAtIndex (GALGAS_toManyProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_popFirst (GALGAS_toManyProxyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_popLast (GALGAS_toManyProxyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_first (GALGAS_toManyProxyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::method_last (GALGAS_toManyProxyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::add_operation (const GALGAS_toManyProxyGenerationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_toManyProxyGenerationList result = GALGAS_toManyProxyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::plusAssign_operation (const GALGAS_toManyProxyGenerationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyProxyGenerationList * p = (cCollectionElement_toManyProxyGenerationList *) attributes.ptr () ;
  GALGAS_toManyProxyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toManyProxyGenerationList::cEnumerator_toManyProxyGenerationList (const GALGAS_toManyProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element cEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGeneration cEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyProxyGenerationList * p = (const cCollectionElement_toManyProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGenerationList ("toManyProxyGenerationList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList GALGAS_toManyProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList result ;
  const GALGAS_toManyProxyGenerationList * p = (const GALGAS_toManyProxyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicProxyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mProxyKind.objectCompare (p->mProperty_mProxyKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedRelationshipName.objectCompare (p->mProperty_mObservedRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObservedPropertyName.objectCompare (p->mProperty_mObservedPropertyName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicProxyGeneration::objectCompare (const GALGAS_atomicProxyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration::GALGAS_atomicProxyGeneration (const cPtr_atomicProxyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicProxyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_proxyKind & inAttribute_mProxyKind,
                                                                            const GALGAS_typeKind & inAttribute_mType,
                                                                            const GALGAS_string & inAttribute_mObservedRelationshipName,
                                                                            const GALGAS_string & inAttribute_mObservedPropertyName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mProxyKind.isValid () && inAttribute_mType.isValid () && inAttribute_mObservedRelationshipName.isValid () && inAttribute_mObservedPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicProxyGeneration (inAttribute_mPropertyName, inAttribute_mProxyKind, inAttribute_mType, inAttribute_mObservedRelationshipName, inAttribute_mObservedPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind GALGAS_atomicProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_proxyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mProxyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_proxyKind cPtr_atomicProxyGeneration::getter_mProxyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProxyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicProxyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_atomicProxyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mObservedRelationshipName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_mObservedRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedRelationshipName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicProxyGeneration * p = (const cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    result = p->mProperty_mObservedPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicProxyGeneration::getter_mObservedPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mProxyKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMProxyKind (GALGAS_proxyKind inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProxyKind = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedRelationshipName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMObservedRelationshipName (GALGAS_string inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedRelationshipName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicProxyGeneration) ;
    p->mProperty_mObservedPropertyName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicProxyGeneration::setter_setMObservedPropertyName (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedPropertyName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicProxyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicProxyGeneration::cPtr_atomicProxyGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_proxyKind & in_mProxyKind,
                                                        const GALGAS_typeKind & in_mType,
                                                        const GALGAS_string & in_mObservedRelationshipName,
                                                        const GALGAS_string & in_mObservedPropertyName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mProxyKind (in_mProxyKind),
mProperty_mType (in_mType),
mProperty_mObservedRelationshipName (in_mObservedRelationshipName),
mProperty_mObservedPropertyName (in_mObservedPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicProxyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

void cPtr_atomicProxyGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@atomicProxyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mProxyKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObservedPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicProxyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicProxyGeneration (mProperty_mPropertyName, mProperty_mProxyKind, mProperty_mType, mProperty_mObservedRelationshipName, mProperty_mObservedPropertyName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGeneration ("atomicProxyGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGeneration result ;
  const GALGAS_atomicProxyGeneration * p = (const GALGAS_atomicProxyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicProxyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicProxyGenerationList : public cCollectionElement {
  public : GALGAS_atomicProxyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGeneration & in_mProperty
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicProxyGenerationList::cCollectionElement_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicProxyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicProxyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_atomicProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_atomicProxyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicProxyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicProxyGenerationList * operand = (cCollectionElement_atomicProxyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicProxyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList::GALGAS_atomicProxyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicProxyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::constructor_listWithValue (const GALGAS_atomicProxyGeneration & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicProxyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_atomicProxyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_atomicProxyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_atomicProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::addAssign_operation (const GALGAS_atomicProxyGeneration & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_append (GALGAS_atomicProxyGenerationList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_insertAtIndex (const GALGAS_atomicProxyGeneration inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicProxyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_removeAtIndex (GALGAS_atomicProxyGeneration & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_popFirst (GALGAS_atomicProxyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_popLast (GALGAS_atomicProxyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_first (GALGAS_atomicProxyGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::method_last (GALGAS_atomicProxyGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::add_operation (const GALGAS_atomicProxyGenerationList & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_atomicProxyGenerationList result = GALGAS_atomicProxyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::plusAssign_operation (const GALGAS_atomicProxyGenerationList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicProxyGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicProxyGenerationList * p = (cCollectionElement_atomicProxyGenerationList *) attributes.ptr () ;
  GALGAS_atomicProxyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_atomicProxyGenerationList::cEnumerator_atomicProxyGenerationList (const GALGAS_atomicProxyGenerationList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element cEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGeneration cEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicProxyGenerationList * p = (const cCollectionElement_atomicProxyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicProxyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGenerationList ("atomicProxyGenerationList",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList GALGAS_atomicProxyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList result ;
  const GALGAS_atomicProxyGenerationList * p = (const GALGAS_atomicProxyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsProxy.objectCompare (p->mProperty_mIsProxy) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValueInSwift.objectCompare (p->mProperty_mDefaultValueInSwift) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInPreferences.objectCompare (p->mProperty_mInPreferences) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicPropertyGeneration::objectCompare (const GALGAS_atomicPropertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration::GALGAS_atomicPropertyGeneration (const cPtr_atomicPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_bool & inAttribute_mNeedsValidation,
                                                                                  const GALGAS_typeKind & inAttribute_mType,
                                                                                  const GALGAS_bool & inAttribute_mIsProxy,
                                                                                  const GALGAS_string & inAttribute_mDefaultValueInSwift,
                                                                                  const GALGAS_bool & inAttribute_mInPreferences
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mNeedsValidation.isValid () && inAttribute_mType.isValid () && inAttribute_mIsProxy.isValid () && inAttribute_mDefaultValueInSwift.isValid () && inAttribute_mInPreferences.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyGeneration (inAttribute_mPropertyName, inAttribute_mNeedsValidation, inAttribute_mType, inAttribute_mIsProxy, inAttribute_mDefaultValueInSwift, inAttribute_mInPreferences COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cPtr_atomicPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mIsProxy ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mIsProxy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsProxy ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mDefaultValueInSwift ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_atomicPropertyGeneration::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueInSwift ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyGeneration * p = (const cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    result = p->mProperty_mInPreferences ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_atomicPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInPreferences ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mNeedsValidation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMNeedsValidation (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNeedsValidation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMIsProxy (GALGAS_bool inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mIsProxy = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMIsProxy (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsProxy = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMDefaultValueInSwift (GALGAS_string inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mDefaultValueInSwift = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMDefaultValueInSwift (GALGAS_string inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDefaultValueInSwift = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyGeneration) ;
    p->mProperty_mInPreferences = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInPreferences = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicPropertyGeneration::cPtr_atomicPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_bool & in_mNeedsValidation,
                                                              const GALGAS_typeKind & in_mType,
                                                              const GALGAS_bool & in_mIsProxy,
                                                              const GALGAS_string & in_mDefaultValueInSwift,
                                                              const GALGAS_bool & in_mInPreferences
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mNeedsValidation (in_mNeedsValidation),
mProperty_mType (in_mType),
mProperty_mIsProxy (in_mIsProxy),
mProperty_mDefaultValueInSwift (in_mDefaultValueInSwift),
mProperty_mInPreferences (in_mInPreferences) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

void cPtr_atomicPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@atomicPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsProxy.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyGeneration (mProperty_mPropertyName, mProperty_mNeedsValidation, mProperty_mType, mProperty_mIsProxy, mProperty_mDefaultValueInSwift, mProperty_mInPreferences COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGeneration ("atomicPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGeneration result ;
  const GALGAS_atomicPropertyGeneration * p = (const GALGAS_atomicPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@atomicPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_atomicPropertyGenerationList : public cCollectionElement {
  public : GALGAS_atomicPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_atomicPropertyGenerationList::cCollectionElement_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_atomicPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_atomicPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_atomicPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_atomicPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_atomicPropertyGenerationList * operand = (cCollectionElement_atomicPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_atomicPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList::GALGAS_atomicPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_atomicPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::constructor_listWithValue (const GALGAS_atomicPropertyGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_atomicPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::addAssign_operation (const GALGAS_atomicPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_append (GALGAS_atomicPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_insertAtIndex (const GALGAS_atomicPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_atomicPropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_removeAtIndex (GALGAS_atomicPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_popFirst (GALGAS_atomicPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_popLast (GALGAS_atomicPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_first (GALGAS_atomicPropertyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::method_last (GALGAS_atomicPropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::add_operation (const GALGAS_atomicPropertyGenerationList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_atomicPropertyGenerationList result = GALGAS_atomicPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::plusAssign_operation (const GALGAS_atomicPropertyGenerationList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_atomicPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_atomicPropertyGenerationList * p = (cCollectionElement_atomicPropertyGenerationList *) attributes.ptr () ;
  GALGAS_atomicPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_atomicPropertyGenerationList::cEnumerator_atomicPropertyGenerationList (const GALGAS_atomicPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element cEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGeneration cEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_atomicPropertyGenerationList * p = (const cCollectionElement_atomicPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_atomicPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList GALGAS_atomicPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList result ;
  const GALGAS_atomicPropertyGenerationList * p = (const GALGAS_atomicPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = dynamic_cast<const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship::GALGAS_toOneOppositeRelationship (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_oppositeIsToOne (const GALGAS_lstring & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToOne ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::constructor_oppositeIsToMany (const GALGAS_lstring & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_oppositeIsToMany ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToOne) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toOneOppositeRelationship oppositeIsToOne invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::method_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_oppositeIsToMany) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toOneOppositeRelationship oppositeIsToMany invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToOne (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToOne ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    // const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toOneOppositeRelationship::optional_oppositeIsToMany (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_oppositeIsToMany ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    // const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany * ptr = (const cEnumAssociatedValues_toOneOppositeRelationship_oppositeIsToMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toOneOppositeRelationship [4] = {
  "(not built)",
  "none",
  "oppositeIsToOne",
  "oppositeIsToMany"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToOne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToOne == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toOneOppositeRelationship::getter_isOppositeIsToMany (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_oppositeIsToMany == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOneOppositeRelationship::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @toOneOppositeRelationship: " << gEnumNameArrayFor_toOneOppositeRelationship [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toOneOppositeRelationship::objectCompare (const GALGAS_toOneOppositeRelationship & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@toOneOppositeRelationship type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneOppositeRelationship ("toOneOppositeRelationship",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOneOppositeRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOneOppositeRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneOppositeRelationship (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOneOppositeRelationship GALGAS_toOneOppositeRelationship::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOneOppositeRelationship result ;
  const GALGAS_toOneOppositeRelationship * p = (const GALGAS_toOneOppositeRelationship *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneOppositeRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap::cMapElement_propertyMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_propertyKind & in_mKind,
                                                  const GALGAS_actionMap & in_mActionMap,
                                                  const GALGAS_bool & in_mIsOverriding
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mActionMap (in_mActionMap),
mProperty_mIsOverriding (in_mIsOverriding) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_propertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mActionMap.isValid () && mProperty_mIsOverriding.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_propertyMap (mProperty_lkey, mProperty_mKind, mProperty_mActionMap, mProperty_mIsOverriding COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_propertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsOverriding" ":" ;
  mProperty_mIsOverriding.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_propertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyMap * operand = (cMapElement_propertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsOverriding.objectCompare (operand->mProperty_mIsOverriding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap::GALGAS_propertyMap (const GALGAS_propertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap & GALGAS_propertyMap::operator = (const GALGAS_propertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::constructor_mapWithMapToOverride (const GALGAS_propertyMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                              const GALGAS_propertyKind & inArgument0,
                                              const GALGAS_actionMap & inArgument1,
                                              const GALGAS_bool & inArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_insertKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind inArgument0,
                                           GALGAS_actionMap inArgument1,
                                           GALGAS_bool inArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * p = NULL ;
  macroMyNew (p, cMapElement_propertyMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyMap_searchKey = "there is no '%K' property" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::method_searchKey (GALGAS_lstring inKey,
                                           GALGAS_propertyKind & outArgument0,
                                           GALGAS_actionMap & outArgument1,
                                           GALGAS_bool & outArgument2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) performSearch (inKey,
                                                                                       inCompiler,
                                                                                       kSearchErrorMessage_propertyMap_searchKey
                                                                                       COMMA_THERE) ;
  if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_propertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_propertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyMap::getter_mIsOverridingForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    result = p->mProperty_mIsOverriding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                GALGAS_string inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyMap::setter_setMIsOverridingForKey (GALGAS_bool inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyMap * p = (cMapElement_propertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    p->mProperty_mIsOverriding = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_propertyMap * GALGAS_propertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_propertyMap * result = (cMapElement_propertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_propertyMap::cEnumerator_propertyMap (const GALGAS_propertyMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap_2D_element cEnumerator_propertyMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return GALGAS_propertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mActionMap, p->mProperty_mIsOverriding) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap cEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mActionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyMap) ;
  return p->mProperty_mIsOverriding ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyMap::optional_searchKey (const GALGAS_string & inKey,
                                             GALGAS_propertyKind & outArgument0,
                                             GALGAS_actionMap & outArgument1,
                                             GALGAS_bool & outArgument2) const {
  const cMapElement_propertyMap * p = (const cMapElement_propertyMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mActionMap ;
    outArgument2 = p->mProperty_mIsOverriding ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyMap GALGAS_propertyMap::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyMap result ;
  const GALGAS_propertyMap * p = (const GALGAS_propertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toOnePropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public : GALGAS_toOnePropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toOnePropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toOnePropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toOnePropertyGenerationList * operand = (cCollectionElement_toOnePropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toOnePropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList::GALGAS_toOnePropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toOnePropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::constructor_listWithValue (const GALGAS_toOnePropertyGeneration & inOperand0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toOnePropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_toOnePropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::addAssign_operation (const GALGAS_toOnePropertyGeneration & inOperand0
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_append (GALGAS_toOnePropertyGenerationList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_insertAtIndex (const GALGAS_toOnePropertyGeneration inOperand0,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_removeAtIndex (GALGAS_toOnePropertyGeneration & outOperand0,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_popFirst (GALGAS_toOnePropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_popLast (GALGAS_toOnePropertyGeneration & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_first (GALGAS_toOnePropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::method_last (GALGAS_toOnePropertyGeneration & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::add_operation (const GALGAS_toOnePropertyGenerationList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_toOnePropertyGenerationList result = GALGAS_toOnePropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::plusAssign_operation (const GALGAS_toOnePropertyGenerationList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toOnePropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toOnePropertyGeneration inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) attributes.ptr () ;
  GALGAS_toOnePropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toOnePropertyGenerationList::cEnumerator_toOnePropertyGenerationList (const GALGAS_toOnePropertyGenerationList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList_2D_element cEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGeneration cEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toOnePropertyGenerationList * p = (const cCollectionElement_toOnePropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toOnePropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toOnePropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toOnePropertyGenerationList GALGAS_toOnePropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGenerationList result ;
  const GALGAS_toOnePropertyGenerationList * p = (const GALGAS_toOnePropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST::GALGAS_toManyRelationshipOptionAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_hasOpposite (const GALGAS_lstring & inAssociatedValue0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::constructor_hasDependance (const GALGAS_lstring & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasOpposite (GALGAS_lstring & outAssociatedValue0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionAST hasOpposite invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::method_hasDependance (GALGAS_lstring & outAssociatedValue0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionAST hasDependance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasOpposite (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionAST::optional_hasDependance (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionAST_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionAST [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionAST::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<enum @toManyRelationshipOptionAST: " << gEnumNameArrayFor_toManyRelationshipOptionAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipOptionAST::objectCompare (const GALGAS_toManyRelationshipOptionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyRelationshipOptionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipOptionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionAST result ;
  const GALGAS_toManyRelationshipOptionAST * p = (const GALGAS_toManyRelationshipOptionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipOptionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = dynamic_cast<const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *> (inOperand) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration::GALGAS_toManyRelationshipOptionGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_hasOpposite (const GALGAS_string & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_hasOpposite ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::constructor_hasDependance (const GALGAS_string & inAssociatedValue0,
                                                                                                                const GALGAS_string & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_hasDependance ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasOpposite (GALGAS_string & outAssociatedValue0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasOpposite) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionGeneration hasOpposite invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::method_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                      GALGAS_string & outAssociatedValue1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_hasDependance) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @toManyRelationshipOptionGeneration hasDependance invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasOpposite (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_hasOpposite ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasOpposite *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyRelationshipOptionGeneration::optional_hasDependance (GALGAS_string & outAssociatedValue0,
                                                                        GALGAS_string & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_hasDependance ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    // const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance * ptr = (const cEnumAssociatedValues_toManyRelationshipOptionGeneration_hasDependance *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionGeneration [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasOpposite == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyRelationshipOptionGeneration::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_hasDependance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyRelationshipOptionGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<enum @toManyRelationshipOptionGeneration: " << gEnumNameArrayFor_toManyRelationshipOptionGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyRelationshipOptionGeneration::objectCompare (const GALGAS_toManyRelationshipOptionGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyRelationshipOptionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ("toManyRelationshipOptionGeneration",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyRelationshipOptionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyRelationshipOptionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipOptionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyRelationshipOptionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipOptionGeneration result ;
  const GALGAS_toManyRelationshipOptionGeneration * p = (const GALGAS_toManyRelationshipOptionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipOptionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_toManyPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInPreferences.objectCompare (p->mProperty_mInPreferences) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomStore.objectCompare (p->mProperty_mCustomStore) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUsedForSignature.objectCompare (p->mProperty_mUsedForSignature) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_toManyPropertyGeneration::objectCompare (const GALGAS_toManyPropertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration::GALGAS_toManyPropertyGeneration (const cPtr_toManyPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                  const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                  const GALGAS_toManyRelationshipOptionGeneration & inAttribute_mOption,
                                                                                  const GALGAS_bool & inAttribute_mInPreferences,
                                                                                  const GALGAS_bool & inAttribute_mCustomStore,
                                                                                  const GALGAS_bool & inAttribute_mUsedForSignature
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOption.isValid () && inAttribute_mInPreferences.isValid () && inAttribute_mCustomStore.isValid () && inAttribute_mUsedForSignature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyPropertyGeneration (inAttribute_mPropertyName, inAttribute_mRelationshipType, inAttribute_mOption, inAttribute_mInPreferences, inAttribute_mCustomStore, inAttribute_mUsedForSignature COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_toManyPropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cPtr_toManyPropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration GALGAS_toManyPropertyGeneration::getter_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipOptionGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mOption ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyRelationshipOptionGeneration cPtr_toManyPropertyGeneration::getter_mOption (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOption ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mInPreferences ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toManyPropertyGeneration::getter_mInPreferences (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInPreferences ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::getter_mCustomStore (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mCustomStore ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toManyPropertyGeneration::getter_mCustomStore (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomStore ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_toManyPropertyGeneration::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyPropertyGeneration * p = (const cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    result = p->mProperty_mUsedForSignature ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_toManyPropertyGeneration::getter_mUsedForSignature (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUsedForSignature ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mRelationshipType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::setter_setMRelationshipType (GALGAS_propertyKind inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRelationshipType = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMOption (GALGAS_toManyRelationshipOptionGeneration inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mOption = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::setter_setMOption (GALGAS_toManyRelationshipOptionGeneration inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOption = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mInPreferences = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::setter_setMInPreferences (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInPreferences = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMCustomStore (GALGAS_bool inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mCustomStore = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::setter_setMCustomStore (GALGAS_bool inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mCustomStore = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyPropertyGeneration) ;
    p->mProperty_mUsedForSignature = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_toManyPropertyGeneration::setter_setMUsedForSignature (GALGAS_bool inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mUsedForSignature = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @toManyPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_toManyPropertyGeneration::cPtr_toManyPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                              const GALGAS_propertyKind & in_mRelationshipType,
                                                              const GALGAS_toManyRelationshipOptionGeneration & in_mOption,
                                                              const GALGAS_bool & in_mInPreferences,
                                                              const GALGAS_bool & in_mCustomStore,
                                                              const GALGAS_bool & in_mUsedForSignature
                                                              COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOption (in_mOption),
mProperty_mInPreferences (in_mInPreferences),
mProperty_mCustomStore (in_mCustomStore),
mProperty_mUsedForSignature (in_mUsedForSignature) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_toManyPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

void cPtr_toManyPropertyGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@toManyPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInPreferences.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomStore.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toManyPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyPropertyGeneration (mProperty_mPropertyName, mProperty_mRelationshipType, mProperty_mOption, mProperty_mInPreferences, mProperty_mCustomStore, mProperty_mUsedForSignature COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGeneration ("toManyPropertyGeneration",
                                                 & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGeneration result ;
  const GALGAS_toManyPropertyGeneration * p = (const GALGAS_toManyPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@toManyPropertyGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_toManyPropertyGenerationList : public cCollectionElement {
  public : GALGAS_toManyPropertyGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_toManyPropertyGenerationList::cCollectionElement_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_toManyPropertyGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toManyPropertyGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_toManyPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_toManyPropertyGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProperty" ":" ;
  mObject.mProperty_mProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_toManyPropertyGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_toManyPropertyGenerationList * operand = (cCollectionElement_toManyPropertyGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_toManyPropertyGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList::GALGAS_toManyPropertyGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyPropertyGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::constructor_listWithValue (const GALGAS_toManyPropertyGeneration & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_toManyPropertyGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_toManyPropertyGeneration & in_mProperty
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::addAssign_operation (const GALGAS_toManyPropertyGeneration & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_append (GALGAS_toManyPropertyGenerationList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_insertAtIndex (const GALGAS_toManyPropertyGeneration inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_toManyPropertyGenerationList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_removeAtIndex (GALGAS_toManyPropertyGeneration & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
        outOperand0 = p->mObject.mProperty_mProperty ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_popFirst (GALGAS_toManyPropertyGeneration & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_popLast (GALGAS_toManyPropertyGeneration & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_first (GALGAS_toManyPropertyGeneration & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::method_last (GALGAS_toManyPropertyGeneration & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    outOperand0 = p->mObject.mProperty_mProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::add_operation (const GALGAS_toManyPropertyGenerationList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_toManyPropertyGenerationList result = GALGAS_toManyPropertyGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::plusAssign_operation (const GALGAS_toManyPropertyGenerationList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList::setter_setMPropertyAtIndex (GALGAS_toManyPropertyGeneration inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList::getter_mPropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_toManyPropertyGenerationList * p = (cCollectionElement_toManyPropertyGenerationList *) attributes.ptr () ;
  GALGAS_toManyPropertyGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
    result = p->mObject.mProperty_mProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_toManyPropertyGenerationList::cEnumerator_toManyPropertyGenerationList (const GALGAS_toManyPropertyGenerationList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element cEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGeneration cEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  const cCollectionElement_toManyPropertyGenerationList * p = (const cCollectionElement_toManyPropertyGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_toManyPropertyGenerationList) ;
  return p->mObject.mProperty_mProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList ("toManyPropertyGenerationList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList GALGAS_toManyPropertyGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList result ;
  const GALGAS_toManyPropertyGenerationList * p = (const GALGAS_toManyPropertyGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@validationStubRoutineListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public : GALGAS_validationStubRoutineListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                      const GALGAS_string & in_mModelName,
                                                                      const GALGAS_string & in_mModelTypeName
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                                                                      const GALGAS_string & in_mModelName,
                                                                                                                      const GALGAS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_validationStubRoutineListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_validationStubRoutineListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_validationStubRoutineListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObjectTypeName" ":" ;
  mObject.mProperty_mObjectTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelName" ":" ;
  mObject.mProperty_mModelName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_validationStubRoutineListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_validationStubRoutineListForGeneration * operand = (cCollectionElement_validationStubRoutineListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_validationStubRoutineListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_string & in_mObjectTypeName,
                                                                               const GALGAS_string & in_mModelName,
                                                                               const GALGAS_string & in_mModelTypeName
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (in_mObjectTypeName,
                                                                            in_mModelName,
                                                                            in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_append (GALGAS_validationStubRoutineListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mObjectTypeName ;
        outOperand1 = p->mObject.mProperty_mModelName ;
        outOperand2 = p->mObject.mProperty_mModelTypeName ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                     GALGAS_string & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                    GALGAS_string & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mObjectTypeName ;
    outOperand1 = p->mObject.mProperty_mModelName ;
    outOperand2 = p->mObject.mProperty_mModelTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::add_operation (const GALGAS_validationStubRoutineListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObjectTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mObjectTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelNameAtIndex (GALGAS_string inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration::setter_setMModelTypeNameAtIndex (GALGAS_string inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_validationStubRoutineListForGeneration * p = (cCollectionElement_validationStubRoutineListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_validationStubRoutineListForGeneration::cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element cEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelTypeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@validationStubRoutineListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration result ;
  const GALGAS_validationStubRoutineListForGeneration * p = (const GALGAS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_actionMap::cMapElement_actionMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_actionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_actionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actionMap * operand = (cMapElement_actionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap::GALGAS_actionMap (const GALGAS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap & GALGAS_actionMap::operator = (const GALGAS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::constructor_mapWithMapToOverride (const GALGAS_actionMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@actionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::setter_insertKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * p = NULL ;
  macroMyNew (p, cMapElement_actionMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionMap::method_searchKey (GALGAS_lstring inKey,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_actionMap_searchKey
                                                                                   COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_actionMap * GALGAS_actionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actionMap::cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap_2D_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GALGAS_actionMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actionMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_actionMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@actionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionMap GALGAS_actionMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  const GALGAS_actionMap * p = (const GALGAS_actionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_actionFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_actionFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionName.objectCompare (p->mProperty_mActionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_actionFileGeneration::objectCompare (const GALGAS_actionFileGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_actionFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration::GALGAS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::constructor_new (const GALGAS_string & inAttribute_mClassName,
                                                                          const GALGAS_string & inAttribute_mActionName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mActionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_actionFileGeneration (inAttribute_mClassName, inAttribute_mActionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_actionFileGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionFileGeneration::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_actionFileGeneration * p = (const cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    result = p->mProperty_mActionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_actionFileGeneration::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMClassName (GALGAS_string inValue
                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::setter_setMClassName (GALGAS_string inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mClassName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionFileGeneration::setter_setMActionName (GALGAS_string inValue
                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::setter_setMActionName (GALGAS_string inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActionName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GALGAS_string & in_mClassName,
                                                      const GALGAS_string & in_mActionName
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mActionName (in_mActionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@actionFileGeneration:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_actionFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@actionFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionFileGeneration GALGAS_actionFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionFileGeneration result ;
  const GALGAS_actionFileGeneration * p = (const GALGAS_actionFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lower () const {
  const bool ok = mEnum == kEnum_lower ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greater () const {
  const bool ok = mEnum == kEnum_greater ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingComparisonAST::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingComparisonAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @multipleBindingComparisonAST: " << gEnumNameArrayFor_multipleBindingComparisonAST [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@multipleBindingComparisonAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_abstractBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionAST * p = (const GALGAS_abstractBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionAST::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mBinding (in_mBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionAST:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  const GALGAS_negateBooleanMultipleBindingExpressionAST * p = (const GALGAS_negateBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperator = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

void cPtr_comparisonMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionAST result ;
  const GALGAS_comparisonMultipleBindingExpressionAST * p = (const GALGAS_comparisonMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

void cPtr_andBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  const GALGAS_andBooleanMultipleBindingExpressionAST * p = (const GALGAS_andBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

void cPtr_orBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  const GALGAS_orBooleanMultipleBindingExpressionAST * p = (const GALGAS_orBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

void cPtr_xorBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionAST:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  const GALGAS_xorBooleanMultipleBindingExpressionAST * p = (const GALGAS_xorBooleanMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    result = p->mProperty_mProperty ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAST cPtr_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyInMultipleBindingExpressionAST::setter_setMProperty (GALGAS_observablePropertyAST inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    p->mProperty_mProperty = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::setter_setMProperty (GALGAS_observablePropertyAST inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mProperty = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyInMultipleBindingExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyInMultipleBindingExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  const GALGAS_observablePropertyInMultipleBindingExpressionAST * p = (const GALGAS_observablePropertyInMultipleBindingExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyInMultipleBindingExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyInMultipleBindingExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservedModelString.objectCompare (p->mProperty_mObservedModelString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_string & inAttribute_mObservedModelString
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModelString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModelString COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mObservedModelString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedModelString ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setter_setMObservedModelString (GALGAS_string inValue
                                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mObservedModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::setter_setMObservedModelString (GALGAS_string inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mObservedModelString = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModelString
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mObservedModelString (in_mObservedModelString) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModelString COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyAsBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_booleanMultipleBindingLiteralIntForGeneration::objectCompare (const GALGAS_booleanMultipleBindingLiteralIntForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_booleanMultipleBindingLiteralIntForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    p->mProperty_mValue = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_booleanMultipleBindingLiteralIntForGeneration::setter_setMValue (GALGAS_uint inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mValue = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @booleanMultipleBindingLiteralIntForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@booleanMultipleBindingLiteralIntForGeneration:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@booleanMultipleBindingLiteralIntForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  const GALGAS_booleanMultipleBindingLiteralIntForGeneration * p = (const GALGAS_booleanMultipleBindingLiteralIntForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_booleanMultipleBindingLiteralIntForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("booleanMultipleBindingLiteralIntForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_negateBooleanMultipleBindingExpressionForGeneration::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::setter_setMBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mBinding (in_mBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@negateBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_negateBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_negateBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("negateBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_orBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@orBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_orBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_orBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_xorBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@xorBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_xorBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_andBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@andBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_andBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_andBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftBinding.objectCompare (p->mProperty_mLeftBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOperator.objectCompare (p->mProperty_mOperator) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightBinding.objectCompare (p->mProperty_mRightBinding) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_multipleBindingComparisonAST & inAttribute_mOperator,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mOperator.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mOperator, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mLeftBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionForGeneration::setter_setMLeftBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mOperator = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionForGeneration::setter_setMOperator (GALGAS_multipleBindingComparisonAST inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOperator = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    p->mProperty_mRightBinding = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionForGeneration::setter_setMRightBinding (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightBinding = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

void cPtr_comparisonMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@comparisonMultipleBindingExpressionForGeneration:" ;
  mProperty_mLeftBinding.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonMultipleBindingExpressionForGeneration result ;
  const GALGAS_comparisonMultipleBindingExpressionForGeneration * p = (const GALGAS_comparisonMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                              const GALGAS_bool constin_inPreferences,
                                                              const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                                              const GALGAS_semanticContext constin_inSemanticContext,
                                                              const GALGAS_propertyMap constin_inCurrentObservablePropertyMap,
                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & out_outEnableExpression,
                                                              GALGAS_typeKind & out_outType,
                                                              GALGAS_location & out_outErrorLocation,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnableExpression.drop () ;
  out_outType.drop () ;
  out_outErrorLocation.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
      f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.count ()) {
          f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
      f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.count ()) {
           f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST::GALGAS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::constructor_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootToManyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::constructor_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  result.mEnum = kEnum_selfToManyRelationship ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::method_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootToManyRelationship) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerBoundModelAST rootToManyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_rootToManyRelationship ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    // const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerBoundModelAST_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerBoundModelAST::optional_selfToManyRelationship () const {
  const bool ok = mEnum == kEnum_selfToManyRelationship ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootToManyRelationship == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfToManyRelationship == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBoundModelAST::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<enum @arrayControllerBoundModelAST: " << gEnumNameArrayFor_arrayControllerBoundModelAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayControllerBoundModelAST::objectCompare (const GALGAS_arrayControllerBoundModelAST & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerBoundModelAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerBoundModelAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundModelAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBoundModelAST GALGAS_arrayControllerBoundModelAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundModelAST result ;
  const GALGAS_arrayControllerBoundModelAST * p = (const GALGAS_arrayControllerBoundModelAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundModelAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayControllerPropertyGeneration::objectCompare (const GALGAS_arrayControllerPropertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_string::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration::GALGAS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                    const GALGAS_string & inAttribute_mModelString,
                                                                                                    const GALGAS_string & inAttribute_mOwnerName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerPropertyGeneration * p = (const cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelString = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_arrayControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                const GALGAS_string & in_mModelString,
                                                                                const GALGAS_string & in_mOwnerName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@arrayControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                          & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerPropertyGeneration GALGAS_arrayControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerPropertyGeneration result ;
  const GALGAS_arrayControllerPropertyGeneration * p = (const GALGAS_arrayControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind::GALGAS_arrayControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerModelKind GALGAS_arrayControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_arrayControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerModelKind::description (C_String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString << "<enum @arrayControllerModelKind: " << gEnumNameArrayFor_arrayControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerBoundColumnListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerBoundColumnListAST : public cCollectionElement {
  public : GALGAS_tableViewControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                     const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                     const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                     const GALGAS_lstring & in_mSortPropertyName
                                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListAST::cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                                                                    const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                                    const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                                                                    const GALGAS_lstring & in_mSortPropertyName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListAST::cCollectionElement_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mColumnBindingAST, inElement.mProperty_mSortPropertyName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerBoundColumnListAST (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mColumnBindingAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnBindingAST" ":" ;
  mObject.mProperty_mColumnBindingAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyName" ":" ;
  mObject.mProperty_mSortPropertyName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerBoundColumnListAST * operand = (cCollectionElement_tableViewControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST::GALGAS_tableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST::GALGAS_tableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                                      const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                                                                      const GALGAS_lstring & inOperand3
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_lstring & in_mColumnName,
                                                                              const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                              const GALGAS_tableViewColumnBindingAST & in_mColumnBindingAST,
                                                                              const GALGAS_lstring & in_mSortPropertyName
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (in_mColumnName,
                                                                           in_mColumnOutletTypeName,
                                                                           in_mColumnBindingAST,
                                                                           in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_tableViewColumnBindingAST & inOperand2,
                                                                        const GALGAS_lstring & inOperand3
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_append (GALGAS_tableViewControllerBoundColumnListAST_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_tableViewColumnBindingAST inOperand2,
                                                                         const GALGAS_lstring inOperand3,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                         GALGAS_lstring & outOperand3,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
        outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
        outOperand3 = p->mObject.mProperty_mSortPropertyName ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                    GALGAS_lstring & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                   GALGAS_lstring & outOperand3,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::method_first (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                 GALGAS_lstring & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::method_last (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_tableViewColumnBindingAST & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::add_operation (const GALGAS_tableViewControllerBoundColumnListAST & inOperand,
                                                                                                          C_Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListAST result = GALGAS_tableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListAST inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnOutletTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMColumnBindingASTAtIndex (GALGAS_tableViewColumnBindingAST inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnBindingAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST GALGAS_tableViewControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_tableViewColumnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnBindingAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListAST * p = (cCollectionElement_tableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerBoundColumnListAST::cEnumerator_tableViewControllerBoundColumnListAST (const GALGAS_tableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST_2D_element cEnumerator_tableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewColumnBindingAST cEnumerator_tableViewControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnBindingAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListAST * p = (const cCollectionElement_tableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerBoundColumnListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST ("tableViewControllerBoundColumnListAST",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListAST GALGAS_tableViewControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListAST result ;
  const GALGAS_tableViewControllerBoundColumnListAST * p = (const GALGAS_tableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerAttributListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerAttributListAST : public cCollectionElement {
  public : GALGAS_tableViewControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                  const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerAttributListAST::cCollectionElement_tableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                              const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerAttributListAST::cCollectionElement_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerAttributListAST * operand = (cCollectionElement_tableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST::GALGAS_tableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST::GALGAS_tableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerAttributListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_abstractDefaultValue & inOperand1
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewControllerAttributListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerAttributListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GALGAS_lstring & in_mAttributeName,
                                                                           const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (in_mAttributeName,
                                                                        in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                     const GALGAS_abstractDefaultValue & inOperand1
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_append (GALGAS_tableViewControllerAttributListAST_2D_element inElement,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                      const GALGAS_abstractDefaultValue inOperand1,
                                                                      const GALGAS_uint inInsertionIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                      GALGAS_abstractDefaultValue & outOperand1,
                                                                      const GALGAS_uint inRemoveIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                 GALGAS_abstractDefaultValue & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                              GALGAS_abstractDefaultValue & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                             GALGAS_abstractDefaultValue & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::add_operation (const GALGAS_tableViewControllerAttributListAST & inOperand,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerAttributListAST result = GALGAS_tableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::plusAssign_operation (const GALGAS_tableViewControllerAttributListAST inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_tableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_tableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerAttributListAST * p = (cCollectionElement_tableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerAttributListAST::cEnumerator_tableViewControllerAttributListAST (const GALGAS_tableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST_2D_element cEnumerator_tableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_tableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_tableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerAttributListAST * p = (const cCollectionElement_tableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerAttributListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerAttributListAST ("tableViewControllerAttributListAST",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerAttributListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerAttributListAST GALGAS_tableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerAttributListAST result ;
  const GALGAS_tableViewControllerAttributListAST * p = (const GALGAS_tableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tableViewControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tableViewControllerPropertyGeneration * p = (const cPtr_tableViewControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tableViewControllerPropertyGeneration::objectCompare (const GALGAS_tableViewControllerPropertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration::GALGAS_tableViewControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_tableViewControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration::GALGAS_tableViewControllerPropertyGeneration (const cPtr_tableViewControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tableViewControllerPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                            const GALGAS_string & inAttribute_mModelString,
                                                                                                            const GALGAS_string & inAttribute_mOwnerName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tableViewControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerPropertyGeneration * p = (const cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_tableViewControllerPropertyGeneration * p = (const cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_tableViewControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelString = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_tableViewControllerPropertyGeneration * p = (cPtr_tableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tableViewControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_tableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tableViewControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tableViewControllerPropertyGeneration::cPtr_tableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                        const GALGAS_string & in_mModelString,
                                                                                        const GALGAS_string & in_mOwnerName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;
}

void cPtr_tableViewControllerPropertyGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@tableViewControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tableViewControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ("tableViewControllerPropertyGeneration",
                                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerPropertyGeneration GALGAS_tableViewControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerPropertyGeneration result ;
  const GALGAS_tableViewControllerPropertyGeneration * p = (const GALGAS_tableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind::GALGAS_tableViewControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerModelKind::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @tableViewControllerModelKind: " << gEnumNameArrayFor_tableViewControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tableViewControllerModelKind::objectCompare (const GALGAS_tableViewControllerModelKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerModelKind ("tableViewControllerModelKind",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerModelKind GALGAS_tableViewControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerModelKind result ;
  const GALGAS_tableViewControllerModelKind * p = (const GALGAS_tableViewControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerBoundColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                               const GALGAS_string & in_mColumnOutletTypeName,
                                                                               const GALGAS_string & in_mRunAction,
                                                                               const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListForGeneration::cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                        const GALGAS_string & in_mColumnOutletTypeName,
                                                                                                                                        const GALGAS_string & in_mRunAction,
                                                                                                                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mRunAction, in_mRegularBindingsGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerBoundColumnListForGeneration::cCollectionElement_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mRegularBindingsGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerBoundColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mRegularBindingsGenerationList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * operand = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration::GALGAS_tableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration::GALGAS_tableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mColumnName,
                                                                                        const GALGAS_string & in_mColumnOutletTypeName,
                                                                                        const GALGAS_string & in_mRunAction,
                                                                                        const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (in_mColumnName,
                                                                                     in_mColumnOutletTypeName,
                                                                                     in_mRunAction,
                                                                                     in_mRegularBindingsGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2,
                                                                                  const GALGAS_regularBindingsGenerationList & inOperand3
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_append (GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                   const GALGAS_string inOperand1,
                                                                                   const GALGAS_string inOperand2,
                                                                                   const GALGAS_regularBindingsGenerationList inOperand3,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                   GALGAS_string & outOperand1,
                                                                                   GALGAS_string & outOperand2,
                                                                                   GALGAS_regularBindingsGenerationList & outOperand3,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mColumnName ;
        outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
        outOperand2 = p->mObject.mProperty_mRunAction ;
        outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                              GALGAS_string & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              GALGAS_regularBindingsGenerationList & outOperand3,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                             GALGAS_string & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             GALGAS_regularBindingsGenerationList & outOperand3,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           GALGAS_regularBindingsGenerationList & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_regularBindingsGenerationList & outOperand3,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mRunAction ;
    outOperand3 = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::add_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerBoundColumnListForGeneration result = GALGAS_tableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_tableViewControllerBoundColumnListForGeneration inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMColumnOutletTypeNameAtIndex (GALGAS_string inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GALGAS_string inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunAction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerBoundColumnListForGeneration::setter_setMRegularBindingsGenerationListAtIndex (GALGAS_regularBindingsGenerationList inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingsGenerationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_tableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerBoundColumnListForGeneration::cEnumerator_tableViewControllerBoundColumnListForGeneration (const GALGAS_tableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element cEnumerator_tableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cEnumerator_tableViewControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_tableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerBoundColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ("tableViewControllerBoundColumnListForGeneration",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerBoundColumnListForGeneration GALGAS_tableViewControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration result ;
  const GALGAS_tableViewControllerBoundColumnListForGeneration * p = (const GALGAS_tableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewControllerSortedColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewControllerSortedColumnListForGeneration : public cCollectionElement {
  public : GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                const GALGAS_string & in_mObservablePropertyForSorting
                                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewControllerSortedColumnListForGeneration (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerSortedColumnListForGeneration::cCollectionElement_tableViewControllerSortedColumnListForGeneration (const GALGAS_string & in_mColumnName,
                                                                                                                                          const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                                                                          const GALGAS_string & in_mObservablePropertyForSorting
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewControllerSortedColumnListForGeneration::cCollectionElement_tableViewControllerSortedColumnListForGeneration (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewControllerSortedColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewControllerSortedColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewControllerSortedColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSortPropertyKind" ":" ;
  mObject.mProperty_mSortPropertyKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyForSorting" ":" ;
  mObject.mProperty_mObservablePropertyForSorting.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewControllerSortedColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * operand = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration::GALGAS_tableViewControllerSortedColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration::GALGAS_tableViewControllerSortedColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerSortedColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                            const GALGAS_propertyKind & inOperand1,
                                                                                                                                            const GALGAS_string & inOperand2
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tableViewControllerSortedColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_string & in_mColumnName,
                                                                                         const GALGAS_propertyKind & in_mSortPropertyKind,
                                                                                         const GALGAS_string & in_mObservablePropertyForSorting
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration (in_mColumnName,
                                                                                      in_mSortPropertyKind,
                                                                                      in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                   const GALGAS_propertyKind & inOperand1,
                                                                                   const GALGAS_string & inOperand2
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_append (GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element inElement,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                    const GALGAS_propertyKind inOperand1,
                                                                                    const GALGAS_string inOperand2,
                                                                                    const GALGAS_uint inInsertionIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                    GALGAS_propertyKind & outOperand1,
                                                                                    GALGAS_string & outOperand2,
                                                                                    const GALGAS_uint inRemoveIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                               GALGAS_propertyKind & outOperand1,
                                                                               GALGAS_string & outOperand2,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                              GALGAS_propertyKind & outOperand1,
                                                                              GALGAS_string & outOperand2,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                            GALGAS_propertyKind & outOperand1,
                                                                            GALGAS_string & outOperand2,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::method_last (GALGAS_string & outOperand0,
                                                                           GALGAS_propertyKind & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mSortPropertyKind ;
    outOperand2 = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::add_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result = GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result = GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewControllerSortedColumnListForGeneration result = GALGAS_tableViewControllerSortedColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::plusAssign_operation (const GALGAS_tableViewControllerSortedColumnListForGeneration inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_setMSortPropertyKindAtIndex (GALGAS_propertyKind inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSortPropertyKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind GALGAS_tableViewControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mSortPropertyKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewControllerSortedColumnListForGeneration::setter_setMObservablePropertyForSortingAtIndex (GALGAS_string inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservablePropertyForSorting = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (cCollectionElement_tableViewControllerSortedColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
    result = p->mObject.mProperty_mObservablePropertyForSorting ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewControllerSortedColumnListForGeneration::cEnumerator_tableViewControllerSortedColumnListForGeneration (const GALGAS_tableViewControllerSortedColumnListForGeneration & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element cEnumerator_tableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_tableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_tableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyKind cEnumerator_tableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_tableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mSortPropertyKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  const cCollectionElement_tableViewControllerSortedColumnListForGeneration * p = (const cCollectionElement_tableViewControllerSortedColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewControllerSortedColumnListForGeneration) ;
  return p->mObject.mProperty_mObservablePropertyForSorting ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewControllerSortedColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration ("tableViewControllerSortedColumnListForGeneration",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewControllerSortedColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerSortedColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewControllerSortedColumnListForGeneration GALGAS_tableViewControllerSortedColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration result ;
  const GALGAS_tableViewControllerSortedColumnListForGeneration * p = (const GALGAS_tableViewControllerSortedColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerSortedColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerSortedColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST : public cCollectionElement {
  public : GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_bool & in_mEditable,
                                                                               const GALGAS_lstring & in_mPropertyName,
                                                                               const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                               const GALGAS_autoLayoutTableViewColumnBindingAST & in_mColumnBindingAST,
                                                                               const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                               const GALGAS_bool & in_mSorted
                                                                               COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_bool & in_mEditable,
                                                                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                                                                        const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                                                        const GALGAS_autoLayoutTableViewColumnBindingAST & in_mColumnBindingAST,
                                                                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                        const GALGAS_bool & in_mSorted
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mColumnParameterListAST, in_mSorted) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mColumnBindingAST, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSorted) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mColumnBindingAST, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSorted COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEditable" ":" ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPropertyName" ":" ;
  mObject.mProperty_mPropertyName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnOutletTypeName" ":" ;
  mObject.mProperty_mColumnOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnBindingAST" ":" ;
  mObject.mProperty_mColumnBindingAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnParameterListAST" ":" ;
  mObject.mProperty_mColumnParameterListAST.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSorted" ":" ;
  mObject.mProperty_mSorted.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST::GALGAS_autoLayoutTableViewControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                                          const GALGAS_autoLayoutTableViewColumnBindingAST & inOperand3,
                                                                                                                                          const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand4,
                                                                                                                                          const GALGAS_bool & inOperand5
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_bool & in_mEditable,
                                                                                        const GALGAS_lstring & in_mPropertyName,
                                                                                        const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                        const GALGAS_autoLayoutTableViewColumnBindingAST & in_mColumnBindingAST,
                                                                                        const GALGAS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                        const GALGAS_bool & in_mSorted
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable,
                                                                                     in_mPropertyName,
                                                                                     in_mColumnOutletTypeName,
                                                                                     in_mColumnBindingAST,
                                                                                     in_mColumnParameterListAST,
                                                                                     in_mSorted COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_autoLayoutTableViewColumnBindingAST & inOperand3,
                                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand4,
                                                                                  const GALGAS_bool & inOperand5
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                   const GALGAS_lstring inOperand1,
                                                                                   const GALGAS_lstring inOperand2,
                                                                                   const GALGAS_autoLayoutTableViewColumnBindingAST inOperand3,
                                                                                   const GALGAS_astAutoLayoutViewInstructionParameterList inOperand4,
                                                                                   const GALGAS_bool inOperand5,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                   GALGAS_lstring & outOperand1,
                                                                                   GALGAS_lstring & outOperand2,
                                                                                   GALGAS_autoLayoutTableViewColumnBindingAST & outOperand3,
                                                                                   GALGAS_astAutoLayoutViewInstructionParameterList & outOperand4,
                                                                                   GALGAS_bool & outOperand5,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
        outOperand0 = p->mObject.mProperty_mEditable ;
        outOperand1 = p->mObject.mProperty_mPropertyName ;
        outOperand2 = p->mObject.mProperty_mColumnOutletTypeName ;
        outOperand3 = p->mObject.mProperty_mColumnBindingAST ;
        outOperand4 = p->mObject.mProperty_mColumnParameterListAST ;
        outOperand5 = p->mObject.mProperty_mSorted ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GALGAS_bool & outOperand0,
                                                                              GALGAS_lstring & outOperand1,
                                                                              GALGAS_lstring & outOperand2,
                                                                              GALGAS_autoLayoutTableViewColumnBindingAST & outOperand3,
                                                                              GALGAS_astAutoLayoutViewInstructionParameterList & outOperand4,
                                                                              GALGAS_bool & outOperand5,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand3 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand4 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand5 = p->mObject.mProperty_mSorted ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GALGAS_bool & outOperand0,
                                                                             GALGAS_lstring & outOperand1,
                                                                             GALGAS_lstring & outOperand2,
                                                                             GALGAS_autoLayoutTableViewColumnBindingAST & outOperand3,
                                                                             GALGAS_astAutoLayoutViewInstructionParameterList & outOperand4,
                                                                             GALGAS_bool & outOperand5,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand3 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand4 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand5 = p->mObject.mProperty_mSorted ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GALGAS_bool & outOperand0,
                                                                           GALGAS_lstring & outOperand1,
                                                                           GALGAS_lstring & outOperand2,
                                                                           GALGAS_autoLayoutTableViewColumnBindingAST & outOperand3,
                                                                           GALGAS_astAutoLayoutViewInstructionParameterList & outOperand4,
                                                                           GALGAS_bool & outOperand5,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand3 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand4 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand5 = p->mObject.mProperty_mSorted ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GALGAS_bool & outOperand0,
                                                                          GALGAS_lstring & outOperand1,
                                                                          GALGAS_lstring & outOperand2,
                                                                          GALGAS_autoLayoutTableViewColumnBindingAST & outOperand3,
                                                                          GALGAS_astAutoLayoutViewInstructionParameterList & outOperand4,
                                                                          GALGAS_bool & outOperand5,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mPropertyName ;
    outOperand2 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand3 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand4 = p->mObject.mProperty_mColumnParameterListAST ;
    outOperand5 = p->mObject.mProperty_mSorted ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GALGAS_lstring inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPropertyName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mPropertyName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnOutletTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnBindingASTAtIndex (GALGAS_autoLayoutTableViewColumnBindingAST inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnBindingAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewColumnBindingAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_autoLayoutTableViewColumnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnBindingAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                       GALGAS_uint inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnParameterListAST = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnParameterListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortedAtIndex (GALGAS_bool inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSorted = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortedAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSorted ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::cEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mEditable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mPropertyName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewColumnBindingAST cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnBindingAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnParameterListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSorted (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSorted ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListAST GALGAS_autoLayoutTableViewControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListAST * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerAttributListAST : public cCollectionElement {
  public : GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                            const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                                                                  const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerAttributListAST::cCollectionElement_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerAttributListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerAttributListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeValue" ":" ;
  mObject.mProperty_mAttributeValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerAttributListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * operand = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST::GALGAS_autoLayoutTableViewControllerAttributListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerAttributListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mAttributeName,
                                                                                     const GALGAS_abstractDefaultValue & in_mAttributeValue
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (in_mAttributeName,
                                                                                  in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_abstractDefaultValue & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_append (GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_abstractDefaultValue inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_abstractDefaultValue & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
      if (NULL == p) {
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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_abstractDefaultValue & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_abstractDefaultValue & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_abstractDefaultValue & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_abstractDefaultValue & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::add_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerAttributListAST result = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerAttributListAST inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GALGAS_abstractDefaultValue inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue GALGAS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (cCollectionElement_autoLayoutTableViewControllerAttributListAST *) attributes.ptr () ;
  GALGAS_abstractDefaultValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
    result = p->mObject.mProperty_mAttributeValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerAttributListAST::cEnumerator_autoLayoutTableViewControllerAttributListAST (const GALGAS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST_2D_element cEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue cEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerAttributListAST * p = (const cCollectionElement_autoLayoutTableViewControllerAttributListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerAttributListAST) ;
  return p->mObject.mProperty_mAttributeValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerAttributListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerAttributListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerAttributListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerAttributListAST GALGAS_autoLayoutTableViewControllerAttributListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerAttributListAST result ;
  const GALGAS_autoLayoutTableViewControllerAttributListAST * p = (const GALGAS_autoLayoutTableViewControllerAttributListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerAttributListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutTableViewControllerPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (const cPtr_autoLayoutTableViewControllerPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelString.objectCompare (p->mProperty_mModelString) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOwnerName.objectCompare (p->mProperty_mOwnerName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutTableViewControllerPropertyGeneration::objectCompare (const GALGAS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                                  GALGAS_string::constructor_default (HERE),
                                                                                  GALGAS_string::constructor_default (HERE)
                                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration::GALGAS_autoLayoutTableViewControllerPropertyGeneration (const cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                                                                const GALGAS_string & inAttribute_mModelString,
                                                                                                                                const GALGAS_string & inAttribute_mOwnerName
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mModelString.isValid () && inAttribute_mOwnerName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutTableViewControllerPropertyGeneration (inAttribute_mPropertyName, inAttribute_mModelString, inAttribute_mOwnerName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (const cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    result = p->mProperty_mModelString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (const cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerPropertyGeneration::setter_setMModelString (GALGAS_string inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mModelString = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerPropertyGeneration::setter_setMOwnerName (GALGAS_string inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOwnerName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                                                            const GALGAS_string & in_mModelString,
                                                                                                            const GALGAS_string & in_mOwnerName
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mModelString (in_mModelString),
mProperty_mOwnerName (in_mOwnerName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutTableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

void cPtr_autoLayoutTableViewControllerPropertyGeneration::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "[@autoLayoutTableViewControllerPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerPropertyGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                        & kTypeDescriptor_GALGAS_propertyGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerPropertyGeneration GALGAS_autoLayoutTableViewControllerPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerPropertyGeneration result ;
  const GALGAS_autoLayoutTableViewControllerPropertyGeneration * p = (const GALGAS_autoLayoutTableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind::GALGAS_autoLayoutTableViewControllerModelKind (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::constructor_entityArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_entityArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::constructor_transientArray (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  result.mEnum = kEnum_transientArray ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_entityArray () const {
  const bool ok = mEnum == kEnum_entityArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerModelKind::optional_transientArray () const {
  const bool ok = mEnum == kEnum_transientArray ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entityArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transientArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerModelKind::description (C_String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @autoLayoutTableViewControllerModelKind: " << gEnumNameArrayFor_autoLayoutTableViewControllerModelKind [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerModelKind::objectCompare (const GALGAS_autoLayoutTableViewControllerModelKind & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerModelKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ("autoLayoutTableViewControllerModelKind",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerModelKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerModelKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerModelKind GALGAS_autoLayoutTableViewControllerModelKind::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerModelKind result ;
  const GALGAS_autoLayoutTableViewControllerModelKind * p = (const GALGAS_autoLayoutTableViewControllerModelKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerModelKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerModelKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutTableViewControllerBoundColumnListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration : public cCollectionElement {
  public : GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                         const GALGAS_bool & in_mSorted,
                                                                                         const GALGAS_string & in_mColumnName,
                                                                                         const GALGAS_string & in_mColumnObjectTypeName,
                                                                                         const GALGAS_string & in_mRunAction,
                                                                                         const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                         const GALGAS__32_stringlist & in_mActualParameterList
                                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_bool & in_mEditable,
                                                                                                                                                            const GALGAS_bool & in_mSorted,
                                                                                                                                                            const GALGAS_string & in_mColumnName,
                                                                                                                                                            const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                                                                            const GALGAS_string & in_mRunAction,
                                                                                                                                                            const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                                                                            const GALGAS__32_stringlist & in_mActualParameterList
                                                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEditable, in_mSorted, in_mColumnName, in_mColumnObjectTypeName, in_mRunAction, in_mRegularBindingsGenerationList, in_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mSorted, inElement.mProperty_mColumnName, inElement.mProperty_mColumnObjectTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mRegularBindingsGenerationList, inElement.mProperty_mActualParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (mObject.mProperty_mEditable, mObject.mProperty_mSorted, mObject.mProperty_mColumnName, mObject.mProperty_mColumnObjectTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mRegularBindingsGenerationList, mObject.mProperty_mActualParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEditable" ":" ;
  mObject.mProperty_mEditable.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSorted" ":" ;
  mObject.mProperty_mSorted.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnName" ":" ;
  mObject.mProperty_mColumnName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mColumnObjectTypeName" ":" ;
  mObject.mProperty_mColumnObjectTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunAction" ":" ;
  mObject.mProperty_mRunAction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingsGenerationList" ":" ;
  mObject.mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActualParameterList" ":" ;
  mObject.mProperty_mActualParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * operand = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_listWithValue (const GALGAS_bool & inOperand0,
                                                                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                                                              const GALGAS_string & inOperand4,
                                                                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand5,
                                                                                                                                                              const GALGAS__32_stringlist & inOperand6
                                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                                  const GALGAS_bool & in_mEditable,
                                                                                                  const GALGAS_bool & in_mSorted,
                                                                                                  const GALGAS_string & in_mColumnName,
                                                                                                  const GALGAS_string & in_mColumnObjectTypeName,
                                                                                                  const GALGAS_string & in_mRunAction,
                                                                                                  const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                  const GALGAS__32_stringlist & in_mActualParameterList
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (in_mEditable,
                                                                                               in_mSorted,
                                                                                               in_mColumnName,
                                                                                               in_mColumnObjectTypeName,
                                                                                               in_mRunAction,
                                                                                               in_mRegularBindingsGenerationList,
                                                                                               in_mActualParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::addAssign_operation (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_bool & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_string & inOperand4,
                                                                                            const GALGAS_regularBindingsGenerationList & inOperand5,
                                                                                            const GALGAS__32_stringlist & inOperand6
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_append (GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element inElement,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_insertAtIndex (const GALGAS_bool inOperand0,
                                                                                             const GALGAS_bool inOperand1,
                                                                                             const GALGAS_string inOperand2,
                                                                                             const GALGAS_string inOperand3,
                                                                                             const GALGAS_string inOperand4,
                                                                                             const GALGAS_regularBindingsGenerationList inOperand5,
                                                                                             const GALGAS__32_stringlist inOperand6,
                                                                                             const GALGAS_uint inInsertionIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GALGAS_bool & outOperand0,
                                                                                             GALGAS_bool & outOperand1,
                                                                                             GALGAS_string & outOperand2,
                                                                                             GALGAS_string & outOperand3,
                                                                                             GALGAS_string & outOperand4,
                                                                                             GALGAS_regularBindingsGenerationList & outOperand5,
                                                                                             GALGAS__32_stringlist & outOperand6,
                                                                                             const GALGAS_uint inRemoveIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mEditable ;
        outOperand1 = p->mObject.mProperty_mSorted ;
        outOperand2 = p->mObject.mProperty_mColumnName ;
        outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
        outOperand4 = p->mObject.mProperty_mRunAction ;
        outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
        outOperand6 = p->mObject.mProperty_mActualParameterList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
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
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popFirst (GALGAS_bool & outOperand0,
                                                                                        GALGAS_bool & outOperand1,
                                                                                        GALGAS_string & outOperand2,
                                                                                        GALGAS_string & outOperand3,
                                                                                        GALGAS_string & outOperand4,
                                                                                        GALGAS_regularBindingsGenerationList & outOperand5,
                                                                                        GALGAS__32_stringlist & outOperand6,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSorted ;
    outOperand2 = p->mObject.mProperty_mColumnName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_popLast (GALGAS_bool & outOperand0,
                                                                                       GALGAS_bool & outOperand1,
                                                                                       GALGAS_string & outOperand2,
                                                                                       GALGAS_string & outOperand3,
                                                                                       GALGAS_string & outOperand4,
                                                                                       GALGAS_regularBindingsGenerationList & outOperand5,
                                                                                       GALGAS__32_stringlist & outOperand6,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSorted ;
    outOperand2 = p->mObject.mProperty_mColumnName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_first (GALGAS_bool & outOperand0,
                                                                                     GALGAS_bool & outOperand1,
                                                                                     GALGAS_string & outOperand2,
                                                                                     GALGAS_string & outOperand3,
                                                                                     GALGAS_string & outOperand4,
                                                                                     GALGAS_regularBindingsGenerationList & outOperand5,
                                                                                     GALGAS__32_stringlist & outOperand6,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSorted ;
    outOperand2 = p->mObject.mProperty_mColumnName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::method_last (GALGAS_bool & outOperand0,
                                                                                    GALGAS_bool & outOperand1,
                                                                                    GALGAS_string & outOperand2,
                                                                                    GALGAS_string & outOperand3,
                                                                                    GALGAS_string & outOperand4,
                                                                                    GALGAS_regularBindingsGenerationList & outOperand5,
                                                                                    GALGAS__32_stringlist & outOperand6,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEditable ;
    outOperand1 = p->mObject.mProperty_mSorted ;
    outOperand2 = p->mObject.mProperty_mColumnName ;
    outOperand3 = p->mObject.mProperty_mColumnObjectTypeName ;
    outOperand4 = p->mObject.mProperty_mRunAction ;
    outOperand5 = p->mObject.mProperty_mRegularBindingsGenerationList ;
    outOperand6 = p->mObject.mProperty_mActualParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::add_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusAssign_operation (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration inOperand,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMEditableAtIndex (GALGAS_bool inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEditable = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mEditableAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mEditable ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMSortedAtIndex (GALGAS_bool inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSorted = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mSortedAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mSorted ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnNameAtIndex (GALGAS_string inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnObjectTypeNameAtIndex (GALGAS_string inOperand,
                                                                                                               GALGAS_uint inIndex,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mColumnObjectTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnObjectTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mColumnObjectTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GALGAS_string inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunAction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRunAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRegularBindingsGenerationListAtIndex (GALGAS_regularBindingsGenerationList inOperand,
                                                                                                                        GALGAS_uint inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingsGenerationList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRegularBindingsGenerationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMActualParameterListAtIndex (GALGAS__32_stringlist inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameterList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mActualParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    result = p->mObject.mProperty_mActualParameterList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject,
                                                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mEditable ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSorted (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mSorted ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mColumnObjectTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRunAction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRegularBindingsGenerationList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
  return p->mObject.mProperty_mActualParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ("autoLayoutTableViewControllerBoundColumnListForGeneration",
                                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

