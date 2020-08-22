#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation> gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_objectAccessibilityCodeForSaveOperation (const int32_t inClassIndex,
                                                                   enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation inGetter) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.count ()) {
      f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.count ()) {
           f = gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  enterExtensionGetter_objectAccessibilityCodeForSaveOperation (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                                extensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (void) {
  gExtensionGetterTable_propertyGeneration_objectAccessibilityCodeForSaveOperation.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation (defineExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation,
                                                                                       freeExtensionGetter_propertyGeneration_objectAccessibilityCodeForSaveOperation) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension getter '@propertyGeneration populateExplorerWindowCode'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_populateExplorerWindowCode> gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_populateExplorerWindowCode (const int32_t inClassIndex,
                                                      enterExtensionGetter_propertyGeneration_populateExplorerWindowCode inGetter) {
  gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_populateExplorerWindowCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_propertyGeneration_populateExplorerWindowCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_propertyGeneration_populateExplorerWindowCode (void) {
  enterExtensionGetter_populateExplorerWindowCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                   extensionGetter_propertyGeneration_populateExplorerWindowCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_propertyGeneration_populateExplorerWindowCode (void) {
  gExtensionGetterTable_propertyGeneration_populateExplorerWindowCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_propertyGeneration_populateExplorerWindowCode (defineExtensionGetter_propertyGeneration_populateExplorerWindowCode,
                                                                          freeExtensionGetter_propertyGeneration_populateExplorerWindowCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration clearObjectExplorerCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_clearObjectExplorerCode> gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_clearObjectExplorerCode (const int32_t inClassIndex,
                                                   enterExtensionGetter_propertyGeneration_clearObjectExplorerCode inGetter) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_clearObjectExplorerCode (const cPtr_propertyGeneration * inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_clearObjectExplorerCode f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.count ()) {
      f = gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.count ()) {
           f = gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_propertyGeneration_clearObjectExplorerCode (const cPtr_propertyGeneration * /* inObject */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  enterExtensionGetter_clearObjectExplorerCode (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                extensionGetter_propertyGeneration_clearObjectExplorerCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_propertyGeneration_clearObjectExplorerCode (void) {
  gExtensionGetterTable_propertyGeneration_clearObjectExplorerCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_propertyGeneration_clearObjectExplorerCode (defineExtensionGetter_propertyGeneration_clearObjectExplorerCode,
                                                                       freeExtensionGetter_propertyGeneration_clearObjectExplorerCode) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Extension getter '@propertyGeneration resetToManyRelationships'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <enterExtensionGetter_propertyGeneration_resetToManyRelationships> gExtensionGetterTable_propertyGeneration_resetToManyRelationships ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionGetter_resetToManyRelationships (const int32_t inClassIndex,
                                                    enterExtensionGetter_propertyGeneration_resetToManyRelationships inGetter) {
  gExtensionGetterTable_propertyGeneration_resetToManyRelationships.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_propertyGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_propertyGeneration_resetToManyRelationships f = NULL ;
    if (classIndex < gExtensionGetterTable_propertyGeneration_resetToManyRelationships.count ()) {
      f = gExtensionGetterTable_propertyGeneration_resetToManyRelationships (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_propertyGeneration_resetToManyRelationships.count ()) {
           f = gExtensionGetterTable_propertyGeneration_resetToManyRelationships (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_propertyGeneration_resetToManyRelationships.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_propertyGeneration_resetToManyRelationships (const cPtr_propertyGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_propertyGeneration_resetToManyRelationships (void) {
  enterExtensionGetter_resetToManyRelationships (kTypeDescriptor_GALGAS_propertyGeneration.mSlotID,
                                                 extensionGetter_propertyGeneration_resetToManyRelationships) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionGetter_propertyGeneration_resetToManyRelationships (void) {
  gExtensionGetterTable_propertyGeneration_resetToManyRelationships.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_propertyGeneration_resetToManyRelationships (defineExtensionGetter_propertyGeneration_resetToManyRelationships,
                                                                        freeExtensionGetter_propertyGeneration_resetToManyRelationships) ;

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_propertyAccessibility_transient::cEnumAssociatedValues_propertyAccessibility_transient (const GALGAS_bool & inAssociatedValue0
                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_propertyAccessibility_transient::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_propertyAccessibility_transient::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyAccessibility_transient * ptr = dynamic_cast<const cEnumAssociatedValues_propertyAccessibility_transient *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessibility::GALGAS_propertyAccessibility (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_stored (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  result.mEnum = kEnum_stored ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::constructor_transient (const GALGAS_bool & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_transient ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyAccessibility_transient (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessibility::method_transient (GALGAS_bool & outAssociatedValue0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_transient) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @propertyAccessibility transient invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyAccessibility_transient * ptr = (const cEnumAssociatedValues_propertyAccessibility_transient *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_propertyAccessibility [3] = {
  "(not built)",
  "stored",
  "transient"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_stored == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_transient == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyAccessibility::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @propertyAccessibility: " << gEnumNameArrayFor_propertyAccessibility [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyAccessibility::objectCompare (const GALGAS_propertyAccessibility & inOperand) const {
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
//                                             @propertyAccessibility type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyAccessibility GALGAS_propertyAccessibility::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyAccessibility result ;
  const GALGAS_propertyAccessibility * p = (const GALGAS_propertyAccessibility *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyAccessibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@transientExternTypeList' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_transientExternTypeList : public cCollectionElement {
  public : GALGAS_transientExternTypeList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                       const GALGAS_bool & in_mIsClass
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_string & in_mTypeName,
                                                                                        const GALGAS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GALGAS_transientExternTypeList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_transientExternTypeList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIsClass" ":" ;
  mObject.mProperty_mIsClass.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_transientExternTypeList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientExternTypeList * operand = (cCollectionElement_transientExternTypeList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientExternTypeList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList::GALGAS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::constructor_listWithValue (const GALGAS_string & inOperand0,
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_string & in_mTypeName,
                                                                const GALGAS_bool & in_mIsClass
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = NULL ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName,
                                                             in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::addAssign_operation (const GALGAS_string & inOperand0,
                                                          const GALGAS_bool & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_append (GALGAS_transientExternTypeList_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                           const GALGAS_bool inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                           GALGAS_bool & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mIsClass ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_popFirst (GALGAS_string & outOperand0,
                                                      GALGAS_bool & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_popLast (GALGAS_string & outOperand0,
                                                     GALGAS_bool & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::method_first (GALGAS_string & outOperand0,
                                                   GALGAS_bool & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::method_last (GALGAS_string & outOperand0,
                                                  GALGAS_bool & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::add_operation (const GALGAS_transientExternTypeList & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_transientExternTypeList result = GALGAS_transientExternTypeList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::plusAssign_operation (const GALGAS_transientExternTypeList inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_setMTypeNameAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientExternTypeList::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList::setter_setMIsClassAtIndex (GALGAS_bool inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsClass = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_transientExternTypeList::getter_mIsClassAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mIsClass ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_transientExternTypeList::cEnumerator_transientExternTypeList (const GALGAS_transientExternTypeList & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element cEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @transientExternTypeList type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList GALGAS_transientExternTypeList::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList result ;
  const GALGAS_transientExternTypeList * p = (const GALGAS_transientExternTypeList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientExternTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract extension method '@abstractFileGeneration generateCode'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_abstractFileGeneration_generateCode> gExtensionMethodTable_abstractFileGeneration_generateCode ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_generateCode (const int32_t inClassIndex,
                                        extensionMethodSignature_abstractFileGeneration_generateCode inMethod) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_abstractFileGeneration_generateCode (void) {
  gExtensionMethodTable_abstractFileGeneration_generateCode.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractFileGeneration_generateCode (NULL,
                                                                freeExtensionMethod_abstractFileGeneration_generateCode) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_generateCode (const cPtr_abstractFileGeneration * inObject,
                                       const GALGAS_string constin_inOutputDirectory,
                                       GALGAS_stringset & io_ioGeneratedFileSet,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractFileGeneration_generateCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractFileGeneration_generateCode.count ()) {
      f = gExtensionMethodTable_abstractFileGeneration_generateCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractFileGeneration_generateCode.count ()) {
          f = gExtensionMethodTable_abstractFileGeneration_generateCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractFileGeneration_generateCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inOutputDirectory, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@fileGenerationList' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public : GALGAS_fileGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GALGAS_fileGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_fileGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileGeneration" ":" ;
  mObject.mProperty_mFileGeneration.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_fileGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fileGenerationList * operand = (cCollectionElement_fileGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fileGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList::GALGAS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList::GALGAS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fileGenerationList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::constructor_listWithValue (const GALGAS_abstractFileGeneration & inOperand0
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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractFileGeneration & in_mFileGeneration
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::addAssign_operation (const GALGAS_abstractFileGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_append (GALGAS_fileGenerationList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_insertAtIndex (const GALGAS_abstractFileGeneration inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_removeAtIndex (GALGAS_abstractFileGeneration & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
      outOperand0 = p->mObject.mProperty_mFileGeneration ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_popFirst (GALGAS_abstractFileGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_popLast (GALGAS_abstractFileGeneration & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::method_first (GALGAS_abstractFileGeneration & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::method_last (GALGAS_abstractFileGeneration & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::add_operation (const GALGAS_fileGenerationList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_fileGenerationList result = GALGAS_fileGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::plusAssign_operation (const GALGAS_fileGenerationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList::setter_setMFileGenerationAtIndex (GALGAS_abstractFileGeneration inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileGeneration = inOperand ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFileGeneration GALGAS_fileGenerationList::getter_mFileGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  GALGAS_abstractFileGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    result = p->mObject.mProperty_mFileGeneration ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_fileGenerationList::cEnumerator_fileGenerationList (const GALGAS_fileGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element cEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFileGeneration cEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @fileGenerationList type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList GALGAS_fileGenerationList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList result ;
  const GALGAS_fileGenerationList * p = (const GALGAS_fileGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//--- Constructors
  public : cCollectionElement_XCodeGroupList (const GALGAS_string & in_mGroupReference,
                                              const GALGAS_string & in_mGroupName,
                                              const GALGAS_string & in_mGroupPath,
                                              const GALGAS_stringlist & in_mChildrenRefs
                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GALGAS_XCodeGroupList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeGroupList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupReference" ":" ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupName" ":" ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGroupPath" ":" ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mChildrenRefs" ":" ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
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

GALGAS_XCodeGroupList::GALGAS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_append (GALGAS_XCodeGroupList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_insertAtIndex (const GALGAS_string inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_removeAtIndex (GALGAS_string & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mGroupReference ;
      outOperand1 = p->mObject.mProperty_mGroupName ;
      outOperand2 = p->mObject.mProperty_mGroupPath ;
      outOperand3 = p->mObject.mProperty_mChildrenRefs ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
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
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
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
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
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

GALGAS_XCodeGroupList GALGAS_XCodeGroupList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeGroupList result = GALGAS_XCodeGroupList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::plusAssign_operation (const GALGAS_XCodeGroupList inOperand,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
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
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_setMGroupNameAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
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
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_setMGroupPathAtIndex (GALGAS_string inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
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
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GALGAS_stringlist inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
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
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeGroupList::cEnumerator_XCodeGroupList (const GALGAS_XCodeGroupList & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
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

//--- Constructors
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
  public : cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GALGAS_XCodeToolTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeToolTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
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

GALGAS_XCodeToolTargetList::GALGAS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList  (capCollectionElementArray ()) ;
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
    result = GALGAS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_append (GALGAS_XCodeToolTargetList_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_XCodeToolTargetList GALGAS_XCodeToolTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeToolTargetList result = GALGAS_XCodeToolTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::plusAssign_operation (const GALGAS_XCodeToolTargetList inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
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
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
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
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
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
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
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
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeToolTargetList::cEnumerator_XCodeToolTargetList (const GALGAS_XCodeToolTargetList & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
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

//--- Constructors
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
  public : cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GALGAS_XCodeAppTargetList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_XCodeAppTargetList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetRef" ":" ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileReference" ":" ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductFileName" ":" ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRefList" ":" ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildPhaseRef" ":" ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationListRef" ":" ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationSettingList" ":" ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildConfigurationRef" ":" ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworksFileRefList" ":" ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFrameworkBuildPhaseRef" ":" ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDependentTargets" ":" ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceBuildRef" ":" ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mResourceFileBuildRefs" ":" ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInfoPListFile" ":" ;
  mObject.mProperty_mInfoPListFile.description (ioString, inIndentation) ;
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

GALGAS_XCodeAppTargetList::GALGAS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList  (capCollectionElementArray ()) ;
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
    result = GALGAS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.appendObject (attributes) ;
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
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_append (GALGAS_XCodeAppTargetList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_XCodeAppTargetList GALGAS_XCodeAppTargetList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_XCodeAppTargetList result = GALGAS_XCodeAppTargetList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::plusAssign_operation (const GALGAS_XCodeAppTargetList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                              GALGAS_uint inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
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
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GALGAS_string inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
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
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GALGAS_string inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
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
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GALGAS_stringlist inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GALGAS_string inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GALGAS_stringlist inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
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
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GALGAS__32_stringlist inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
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
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
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
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GALGAS_stringlist inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
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
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList::setter_setMInfoPListFileAtIndex (GALGAS_string inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInfoPListFile = inOperand ;
  }
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
    result = p->mObject.mProperty_mInfoPListFile ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_XCodeAppTargetList::cEnumerator_XCodeAppTargetList (const GALGAS_XCodeAppTargetList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist cEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
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

//--- Constructors
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_BuildFileList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
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

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_append (GALGAS_BuildFileList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mFileReference ;
      outOperand1 = p->mObject.mProperty_mFileName ;
      outOperand2 = p->mObject.mProperty_mBuildReference ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
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
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
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
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
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
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
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

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_setMFileReferenceAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
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
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_setMFileNameAtIndex (GALGAS_string inOperand,
                                                       GALGAS_uint inIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
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
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_setMBuildReferenceAtIndex (GALGAS_string inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
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
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
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

//--- Constructors
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
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

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibLineDescriptorList  (capCollectionElementArray ()) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_listWithValue (const GALGAS_mainXibElement & inOperand0
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
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_append (GALGAS_mainXibLineDescriptorList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_removeAtIndex (GALGAS_mainXibElement & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_popFirst (GALGAS_mainXibElement & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_popLast (GALGAS_mainXibElement & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
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
    outOperand0 = p->mObject.mProperty_mElement ;
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
    outOperand0 = p->mObject.mProperty_mElement ;
  }
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

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList::setter_setMElementAtIndex (GALGAS_mainXibElement inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
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
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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
  return p->mObject.mProperty_mElement ;
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

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_mainXibElement_text::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_mainXibElement_outlet::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_mainXibElement_outlet::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_outlet * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_outlet *> (inOperand) ;
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

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_text (const GALGAS_lstring & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_text ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_text (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibElement::constructor_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                 const GALGAS_lstring & inAssociatedValue1
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_outlet ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_mainXibElement_outlet (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibElement::method_text (GALGAS_lstring & outAssociatedValue0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_text) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @mainXibElement text invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_text * ptr = (const cEnumAssociatedValues_mainXibElement_text *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibElement::method_outlet (GALGAS_lstring & outAssociatedValue0,
                                           GALGAS_lstring & outAssociatedValue1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_outlet) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @mainXibElement outlet invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_mainXibElement_outlet * ptr = (const cEnumAssociatedValues_mainXibElement_outlet *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibElement::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @mainXibElement: " << gEnumNameArrayFor_mainXibElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibElement::objectCompare (const GALGAS_mainXibElement & inOperand) const {
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
//                                                @mainXibElement type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibElement::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mainXibElement result ;
  const GALGAS_mainXibElement * p = (const GALGAS_mainXibElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@mainXibDescriptorList generateCode'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("main-xib.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.galgas", 89)).getter_string (SOURCE_FILE ("main-xib.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 90)) ;
      GALGAS_uint var_idx_3051 = GALGAS_uint ((uint32_t) 0U) ;
      GALGAS_uint var_columnMax_3073 = GALGAS_uint ((uint32_t) 1U) ;
      const GALGAS_mainXibDescriptorList temp_3 = inObject ;
      cEnumerator_mainXibDescriptorList enumerator_3096 (temp_3, kENUMERATION_UP) ;
      while (enumerator_3096.hasCurrentObject ()) {
        GALGAS_uint var_column_3116 = GALGAS_uint ((uint32_t) 0U) ;
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 95)) ;
        cEnumerator_mainXibLineDescriptorList enumerator_3188 (enumerator_3096.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_3188.hasCurrentObject ()) {
          switch (enumerator_3188.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
              const cEnumAssociatedValues_mainXibElement_text * extractPtr_3937 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_t = extractPtr_3937->mAssociatedValue0 ;
              var_idx_3051.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 99)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_t.getter_string (SOURCE_FILE ("main-xib.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 100)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 101)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 102)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 103)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 104)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 105)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 106)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3051.getter_string (SOURCE_FILE ("main-xib.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 107)) ;
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4408 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3188.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_outletType = extractPtr_4408->mAssociatedValue0 ;
              const GALGAS_lstring extractedValue_outletName = extractPtr_4408->mAssociatedValue1 ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 109)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (extractedValue_outletType.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (var_column_3116.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 110)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (extractedValue_outletName.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 111)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 112)) ;
            }
            break ;
          }
          var_column_3116.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 114)) ;
          enumerator_3188.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_column_3116.objectCompare (var_columnMax_3073)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_columnMax_3073 = var_column_3116 ;
          }
        }
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 119)) ;
        enumerator_3096.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 121)) ;
      const GALGAS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3073.getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.galgas", 122)).getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 122)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 123)) ;
    }
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::objectCompare (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntityName.objectCompare (inOperand.mProperty_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObsoleteEntityNames.objectCompare (inOperand.mProperty_mObsoleteEntityNames) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::description (C_String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneratingEBManagedObjectContext-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @entityListForGeneratingEBManagedObjectContext-element type                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                C_Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element * p = (const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelType.objectCompare (inOperand.mProperty_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelShouldBeWritableProperty.objectCompare (inOperand.mProperty_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletBindingSpecificationModelList_2D_element * p = (const GALGAS_outletBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_propertyKind & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mErrorLocation.objectCompare (inOperand.mProperty_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mErrorLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  const GALGAS_outletBindingModelList_2D_element * p = (const GALGAS_outletBindingModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingOutletName.objectCompare (inOperand.mProperty_mTableValueBindingOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableValueBindingControllerName.objectCompare (inOperand.mProperty_mTableValueBindingControllerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableValueBindingControllerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @tableViewBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  const GALGAS_tableViewBindingGenerationList_2D_element * p = (const GALGAS_tableViewBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::objectCompare (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEBViewOutletName.objectCompare (inOperand.mProperty_mEBViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerControllerName.objectCompare (inOperand.mProperty_mArrayControllerControllerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @ebViewGraphicControllerBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEBViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mEBViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::getter_mArrayControllerControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerControllerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @ebViewGraphicControllerBindingGenerationList-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_propertyKind & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_boundObjectList_2D_element::objectCompare (const GALGAS_boundObjectList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectString.objectCompare (inOperand.mProperty_mBoundObjectString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mKind.objectCompare (inOperand.mProperty_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_boundObjectList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @boundObjectList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBoundObjectString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_boundObjectList_2D_element::getter_mBoundObjectString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_boundObjectList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @boundObjectList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  const GALGAS_boundObjectList_2D_element * p = (const GALGAS_boundObjectList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boundObjectList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                                  const GALGAS_string & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectList.objectCompare (inOperand.mProperty_mBoundObjectList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingOptionsString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList_2D_element result ;
  const GALGAS_regularBindingsGenerationList_2D_element * p = (const GALGAS_regularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2,
                                                                                                                    const GALGAS_string & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionName.objectCompare (inOperand.mProperty_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetTypeName.objectCompare (inOperand.mProperty_mTargetTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  const GALGAS_actionBindingListForGeneration_2D_element * p = (const GALGAS_actionBindingListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::getter_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @observablePropertyList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  const GALGAS_observablePropertyList_2D_element * p = (const GALGAS_observablePropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDependencyListForGeneration_2D_element::objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDependency.objectCompare (inOperand.mProperty_mDependency) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentName.objectCompare (inOperand.mProperty_mFunctionArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFunctionArgumentTypeString.objectCompare (inOperand.mProperty_mFunctionArgumentTypeString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDependency.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::getter_mDependency (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependency ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFunctionArgumentTypeString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDependencyListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  const GALGAS_transientDependencyListForGeneration_2D_element * p = (const GALGAS_transientDependencyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDependencyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGenerationList_2D_element::~ GALGAS_toManyProxyGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGenerationList_2D_element GALGAS_toManyProxyGenerationList_2D_element::constructor_new (const GALGAS_toManyProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyProxyGenerationList_2D_element::objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyProxyGenerationList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @toManyProxyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGeneration GALGAS_toManyProxyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @toManyProxyGenerationList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ("toManyProxyGenerationList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyProxyGenerationList_2D_element GALGAS_toManyProxyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList_2D_element result ;
  const GALGAS_toManyProxyGenerationList_2D_element * p = (const GALGAS_toManyProxyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyProxyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGenerationList_2D_element::~ GALGAS_atomicProxyGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (const GALGAS_atomicProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGenerationList_2D_element GALGAS_atomicProxyGenerationList_2D_element::constructor_new (const GALGAS_atomicProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_atomicProxyGenerationList_2D_element::objectCompare (const GALGAS_atomicProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_atomicProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_atomicProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_atomicProxyGenerationList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @atomicProxyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGeneration GALGAS_atomicProxyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @atomicProxyGenerationList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ("atomicProxyGenerationList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_atomicProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicProxyGenerationList_2D_element GALGAS_atomicProxyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList_2D_element result ;
  const GALGAS_atomicProxyGenerationList_2D_element * p = (const GALGAS_atomicProxyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicProxyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGenerationList_2D_element::~ GALGAS_atomicPropertyGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::constructor_new (const GALGAS_atomicPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_atomicPropertyGenerationList_2D_element::objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_atomicPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_atomicPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_atomicPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @atomicPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGeneration GALGAS_atomicPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @atomicPropertyGenerationList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ("atomicPropertyGenerationList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  const GALGAS_atomicPropertyGenerationList_2D_element * p = (const GALGAS_atomicPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGenerationList_2D_element::~ GALGAS_toManyPropertyGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::constructor_new (const GALGAS_toManyPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyPropertyGenerationList_2D_element::objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @toManyPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @toManyPropertyGenerationList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ("toManyPropertyGenerationList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  const GALGAS_toManyPropertyGenerationList_2D_element * p = (const GALGAS_toManyPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_validationStubRoutineListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObjectTypeName.objectCompare (inOperand.mProperty_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelName.objectCompare (inOperand.mProperty_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObjectTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_validationStubRoutineListForGeneration_2D_element result ;
  const GALGAS_validationStubRoutineListForGeneration_2D_element * p = (const GALGAS_validationStubRoutineListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_validationStubRoutineListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletName.objectCompare (inOperand.mProperty_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element GALGAS_multipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList_2D_element result ;
  const GALGAS_multipleBindingGenerationList_2D_element * p = (const GALGAS_multipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mRunAction (),
mProperty_mRegularBindingsGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mRunAction (inOperand2),
mProperty_mRegularBindingsGenerationList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnOutletTypeName.objectCompare (inOperand.mProperty_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunAction.objectCompare (inOperand.mProperty_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mRegularBindingsGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            @tableViewControllerBoundColumnListForGeneration-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ("tableViewControllerBoundColumnListForGeneration-element",
                                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mColumnName.objectCompare (inOperand.mProperty_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyKind.objectCompare (inOperand.mProperty_mSortPropertyKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyForSorting.objectCompare (inOperand.mProperty_mObservablePropertyForSorting) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerSortedColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @tableViewControllerSortedColumnListForGeneration-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ("tableViewControllerSortedColumnListForGeneration-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap (),
mProperty_mPropertyGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_string & inOperand5,
                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                        const GALGAS_propertyGenerationList & inOperand7) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6),
mProperty_mPropertyGenerationList (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_propertyMap::constructor_emptyMap (HERE),
                                                             GALGAS_propertyGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_string & inOperand5,
                                                                                                                        const GALGAS_propertyMap & inOperand6,
                                                                                                                        const GALGAS_propertyGenerationList & inOperand7 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_selectionControllerForGeneration_2D_element::objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerName.objectCompare (inOperand.mProperty_mSelectionControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerName.objectCompare (inOperand.mProperty_mBoundControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundControllerPropertyName.objectCompare (inOperand.mProperty_mBoundControllerPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBaseTypeName.objectCompare (inOperand.mProperty_mBaseTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionTypeName.objectCompare (inOperand.mProperty_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mPropertyGenerationList.objectCompare (inOperand.mProperty_mPropertyGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @selectionControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundControllerPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList GALGAS_selectionControllerForGeneration_2D_element::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @selectionControllerForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  const GALGAS_selectionControllerForGeneration_2D_element * p = (const GALGAS_selectionControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @typeKindList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKindList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeKindList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  const GALGAS_typeKindList_2D_element * p = (const GALGAS_typeKindList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typeKindList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::constructor_new (const GALGAS_propertyGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_propertyGenerationList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @propertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGeneration GALGAS_propertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @propertyGenerationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  const GALGAS_propertyGenerationList_2D_element * p = (const GALGAS_propertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientExternTypeList_2D_element::objectCompare (const GALGAS_transientExternTypeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTypeName.objectCompare (inOperand.mProperty_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsClass.objectCompare (inOperand.mProperty_mIsClass) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientExternTypeList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @transientExternTypeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientExternTypeList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_transientExternTypeList_2D_element::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @transientExternTypeList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  const GALGAS_transientExternTypeList_2D_element * p = (const GALGAS_transientExternTypeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientExternTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::constructor_new (const GALGAS_abstractFileGeneration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fileGenerationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @fileGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFileGeneration GALGAS_fileGenerationList_2D_element::getter_mFileGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @fileGenerationList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  const GALGAS_fileGenerationList_2D_element * p = (const GALGAS_fileGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fileGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mGroupReference.objectCompare (inOperand.mProperty_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupName.objectCompare (inOperand.mProperty_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mGroupPath.objectCompare (inOperand.mProperty_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mChildrenRefs.objectCompare (inOperand.mProperty_mChildrenRefs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChildrenRefs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
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
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mProperty_mTargetRef (),
mProperty_mTargetName (),
mProperty_mProductFileReference (),
mProperty_mProductFileName (),
mProperty_mBuildPhaseRefList (),
mProperty_mBuildPhaseRef (),
mProperty_mBuildConfigurationListRef (),
mProperty_mBuildConfigurationSettingList (),
mProperty_mBuildConfigurationRef (),
mProperty_mFrameworksFileRefList (),
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs (),
mProperty_mInfoPListFile () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
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
                                                                            const GALGAS_string & inOperand14) :
mProperty_mTargetRef (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mProductFileReference (inOperand2),
mProperty_mProductFileName (inOperand3),
mProperty_mBuildPhaseRefList (inOperand4),
mProperty_mBuildPhaseRef (inOperand5),
mProperty_mBuildConfigurationListRef (inOperand6),
mProperty_mBuildConfigurationSettingList (inOperand7),
mProperty_mBuildConfigurationRef (inOperand8),
mProperty_mFrameworksFileRefList (inOperand9),
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13),
mProperty_mInfoPListFile (inOperand14) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
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
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTargetRef.objectCompare (inOperand.mProperty_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTargetName.objectCompare (inOperand.mProperty_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileReference.objectCompare (inOperand.mProperty_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mProductFileName.objectCompare (inOperand.mProperty_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRefList.objectCompare (inOperand.mProperty_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildPhaseRef.objectCompare (inOperand.mProperty_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationListRef.objectCompare (inOperand.mProperty_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationSettingList.objectCompare (inOperand.mProperty_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildConfigurationRef.objectCompare (inOperand.mProperty_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworksFileRefList.objectCompare (inOperand.mProperty_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFrameworkBuildPhaseRef.objectCompare (inOperand.mProperty_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependentTargets.objectCompare (inOperand.mProperty_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceBuildRef.objectCompare (inOperand.mProperty_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceFileBuildRefs.objectCompare (inOperand.mProperty_mResourceFileBuildRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPListFile.objectCompare (inOperand.mProperty_mInfoPListFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mProperty_mTargetRef.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mProductFileReference.drop () ;
  mProperty_mProductFileName.drop () ;
  mProperty_mBuildPhaseRefList.drop () ;
  mProperty_mBuildPhaseRef.drop () ;
  mProperty_mBuildConfigurationListRef.drop () ;
  mProperty_mBuildConfigurationSettingList.drop () ;
  mProperty_mBuildConfigurationRef.drop () ;
  mProperty_mFrameworksFileRefList.drop () ;
  mProperty_mFrameworkBuildPhaseRef.drop () ;
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
  mProperty_mInfoPListFile.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPListFile ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileReference.objectCompare (inOperand.mProperty_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileName.objectCompare (inOperand.mProperty_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildReference.objectCompare (inOperand.mProperty_mBuildReference) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildReference ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mainXibDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLine ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mainXibDescriptorList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  const GALGAS_mainXibDescriptorList_2D_element * p = (const GALGAS_mainXibDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @mainXibLineDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @mainXibLineDescriptorList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  const GALGAS_mainXibLineDescriptorList_2D_element * p = (const GALGAS_mainXibLineDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_easyBindings_grammar [90] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<entity_declaration>",// Index 5
  "<document_declaration>",// Index 6
  "<preferences_declaration>",// Index 7
  "<graphviz_declaration>",// Index 8
  "<outlet_class_declaration>",// Index 9
  "<binding_specification>",// Index 10
  "<outlet_declaration>",// Index 11
  "<observable_property>",// Index 12
  "<transient_declaration>",// Index 13
  "<controller_declaration>",// Index 14
  "<simple_stored_declaration>",// Index 15
  "<toOne_relationship>",// Index 16
  "<toMany_relationship>",// Index 17
  "<action_declaration>",// Index 18
  "<booleanMultipleBindingExpression>",// Index 19
  "<booleanMultipleBindingComparison>",// Index 20
  "<booleanMultipleBindingTerm>",// Index 21
  "<booleanMultipleBindingOperand>",// Index 22
  "<binding_option_list>",// Index 23
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
  "<select_easyBindings_5F_syntax_49>",// Index 78
  "<select_easyBindings_5F_syntax_50>",// Index 79
  "<select_easyBindings_5F_syntax_51>",// Index 80
  "<select_easyBindings_5F_syntax_52>",// Index 81
  "<select_easyBindings_5F_syntax_53>",// Index 82
  "<select_easyBindings_5F_syntax_54>",// Index 83
  "<select_easyBindings_5F_syntax_55>",// Index 84
  "<select_easyBindings_5F_syntax_56>",// Index 85
  "<select_easyBindings_5F_syntax_57>",// Index 86
  "<select_easyBindings_5F_syntax_58>",// Index 87
  "<select_easyBindings_5F_syntax_59>",// Index 88
  "<>"// Index 89
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
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
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S1 (index = 31)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (26)
, END
// State S2 (index = 34)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (27)
, END
// State S3 (index = 37)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S4 (index = 40)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (53)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (53)
, END
// State S5 (index = 45)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S6 (index = 48)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (30)
, END
// State S7 (index = 51)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (31)
, END
// State S8 (index = 54)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (83)
, END
// State S9 (index = 57)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (32)
, END
// State S10 (index = 60)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (33)
, END
// State S11 (index = 63)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (34)
, END
// State S12 (index = 66)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S13 (index = 69)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S14 (index = 100)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S15 (index = 131)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S16 (index = 162)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S17 (index = 193)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S18 (index = 224)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S19 (index = 255)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S20 (index = 286)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S21 (index = 317)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S22 (index = 348)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S23 (index = 379)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S24 (index = 382)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (45)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (54)
, END
// State S25 (index = 387)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (47)
, END
// State S26 (index = 390)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (48)
, END
// State S27 (index = 393)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (50)
, END
// State S28 (index = 398)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (52)
, END
// State S29 (index = 401)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (53)
, END
// State S30 (index = 404)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S31 (index = 429)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (74)
, END
// State S32 (index = 432)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (75)
, END
// State S33 (index = 435)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (76)
, END
// State S34 (index = 438)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S35 (index = 445)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S36 (index = 448)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S37 (index = 451)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S38 (index = 454)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S39 (index = 457)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S40 (index = 460)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S41 (index = 463)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S42 (index = 466)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (45)
, END
// State S43 (index = 469)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (46)
, END
// State S44 (index = 472)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (47)
, END
// State S45 (index = 475)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (55)
, END
// State S46 (index = 478)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (81)
, END
// State S47 (index = 481)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (82)
, END
// State S48 (index = 484)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S49 (index = 515)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (48)
, END
// State S50 (index = 518)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (49)
, END
// State S51 (index = 521)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (84)
, END
// State S52 (index = 524)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (85)
, END
// State S53 (index = 527)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (86)
, END
// State S54 (index = 530)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (87)
, END
// State S55 (index = 533)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (88)
, END
// State S56 (index = 540)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (90)
, END
// State S57 (index = 543)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (91)
, END
// State S58 (index = 546)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (145)
, END
// State S59 (index = 549)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (92)
, END
// State S60 (index = 556)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (94)
, END
// State S61 (index = 559)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (95)
, END
// State S62 (index = 562)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (96)
, END
// State S63 (index = 565)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (97)
, END
// State S64 (index = 568)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S65 (index = 593)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S66 (index = 618)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S67 (index = 643)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S68 (index = 668)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S69 (index = 693)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S70 (index = 718)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S71 (index = 743)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (105)
, END
// State S72 (index = 746)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (106)
, END
// State S73 (index = 749)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (107)
, END
// State S74 (index = 752)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S75 (index = 783)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (108)
, END
// State S76 (index = 786)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (33)
, END
// State S77 (index = 817)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (211)
, END
// State S78 (index = 822)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (109)
, END
// State S79 (index = 825)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (111)
, END
// State S80 (index = 830)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (208)
, END
// State S81 (index = 835)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S82 (index = 838)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (117)
, END
// State S83 (index = 841)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S84 (index = 844)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (118)
, END
// State S85 (index = 847)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S86 (index = 852)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (121)
, END
// State S87 (index = 855)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (122)
, END
// State S88 (index = 858)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (88)
, END
// State S89 (index = 863)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (124)
, END
// State S90 (index = 866)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (125)
, END
// State S91 (index = 869)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (126)
, END
// State S92 (index = 872)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (92)
, END
// State S93 (index = 877)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (128)
, END
// State S94 (index = 880)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (129)
, END
// State S95 (index = 883)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (130)
, END
// State S96 (index = 886)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (131)
, END
// State S97 (index = 889)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (132)
, END
// State S98 (index = 892)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, END
// State S99 (index = 895)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S100 (index = 898)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, END
// State S101 (index = 901)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S102 (index = 904)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S103 (index = 907)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S104 (index = 910)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S105 (index = 913)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S106 (index = 944)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (133)
, END
// State S107 (index = 947)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (134)
, END
// State S108 (index = 950)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (135)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (136)
, END
// State S109 (index = 955)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (210)
, END
// State S110 (index = 960)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (216)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (216)
, END
// State S111 (index = 965)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (138)
, END
// State S112 (index = 968)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (139)
, END
// State S113 (index = 971)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (213)
, END
// State S114 (index = 976)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (77)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (79)
, END
// State S115 (index = 983)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (143)
, END
// State S116 (index = 986)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (144)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (56)
, END
// State S117 (index = 993)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (146)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (85)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (85)
, END
// State S118 (index = 1008)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S119 (index = 1039)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (148)
, END
// State S120 (index = 1042)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (149)
, END
// State S121 (index = 1045)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S122 (index = 1068)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (157)
, END
// State S123 (index = 1071)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (151)
, END
// State S124 (index = 1074)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (158)
, END
// State S125 (index = 1077)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (159)
, END
// State S126 (index = 1080)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S127 (index = 1095)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (159)
, END
// State S128 (index = 1098)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (167)
, END
// State S129 (index = 1101)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (19)
, END
// State S130 (index = 1130)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (169)
, END
// State S131 (index = 1135)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (171)
, END
// State S132 (index = 1138)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (172)
, END
// State S133 (index = 1141)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (173)
, END
// State S134 (index = 1144)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (174)
, END
// State S135 (index = 1147)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (96)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (96)
, END
// State S136 (index = 1152)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (95)
, END
// State S137 (index = 1157)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (175)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (176)
, END
// State S138 (index = 1162)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (215)
, END
// State S139 (index = 1167)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (212)
, END
// State S140 (index = 1172)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (111)
, END
// State S141 (index = 1177)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (35)
, END
// State S142 (index = 1180)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (208)
, END
// State S143 (index = 1185)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S144 (index = 1216)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (180)
, END
// State S145 (index = 1219)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (60)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (181)
, END
// State S146 (index = 1224)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (183)
, END
// State S147 (index = 1227)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S148 (index = 1240)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S149 (index = 1245)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S150 (index = 1276)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (148)
, END
// State S151 (index = 1279)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (149)
, END
// State S152 (index = 1282)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S153 (index = 1305)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S154 (index = 1328)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S155 (index = 1351)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S156 (index = 1374)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (195)
, END
// State S157 (index = 1377)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (196)
, END
// State S158 (index = 1380)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (197)
, END
// State S159 (index = 1383)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (198)
, END
// State S160 (index = 1386)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (199)
, END
// State S161 (index = 1389)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (200)
, END
// State S162 (index = 1394)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S163 (index = 1417)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S164 (index = 1440)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (220)
, END
// State S165 (index = 1443)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S166 (index = 1460)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (222)
, END
// State S167 (index = 1463)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (224)
, END
// State S168 (index = 1470)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (179)
, END
// State S169 (index = 1473)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (180)
, END
// State S170 (index = 1476)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (226)
, END
// State S171 (index = 1479)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (227)
, END
// State S172 (index = 1482)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (228)
, END
// State S173 (index = 1485)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (229)
, END
// State S174 (index = 1488)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (230)
, END
// State S175 (index = 1491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (97)
, END
// State S176 (index = 1498)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (98)
, END
// State S177 (index = 1505)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (231)
, END
// State S178 (index = 1512)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (213)
, END
// State S179 (index = 1517)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (209)
, END
// State S180 (index = 1520)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (58)
, END
// State S181 (index = 1525)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (236)
, END
// State S182 (index = 1528)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (237)
, END
// State S183 (index = 1531)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (86)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (86)
, END
// State S184 (index = 1544)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S185 (index = 1557)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S186 (index = 1570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S187 (index = 1583)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S188 (index = 1596)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (188)
, END
// State S189 (index = 1609)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (243)
, END
// State S190 (index = 1612)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, END
// State S191 (index = 1615)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S192 (index = 1618)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S193 (index = 1621)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S194 (index = 1624)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S195 (index = 1627)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S196 (index = 1658)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, END
// State S197 (index = 1683)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (251)
, END
// State S198 (index = 1700)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (13)
, END
// State S199 (index = 1729)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S200 (index = 1744)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (255)
, END
// State S201 (index = 1747)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (256)
, END
// State S202 (index = 1750)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S203 (index = 1773)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (258)
, END
// State S204 (index = 1776)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (259)
, END
// State S205 (index = 1779)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (260)
, END
// State S206 (index = 1782)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (261)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (129)
, END
// State S207 (index = 1827)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (120)
, END
// State S208 (index = 1870)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (121)
, END
// State S209 (index = 1913)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (122)
, END
// State S210 (index = 1956)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (263)
, END
// State S211 (index = 1959)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S212 (index = 1982)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S213 (index = 2021)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S214 (index = 2060)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S215 (index = 2075)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S216 (index = 2098)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (165)
, END
// State S217 (index = 2133)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (172)
, END
// State S218 (index = 2172)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (12)
, END
// State S219 (index = 2215)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S220 (index = 2230)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (279)
, END
// State S221 (index = 2247)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, END
// State S222 (index = 2266)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (11)
, END
// State S223 (index = 2291)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (283)
, END
// State S224 (index = 2294)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (284)
, END
// State S225 (index = 2297)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (285)
, END
// State S226 (index = 2300)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, END
// State S227 (index = 2303)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (251)
, END
// State S228 (index = 2320)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (288)
, END
// State S229 (index = 2323)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S230 (index = 2340)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (290)
, END
// State S231 (index = 2343)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (135)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (136)
, END
// State S232 (index = 2348)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (292)
, END
// State S233 (index = 2353)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (214)
, END
// State S234 (index = 2356)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (294)
, END
// State S235 (index = 2359)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (295)
, END
// State S236 (index = 2362)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (61)
, END
// State S237 (index = 2365)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S238 (index = 2390)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, END
// State S239 (index = 2393)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, END
// State S240 (index = 2396)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (90)
, END
// State S241 (index = 2399)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (91)
, END
// State S242 (index = 2402)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, END
// State S243 (index = 2405)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S244 (index = 2436)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, END
// State S245 (index = 2443)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (206)
, END
// State S246 (index = 2450)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (306)
, END
// State S247 (index = 2453)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, END
// State S248 (index = 2460)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (200)
, END
// State S249 (index = 2467)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (201)
, END
// State S250 (index = 2474)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (307)
, END
// State S251 (index = 2477)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (204)
, END
// State S252 (index = 2484)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (308)
, END
// State S253 (index = 2487)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, END
// State S254 (index = 2494)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (104)
, END
// State S255 (index = 2497)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (111)
, END
// State S256 (index = 2500)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S257 (index = 2515)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (310)
, END
// State S258 (index = 2518)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (311)
, END
// State S259 (index = 2521)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (312)
, END
// State S260 (index = 2524)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (313)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (314)
, END
// State S261 (index = 2529)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (316)
, END
// State S262 (index = 2532)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S263 (index = 2575)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (317)
, END
// State S264 (index = 2578)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S265 (index = 2617)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, END
// State S266 (index = 2620)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S267 (index = 2643)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S268 (index = 2664)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S269 (index = 2687)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S270 (index = 2710)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S271 (index = 2733)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S272 (index = 2756)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S273 (index = 2779)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S274 (index = 2802)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S275 (index = 2825)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S276 (index = 2848)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S277 (index = 2871)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S278 (index = 2906)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, END
// State S279 (index = 2909)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (327)
, END
// State S280 (index = 2912)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S281 (index = 2927)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S282 (index = 2944)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (330)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (175)
, END
// State S283 (index = 2965)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (333)
, END
// State S284 (index = 2968)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (334)
, END
// State S285 (index = 2971)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, END
// State S286 (index = 3000)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (335)
, END
// State S287 (index = 3005)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (337)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, END
// State S288 (index = 3010)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (339)
, END
// State S289 (index = 3013)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (340)
, END
// State S290 (index = 3018)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (342)
, END
// State S291 (index = 3021)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (175)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (176)
, END
// State S292 (index = 3026)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (344)
, END
// State S293 (index = 3029)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (345)
, END
// State S294 (index = 3032)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (58)
, END
// State S295 (index = 3037)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (57)
, END
// State S296 (index = 3042)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (347)
, END
// State S297 (index = 3045)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (348)
, END
// State S298 (index = 3050)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S299 (index = 3075)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S300 (index = 3100)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S301 (index = 3125)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S302 (index = 3150)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S303 (index = 3175)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S304 (index = 3200)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (296)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (297)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (63)
, END
// State S305 (index = 3225)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (357)
, END
// State S306 (index = 3228)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (358)
, END
// State S307 (index = 3231)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (203)
, END
// State S308 (index = 3238)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, END
// State S309 (index = 3267)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, END
// State S310 (index = 3270)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S311 (index = 3309)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (359)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S312 (index = 3354)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (361)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S313 (index = 3399)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (363)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S314 (index = 3444)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (365)
, END
// State S315 (index = 3447)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (119)
, END
// State S316 (index = 3490)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (366)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (131)
, END
// State S317 (index = 3535)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (368)
, END
// State S318 (index = 3538)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S319 (index = 3561)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S320 (index = 3584)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (167)
, END
// State S321 (index = 3607)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (168)
, END
// State S322 (index = 3630)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (169)
, END
// State S323 (index = 3653)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (170)
, END
// State S324 (index = 3676)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (171)
, END
// State S325 (index = 3699)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (172)
, END
// State S326 (index = 3738)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (172)
, END
// State S327 (index = 3777)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, END
// State S328 (index = 3792)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, END
// State S329 (index = 3795)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, END
// State S330 (index = 3814)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (373)
, END
// State S331 (index = 3817)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (165)
, END
// State S332 (index = 3832)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (27)
, END
// State S333 (index = 3851)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (375)
, END
// State S334 (index = 3854)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, END
// State S335 (index = 3857)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S336 (index = 3880)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (377)
, END
// State S337 (index = 3883)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (378)
, END
// State S338 (index = 3886)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (379)
, END
// State S339 (index = 3889)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (380)
, END
// State S340 (index = 3892)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S341 (index = 3909)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (382)
, END
// State S342 (index = 3912)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (383)
, END
// State S343 (index = 3915)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (231)
, END
// State S344 (index = 3922)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (385)
, END
// State S345 (index = 3925)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S346 (index = 3956)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (59)
, END
// State S347 (index = 3959)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (386)
, END
// State S348 (index = 3962)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (348)
, END
// State S349 (index = 3967)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (388)
, END
// State S350 (index = 3970)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S351 (index = 3973)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S352 (index = 3976)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S353 (index = 3979)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S354 (index = 3982)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S355 (index = 3985)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S356 (index = 3988)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S357 (index = 3991)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S358 (index = 4022)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (207)
, END
// State S359 (index = 4029)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (389)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (390)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (391)
, END
// State S360 (index = 4036)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S361 (index = 4079)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (393)
, END
// State S362 (index = 4082)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (118)
, END
// State S363 (index = 4125)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (394)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (395)
, END
// State S364 (index = 4130)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (140)
, END
// State S365 (index = 4173)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (396)
, END
// State S366 (index = 4176)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (397)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (398)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (399)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (400)
, END
// State S367 (index = 4185)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (130)
, END
// State S368 (index = 4228)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (402)
, END
// State S369 (index = 4231)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (164)
, END
// State S370 (index = 4252)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (173)
, END
// State S371 (index = 4287)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (174)
, END
// State S372 (index = 4322)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, END
// State S373 (index = 4339)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (403)
, END
// State S374 (index = 4342)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, END
// State S375 (index = 4345)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, END
// State S376 (index = 4348)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (182)
, END
// State S377 (index = 4351)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (28)
, END
// State S378 (index = 4380)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (404)
, END
// State S379 (index = 4383)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (406)
, END
// State S380 (index = 4388)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, END
// State S381 (index = 4417)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (340)
, END
// State S382 (index = 4422)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, END
// State S383 (index = 4451)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (409)
, END
// State S384 (index = 4454)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (94)
, END
// State S385 (index = 4459)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (410)
, END
// State S386 (index = 4462)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (1)
, END
// State S387 (index = 4487)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (153)
, END
// State S388 (index = 4490)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (411)
, END
// State S389 (index = 4493)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (126)
, END
// State S390 (index = 4536)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (412)
, END
// State S391 (index = 4539)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (128)
, END
// State S392 (index = 4582)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S393 (index = 4625)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S394 (index = 4668)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (142)
, END
// State S395 (index = 4711)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (413)
, END
// State S396 (index = 4714)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (139)
, END
// State S397 (index = 4757)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (136)
, END
// State S398 (index = 4800)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (414)
, END
// State S399 (index = 4803)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (135)
, END
// State S400 (index = 4846)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (415)
, END
// State S401 (index = 4849)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (132)
, END
// State S402 (index = 4892)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (123)
, END
// State S403 (index = 4935)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (251)
, END
// State S404 (index = 4952)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (251)
, END
// State S405 (index = 4969)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (185)
, END
// State S406 (index = 4972)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (186)
, END
// State S407 (index = 4975)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (418)
, END
// State S408 (index = 4978)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (147)
, END
// State S409 (index = 4981)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S410 (index = 5010)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (419)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (101)
, END
// State S411 (index = 5015)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (421)
, END
// State S412 (index = 5020)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (423)
, END
// State S413 (index = 5023)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (424)
, END
// State S414 (index = 5026)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (425)
, END
// State S415 (index = 5029)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (426)
, END
// State S416 (index = 5032)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (427)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S417 (index = 5037)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (337)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, END
// State S418 (index = 5042)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (430)
, END
// State S419 (index = 5045)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (431)
, END
// State S420 (index = 5048)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (432)
, END
// State S421 (index = 5051)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (433)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (434)
, END
// State S422 (index = 5056)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (436)
, END
// State S423 (index = 5059)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (127)
, END
// State S424 (index = 5102)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (143)
, END
// State S425 (index = 5145)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (133)
, END
// State S426 (index = 5188)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (134)
, END
// State S427 (index = 5231)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (437)
, END
// State S428 (index = 5234)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (438)
, END
// State S429 (index = 5237)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (184)
, END
// State S430 (index = 5240)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (440)
, END
// State S431 (index = 5245)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (442)
, END
// State S432 (index = 5248)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S433 (index = 5251)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (443)
, END
// State S434 (index = 5254)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (444)
, END
// State S435 (index = 5257)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (155)
, END
// State S436 (index = 5260)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S437 (index = 5285)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (445)
, END
// State S438 (index = 5288)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (176)
, END
// State S439 (index = 5307)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (187)
, END
// State S440 (index = 5336)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (446)
, END
// State S441 (index = 5341)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, END
// State S442 (index = 5370)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (448)
, END
// State S443 (index = 5373)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, END
// State S444 (index = 5376)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, END
// State S445 (index = 5379)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (244)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (247)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (251)
, END
// State S446 (index = 5396)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (450)
, END
// State S447 (index = 5399)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (451)
, END
// State S448 (index = 5402)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (419)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (101)
, END
// State S449 (index = 5407)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (427)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S450 (index = 5412)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (454)
, END
// State S451 (index = 5417)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (188)
, END
// State S452 (index = 5446)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (102)
, END
// State S453 (index = 5449)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, END
// State S454 (index = 5452)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (456)
, END
// State S455 (index = 5455)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (457)
, END
// State S456 (index = 5458)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (192)
, END
// State S457 (index = 5461)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (460)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (461)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S458 (index = 5474)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (464)
, END
// State S459 (index = 5477)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S460 (index = 5500)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (202)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (212)
, END
// State S461 (index = 5523)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S462 (index = 5540)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (446)
, END
// State S463 (index = 5545)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (30)
, END
// State S464 (index = 5550)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (460)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (461)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S465 (index = 5563)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (460)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (461)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S466 (index = 5576)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (460)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (461)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S467 (index = 5589)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (198)
, END
// State S468 (index = 5606)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, END
// State S469 (index = 5609)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S470 (index = 5614)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (195)
, END
// State S471 (index = 5619)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (196)
, END
// State S472 (index = 5624)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (203)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (205)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (206)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (210)
, END
// State S473 (index = 5641)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (330)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (175)
, END
// State S474 (index = 5662)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (472)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (198)
, END
// State S475 (index = 5679)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (460)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (461)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S476 (index = 5692)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (199)
, END
// State S477 (index = 5707)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (197)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [478] = {
  0  // S0
, 31  // S1
, 34  // S2
, 37  // S3
, 40  // S4
, 45  // S5
, 48  // S6
, 51  // S7
, 54  // S8
, 57  // S9
, 60  // S10
, 63  // S11
, 66  // S12
, 69  // S13
, 100  // S14
, 131  // S15
, 162  // S16
, 193  // S17
, 224  // S18
, 255  // S19
, 286  // S20
, 317  // S21
, 348  // S22
, 379  // S23
, 382  // S24
, 387  // S25
, 390  // S26
, 393  // S27
, 398  // S28
, 401  // S29
, 404  // S30
, 429  // S31
, 432  // S32
, 435  // S33
, 438  // S34
, 445  // S35
, 448  // S36
, 451  // S37
, 454  // S38
, 457  // S39
, 460  // S40
, 463  // S41
, 466  // S42
, 469  // S43
, 472  // S44
, 475  // S45
, 478  // S46
, 481  // S47
, 484  // S48
, 515  // S49
, 518  // S50
, 521  // S51
, 524  // S52
, 527  // S53
, 530  // S54
, 533  // S55
, 540  // S56
, 543  // S57
, 546  // S58
, 549  // S59
, 556  // S60
, 559  // S61
, 562  // S62
, 565  // S63
, 568  // S64
, 593  // S65
, 618  // S66
, 643  // S67
, 668  // S68
, 693  // S69
, 718  // S70
, 743  // S71
, 746  // S72
, 749  // S73
, 752  // S74
, 783  // S75
, 786  // S76
, 817  // S77
, 822  // S78
, 825  // S79
, 830  // S80
, 835  // S81
, 838  // S82
, 841  // S83
, 844  // S84
, 847  // S85
, 852  // S86
, 855  // S87
, 858  // S88
, 863  // S89
, 866  // S90
, 869  // S91
, 872  // S92
, 877  // S93
, 880  // S94
, 883  // S95
, 886  // S96
, 889  // S97
, 892  // S98
, 895  // S99
, 898  // S100
, 901  // S101
, 904  // S102
, 907  // S103
, 910  // S104
, 913  // S105
, 944  // S106
, 947  // S107
, 950  // S108
, 955  // S109
, 960  // S110
, 965  // S111
, 968  // S112
, 971  // S113
, 976  // S114
, 983  // S115
, 986  // S116
, 993  // S117
, 1008  // S118
, 1039  // S119
, 1042  // S120
, 1045  // S121
, 1068  // S122
, 1071  // S123
, 1074  // S124
, 1077  // S125
, 1080  // S126
, 1095  // S127
, 1098  // S128
, 1101  // S129
, 1130  // S130
, 1135  // S131
, 1138  // S132
, 1141  // S133
, 1144  // S134
, 1147  // S135
, 1152  // S136
, 1157  // S137
, 1162  // S138
, 1167  // S139
, 1172  // S140
, 1177  // S141
, 1180  // S142
, 1185  // S143
, 1216  // S144
, 1219  // S145
, 1224  // S146
, 1227  // S147
, 1240  // S148
, 1245  // S149
, 1276  // S150
, 1279  // S151
, 1282  // S152
, 1305  // S153
, 1328  // S154
, 1351  // S155
, 1374  // S156
, 1377  // S157
, 1380  // S158
, 1383  // S159
, 1386  // S160
, 1389  // S161
, 1394  // S162
, 1417  // S163
, 1440  // S164
, 1443  // S165
, 1460  // S166
, 1463  // S167
, 1470  // S168
, 1473  // S169
, 1476  // S170
, 1479  // S171
, 1482  // S172
, 1485  // S173
, 1488  // S174
, 1491  // S175
, 1498  // S176
, 1505  // S177
, 1512  // S178
, 1517  // S179
, 1520  // S180
, 1525  // S181
, 1528  // S182
, 1531  // S183
, 1544  // S184
, 1557  // S185
, 1570  // S186
, 1583  // S187
, 1596  // S188
, 1609  // S189
, 1612  // S190
, 1615  // S191
, 1618  // S192
, 1621  // S193
, 1624  // S194
, 1627  // S195
, 1658  // S196
, 1683  // S197
, 1700  // S198
, 1729  // S199
, 1744  // S200
, 1747  // S201
, 1750  // S202
, 1773  // S203
, 1776  // S204
, 1779  // S205
, 1782  // S206
, 1827  // S207
, 1870  // S208
, 1913  // S209
, 1956  // S210
, 1959  // S211
, 1982  // S212
, 2021  // S213
, 2060  // S214
, 2075  // S215
, 2098  // S216
, 2133  // S217
, 2172  // S218
, 2215  // S219
, 2230  // S220
, 2247  // S221
, 2266  // S222
, 2291  // S223
, 2294  // S224
, 2297  // S225
, 2300  // S226
, 2303  // S227
, 2320  // S228
, 2323  // S229
, 2340  // S230
, 2343  // S231
, 2348  // S232
, 2353  // S233
, 2356  // S234
, 2359  // S235
, 2362  // S236
, 2365  // S237
, 2390  // S238
, 2393  // S239
, 2396  // S240
, 2399  // S241
, 2402  // S242
, 2405  // S243
, 2436  // S244
, 2443  // S245
, 2450  // S246
, 2453  // S247
, 2460  // S248
, 2467  // S249
, 2474  // S250
, 2477  // S251
, 2484  // S252
, 2487  // S253
, 2494  // S254
, 2497  // S255
, 2500  // S256
, 2515  // S257
, 2518  // S258
, 2521  // S259
, 2524  // S260
, 2529  // S261
, 2532  // S262
, 2575  // S263
, 2578  // S264
, 2617  // S265
, 2620  // S266
, 2643  // S267
, 2664  // S268
, 2687  // S269
, 2710  // S270
, 2733  // S271
, 2756  // S272
, 2779  // S273
, 2802  // S274
, 2825  // S275
, 2848  // S276
, 2871  // S277
, 2906  // S278
, 2909  // S279
, 2912  // S280
, 2927  // S281
, 2944  // S282
, 2965  // S283
, 2968  // S284
, 2971  // S285
, 3000  // S286
, 3005  // S287
, 3010  // S288
, 3013  // S289
, 3018  // S290
, 3021  // S291
, 3026  // S292
, 3029  // S293
, 3032  // S294
, 3037  // S295
, 3042  // S296
, 3045  // S297
, 3050  // S298
, 3075  // S299
, 3100  // S300
, 3125  // S301
, 3150  // S302
, 3175  // S303
, 3200  // S304
, 3225  // S305
, 3228  // S306
, 3231  // S307
, 3238  // S308
, 3267  // S309
, 3270  // S310
, 3309  // S311
, 3354  // S312
, 3399  // S313
, 3444  // S314
, 3447  // S315
, 3490  // S316
, 3535  // S317
, 3538  // S318
, 3561  // S319
, 3584  // S320
, 3607  // S321
, 3630  // S322
, 3653  // S323
, 3676  // S324
, 3699  // S325
, 3738  // S326
, 3777  // S327
, 3792  // S328
, 3795  // S329
, 3814  // S330
, 3817  // S331
, 3832  // S332
, 3851  // S333
, 3854  // S334
, 3857  // S335
, 3880  // S336
, 3883  // S337
, 3886  // S338
, 3889  // S339
, 3892  // S340
, 3909  // S341
, 3912  // S342
, 3915  // S343
, 3922  // S344
, 3925  // S345
, 3956  // S346
, 3959  // S347
, 3962  // S348
, 3967  // S349
, 3970  // S350
, 3973  // S351
, 3976  // S352
, 3979  // S353
, 3982  // S354
, 3985  // S355
, 3988  // S356
, 3991  // S357
, 4022  // S358
, 4029  // S359
, 4036  // S360
, 4079  // S361
, 4082  // S362
, 4125  // S363
, 4130  // S364
, 4173  // S365
, 4176  // S366
, 4185  // S367
, 4228  // S368
, 4231  // S369
, 4252  // S370
, 4287  // S371
, 4322  // S372
, 4339  // S373
, 4342  // S374
, 4345  // S375
, 4348  // S376
, 4351  // S377
, 4380  // S378
, 4383  // S379
, 4388  // S380
, 4417  // S381
, 4422  // S382
, 4451  // S383
, 4454  // S384
, 4459  // S385
, 4462  // S386
, 4487  // S387
, 4490  // S388
, 4493  // S389
, 4536  // S390
, 4539  // S391
, 4582  // S392
, 4625  // S393
, 4668  // S394
, 4711  // S395
, 4714  // S396
, 4757  // S397
, 4800  // S398
, 4803  // S399
, 4846  // S400
, 4849  // S401
, 4892  // S402
, 4935  // S403
, 4952  // S404
, 4969  // S405
, 4972  // S406
, 4975  // S407
, 4978  // S408
, 4981  // S409
, 5010  // S410
, 5015  // S411
, 5020  // S412
, 5023  // S413
, 5026  // S414
, 5029  // S415
, 5032  // S416
, 5037  // S417
, 5042  // S418
, 5045  // S419
, 5048  // S420
, 5051  // S421
, 5056  // S422
, 5059  // S423
, 5102  // S424
, 5145  // S425
, 5188  // S426
, 5231  // S427
, 5234  // S428
, 5237  // S429
, 5240  // S430
, 5245  // S431
, 5248  // S432
, 5251  // S433
, 5254  // S434
, 5257  // S435
, 5260  // S436
, 5285  // S437
, 5288  // S438
, 5307  // S439
, 5336  // S440
, 5341  // S441
, 5370  // S442
, 5373  // S443
, 5376  // S444
, 5379  // S445
, 5396  // S446
, 5399  // S447
, 5402  // S448
, 5407  // S449
, 5412  // S450
, 5417  // S451
, 5446  // S452
, 5449  // S453
, 5452  // S454
, 5455  // S455
, 5458  // S456
, 5461  // S457
, 5474  // S458
, 5477  // S459
, 5500  // S460
, 5523  // S461
, 5540  // S462
, 5545  // S463
, 5550  // S464
, 5563  // S465
, 5576  // S466
, 5589  // S467
, 5606  // S468
, 5609  // S469
, 5614  // S470
, 5619  // S471
, 5624  // S472
, 5641  // S473
, 5662  // S474
, 5679  // S475
, 5692  // S476
, 5707  // S477
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [29] = {0, 12,
  3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 23,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 35,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 36,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 37,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 38,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 39,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 40,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 41,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 42,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 43,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 44,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_24 [3] = {33, 46, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_27 [3] = {30, 51, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_30 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 71,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_34 [3] = {86, 80, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_48 [27] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  10, 20,
  26, 21,
  27, 22,
  29, 83,
  32, 24,
  40, 25, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_55 [3] = {64, 89, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_59 [3] = {68, 93, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 98,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 99,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 100,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 101,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 102,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_69 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 103,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_70 [21] = {2, 64,
  11, 65,
  13, 66,
  14, 67,
  15, 68,
  17, 69,
  18, 70,
  39, 104,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_79 [5] = {28, 112,
  88, 113, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_80 [3] = {85, 115, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [3] = {31, 120, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_88 [3] = {64, 123, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_92 [3] = {68, 127, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_108 [3] = {44, 137, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_113 [3] = {87, 141, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_114 [3] = {86, 142, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_116 [3] = {34, 145, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_117 [3] = {41, 147, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_121 [15] = {11, 152,
  13, 153,
  14, 154,
  18, 155,
  38, 156,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_126 [3] = {48, 166, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_130 [3] = {75, 170, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_137 [3] = {45, 177, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_140 [3] = {88, 178, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [3] = {85, 179, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_145 [3] = {36, 182, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_147 [3] = {42, 189, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_148 [3] = {31, 190, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_152 [15] = {11, 152,
  13, 153,
  14, 154,
  18, 155,
  38, 191,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_153 [15] = {11, 152,
  13, 153,
  14, 154,
  18, 155,
  38, 192,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_154 [15] = {11, 152,
  13, 153,
  14, 154,
  18, 155,
  38, 193,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_155 [15] = {11, 152,
  13, 153,
  14, 154,
  18, 155,
  38, 194,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_161 [3] = {49, 201, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_162 [13] = {12, 213,
  19, 214,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [13] = {12, 213,
  19, 219,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [5] = {12, 221,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_167 [3] = {69, 225, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_177 [3] = {43, 232, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_178 [3] = {87, 233, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_180 [3] = {35, 235, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_184 [3] = {42, 238, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_185 [3] = {42, 239, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_186 [3] = {42, 240, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_187 [3] = {42, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_188 [3] = {42, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_197 [5] = {25, 252,
  84, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_199 [3] = {48, 254, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_202 [13] = {12, 213,
  19, 257,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_206 [3] = {55, 262, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_211 [7] = {12, 213,
  22, 264,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_214 [3] = {48, 265, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_215 [3] = {70, 267, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_216 [3] = {71, 274, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_217 [3] = {72, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [3] = {48, 278, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_220 [3] = {51, 280, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_221 [3] = {50, 282, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_227 [5] = {25, 287,
  84, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_229 [5] = {12, 289,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_231 [3] = {44, 291, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_232 [3] = {46, 293, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_237 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 305,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_256 [3] = {48, 309, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_260 [3] = {59, 315, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_266 [11] = {12, 213,
  20, 318,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_268 [9] = {12, 213,
  21, 319,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [9] = {12, 213,
  21, 320,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_270 [9] = {12, 213,
  21, 321,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [9] = {12, 213,
  21, 322,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [9] = {12, 213,
  21, 323,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_273 [9] = {12, 213,
  21, 324,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_275 [7] = {12, 213,
  22, 325,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [7] = {12, 213,
  22, 326,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [3] = {48, 328, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [5] = {12, 329,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_282 [5] = {23, 331,
  73, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_286 [3] = {76, 336, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_287 [3] = {77, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_289 [3] = {62, 341, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [3] = {45, 343, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_294 [3] = {35, 346, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_297 [3] = {65, 349, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_298 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 350,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 351,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 352,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_301 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 353,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_302 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 354,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_303 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 355,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_304 [21] = {1, 298,
  13, 299,
  14, 300,
  15, 301,
  16, 302,
  17, 303,
  18, 304,
  37, 356,
  61, 72,
  63, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_311 [3] = {53, 360, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_312 [3] = {58, 362, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_313 [3] = {60, 364, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_316 [3] = {56, 367, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_318 [3] = {70, 369, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_325 [3] = {72, 370, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_326 [3] = {72, 371, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_329 [3] = {50, 372, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_331 [3] = {48, 374, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_335 [13] = {12, 213,
  19, 376,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_340 [5] = {12, 381,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_343 [3] = {43, 384, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_348 [3] = {65, 387, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_359 [3] = {54, 392, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_366 [3] = {57, 401, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_379 [3] = {78, 407, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_381 [3] = {62, 408, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_403 [5] = {25, 416,
  84, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_404 [5] = {25, 417,
  84, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_410 [3] = {47, 420, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_411 [3] = {66, 422, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_416 [3] = {74, 428, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_417 [3] = {77, 429, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_421 [3] = {67, 435, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_430 [3] = {79, 441, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_440 [3] = {80, 447, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_445 [5] = {25, 449,
  84, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_448 [3] = {47, 452, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_449 [3] = {74, 453, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_450 [3] = {81, 455, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_457 [5] = {24, 462,
  82, 463, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_459 [13] = {12, 213,
  19, 465,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_460 [13] = {12, 213,
  19, 466,
  20, 215,
  21, 216,
  22, 217,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_461 [5] = {12, 467,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_462 [3] = {80, 468, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_464 [3] = {82, 469, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_465 [3] = {82, 470, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_466 [3] = {82, 471, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_467 [3] = {83, 473, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_472 [5] = {12, 474,
  52, 218, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_473 [5] = {23, 475,
  73, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_474 [3] = {83, 476, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_475 [3] = {82, 477, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [478] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, NULL, 
  gSuccessorTable_easyBindings_grammar_24, NULL, NULL, gSuccessorTable_easyBindings_grammar_27, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_30, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_34, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_48, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_55, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_59, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, gSuccessorTable_easyBindings_grammar_69, gSuccessorTable_easyBindings_grammar_70, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_79, 
  gSuccessorTable_easyBindings_grammar_80, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_85, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_88, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_92, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_108, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_113, gSuccessorTable_easyBindings_grammar_114, NULL, 
  gSuccessorTable_easyBindings_grammar_116, gSuccessorTable_easyBindings_grammar_117, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_121, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_126, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_130, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_137, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_140, NULL, gSuccessorTable_easyBindings_grammar_142, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_145, NULL, gSuccessorTable_easyBindings_grammar_147, 
  gSuccessorTable_easyBindings_grammar_148, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_152, gSuccessorTable_easyBindings_grammar_153, gSuccessorTable_easyBindings_grammar_154, gSuccessorTable_easyBindings_grammar_155, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_161, gSuccessorTable_easyBindings_grammar_162, gSuccessorTable_easyBindings_grammar_163, 
  NULL, gSuccessorTable_easyBindings_grammar_165, NULL, gSuccessorTable_easyBindings_grammar_167, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_177, gSuccessorTable_easyBindings_grammar_178, NULL, 
  gSuccessorTable_easyBindings_grammar_180, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_184, gSuccessorTable_easyBindings_grammar_185, gSuccessorTable_easyBindings_grammar_186, gSuccessorTable_easyBindings_grammar_187, 
  gSuccessorTable_easyBindings_grammar_188, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_197, NULL, gSuccessorTable_easyBindings_grammar_199, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_202, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_206, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_211, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_214, gSuccessorTable_easyBindings_grammar_215, 
  gSuccessorTable_easyBindings_grammar_216, gSuccessorTable_easyBindings_grammar_217, NULL, gSuccessorTable_easyBindings_grammar_219, 
  gSuccessorTable_easyBindings_grammar_220, gSuccessorTable_easyBindings_grammar_221, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_227, 
  NULL, gSuccessorTable_easyBindings_grammar_229, NULL, gSuccessorTable_easyBindings_grammar_231, 
  gSuccessorTable_easyBindings_grammar_232, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_237, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_256, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_260, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_266, NULL, 
  gSuccessorTable_easyBindings_grammar_268, gSuccessorTable_easyBindings_grammar_269, gSuccessorTable_easyBindings_grammar_270, gSuccessorTable_easyBindings_grammar_271, 
  gSuccessorTable_easyBindings_grammar_272, gSuccessorTable_easyBindings_grammar_273, NULL, gSuccessorTable_easyBindings_grammar_275, 
  gSuccessorTable_easyBindings_grammar_276, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_280, gSuccessorTable_easyBindings_grammar_281, gSuccessorTable_easyBindings_grammar_282, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_286, gSuccessorTable_easyBindings_grammar_287, 
  NULL, gSuccessorTable_easyBindings_grammar_289, NULL, gSuccessorTable_easyBindings_grammar_291, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_294, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_297, gSuccessorTable_easyBindings_grammar_298, gSuccessorTable_easyBindings_grammar_299, 
  gSuccessorTable_easyBindings_grammar_300, gSuccessorTable_easyBindings_grammar_301, gSuccessorTable_easyBindings_grammar_302, gSuccessorTable_easyBindings_grammar_303, 
  gSuccessorTable_easyBindings_grammar_304, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_311, 
  gSuccessorTable_easyBindings_grammar_312, gSuccessorTable_easyBindings_grammar_313, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_316, NULL, gSuccessorTable_easyBindings_grammar_318, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_325, gSuccessorTable_easyBindings_grammar_326, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_329, NULL, gSuccessorTable_easyBindings_grammar_331, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_335, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_340, NULL, NULL, gSuccessorTable_easyBindings_grammar_343, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_348, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_359, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_366, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_379, 
  NULL, gSuccessorTable_easyBindings_grammar_381, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_403, 
  gSuccessorTable_easyBindings_grammar_404, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_410, gSuccessorTable_easyBindings_grammar_411, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_416, gSuccessorTable_easyBindings_grammar_417, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_421, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_430, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_440, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_445, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_448, gSuccessorTable_easyBindings_grammar_449, gSuccessorTable_easyBindings_grammar_450, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_457, NULL, gSuccessorTable_easyBindings_grammar_459, 
  gSuccessorTable_easyBindings_grammar_460, gSuccessorTable_easyBindings_grammar_461, gSuccessorTable_easyBindings_grammar_462, NULL, 
  gSuccessorTable_easyBindings_grammar_464, gSuccessorTable_easyBindings_grammar_465, gSuccessorTable_easyBindings_grammar_466, gSuccessorTable_easyBindings_grammar_467, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_472, gSuccessorTable_easyBindings_grammar_473, gSuccessorTable_easyBindings_grammar_474, gSuccessorTable_easyBindings_grammar_475, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [218 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
  5, 9,
  6, 7,
  7, 4,
  8, 3,
  9, 7,
  10, 9,
  11, 5,
  12, 1,
  13, 5,
  13, 8,
  14, 9,
  15, 7,
  16, 6,
  17, 6,
  18, 3,
  19, 2,
  20, 2,
  21, 2,
  22, 1,
  22, 2,
  22, 3,
  22, 1,
  23, 1,
  14, 8,
  14, 12,
  24, 1,
  14, 8,
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
  29, 2,
  30, 1,
  30, 1,
  31, 0,
  31, 3,
  32, 0,
  32, 1,
  33, 0,
  33, 1,
  34, 0,
  34, 4,
  35, 0,
  35, 3,
  36, 0,
  36, 2,
  37, 0,
  37, 2,
  37, 2,
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
  39, 0,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  39, 2,
  40, 1,
  40, 0,
  41, 0,
  41, 2,
  42, 0,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  43, 0,
  43, 4,
  44, 1,
  44, 1,
  45, 1,
  45, 1,
  46, 0,
  46, 6,
  47, 0,
  47, 5,
  48, 0,
  48, 3,
  48, 4,
  48, 3,
  48, 3,
  48, 5,
  48, 4,
  49, 0,
  49, 2,
  50, 0,
  50, 3,
  51, 0,
  51, 2,
  52, 4,
  52, 2,
  52, 4,
  52, 3,
  52, 1,
  52, 1,
  52, 1,
  52, 5,
  53, 0,
  53, 2,
  54, 1,
  54, 3,
  54, 1,
  55, 0,
  55, 3,
  56, 0,
  56, 2,
  57, 3,
  57, 3,
  57, 1,
  57, 1,
  58, 0,
  58, 2,
  59, 3,
  59, 2,
  60, 0,
  60, 2,
  60, 4,
  61, 0,
  61, 1,
  62, 0,
  62, 3,
  63, 1,
  63, 1,
  64, 0,
  64, 2,
  65, 0,
  65, 2,
  66, 0,
  66, 2,
  67, 2,
  67, 2,
  68, 0,
  68, 2,
  69, 3,
  69, 4,
  69, 0,
  70, 0,
  70, 3,
  71, 0,
  71, 2,
  71, 2,
  71, 2,
  71, 2,
  71, 2,
  71, 2,
  72, 0,
  72, 3,
  72, 3,
  73, 0,
  73, 6,
  74, 0,
  74, 5,
  75, 1,
  75, 1,
  76, 0,
  76, 2,
  77, 0,
  77, 5,
  78, 1,
  78, 1,
  79, 1,
  79, 3,
  80, 0,
  80, 6,
  81, 0,
  81, 2,
  82, 0,
  82, 3,
  82, 3,
  82, 3,
  82, 5,
  83, 0,
  83, 3,
  84, 1,
  84, 1,
  84, 1,
  84, 2,
  84, 1,
  84, 1,
  84, 1,
  84, 3,
  85, 0,
  85, 3,
  86, 2,
  86, 1,
  86, 3,
  87, 0,
  87, 3,
  88, 2,
  88, 1,
  89, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
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

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, inLexique) ;
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
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                     gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                     gProductionsTable_easyBindings_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                         gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                         gProductionsTable_easyBindings_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_easyBindings_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_easyBindings_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_easyBindings_grammar, gNonTerminalNames_easyBindings_grammar,
                                                       gActionTableIndex_easyBindings_grammar, gSuccessorTable_easyBindings_grammar,
                                                       gProductionsTable_easyBindings_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_easyBindings_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'extern_swift_delegate' non terminal implementation                                   
//                                                                                                                      
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
//                                                                                                                      
//                                  'extern_swift_func' non terminal implementation                                     
//                                                                                                                      
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
//                                                                                                                      
//                                  'class_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'enum_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'entity_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'document_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'preferences_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'graphviz_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'outlet_class_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i9_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'binding_specification' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i10_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'outlet_declaration' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'observable_property' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_observable_5F_property_i12_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'transient_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'controller_declaration' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i15_parse(inLexique) ;
    break ;
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_arrayControllerBindingListAST &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i15_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'simple_stored_declaration' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_simple_5F_stored_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                GALGAS_simpleStoredPropertyList &  parameter_2,
                                GALGAS_stringset &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i16_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'toOne_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i17_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'toMany_relationship' non terminal implementation                                    
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i18_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'action_declaration' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                           'booleanMultipleBindingExpression' non terminal implementation                             
//                                                                                                                      
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
//                                                                                                                      
//                           'booleanMultipleBindingComparison' non terminal implementation                             
//                                                                                                                      
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
//                                                                                                                      
//                              'booleanMultipleBindingTerm' non terminal implementation                                
//                                                                                                                      
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
//                                                                                                                      
//                            'booleanMultipleBindingOperand' non terminal implementation                               
//                                                                                                                      
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
//                                                                                                                      
//                                 'binding_option_list' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                   'column_bindings' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'explicit_value' non terminal implementation                                      
//                                                                                                                      
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
//                                                                                                                      
//                                    'xcode_project' non terminal implementation                                       
//                                                                                                                      
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
//                                                                                                                      
//                                       'main_xib' non terminal implementation                                         
//                                                                                                                      
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
//                                                                                                                      
//                                    'main_xib_line' non terminal implementation                                       
//                                                                                                                      
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
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_0' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_0 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 36 37 38 39 40 41 42 43 44 45 46 47
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 48 49
  return inLexique->nextProductionIndex () - 47 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 50 51
  return inLexique->nextProductionIndex () - 49 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 52 53
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 54 55
  return inLexique->nextProductionIndex () - 53 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 56 57
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 58 59
  return inLexique->nextProductionIndex () - 57 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 60 61
  return inLexique->nextProductionIndex () - 59 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 62 63 64 65 66 67 68 69
  return inLexique->nextProductionIndex () - 61 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 70 71 72 73 74
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 75 76 77 78 79 80 81 82
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 83 84
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 85 86
  return inLexique->nextProductionIndex () - 84 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88 89 90 91 92
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104 105 106 107 108 109
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117 118 119 120 121 122 123
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 126 127 128
  return inLexique->nextProductionIndex () - 125 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 129 130
  return inLexique->nextProductionIndex () - 128 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 131 132
  return inLexique->nextProductionIndex () - 130 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 133 134 135 136
  return inLexique->nextProductionIndex () - 132 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 137 138
  return inLexique->nextProductionIndex () - 136 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 139 140
  return inLexique->nextProductionIndex () - 138 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 141 142 143
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 156 157
  return inLexique->nextProductionIndex () - 155 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 158 159
  return inLexique->nextProductionIndex () - 157 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 160 161 162
  return inLexique->nextProductionIndex () - 159 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 163 164
  return inLexique->nextProductionIndex () - 162 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 165 166 167 168 169 170 171
  return inLexique->nextProductionIndex () - 164 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 172 173 174
  return inLexique->nextProductionIndex () - 171 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 175 176
  return inLexique->nextProductionIndex () - 174 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 177 178
  return inLexique->nextProductionIndex () - 176 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 179 180
  return inLexique->nextProductionIndex () - 178 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 181 182
  return inLexique->nextProductionIndex () - 180 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 183 184
  return inLexique->nextProductionIndex () - 182 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 185 186
  return inLexique->nextProductionIndex () - 184 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 187 188
  return inLexique->nextProductionIndex () - 186 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 189 190
  return inLexique->nextProductionIndex () - 188 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 191 192
  return inLexique->nextProductionIndex () - 190 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_53' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 193 194 195 196 197
  return inLexique->nextProductionIndex () - 192 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_54' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 198 199
  return inLexique->nextProductionIndex () - 197 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_55' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 200 201 202 203 204 205 206 207
  return inLexique->nextProductionIndex () - 199 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_56' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 208 209
  return inLexique->nextProductionIndex () - 207 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_57' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 210 211 212
  return inLexique->nextProductionIndex () - 209 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_58' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 213 214
  return inLexique->nextProductionIndex () - 212 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_59' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 215 216
  return inLexique->nextProductionIndex () - 214 ;
}

//---------------------------------------------------------------------------------------------------------------------*

